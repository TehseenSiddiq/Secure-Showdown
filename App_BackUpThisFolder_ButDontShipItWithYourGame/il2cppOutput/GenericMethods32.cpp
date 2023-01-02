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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_Quaternion
struct ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997;
// ES3Types.ES3Type_RawImage
struct ES3Type_RawImage_t08E2AC4AEC32A10C97B2F93E81571D405D3CFBDA;
// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562;
// ES3Types.ES3Type_RectTransform
struct ES3Type_RectTransform_t8F9381C2797042EC906576429208E10AC423B2F5;
// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C;
// ES3Types.ES3Type_Rigidbody
struct ES3Type_Rigidbody_t0A0E5EE14BD8F036C3EB9D8F5506976DE91BF1F4;
// ES3Types.ES3Type_RotationBySpeedModule
struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54;
// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC00500118DA98B6C014B8C1B86E718F29753C1;
IL2CPP_EXTERN_C String_t* _stringLiteral14D90B05F1E6A953500F5EA60AB1C8785F81FDC9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F;
IL2CPP_EXTERN_C String_t* _stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583;
IL2CPP_EXTERN_C String_t* _stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3D90276AC22457A8BF64ADE21D38391EA08E282A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81;
IL2CPP_EXTERN_C String_t* _stringLiteral53D3413057D7E52F44470A335C590748745352B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40;
IL2CPP_EXTERN_C String_t* _stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53;
IL2CPP_EXTERN_C String_t* _stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE6991311592B778BB540656302FE479334E0C1;
IL2CPP_EXTERN_C String_t* _stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084;
IL2CPP_EXTERN_C String_t* _stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B;
IL2CPP_EXTERN_C String_t* _stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F;
IL2CPP_EXTERN_C String_t* _stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8D07732265032EC34859337960AF5C34A24B362C;
IL2CPP_EXTERN_C String_t* _stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F;
IL2CPP_EXTERN_C String_t* _stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02;
IL2CPP_EXTERN_C String_t* _stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70;
IL2CPP_EXTERN_C String_t* _stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57;
IL2CPP_EXTERN_C String_t* _stringLiteralB83486754DA306661053104333C0D143744831CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D2CD4FCE3637EFAB02ED989C6D1CD37B7FDC2F;
IL2CPP_EXTERN_C String_t* _stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0;
IL2CPP_EXTERN_C String_t* _stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDDFAED6662866BB4093459B94D0D0AFC4756ED6;
IL2CPP_EXTERN_C String_t* _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3;
IL2CPP_EXTERN_C String_t* _stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_m86363017CB6AD67B56A56A563705585EFEC42AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m5092736797804666D10CE7930062E6CEEF9393DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8_m73F51B57F02EAF4411CA7269B8B36FFB61A710E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m332F1D7C67D7CE74E61E1777A71E3558F330B14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m7FEA24B84D907CF156B4011CB6208112FA4AFD52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0C75FE9D5A84E8371C7CF6D511E94934C58B902C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_mD8D65B6F5AC5BAFD5E9E7A6E8F3D2B71B8DA4C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mCC93F9BD050549BB2883E711EB524801C0300ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_mF08E67636D4E97D742E9412787C51700406E6523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m1406E8D65C54ECE030643A14063F0B52931655BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_m83ABC1A717E6A86094AB2D5FD24AC3D8A740A5B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mE8E128195B30E2ED0C35C51A2E7D40BDE2B1370D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9F889ED5564823E13740D0525A6AA7F670A41DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var;


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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
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

// ES3Types.ES3Type_Quaternion
struct ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Quaternion::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Rect::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_RotationBySpeedModule
struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RotationBySpeedModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RotationOverLifetimeModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// ES3Types.ES3Type_Texture
struct ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Texture::Instance
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

// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
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

// UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

struct ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RenderTexture::Instance
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_Material
struct ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

struct ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Material::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_RawImage
struct ES3Type_RawImage_t08E2AC4AEC32A10C97B2F93E81571D405D3CFBDA  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_RawImage_t08E2AC4AEC32A10C97B2F93E81571D405D3CFBDA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RawImage::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_RectTransform
struct ES3Type_RectTransform_t8F9381C2797042EC906576429208E10AC423B2F5  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_RectTransform_t8F9381C2797042EC906576429208E10AC423B2F5_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RectTransform::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Rigidbody
struct ES3Type_Rigidbody_t0A0E5EE14BD8F036C3EB9D8F5506976DE91BF1F4  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_Rigidbody_t0A0E5EE14BD8F036C3EB9D8F5506976DE91BF1F4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Rigidbody::Instance
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<UnityEngine.RenderTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, const RuntimeMethod* method) ;

// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3 (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_set_onCullStateChanged_m4284F81D75D8F8293FE2FB5FC236FDF63579BBF7 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_set_maskable_mC2486FDC0636C83AC3BDBFF11E6E85CC27F15689 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Object ES3Reader::SetPrivateProperty(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_SetPrivateProperty_m4BB53D0FDFE00E7831F6E38076266682918C491A (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, String_t* ___name0, RuntimeObject* ___value1, RuntimeObject* ___objectContainingProperty2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_set_useGUILayout_m56F0C62F4B6889D7472074ECCB56EBA462285134 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hierarchyCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hierarchyCapacity_mCCCBE056D948B5A918689637159F370D7EF5661E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<UnityEngine.RenderTextureDescriptor>()
inline RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, const RuntimeMethod* method)
{
	return ((  RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D_gshared)(__this, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_memorylessMode(UnityEngine.RenderTextureMemoryless)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_memorylessMode_m4F368B9C911EB033DFD44BDB2EF67CD451D74CED (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_format_m6E5F83C36DA7EB9AD947AE3D6AFD95952E67EEFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_descriptor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_masterTextureLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_masterTextureLimit_mF1481DD3E8A8D89E765D536E4B00664358BD9C3B (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisotropicFiltering(UnityEngine.AnisotropicFiltering)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisotropicFiltering_mA22A3AD8E4848C073D58B32ACA9573DCBA22A616 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeW(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_vrUsage_mAA13206DFE05C0A869A160CB1C2AC9D1C099D203 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_graphicsFormat_m4CFDFF4CEC81B5350AE94D466585C8186E06B733 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_stencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_stencilFormat_m92E00333CD5EBDC5B73F43521B6E8132C1B087AE (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_bindTextureMS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_bindTextureMS_m06A8FE127AEE42767530955453DBB9C55320208E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useDynamicScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useDynamicScale_m0B6F123BB7FF0BA01515163A0EFA9B1D4375B883 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_streamingTextureForceLoadAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureForceLoadAll_m49BBAA185AC290FF1B92627CA6C7A0F1C7D243D6 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_streamingTextureDiscardUnusedMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureDiscardUnusedMips_mDB2B44B960BB3EEDC7DF7F013619F33FF4BE97EA (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_allowThreadedTextureCreation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_allowThreadedTextureCreation_m20F9D0702196CB1762B85F495863F54272886F4F (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxDepenetrationVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxDepenetrationVelocity_mEE787E12E070438903558B0C79DDD98E3A5CFFD7 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_inertiaTensorRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensorRotation_m732666F7ACD440F5472A04AAEF1545D12C63450C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_inertiaTensor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensor_m68E7B9842A8125237E1DEE5251840DF2D4DBB8C9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_sleepThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_sleepThreshold_m5180E11C2D6A401352863FB66812C683C663B220 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Quaternion::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m49A831C519E6E35ADDA72002B1907003B1276043_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFFCEE6E345DB3BFF3D3B8CE4D87455770A2EF721_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m392CD7C93BA9908DAC2E3C62C78AA3B3BD66777F_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mD77A81E0E4882B0441FBB8B288991E352D04235C_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3A651097D3B1144B53000126DABB198F661D0C75_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisRuntimeObject_m903D312C78A5392F8C4BAD02F8DFCCF2C2B95DE8_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4BF088278EC3EFF6C827B42F9EBDF64A0EE6898C_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mDD6BF309EB6647EF2FAD803377FC9546183A1DCA_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m03FA4A3276181D69D2B471FF9DD4EF636C20EBD2_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2ED3FE404CC0F5D07659AF55236664774ED1DAA2_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m429DA2A35EBB6D6436D4F8E2EEDE1DFF6527C106_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3CD6C87ED0332873F47591ED9BBAFCE33ADDE4BC_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEFC4F8E9D25DB746714DA58BD386F8A3D639E3E3_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m8D706E90DB9DD717CD6A1A4F3B82E005735A6D1A_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Quaternion::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Quaternion_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mDD865247C6D31C5C9CBA1A90C6426DD31E30F69E_gshared (ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Quaternion(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance),
		//                         reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12;
		RuntimeObject* L_14 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Void ES3Types.ES3Type_RawImage::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RawImage_ReadComponent_TisRuntimeObject_mF46C60DD7B3AADC9C7746F303748ECB0F7B775D5_gshared (ES3Type_RawImage_t08E2AC4AEC32A10C97B2F93E81571D405D3CFBDA* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8_m73F51B57F02EAF4411CA7269B8B36FFB61A710E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m7FEA24B84D907CF156B4011CB6208112FA4AFD52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mE8E128195B30E2ED0C35C51A2E7D40BDE2B1370D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CC00500118DA98B6C014B8C1B86E718F29753C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D90B05F1E6A953500F5EA60AB1C8785F81FDC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D90276AC22457A8BF64ADE21D38391EA08E282A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB83486754DA306661053104333C0D143744831CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D2CD4FCE3637EFAB02ED989C6D1CD37B7FDC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDDFAED6662866BB4093459B94D0D0AFC4756ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.UI.RawImage)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179*)CastclassClass((RuntimeObject*)L_0, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_il2cpp_TypeInfo_var));
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

FINALLY_02d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_02e6;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_02e6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02c5_1;
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
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)1031692888)))))
				{
					goto IL_0090_1;
				}
			}
			{
				uint32_t L_14 = V_5;
				if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)465631631)))))
				{
					goto IL_0066_1;
				}
			}
			{
				uint32_t L_15 = V_5;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_01aa_1;
				}
			}
			{
				goto IL_0055_1;
			}

IL_0055_1:
			{
				uint32_t L_16 = V_5;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)465631631))))
				{
					goto IL_0117_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0066_1:
			{
				uint32_t L_17 = V_5;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)886554752))))
				{
					goto IL_016b_1;
				}
			}
			{
				goto IL_0074_1;
			}

IL_0074_1:
			{
				uint32_t L_18 = V_5;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)1013213428))))
				{
					goto IL_00ed_1;
				}
			}
			{
				goto IL_007f_1;
			}

IL_007f_1:
			{
				uint32_t L_19 = V_5;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)1031692888))))
				{
					goto IL_0141_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0090_1:
			{
				uint32_t L_20 = V_5;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1784211997)))))
				{
					goto IL_00c3_1;
				}
			}
			{
				uint32_t L_21 = V_5;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)1570416393))))
				{
					goto IL_0156_1;
				}
			}
			{
				goto IL_00a7_1;
			}

IL_00a7_1:
			{
				uint32_t L_22 = V_5;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1753367520))))
				{
					goto IL_0102_1;
				}
			}
			{
				goto IL_00b2_1;
			}

IL_00b2_1:
			{
				uint32_t L_23 = V_5;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1784211997))))
				{
					goto IL_0195_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_00c3_1:
			{
				uint32_t L_24 = V_5;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)-2140593255))))
				{
					goto IL_012c_1;
				}
			}
			{
				goto IL_00ce_1;
			}

IL_00ce_1:
			{
				uint32_t L_25 = V_5;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)-756756384))))
				{
					goto IL_0180_1;
				}
			}
			{
				goto IL_00dc_1;
			}

IL_00dc_1:
			{
				uint32_t L_26 = V_5;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_01bf_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_00ed_1:
			{
				String_t* L_27 = V_3;
				bool L_28;
				L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50, NULL);
				if (L_28)
				{
					goto IL_01d4_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0102_1:
			{
				String_t* L_29 = V_3;
				bool L_30;
				L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralB83486754DA306661053104333C0D143744831CC, NULL);
				if (L_30)
				{
					goto IL_01eb_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0117_1:
			{
				String_t* L_31 = V_3;
				bool L_32;
				L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral14D90B05F1E6A953500F5EA60AB1C8785F81FDC9, NULL);
				if (L_32)
				{
					goto IL_0202_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_012c_1:
			{
				String_t* L_33 = V_3;
				bool L_34;
				L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteralC2D2CD4FCE3637EFAB02ED989C6D1CD37B7FDC2F, NULL);
				if (L_34)
				{
					goto IL_0214_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0141_1:
			{
				String_t* L_35 = V_3;
				bool L_36;
				L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
				if (L_36)
				{
					goto IL_022b_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0156_1:
			{
				String_t* L_37 = V_3;
				bool L_38;
				L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral0CC00500118DA98B6C014B8C1B86E718F29753C1, NULL);
				if (L_38)
				{
					goto IL_0242_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_016b_1:
			{
				String_t* L_39 = V_3;
				bool L_40;
				L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral3D90276AC22457A8BF64ADE21D38391EA08E282A, NULL);
				if (L_40)
				{
					goto IL_0256_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0180_1:
			{
				String_t* L_41 = V_3;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_42)
				{
					goto IL_0270_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_0195_1:
			{
				String_t* L_43 = V_3;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteralDDDFAED6662866BB4093459B94D0D0AFC4756ED6, NULL);
				if (L_44)
				{
					goto IL_0284_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_01aa_1:
			{
				String_t* L_45 = V_3;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_46)
				{
					goto IL_0298_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_01bf_1:
			{
				String_t* L_47 = V_3;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_48)
				{
					goto IL_02ac_1;
				}
			}
			{
				goto IL_02bb_1;
			}

IL_01d4_1:
			{
				// instance.texture = reader.Read<UnityEngine.Texture>(ES3Type_Texture.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_49 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_50);
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52;
				L_52 = GenericVirtualFuncInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mE8E128195B30E2ED0C35C51A2E7D40BDE2B1370D_RuntimeMethod_var, L_50, L_51);
				NullCheck(L_49);
				RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_49, L_52, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_01eb_1:
			{
				// instance.uvRect = reader.Read<UnityEngine.Rect>(ES3Type_Rect.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_53 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_54);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_56;
				L_56 = GenericVirtualFuncInvoker1< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var, L_54, L_55);
				NullCheck(L_53);
				RawImage_set_uvRect_m9DF6BBBC6AC46F7F3290A220ED6F076CAB4BC52F(L_53, L_56, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_0202_1:
			{
				// instance.onCullStateChanged = reader.Read<UnityEngine.UI.MaskableGraphic.CullStateChangedEvent>();
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_57 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
				NullCheck(L_58);
				CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* L_59;
				L_59 = GenericVirtualFuncInvoker0< CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* >::Invoke(ES3Reader_Read_TisCullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8_m73F51B57F02EAF4411CA7269B8B36FFB61A710E9_RuntimeMethod_var, L_58);
				NullCheck((MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E*)L_57);
				MaskableGraphic_set_onCullStateChanged_m4284F81D75D8F8293FE2FB5FC236FDF63579BBF7((MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E*)L_57, L_59, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_0214_1:
			{
				// instance.maskable = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_60 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_61);
				bool L_63;
				L_63 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_61, L_62);
				NullCheck((MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E*)L_60);
				MaskableGraphic_set_maskable_mC2486FDC0636C83AC3BDBFF11E6E85CC27F15689((MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E*)L_60, L_63, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_022b_1:
			{
				// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_64 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_65 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_66 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_65);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
				L_67 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_65, L_66);
				NullCheck((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_64);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_64, L_67);
				// break;
				goto IL_02c4_1;
			}

IL_0242_1:
			{
				// instance.raycastTarget = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_68 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_69);
				bool L_71;
				L_71 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_69, L_70);
				NullCheck((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_68);
				VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_68, L_71);
				// break;
				goto IL_02c4_1;
			}

IL_0256_1:
			{
				// reader.SetPrivateProperty("useLegacyMeshGeneration", reader.Read<System.Boolean>(), instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
				NullCheck(L_73);
				bool L_74;
				L_74 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m77227FA072C22A6F641058C12C51A665507C6B98_RuntimeMethod_var, L_73);
				bool L_75 = L_74;
				RuntimeObject* L_76 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_75);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_77 = V_0;
				NullCheck(L_72);
				RuntimeObject* L_78;
				L_78 = ES3Reader_SetPrivateProperty_m4BB53D0FDFE00E7831F6E38076266682918C491A(L_72, _stringLiteral3D90276AC22457A8BF64ADE21D38391EA08E282A, L_76, (RuntimeObject*)L_77, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_0270_1:
			{
				// instance.material = reader.Read<UnityEngine.Material>(ES3Type_Material.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_79 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Material_t60AA0029AE3738375B427D1D6C5004D0B4728BC6_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_80);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
				L_82 = GenericVirtualFuncInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m7FEA24B84D907CF156B4011CB6208112FA4AFD52_RuntimeMethod_var, L_80, L_81);
				NullCheck((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_79);
				VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)L_79, L_82);
				// break;
				goto IL_02c4_1;
			}

IL_0284_1:
			{
				// instance.useGUILayout = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_83 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_84 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_85 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_84);
				bool L_86;
				L_86 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_84, L_85);
				NullCheck((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)L_83);
				MonoBehaviour_set_useGUILayout_m56F0C62F4B6889D7472074ECCB56EBA462285134((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)L_83, L_86, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_0298_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_87 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_88 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_89 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_88);
				bool L_90;
				L_90 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_88, L_89);
				NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_87);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_87, L_90, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_02ac_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_91 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
				NullCheck(L_92);
				int32_t L_93;
				L_93 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var, L_92);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_91);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_91, L_93, NULL);
				// break;
				goto IL_02c4_1;
			}

IL_02bb_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
				NullCheck(L_94);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_94);
				// break;
				goto IL_02c4_1;
			}

IL_02c4_1:
			{
			}

IL_02c5_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_95 = V_1;
				NullCheck(L_95);
				bool L_96;
				L_96 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_95);
				if (L_96)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_02e7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02e7:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m59751A64C52446030E01D78A151A5C46230E1D0B_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m82C8F51A31E36A8CC4B65042B49BAA2CF7B0F15B_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8B50FFD7718A8C735212035E96F222313206009A_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCB7C9266A56604C9EDFEF110F7E35508EEFF1797_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mDE4CBAB1A8FCB763D29CAF41D8074DBA5EE00420_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57EF3F9D24D75A609C64CBA9735F1DBE982B6376_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m9F3CE30CCF69E19F50AE9646FA0A6E0DA5A1D16A_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mCC83C8350011C42F067960F8EAEC150F8E35C3F5_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mDD3112C971A5DAB6DBA546AACB3A83EFDEAB238C_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m7C58D1367BCBD3B6B41DADC789964328ADD2AD96_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRuntimeObject_m3F0CDCD00B1813270325ECE7F20626660C152A3C_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mEFC7D688BD964B9F946E0E14DCC342EB0A429922_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m7811D12FAE98CB40318755DB0CC7B788E015F4B9_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m1660B3DD76426D22510EEC6F3178F954162323FC_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBFA8F25E9D9E00021EE2B435C0090131B7029E60_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m150995FF7D01CCD78DCF1B287E7D4B7564B40742_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9716E65AAFC8568857DE07B90E4389D48355983B_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D784C565D54BE4FBF9131A5838C8697EB80E213_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mD53441C8D1356FCC292BBBE7FAD51A8360F2DA53_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mF856609D847F350FE4DCB62A3B3A5614329F3DDB_gshared (ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_7 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m61C4943658D8B3FDA7FF458940ACA56A727031B3_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		V_0 = L_14;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Void ES3Types.ES3Type_RectTransform::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RectTransform_ReadComponent_TisRuntimeObject_m0731F5859836E9F298950A3F7FE02E11EB00105A_gshared (ES3Type_RectTransform_t8F9381C2797042EC906576429208E10AC423B2F5* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	uint32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	{
		// if (obj.GetType() == typeof(UnityEngine.Transform))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// obj = ((Transform)obj).gameObject.AddComponent<RectTransform>();
		RuntimeObject* L_6 = ___obj1;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_7, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		___obj1 = (RuntimeObject*)L_8;
	}

IL_002c:
	{
		// var instance = (UnityEngine.RectTransform)obj;
		RuntimeObject* L_9 = ___obj1;
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_9, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_10 = ___reader0;
		NullCheck(L_10);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_11;
		L_11 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_11, NULL);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0388:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_2;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_14 = V_7;
					if (!L_14)
					{
						goto IL_039c;
					}
				}
				{
					RuntimeObject* L_15 = V_7;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_039c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_037b_1;
			}

IL_0045_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				V_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var));
				// switch(propertyName)
				String_t* L_18 = V_3;
				V_5 = L_18;
				String_t* L_19 = V_5;
				V_4 = L_19;
				String_t* L_20 = V_4;
				uint32_t L_21;
				L_21 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_20, NULL);
				V_6 = L_21;
				uint32_t L_22 = V_6;
				if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-883186270)))))
				{
					goto IL_00ce_1;
				}
			}
			{
				uint32_t L_23 = V_6;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)1458260364)))))
				{
					goto IL_00a1_1;
				}
			}
			{
				uint32_t L_24 = V_6;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)49430524))))
				{
					goto IL_01c6_1;
				}
			}
			{
				goto IL_0082_1;
			}

IL_0082_1:
			{
				uint32_t L_25 = V_6;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)583395338))))
				{
					goto IL_0208_1;
				}
			}
			{
				goto IL_0090_1;
			}

IL_0090_1:
			{
				uint32_t L_26 = V_6;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1458260364))))
				{
					goto IL_0234_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_00a1_1:
			{
				uint32_t L_27 = V_6;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)-1363083094))))
				{
					goto IL_0184_1;
				}
			}
			{
				goto IL_00af_1;
			}

IL_00af_1:
			{
				uint32_t L_28 = V_6;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-1171259574))))
				{
					goto IL_016e_1;
				}
			}
			{
				goto IL_00bd_1;
			}

IL_00bd_1:
			{
				uint32_t L_29 = V_6;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-883186270))))
				{
					goto IL_0158_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_00ce_1:
			{
				uint32_t L_30 = V_6;
				if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)-537486629)))))
				{
					goto IL_0101_1;
				}
			}
			{
				uint32_t L_31 = V_6;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-716690008))))
				{
					goto IL_0142_1;
				}
			}
			{
				goto IL_00e2_1;
			}

IL_00e2_1:
			{
				uint32_t L_32 = V_6;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-567617682))))
				{
					goto IL_01f2_1;
				}
			}
			{
				goto IL_00f0_1;
			}

IL_00f0_1:
			{
				uint32_t L_33 = V_6;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-537486629))))
				{
					goto IL_01dc_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0101_1:
			{
				uint32_t L_34 = V_6;
				if ((!(((uint32_t)L_34) <= ((uint32_t)((int32_t)-350400524)))))
				{
					goto IL_0129_1;
				}
			}
			{
				uint32_t L_35 = V_6;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-355599107))))
				{
					goto IL_021e_1;
				}
			}
			{
				goto IL_0118_1;
			}

IL_0118_1:
			{
				uint32_t L_36 = V_6;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_024a_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0129_1:
			{
				uint32_t L_37 = V_6;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-251183522))))
				{
					goto IL_01b0_1;
				}
			}
			{
				goto IL_0134_1;
			}

IL_0134_1:
			{
				uint32_t L_38 = V_6;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-68135657))))
				{
					goto IL_019a_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0142_1:
			{
				String_t* L_39 = V_4;
				bool L_40;
				L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6, NULL);
				if (L_40)
				{
					goto IL_0260_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0158_1:
			{
				String_t* L_41 = V_4;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F, NULL);
				if (L_42)
				{
					goto IL_0277_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_016e_1:
			{
				String_t* L_43 = V_4;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F, NULL);
				if (L_44)
				{
					goto IL_028e_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0184_1:
			{
				String_t* L_45 = V_4;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02, NULL);
				if (L_46)
				{
					goto IL_02a5_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_019a_1:
			{
				String_t* L_47 = V_4;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F, NULL);
				if (L_48)
				{
					goto IL_02bc_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_01b0_1:
			{
				String_t* L_49 = V_4;
				bool L_50;
				L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA, NULL);
				if (L_50)
				{
					goto IL_02d3_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_01c6_1:
			{
				String_t* L_51 = V_4;
				bool L_52;
				L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F, NULL);
				if (L_52)
				{
					goto IL_02ea_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_01dc_1:
			{
				String_t* L_53 = V_4;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
				if (L_54)
				{
					goto IL_02fe_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_01f2_1:
			{
				String_t* L_55 = V_4;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, NULL);
				if (L_56)
				{
					goto IL_0312_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0208_1:
			{
				String_t* L_57 = V_4;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, NULL);
				if (L_58)
				{
					goto IL_0326_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_021e_1:
			{
				String_t* L_59 = V_4;
				bool L_60;
				L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, NULL);
				if (L_60)
				{
					goto IL_033a_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0234_1:
			{
				String_t* L_61 = V_4;
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167, NULL);
				if (L_62)
				{
					goto IL_034e_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_024a_1:
			{
				String_t* L_63 = V_4;
				bool L_64;
				L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_64)
				{
					goto IL_0362_1;
				}
			}
			{
				goto IL_0371_1;
			}

IL_0260_1:
			{
				// instance.anchorMin = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_66);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
				L_68 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_66, L_67);
				NullCheck(L_65);
				RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_65, L_68, NULL);
				// break;
				goto IL_037a_1;
			}

IL_0277_1:
			{
				// instance.anchorMax = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_69 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_70);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
				L_72 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_70, L_71);
				NullCheck(L_69);
				RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_69, L_72, NULL);
				// break;
				goto IL_037a_1;
			}

IL_028e_1:
			{
				// instance.anchoredPosition = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_74);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
				L_76 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_74, L_75);
				NullCheck(L_73);
				RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_73, L_76, NULL);
				// break;
				goto IL_037a_1;
			}

IL_02a5_1:
			{
				// instance.sizeDelta = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_77 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_79 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_78);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
				L_80 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_78, L_79);
				NullCheck(L_77);
				RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_77, L_80, NULL);
				// break;
				goto IL_037a_1;
			}

IL_02bc_1:
			{
				// instance.pivot = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_81 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_82);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
				L_84 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_82, L_83);
				NullCheck(L_81);
				RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_81, L_84, NULL);
				// break;
				goto IL_037a_1;
			}

IL_02d3_1:
			{
				// instance.offsetMin = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_85 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_86);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
				L_88 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_86, L_87);
				NullCheck(L_85);
				RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_85, L_88, NULL);
				// break;
				goto IL_037a_1;
			}

IL_02ea_1:
			{
				// instance.offsetMax = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_89 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_90 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_91 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_90);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
				L_92 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_90, L_91);
				NullCheck(L_89);
				RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_89, L_92, NULL);
				// break;
				goto IL_037a_1;
			}

IL_02fe_1:
			{
				// instance.localPosition = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_93 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_94);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
				L_96 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_94, L_95);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_93);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_93, L_96, NULL);
				// break;
				goto IL_037a_1;
			}

IL_0312_1:
			{
				// instance.localRotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_97 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_99 = ((ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_98);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
				L_100 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var, L_98, L_99);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_97);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_97, L_100, NULL);
				// break;
				goto IL_037a_1;
			}

IL_0326_1:
			{
				// instance.localScale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_101 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_102);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
				L_104 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_102, L_103);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_101);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_101, L_104, NULL);
				// break;
				goto IL_037a_1;
			}

IL_033a_1:
			{
				// instance.SetParent(reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance));
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_105 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_106 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_107 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_106);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
				L_108 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_106, L_107);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_105);
				Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_105, L_108, NULL);
				// break;
				goto IL_037a_1;
			}

IL_034e_1:
			{
				// instance.hierarchyCapacity = reader.Read<System.Int32>(ES3Type_int.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_109 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_110 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_111 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_110);
				int32_t L_112;
				L_112 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_110, L_111);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_109);
				Transform_set_hierarchyCapacity_mCCCBE056D948B5A918689637159F370D7EF5661E((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_109, L_112, NULL);
				// break;
				goto IL_037a_1;
			}

IL_0362_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_113 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_114 = ___reader0;
				NullCheck(L_114);
				int32_t L_115;
				L_115 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var, L_114);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_113);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_113, L_115, NULL);
				// break;
				goto IL_037a_1;
			}

IL_0371_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_116 = ___reader0;
				NullCheck(L_116);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_116);
				// break;
				goto IL_037a_1;
			}

IL_037a_1:
			{
			}

IL_037b_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_117 = V_2;
				NullCheck(L_117);
				bool L_118;
				L_118 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_117);
				if (L_118)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_039d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_039d:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RenderTexture::ReadObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RenderTexture_ReadObject_TisRuntimeObject_m4ECDE9E4C0216AFFF330373F6F1C729CE71E8D13_gshared (ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var descriptor = reader.ReadProperty<RenderTextureDescriptor>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		NullCheck(L_0);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_1;
		L_1 = ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D(L_0, ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE919696B42F01D68AEC1EF60F9AA75A86A126D5D_RuntimeMethod_var);
		V_0 = L_1;
		// var instance = new UnityEngine.RenderTexture(descriptor);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_2 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3(L_3, L_2, NULL);
		V_1 = L_3;
		// ReadObject<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_4 = ___reader0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_1;
		NullCheck((ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6*)__this, L_4, (RuntimeObject*)L_5);
		// return instance;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_1;
		V_2 = (RuntimeObject*)L_6;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisRuntimeObject_mFB16B5F0A79A5099ABFF154A2965D2FCE9D00ACB_gshared (ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_m86363017CB6AD67B56A56A563705585EFEC42AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m332F1D7C67D7CE74E61E1777A71E3558F330B14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0C75FE9D5A84E8371C7CF6D511E94934C58B902C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_mD8D65B6F5AC5BAFD5E9E7A6E8F3D2B71B8DA4C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mCC93F9BD050549BB2883E711EB524801C0300ADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_m83ABC1A717E6A86094AB2D5FD24AC3D8A740A5B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9F889ED5564823E13740D0525A6AA7F670A41DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
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

FINALLY_07a5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_07b9;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_07b9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0798_1;
			}

IL_001a_1:
			{
				// foreach (string propertyName in reader.Properties)
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
				uint32_t L_12;
				L_12 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_11, NULL);
				V_5 = L_12;
				uint32_t L_13 = V_5;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)1508062721)))))
				{
					goto IL_015e_1;
				}
			}
			{
				uint32_t L_14 = V_5;
				if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)698754697)))))
				{
					goto IL_00c7_1;
				}
			}
			{
				uint32_t L_15 = V_5;
				if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)472844700)))))
				{
					goto IL_0080_1;
				}
			}
			{
				uint32_t L_16 = V_5;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)87590155))))
				{
					goto IL_048d_1;
				}
			}
			{
				goto IL_0061_1;
			}

IL_0061_1:
			{
				uint32_t L_17 = V_5;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)301255720))))
				{
					goto IL_0328_1;
				}
			}
			{
				goto IL_006f_1;
			}

IL_006f_1:
			{
				uint32_t L_18 = V_5;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)472844700))))
				{
					goto IL_02d4_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0080_1:
			{
				uint32_t L_19 = V_5;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)549791583)))))
				{
					goto IL_00a8_1;
				}
			}
			{
				uint32_t L_20 = V_5;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)533013964))))
				{
					goto IL_03fa_1;
				}
			}
			{
				goto IL_0097_1;
			}

IL_0097_1:
			{
				uint32_t L_21 = V_5;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)549791583))))
				{
					goto IL_040f_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_00a8_1:
			{
				uint32_t L_22 = V_5;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)583346821))))
				{
					goto IL_03e5_1;
				}
			}
			{
				goto IL_00b6_1;
			}

IL_00b6_1:
			{
				uint32_t L_23 = V_5;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)698754697))))
				{
					goto IL_033d_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_00c7_1:
			{
				uint32_t L_24 = V_5;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1235622516)))))
				{
					goto IL_0117_1;
				}
			}
			{
				uint32_t L_25 = V_5;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)740612720)))))
				{
					goto IL_00f8_1;
				}
			}
			{
				uint32_t L_26 = V_5;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)705796271))))
				{
					goto IL_0367_1;
				}
			}
			{
				goto IL_00e7_1;
			}

IL_00e7_1:
			{
				uint32_t L_27 = V_5;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)740612720))))
				{
					goto IL_0424_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_00f8_1:
			{
				uint32_t L_28 = V_5;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)1059843136))))
				{
					goto IL_0391_1;
				}
			}
			{
				goto IL_0106_1;
			}

IL_0106_1:
			{
				uint32_t L_29 = V_5;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1235622516))))
				{
					goto IL_03bb_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0117_1:
			{
				uint32_t L_30 = V_5;
				if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)1320492961)))))
				{
					goto IL_013f_1;
				}
			}
			{
				uint32_t L_31 = V_5;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)1310955452))))
				{
					goto IL_04e1_1;
				}
			}
			{
				goto IL_012e_1;
			}

IL_012e_1:
			{
				uint32_t L_32 = V_5;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)1320492961))))
				{
					goto IL_04cc_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_013f_1:
			{
				uint32_t L_33 = V_5;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)1458352709))))
				{
					goto IL_04b7_1;
				}
			}
			{
				goto IL_014d_1;
			}

IL_014d_1:
			{
				uint32_t L_34 = V_5;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)1508062721))))
				{
					goto IL_04f6_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_015e_1:
			{
				uint32_t L_35 = V_5;
				if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)-1444332543)))))
				{
					goto IL_0201_1;
				}
			}
			{
				uint32_t L_36 = V_5;
				if ((!(((uint32_t)L_36) <= ((uint32_t)((int32_t)2129631044)))))
				{
					goto IL_01ba_1;
				}
			}
			{
				uint32_t L_37 = V_5;
				if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)1640355324)))))
				{
					goto IL_019b_1;
				}
			}
			{
				uint32_t L_38 = V_5;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)1560124071))))
				{
					goto IL_050b_1;
				}
			}
			{
				goto IL_018a_1;
			}

IL_018a_1:
			{
				uint32_t L_39 = V_5;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)1640355324))))
				{
					goto IL_04a2_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_019b_1:
			{
				uint32_t L_40 = V_5;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)1728801507))))
				{
					goto IL_02bf_1;
				}
			}
			{
				goto IL_01a9_1;
			}

IL_01a9_1:
			{
				uint32_t L_41 = V_5;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)2129631044))))
				{
					goto IL_044e_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_01ba_1:
			{
				uint32_t L_42 = V_5;
				if ((!(((uint32_t)L_42) <= ((uint32_t)((int32_t)-1786286561)))))
				{
					goto IL_01e2_1;
				}
			}
			{
				uint32_t L_43 = V_5;
				if ((((int32_t)L_43) == ((int32_t)((int32_t)-1925595674))))
				{
					goto IL_0463_1;
				}
			}
			{
				goto IL_01d1_1;
			}

IL_01d1_1:
			{
				uint32_t L_44 = V_5;
				if ((((int32_t)L_44) == ((int32_t)((int32_t)-1786286561))))
				{
					goto IL_0295_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_01e2_1:
			{
				uint32_t L_45 = V_5;
				if ((((int32_t)L_45) == ((int32_t)((int32_t)-1522491664))))
				{
					goto IL_02e9_1;
				}
			}
			{
				goto IL_01f0_1;
			}

IL_01f0_1:
			{
				uint32_t L_46 = V_5;
				if ((((int32_t)L_46) == ((int32_t)((int32_t)-1444332543))))
				{
					goto IL_03a6_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0201_1:
			{
				uint32_t L_47 = V_5;
				if ((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)-558361902)))))
				{
					goto IL_024e_1;
				}
			}
			{
				uint32_t L_48 = V_5;
				if ((!(((uint32_t)L_48) <= ((uint32_t)((int32_t)-1180859054)))))
				{
					goto IL_0232_1;
				}
			}
			{
				uint32_t L_49 = V_5;
				if ((((int32_t)L_49) == ((int32_t)((int32_t)-1335745110))))
				{
					goto IL_0313_1;
				}
			}
			{
				goto IL_0221_1;
			}

IL_0221_1:
			{
				uint32_t L_50 = V_5;
				if ((((int32_t)L_50) == ((int32_t)((int32_t)-1180859054))))
				{
					goto IL_02fe_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0232_1:
			{
				uint32_t L_51 = V_5;
				if ((((int32_t)L_51) == ((int32_t)((int32_t)-708986046))))
				{
					goto IL_02aa_1;
				}
			}
			{
				goto IL_023d_1;
			}

IL_023d_1:
			{
				uint32_t L_52 = V_5;
				if ((((int32_t)L_52) == ((int32_t)((int32_t)-558361902))))
				{
					goto IL_03d0_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_024e_1:
			{
				uint32_t L_53 = V_5;
				if ((!(((uint32_t)L_53) <= ((uint32_t)((int32_t)-255211260)))))
				{
					goto IL_0276_1;
				}
			}
			{
				uint32_t L_54 = V_5;
				if ((((int32_t)L_54) == ((int32_t)((int32_t)-345285761))))
				{
					goto IL_0439_1;
				}
			}
			{
				goto IL_0265_1;
			}

IL_0265_1:
			{
				uint32_t L_55 = V_5;
				if ((((int32_t)L_55) == ((int32_t)((int32_t)-255211260))))
				{
					goto IL_0478_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0276_1:
			{
				uint32_t L_56 = V_5;
				if ((((int32_t)L_56) == ((int32_t)((int32_t)-42086080))))
				{
					goto IL_0352_1;
				}
			}
			{
				goto IL_0284_1;
			}

IL_0284_1:
			{
				uint32_t L_57 = V_5;
				if ((((int32_t)L_57) == ((int32_t)((int32_t)-25846038))))
				{
					goto IL_037c_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0295_1:
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, NULL);
				if (L_59)
				{
					goto IL_0520_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_02aa_1:
			{
				String_t* L_60 = V_3;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
				if (L_61)
				{
					goto IL_0537_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_02bf_1:
			{
				String_t* L_62 = V_3;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, NULL);
				if (L_63)
				{
					goto IL_054e_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_02d4_1:
			{
				String_t* L_64 = V_3;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral53D3413057D7E52F44470A335C590748745352B1, NULL);
				if (L_65)
				{
					goto IL_0560_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_02e9_1:
			{
				String_t* L_66 = V_3;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, NULL);
				if (L_67)
				{
					goto IL_0577_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_02fe_1:
			{
				String_t* L_68 = V_3;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, NULL);
				if (L_69)
				{
					goto IL_0589_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0313_1:
			{
				String_t* L_70 = V_3;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, NULL);
				if (L_71)
				{
					goto IL_059b_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0328_1:
			{
				String_t* L_72 = V_3;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, NULL);
				if (L_73)
				{
					goto IL_05b2_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_033d_1:
			{
				String_t* L_74 = V_3;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, NULL);
				if (L_75)
				{
					goto IL_05c9_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0352_1:
			{
				String_t* L_76 = V_3;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, NULL);
				if (L_77)
				{
					goto IL_05e0_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0367_1:
			{
				String_t* L_78 = V_3;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, NULL);
				if (L_79)
				{
					goto IL_05f7_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_037c_1:
			{
				String_t* L_80 = V_3;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, NULL);
				if (L_81)
				{
					goto IL_060e_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0391_1:
			{
				String_t* L_82 = V_3;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, NULL);
				if (L_83)
				{
					goto IL_0625_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_03a6_1:
			{
				String_t* L_84 = V_3;
				bool L_85;
				L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralF3FA58C10BBB9830102605E24AF89DC619908DFA, NULL);
				if (L_85)
				{
					goto IL_0637_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_03bb_1:
			{
				String_t* L_86 = V_3;
				bool L_87;
				L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, NULL);
				if (L_87)
				{
					goto IL_064d_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_03d0_1:
			{
				String_t* L_88 = V_3;
				bool L_89;
				L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, NULL);
				if (L_89)
				{
					goto IL_065e_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_03e5_1:
			{
				String_t* L_90 = V_3;
				bool L_91;
				L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, NULL);
				if (L_91)
				{
					goto IL_0670_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_03fa_1:
			{
				String_t* L_92 = V_3;
				bool L_93;
				L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, NULL);
				if (L_93)
				{
					goto IL_0682_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_040f_1:
			{
				String_t* L_94 = V_3;
				bool L_95;
				L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, NULL);
				if (L_95)
				{
					goto IL_0694_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0424_1:
			{
				String_t* L_96 = V_3;
				bool L_97;
				L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, NULL);
				if (L_97)
				{
					goto IL_06a6_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0439_1:
			{
				String_t* L_98 = V_3;
				bool L_99;
				L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, NULL);
				if (L_99)
				{
					goto IL_06b8_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_044e_1:
			{
				String_t* L_100 = V_3;
				bool L_101;
				L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, NULL);
				if (L_101)
				{
					goto IL_06cf_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0463_1:
			{
				String_t* L_102 = V_3;
				bool L_103;
				L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_103)
				{
					goto IL_06e6_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0478_1:
			{
				String_t* L_104 = V_3;
				bool L_105;
				L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, NULL);
				if (L_105)
				{
					goto IL_06fd_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_048d_1:
			{
				String_t* L_106 = V_3;
				bool L_107;
				L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, NULL);
				if (L_107)
				{
					goto IL_070f_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_04a2_1:
			{
				String_t* L_108 = V_3;
				bool L_109;
				L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, NULL);
				if (L_109)
				{
					goto IL_071e_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_04b7_1:
			{
				String_t* L_110 = V_3;
				bool L_111;
				L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, NULL);
				if (L_111)
				{
					goto IL_072d_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_04cc_1:
			{
				String_t* L_112 = V_3;
				bool L_113;
				L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, NULL);
				if (L_113)
				{
					goto IL_0741_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_04e1_1:
			{
				String_t* L_114 = V_3;
				bool L_115;
				L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, NULL);
				if (L_115)
				{
					goto IL_0755_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_04f6_1:
			{
				String_t* L_116 = V_3;
				bool L_117;
				L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, NULL);
				if (L_117)
				{
					goto IL_0768_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_050b_1:
			{
				String_t* L_118 = V_3;
				bool L_119;
				L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, NULL);
				if (L_119)
				{
					goto IL_077b_1;
				}
			}
			{
				goto IL_078e_1;
			}

IL_0520_1:
			{
				// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_120 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_121 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_122 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_121);
				int32_t L_123;
				L_123 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_121, L_122);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_120);
				VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_120, L_123);
				// break;
				goto IL_0797_1;
			}

IL_0537_1:
			{
				// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_124 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_125 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_126 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_125);
				int32_t L_127;
				L_127 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_125, L_126);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_124);
				VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_124, L_127);
				// break;
				goto IL_0797_1;
			}

IL_054e_1:
			{
				// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
				NullCheck(L_129);
				int32_t L_130;
				L_130 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_m83ABC1A717E6A86094AB2D5FD24AC3D8A740A5B4_RuntimeMethod_var, L_129);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_128);
				VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_128, L_130);
				// break;
				goto IL_0797_1;
			}

IL_0560_1:
			{
				// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_133 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_132);
				bool L_134;
				L_134 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_132, L_133);
				NullCheck(L_131);
				RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_131, L_134, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0577_1:
			{
				// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_136 = ___reader0;
				NullCheck(L_136);
				int32_t L_137;
				L_137 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mCC93F9BD050549BB2883E711EB524801C0300ADD_RuntimeMethod_var, L_136);
				NullCheck(L_135);
				RenderTexture_set_memorylessMode_m4F368B9C911EB033DFD44BDB2EF67CD451D74CED(L_135, L_137, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0589_1:
			{
				// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_138 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_139 = ___reader0;
				NullCheck(L_139);
				int32_t L_140;
				L_140 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_mD8D65B6F5AC5BAFD5E9E7A6E8F3D2B71B8DA4C50_RuntimeMethod_var, L_139);
				NullCheck(L_138);
				RenderTexture_set_format_m6E5F83C36DA7EB9AD947AE3D6AFD95952E67EEFA(L_138, L_140, NULL);
				// break;
				goto IL_0797_1;
			}

IL_059b_1:
			{
				// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_141 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_142 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_143 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_142);
				bool L_144;
				L_144 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_142, L_143);
				NullCheck(L_141);
				RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_141, L_144, NULL);
				// break;
				goto IL_0797_1;
			}

IL_05b2_1:
			{
				// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_145 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_146);
				int32_t L_148;
				L_148 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_146, L_147);
				NullCheck(L_145);
				RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_145, L_148, NULL);
				// break;
				goto IL_0797_1;
			}

IL_05c9_1:
			{
				// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_149 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_150 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_151 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_150);
				int32_t L_152;
				L_152 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_150, L_151);
				NullCheck(L_149);
				RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A(L_149, L_152, NULL);
				// break;
				goto IL_0797_1;
			}

IL_05e0_1:
			{
				// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_153 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_154 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_155 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_154);
				bool L_156;
				L_156 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_154, L_155);
				NullCheck(L_153);
				RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB(L_153, L_156, NULL);
				// break;
				goto IL_0797_1;
			}

IL_05f7_1:
			{
				// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_157 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_158 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_159 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_158);
				bool L_160;
				L_160 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_158, L_159);
				NullCheck(L_157);
				RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4(L_157, L_160, NULL);
				// break;
				goto IL_0797_1;
			}

IL_060e_1:
			{
				// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_161 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_162 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_163 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_162);
				int32_t L_164;
				L_164 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_162, L_163);
				NullCheck(L_161);
				RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_161, L_164, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0625_1:
			{
				// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_165 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_166 = ___reader0;
				NullCheck(L_166);
				RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_167;
				L_167 = GenericVirtualFuncInvoker0< RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0C75FE9D5A84E8371C7CF6D511E94934C58B902C_RuntimeMethod_var, L_166);
				NullCheck(L_165);
				RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8(L_165, L_167, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0637_1:
			{
				// UnityEngine.RenderTexture.masterTextureLimit = reader.Read<System.Int32>(ES3Type_int.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_168 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_169 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_168);
				int32_t L_170;
				L_170 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_168, L_169);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_masterTextureLimit_mF1481DD3E8A8D89E765D536E4B00664358BD9C3B(L_170, NULL);
				// break;
				goto IL_0797_1;
			}

IL_064d_1:
			{
				// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_171 = ___reader0;
				NullCheck(L_171);
				int32_t L_172;
				L_172 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_m86363017CB6AD67B56A56A563705585EFEC42AEE_RuntimeMethod_var, L_171);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_anisotropicFiltering_mA22A3AD8E4848C073D58B32ACA9573DCBA22A616(L_172, NULL);
				// break;
				goto IL_0797_1;
			}

IL_065e_1:
			{
				// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_173 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_174 = ___reader0;
				NullCheck(L_174);
				int32_t L_175;
				L_175 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var, L_174);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_173);
				Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_173, L_175, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0670_1:
			{
				// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_176 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_177 = ___reader0;
				NullCheck(L_177);
				int32_t L_178;
				L_178 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var, L_177);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_176);
				Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_176, L_178, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0682_1:
			{
				// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_179 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_180 = ___reader0;
				NullCheck(L_180);
				int32_t L_181;
				L_181 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var, L_180);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_179);
				Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_179, L_181, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0694_1:
			{
				// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_182 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_183 = ___reader0;
				NullCheck(L_183);
				int32_t L_184;
				L_184 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var, L_183);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_182);
				Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_182, L_184, NULL);
				// break;
				goto IL_0797_1;
			}

IL_06a6_1:
			{
				// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_185 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_186 = ___reader0;
				NullCheck(L_186);
				int32_t L_187;
				L_187 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var, L_186);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_185);
				Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_185, L_187, NULL);
				// break;
				goto IL_0797_1;
			}

IL_06b8_1:
			{
				// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_188 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_189 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_190 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_189);
				int32_t L_191;
				L_191 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_189, L_190);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_188);
				Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_188, L_191, NULL);
				// break;
				goto IL_0797_1;
			}

IL_06cf_1:
			{
				// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_192 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_193 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_194 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_193);
				float L_195;
				L_195 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_193, L_194);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_192);
				Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_192, L_195, NULL);
				// break;
				goto IL_0797_1;
			}

IL_06e6_1:
			{
				// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_196 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_197 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_198 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_197);
				String_t* L_199;
				L_199 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_197, L_198);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_196);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_196, L_199, NULL);
				// break;
				goto IL_0797_1;
			}

IL_06fd_1:
			{
				// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_200 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_201 = ___reader0;
				NullCheck(L_201);
				int32_t L_202;
				L_202 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9F889ED5564823E13740D0525A6AA7F670A41DB0_RuntimeMethod_var, L_201);
				NullCheck(L_200);
				RenderTexture_set_vrUsage_mAA13206DFE05C0A869A160CB1C2AC9D1C099D203(L_200, L_202, NULL);
				// break;
				goto IL_0797_1;
			}

IL_070f_1:
			{
				// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_203 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_204 = ___reader0;
				NullCheck(L_204);
				int32_t L_205;
				L_205 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m332F1D7C67D7CE74E61E1777A71E3558F330B14B_RuntimeMethod_var, L_204);
				NullCheck(L_203);
				RenderTexture_set_graphicsFormat_m4CFDFF4CEC81B5350AE94D466585C8186E06B733(L_203, L_205, NULL);
				// break;
				goto IL_0797_1;
			}

IL_071e_1:
			{
				// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_206 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_207 = ___reader0;
				NullCheck(L_207);
				int32_t L_208;
				L_208 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m332F1D7C67D7CE74E61E1777A71E3558F330B14B_RuntimeMethod_var, L_207);
				NullCheck(L_206);
				RenderTexture_set_stencilFormat_m92E00333CD5EBDC5B73F43521B6E8132C1B087AE(L_206, L_208, NULL);
				// break;
				goto IL_0797_1;
			}

IL_072d_1:
			{
				// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_209 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_210 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_211 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_210);
				bool L_212;
				L_212 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_210, L_211);
				NullCheck(L_209);
				RenderTexture_set_bindTextureMS_m06A8FE127AEE42767530955453DBB9C55320208E(L_209, L_212, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0741_1:
			{
				// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_213 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_214 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_215 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_214);
				bool L_216;
				L_216 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_214, L_215);
				NullCheck(L_213);
				RenderTexture_set_useDynamicScale_m0B6F123BB7FF0BA01515163A0EFA9B1D4375B883(L_213, L_216, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0755_1:
			{
				// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_217 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_218 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_217);
				bool L_219;
				L_219 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_217, L_218);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_streamingTextureForceLoadAll_m49BBAA185AC290FF1B92627CA6C7A0F1C7D243D6(L_219, NULL);
				// break;
				goto IL_0797_1;
			}

IL_0768_1:
			{
				// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_220 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_221 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_220);
				bool L_222;
				L_222 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_220, L_221);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_streamingTextureDiscardUnusedMips_mDB2B44B960BB3EEDC7DF7F013619F33FF4BE97EA(L_222, NULL);
				// break;
				goto IL_0797_1;
			}

IL_077b_1:
			{
				// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_223 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_224 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_223);
				bool L_225;
				L_225 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_223, L_224);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_allowThreadedTextureCreation_m20F9D0702196CB1762B85F495863F54272886F4F(L_225, NULL);
				// break;
				goto IL_0797_1;
			}

IL_078e_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_226 = ___reader0;
				NullCheck(L_226);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_226);
				// break;
				goto IL_0797_1;
			}

IL_0797_1:
			{
			}

IL_0798_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_227 = V_1;
				NullCheck(L_227);
				bool L_228;
				L_228 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_227);
				if (L_228)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_07ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_07ba:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Rigidbody::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Rigidbody_ReadComponent_TisRuntimeObject_m2D0032BB6F342983A8A9EBA148B9C9DF166E15DA_gshared (ES3Type_Rigidbody_t0A0E5EE14BD8F036C3EB9D8F5506976DE91BF1F4* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m5092736797804666D10CE7930062E6CEEF9393DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_mF08E67636D4E97D742E9412787C51700406E6523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m1406E8D65C54ECE030643A14063F0B52931655BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE6991311592B778BB540656302FE479334E0C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D07732265032EC34859337960AF5C34A24B362C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.Rigidbody)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var));
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

FINALLY_057b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_058f;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_058f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_056e_1;
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
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-1680862109)))))
				{
					goto IL_0102_1;
				}
			}
			{
				uint32_t L_14 = V_5;
				if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)846470194)))))
				{
					goto IL_009f_1;
				}
			}
			{
				uint32_t L_15 = V_5;
				if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)132777611)))))
				{
					goto IL_0072_1;
				}
			}
			{
				uint32_t L_16 = V_5;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)69535816))))
				{
					goto IL_023e_1;
				}
			}
			{
				goto IL_0061_1;
			}

IL_0061_1:
			{
				uint32_t L_17 = V_5;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)132777611))))
				{
					goto IL_027d_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0072_1:
			{
				uint32_t L_18 = V_5;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)520558326))))
				{
					goto IL_0253_1;
				}
			}
			{
				goto IL_0080_1;
			}

IL_0080_1:
			{
				uint32_t L_19 = V_5;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)564937055))))
				{
					goto IL_0310_1;
				}
			}
			{
				goto IL_008e_1;
			}

IL_008e_1:
			{
				uint32_t L_20 = V_5;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)846470194))))
				{
					goto IL_01c0_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_009f_1:
			{
				uint32_t L_21 = V_5;
				if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1590826182)))))
				{
					goto IL_00d5_1;
				}
			}
			{
				uint32_t L_22 = V_5;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)905125296))))
				{
					goto IL_0268_1;
				}
			}
			{
				goto IL_00b6_1;
			}

IL_00b6_1:
			{
				uint32_t L_23 = V_5;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)965172509))))
				{
					goto IL_0325_1;
				}
			}
			{
				goto IL_00c4_1;
			}

IL_00c4_1:
			{
				uint32_t L_24 = V_5;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1590826182))))
				{
					goto IL_02bc_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_00d5_1:
			{
				uint32_t L_25 = V_5;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)-1823519222))))
				{
					goto IL_02fb_1;
				}
			}
			{
				goto IL_00e3_1;
			}

IL_00e3_1:
			{
				uint32_t L_26 = V_5;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)-1698013973))))
				{
					goto IL_034f_1;
				}
			}
			{
				goto IL_00f1_1;
			}

IL_00f1_1:
			{
				uint32_t L_27 = V_5;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)-1680862109))))
				{
					goto IL_02e6_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0102_1:
			{
				uint32_t L_28 = V_5;
				if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-800222937)))))
				{
					goto IL_0160_1;
				}
			}
			{
				uint32_t L_29 = V_5;
				if ((!(((uint32_t)L_29) <= ((uint32_t)((int32_t)-1217444223)))))
				{
					goto IL_0133_1;
				}
			}
			{
				uint32_t L_30 = V_5;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1276460738))))
				{
					goto IL_01d5_1;
				}
			}
			{
				goto IL_0122_1;
			}

IL_0122_1:
			{
				uint32_t L_31 = V_5;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1217444223))))
				{
					goto IL_02a7_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0133_1:
			{
				uint32_t L_32 = V_5;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-1198781117))))
				{
					goto IL_01ea_1;
				}
			}
			{
				goto IL_0141_1;
			}

IL_0141_1:
			{
				uint32_t L_33 = V_5;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-855228832))))
				{
					goto IL_02d1_1;
				}
			}
			{
				goto IL_014f_1;
			}

IL_014f_1:
			{
				uint32_t L_34 = V_5;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-800222937))))
				{
					goto IL_01ff_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0160_1:
			{
				uint32_t L_35 = V_5;
				if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)-545834799)))))
				{
					goto IL_0196_1;
				}
			}
			{
				uint32_t L_36 = V_5;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-696840654))))
				{
					goto IL_033a_1;
				}
			}
			{
				goto IL_0177_1;
			}

IL_0177_1:
			{
				uint32_t L_37 = V_5;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-646633571))))
				{
					goto IL_0379_1;
				}
			}
			{
				goto IL_0185_1;
			}

IL_0185_1:
			{
				uint32_t L_38 = V_5;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-545834799))))
				{
					goto IL_0214_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0196_1:
			{
				uint32_t L_39 = V_5;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-520104043))))
				{
					goto IL_0292_1;
				}
			}
			{
				goto IL_01a4_1;
			}

IL_01a4_1:
			{
				uint32_t L_40 = V_5;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-455973614))))
				{
					goto IL_0229_1;
				}
			}
			{
				goto IL_01af_1;
			}

IL_01af_1:
			{
				uint32_t L_41 = V_5;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-428423614))))
				{
					goto IL_0364_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_01c0_1:
			{
				String_t* L_42 = V_3;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620, NULL);
				if (L_43)
				{
					goto IL_038e_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_01d5_1:
			{
				String_t* L_44 = V_3;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70, NULL);
				if (L_45)
				{
					goto IL_03a5_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_01ea_1:
			{
				String_t* L_46 = V_3;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49, NULL);
				if (L_47)
				{
					goto IL_03bc_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_01ff_1:
			{
				String_t* L_48 = V_3;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B, NULL);
				if (L_49)
				{
					goto IL_03d3_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0214_1:
			{
				String_t* L_50 = V_3;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2, NULL);
				if (L_51)
				{
					goto IL_03ea_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0229_1:
			{
				String_t* L_52 = V_3;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B, NULL);
				if (L_53)
				{
					goto IL_0401_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_023e_1:
			{
				String_t* L_54 = V_3;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral6BE6991311592B778BB540656302FE479334E0C1, NULL);
				if (L_55)
				{
					goto IL_0418_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0253_1:
			{
				String_t* L_56 = V_3;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D, NULL);
				if (L_57)
				{
					goto IL_042f_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0268_1:
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316, NULL);
				if (L_59)
				{
					goto IL_0446_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_027d_1:
			{
				String_t* L_60 = V_3;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40, NULL);
				if (L_61)
				{
					goto IL_045d_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0292_1:
			{
				String_t* L_62 = V_3;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583, NULL);
				if (L_63)
				{
					goto IL_046f_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_02a7_1:
			{
				String_t* L_64 = V_3;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF, NULL);
				if (L_65)
				{
					goto IL_0481_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_02bc_1:
			{
				String_t* L_66 = V_3;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53, NULL);
				if (L_67)
				{
					goto IL_0498_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_02d1_1:
			{
				String_t* L_68 = V_3;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B, NULL);
				if (L_69)
				{
					goto IL_04af_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_02e6_1:
			{
				String_t* L_70 = V_3;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58, NULL);
				if (L_71)
				{
					goto IL_04c6_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_02fb_1:
			{
				String_t* L_72 = V_3;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
				if (L_73)
				{
					goto IL_04dd_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0310_1:
			{
				String_t* L_74 = V_3;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81, NULL);
				if (L_75)
				{
					goto IL_04f1_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0325_1:
			{
				String_t* L_76 = V_3;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5, NULL);
				if (L_77)
				{
					goto IL_0505_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_033a_1:
			{
				String_t* L_78 = V_3;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6, NULL);
				if (L_79)
				{
					goto IL_0514_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_034f_1:
			{
				String_t* L_80 = V_3;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteral8D07732265032EC34859337960AF5C34A24B362C, NULL);
				if (L_81)
				{
					goto IL_0528_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0364_1:
			{
				String_t* L_82 = V_3;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3, NULL);
				if (L_83)
				{
					goto IL_053c_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_0379_1:
			{
				String_t* L_84 = V_3;
				bool L_85;
				L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF, NULL);
				if (L_85)
				{
					goto IL_0550_1;
				}
			}
			{
				goto IL_0564_1;
			}

IL_038e_1:
			{
				// instance.velocity = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_86 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_88 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_87);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
				L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_87, L_88);
				NullCheck(L_86);
				Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_86, L_89, NULL);
				// break;
				goto IL_056d_1;
			}

IL_03a5_1:
			{
				// instance.angularVelocity = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_90 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_91);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
				L_93 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_91, L_92);
				NullCheck(L_90);
				Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_90, L_93, NULL);
				// break;
				goto IL_056d_1;
			}

IL_03bc_1:
			{
				// instance.drag = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_94 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_95);
				float L_97;
				L_97 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_95, L_96);
				NullCheck(L_94);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_94, L_97, NULL);
				// break;
				goto IL_056d_1;
			}

IL_03d3_1:
			{
				// instance.angularDrag = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_98 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_100 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_99);
				float L_101;
				L_101 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_99, L_100);
				NullCheck(L_98);
				Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_98, L_101, NULL);
				// break;
				goto IL_056d_1;
			}

IL_03ea_1:
			{
				// instance.mass = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_102 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_104 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_103);
				float L_105;
				L_105 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_103, L_104);
				NullCheck(L_102);
				Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_102, L_105, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0401_1:
			{
				// instance.useGravity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_106 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_107 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_108 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_107);
				bool L_109;
				L_109 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_107, L_108);
				NullCheck(L_106);
				Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_106, L_109, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0418_1:
			{
				// instance.maxDepenetrationVelocity = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_110 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_111 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_112 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_111);
				float L_113;
				L_113 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_111, L_112);
				NullCheck(L_110);
				Rigidbody_set_maxDepenetrationVelocity_mEE787E12E070438903558B0C79DDD98E3A5CFFD7(L_110, L_113, NULL);
				// break;
				goto IL_056d_1;
			}

IL_042f_1:
			{
				// instance.isKinematic = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_114 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_115 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_116 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_115);
				bool L_117;
				L_117 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_115, L_116);
				NullCheck(L_114);
				Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_114, L_117, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0446_1:
			{
				// instance.freezeRotation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_118 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_119 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_120 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_119);
				bool L_121;
				L_121 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_119, L_120);
				NullCheck(L_118);
				Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_118, L_121, NULL);
				// break;
				goto IL_056d_1;
			}

IL_045d_1:
			{
				// instance.constraints = reader.Read<UnityEngine.RigidbodyConstraints>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_122 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_123 = ___reader0;
				NullCheck(L_123);
				int32_t L_124;
				L_124 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_mF08E67636D4E97D742E9412787C51700406E6523_RuntimeMethod_var, L_123);
				NullCheck(L_122);
				Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_122, L_124, NULL);
				// break;
				goto IL_056d_1;
			}

IL_046f_1:
			{
				// instance.collisionDetectionMode = reader.Read<UnityEngine.CollisionDetectionMode>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_125 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_126 = ___reader0;
				NullCheck(L_126);
				int32_t L_127;
				L_127 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m5092736797804666D10CE7930062E6CEEF9393DC_RuntimeMethod_var, L_126);
				NullCheck(L_125);
				Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_125, L_127, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0481_1:
			{
				// instance.centerOfMass = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_128 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_129 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_130 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_129);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
				L_131 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_129, L_130);
				NullCheck(L_128);
				Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188(L_128, L_131, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0498_1:
			{
				// instance.inertiaTensorRotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_132 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_133 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_134 = ((ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_133);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_135;
				L_135 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var, L_133, L_134);
				NullCheck(L_132);
				Rigidbody_set_inertiaTensorRotation_m732666F7ACD440F5472A04AAEF1545D12C63450C(L_132, L_135, NULL);
				// break;
				goto IL_056d_1;
			}

IL_04af_1:
			{
				// instance.inertiaTensor = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_136 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_137 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_138 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_137);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
				L_139 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_137, L_138);
				NullCheck(L_136);
				Rigidbody_set_inertiaTensor_m68E7B9842A8125237E1DEE5251840DF2D4DBB8C9(L_136, L_139, NULL);
				// break;
				goto IL_056d_1;
			}

IL_04c6_1:
			{
				// instance.detectCollisions = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_140 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_142 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_141);
				bool L_143;
				L_143 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_141, L_142);
				NullCheck(L_140);
				Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF(L_140, L_143, NULL);
				// break;
				goto IL_056d_1;
			}

IL_04dd_1:
			{
				// instance.position = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_144 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_145 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_146 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_145);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
				L_147 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_145, L_146);
				NullCheck(L_144);
				Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_144, L_147, NULL);
				// break;
				goto IL_056d_1;
			}

IL_04f1_1:
			{
				// instance.rotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_148 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_150 = ((ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_149);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_151;
				L_151 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m50B5602A25711A67A227FA81A0C7A7B0BB7F699C_RuntimeMethod_var, L_149, L_150);
				NullCheck(L_148);
				Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_148, L_151, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0505_1:
			{
				// instance.interpolation = reader.Read<UnityEngine.RigidbodyInterpolation>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_152 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_153 = ___reader0;
				NullCheck(L_153);
				int32_t L_154;
				L_154 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m1406E8D65C54ECE030643A14063F0B52931655BA_RuntimeMethod_var, L_153);
				NullCheck(L_152);
				Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_152, L_154, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0514_1:
			{
				// instance.solverIterations = reader.Read<System.Int32>(ES3Type_int.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_155 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_156 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_157 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_156);
				int32_t L_158;
				L_158 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_156, L_157);
				NullCheck(L_155);
				Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C(L_155, L_158, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0528_1:
			{
				// instance.sleepThreshold = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_159 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_160 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_161 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_160);
				float L_162;
				L_162 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_160, L_161);
				NullCheck(L_159);
				Rigidbody_set_sleepThreshold_m5180E11C2D6A401352863FB66812C683C663B220(L_159, L_162, NULL);
				// break;
				goto IL_056d_1;
			}

IL_053c_1:
			{
				// instance.maxAngularVelocity = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_163 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_164);
				float L_166;
				L_166 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_164, L_165);
				NullCheck(L_163);
				Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_163, L_166, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0550_1:
			{
				// instance.solverVelocityIterations = reader.Read<System.Int32>(ES3Type_int.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_167 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_168 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_169 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_168);
				int32_t L_170;
				L_170 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_168, L_169);
				NullCheck(L_167);
				Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B(L_167, L_170, NULL);
				// break;
				goto IL_056d_1;
			}

IL_0564_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_171 = ___reader0;
				NullCheck(L_171);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_171);
				// break;
				goto IL_056d_1;
			}

IL_056d_1:
			{
			}

IL_056e_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_172 = V_1;
				NullCheck(L_172);
				bool L_173;
				L_173 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_172);
				if (L_173)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0590;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0590:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m914851C0F2281AD792550B3C96D3D70839779FC4_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1CBB17F1F1A1F143DE5B7F2EFFFAA81BFE93B21E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3837EB08B14C1DEE5C36EBCC4FA837B152392862_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9047C26CC9E6DC2A44BF681692313A16E72E02BE_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0DF098729E8A827B5CF56D94D9034F136CEBB262_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08B9331B2369FCEE90EA81BFDC356326A5A05499_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m554582E16856836259743ADF69379624BBAD92C7_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m648ADBF23D5970AA80AA3EF9F49AAD293CD81B3B_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mC508CCE68A5C7782C5AA35C776AC48321DBEECD2_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mAF18F84BE7FB888BD472CC2F807CF9AC3E376F4E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRuntimeObject_m10A37025B404A116DED222EF798623F3FA1ACFA5_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mB3B93C2F9DB1E9BC48A3388E880971F4BBAA60DD_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m852D49953AFB9411AEB72D718BEB15600456724A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mCC721703038DC9D6C0DB96DD7BCDD647C9D8FBEF_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7339D1D1F70F21C9505D62F193B2DC0C5A54EF2B_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m44EAFA3375DFCA975D3811B26902BD67A89844B1_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m60D2239752B58515B2DCFE5A96634475FE77966E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m55BB793E4532B3229E75B934DF66C65381CCBCC1_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m5032B8A53006CD04E3E8A3A06684E8B2B19C0140_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mAEF37626F8DBEB15A8B315E044BD9B3A0D9ACC91_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
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
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRuntimeObject_m780171B425AF1206E5C98FCE686F89A8761F4C68_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m316204997B719100F789EEBC33FF43DE3F1398FF_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m0703076A01BCF0F63B3889C16267E73D69FF7C0E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m49041D15CCE1DDB252CB906E57247912DEB9E698_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mFC23917C8E2976C653458DB43978BEA188D83CC6_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m5796A95AD2AE69F9083A7F34FF9CFC09AD8A88A7_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m75FF411372C1C91FDA3026EC5E9D62842EFAE40A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mD1C6B38B5D315B0F21BB26A915F9E52915C66FFF_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mD3539F788550100A359498545F6FFB9FB696BAF2_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mBC2D53FB6F105F2B29095E69EB3762ED076D789E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m0DFBD05A773003C49D7A48CA368949527C054095_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mA85A4B9072B32D85C03AA855447C8F204C23DCC8_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA61D779F4048C1A31501B707DC90DD797E54D03D_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m2D411D279870C0B861E110B159A011C4F7196A1D_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mCBB334E3875C4C6F038866853049F6B9AB59AD6F_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mE5BB0A397D9869C2F2EC45B88E4D8C5403B7EEED_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m30803DD6EA771A9D8F14B487EDF8B6A0F3DD4A7A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mBF8B7A49D3B302D695540EFC7FEA904DDD874F82_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mEFDC6060741257E8ED8738C8509136EA9DCD7B00_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m1DDF61508CAA6ADF8A7945CFC13DECA0D0FC80F9_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m388F916397122FA645FF2776F5F6B32379D3446A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m8E5BADB71486DBAFDF587EEA0BBFF13B7244A4D5_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_023d;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		// break;
		goto IL_023c;
	}

IL_0185:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		// break;
		goto IL_023c;
	}

IL_019d:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		// break;
		goto IL_023c;
	}

IL_01b5:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		// break;
		goto IL_023c;
	}

IL_01ca:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		// break;
		goto IL_023c;
	}

IL_01df:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		// break;
		goto IL_023c;
	}

IL_01f4:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		// break;
		goto IL_023c;
	}

IL_0209:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		// break;
		goto IL_023c;
	}

IL_021e:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		// break;
		goto IL_023c;
	}

IL_0233:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___reader0;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_62);
		// break;
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m82007A1DCE50FA23146B00A8915FB4C98C541C3B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m556E7AE85339731F43A47E44E68E45EB6C23AE5E_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA0A2E0AB467644CBBF88160C83C17D288B4E6A5D_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF8F25AD72F9C8DC6E42E430227A87EE8BE053182_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2BA3849F5DE84DF1B9850B10A6D316F4C520024F_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m28650A317E00D95AAA131BD783E75861CFB5038B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA258CDD96FEC6F1CE4F515B39591C6F10F08E040_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m99724B54589A4BB0F63590778E7A10E7B173E54A_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m669354E2BC4C2F6E06439DBF7E16C68BECC882B2_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m0374A1EF397FF42B8DA6601F7C013BE3A0FD3405_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRuntimeObject_mE9BDCC55270866C4BD5CA1C9D50797EC351CA04F_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m94AEFDE62C804F3392F793F6619550467825A119_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m3502990BA088BD20E7FD9AFEA80E88CBCF17C34A_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mA39164CD7E2E172AA9589288EAD7E35A2803D054_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1B228AF471C31454196D4E419BD8ED4494BCE584_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m83846A85C5E644905440CD25E27FB12D559D3E31_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4D43300A5D696E6FD92F1EC9B42ACB865BB4A91D_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBAE280582EFE4B069C99F0418E5C98BDFB39DBE7_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m93519F0B5B7F81BD5906BD0436C9BAF9A1097C4C_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m994A200D0DF79AE729C1ADB6BC055A9252255321_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
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
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRuntimeObject_m58A202AEC73FE1C8CD3D03AE78A50DD0D732302B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m1437CF294F6501FB85BD43907B4B9AA229AB1CAB_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m427DA6F1C94ED09B7FF7E2AE7DD790CF1EB907E6_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mD3A290EC2153DEAC3BD70D11D103B7E156F6D7BB_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mECD8D2D06A42104F5D4F2528C3A16E6E17475200_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m3194B3A54496E65F627BA00FAC9B27DB63A9EC98_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m034340F665E31CECBDB8C21D525DBCFB5BB2042E_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mF8AA556787D3C6A152F1C0779B8C4CF55976EE49_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m71EAFA455A2F843820E3A15BD8C314774AC32DD3_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_0202;
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
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
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
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		// break;
		goto IL_0201;
	}

IL_0162:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		// break;
		goto IL_0201;
	}

IL_017a:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		// break;
		goto IL_0201;
	}

IL_018f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		// break;
		goto IL_0201;
	}

IL_01a4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		// break;
		goto IL_0201;
	}

IL_01b9:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		// break;
		goto IL_0201;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		// break;
		goto IL_0201;
	}

IL_01e3:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		// break;
		goto IL_0201;
	}

IL_01f8:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___reader0;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_56);
		// break;
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
