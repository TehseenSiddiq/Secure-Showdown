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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SearchRaycastHolder>
struct List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,UnityEngine.GameObject>
struct UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// SearchRaycastHolder[]
struct SearchRaycastHolderU5BU5D_t9EF364D38EED1059CEF1DDD52AEFF5E2326FCF3F;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DetectedTextOutput
struct DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A;
// ES3Types.ES3ArrayType
struct ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535;
// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3UserType_Transform
struct ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89;
// ES3Types.ES3UserType_TransformArray
struct ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D;
// ES3Writer
struct ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402;
// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4;
// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3;
// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79;
// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B;
// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0;
// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF;
// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B;
// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71;
// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerPlaneController
struct PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C;
// PlayerTopDownController
struct PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SearchCone
struct SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E;
// SearchConeImageHelpers
struct SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB;
// SearchHeadRotator
struct SearchHeadRotator_tFDA975EB54879E8A7331804CB36CDA6742739EFE;
// SearchRaycastHolder
struct SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StopSentryAnimation
struct StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TargetEvent
struct TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92;
// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SearchCone/<RotateSearchCone>d__68
struct U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E;
// SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49
struct U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE;
// SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50
struct U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9731A4E8928017510CC97D3EB0461DE947117C;
IL2CPP_EXTERN_C String_t* _stringLiteral0D32971B51A965015F6A4830FD603EEA6E721052;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4B7165CC9EE1D3E50F7E3F1666295E0F4E2C1B;
IL2CPP_EXTERN_C String_t* _stringLiteral34C4DC013D81B50699EF47CB6C39B81B87EEF033;
IL2CPP_EXTERN_C String_t* _stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082;
IL2CPP_EXTERN_C String_t* _stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral4E6EECC26E2B37D818F64E661240B5160B8C0A61;
IL2CPP_EXTERN_C String_t* _stringLiteral597C0E5E0AD6606225673975CF28CAE66EA15D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral70A465AF0832829FEA07A871F198BE82FFEB4372;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD84F077EBA0C4D8F68CCDCB2C5EC5AF841EF9A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteralA1122E199B658D45D1DADF567DB1DD527A2B999E;
IL2CPP_EXTERN_C String_t* _stringLiteralA29C86EB397C51E7DBF72DCAAF67319DBC6FF2AF;
IL2CPP_EXTERN_C String_t* _stringLiteralB4078A2E79BCBAE4D36E2061874F4C35E5716186;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A0A0F851280DD68B4441907EFC71227663BEF3;
IL2CPP_EXTERN_C String_t* _stringLiteralB59D15FB875824B42FB29E0473002A89344F9248;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F28CD036451F9FFB4B23BADF3E180A6845EDD;
IL2CPP_EXTERN_C String_t* _stringLiteralBC86ADC0E239AE5B7E099C694236EAC10A7E1B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC156810E6BF84447CAB5100A18DA58318F9BD7B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A94196E05295CAB8E81FCED115DB2BC84F5B72;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C0F0A5C8C23F937AB68E43B571B505B014408;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF20B7FA0252D0EE5B17766552AD69D948EEF98A;
IL2CPP_EXTERN_C String_t* _stringLiteralDC6DB0F61DFE06BCE008FEC4E4C2205DE43D6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralE398F5AD533C7DA3CB3D37C599AF032BDD9AC508;
IL2CPP_EXTERN_C String_t* _stringLiteralFB8BB6CA6D6EB18FD74054203015508AF185E560;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF992D19FF529450D5ED419FE086199E49C1907;
IL2CPP_EXTERN_C String_t* _stringLiteralFD7E19C68F2D493CD0FF861272B95B93B54E1D33;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m033BC28EFDE3A40850EF85326F92C84016CA77BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrimExcess_m3B1F58F2A3CE7F4FA8E4C24A520CA3E858DFBB3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrimExcess_mC47BED4537BB5A0EEE34E9737895529305153DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17389E68D56688407FA6BA8B99CB808D3629DCD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSearchConeColorToDetectedU3Ed__49_System_Collections_IEnumerator_Reset_m17D499819D05A4EF9E8C7D3C72D500F926C24D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSearchConeColorToNeutralU3Ed__50_System_Collections_IEnumerator_Reset_mEEFE04B2CC751D32553C48BFAFF89D64035499D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotateSearchConeU3Ed__68_System_Collections_IEnumerator_Reset_m82B08D6D865D272603A2B7A63CCEFD0E1F860C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mDD8D5454221B08A5AC1169EFED1CF8B0D15545AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<SearchRaycastHolder>
struct List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SearchRaycastHolderU5BU5D_t9EF364D38EED1059CEF1DDD52AEFF5E2326FCF3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SearchRaycastHolderU5BU5D_t9EF364D38EED1059CEF1DDD52AEFF5E2326FCF3F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// ES3Writer
struct ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402  : public RuntimeObject
{
	// ES3Settings ES3Writer::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Collections.Generic.HashSet`1<System.String> ES3Writer::keysToDelete
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___keysToDelete_1;
	// System.Boolean ES3Writer::writeHeaderAndFooter
	bool ___writeHeaderAndFooter_2;
	// System.Boolean ES3Writer::overwriteKeys
	bool ___overwriteKeys_3;
	// System.Int32 ES3Writer::serializationDepth
	int32_t ___serializationDepth_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXLoopScript EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>4__this
	ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* ___U3CU3E4__this_2;
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<effectPlayer>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CeffectPlayerU3E5__1_3;
};

// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXTarget/<Respawn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXTarget EpicToonFX.ETFXTarget/<Respawn>d__7::<>4__this
	ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* ___U3CU3E4__this_2;
};

// SearchCone/<RotateSearchCone>d__68
struct U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E  : public RuntimeObject
{
	// System.Int32 SearchCone/<RotateSearchCone>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SearchCone/<RotateSearchCone>d__68::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SearchCone SearchCone/<RotateSearchCone>d__68::<>4__this
	SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,UnityEngine.GameObject>
struct UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
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

// ES3Types.ES3Type_Quaternion
struct ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Quaternion::Instance
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ES3Types.ES3ArrayType
struct ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535  : public ES3CollectionType_t44F700ABD9762AA11192E0508699C23DBF3DE151
{
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TargetEvent
struct TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46  : public UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49
struct U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE  : public RuntimeObject
{
	// System.Int32 SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SearchConeImageHelpers SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::<>4__this
	SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* ___U3CU3E4__this_2;
	// UnityEngine.Color SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::<startCol>5__1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CstartColU3E5__1_3;
};

// SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50
struct U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42  : public RuntimeObject
{
	// System.Int32 SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SearchConeImageHelpers SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::<>4__this
	SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* ___U3CU3E4__this_2;
	// UnityEngine.Color SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::<startCol>5__1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CstartColU3E5__1_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3UserType_TransformArray
struct ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

struct ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3UserType_TransformArray::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3UserType_Transform
struct ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3UserType_Transform::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// DetectedTextOutput
struct DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text DetectedTextOutput::txtDetectedOut
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___txtDetectedOut_4;
	// System.Collections.Generic.List`1<System.String> DetectedTextOutput::listDetectors
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___listDetectors_5;
	// System.String DetectedTextOutput::detectedObj
	String_t* ___detectedObj_6;
};

// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXButtonScript::Button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Button_4;
	// UnityEngine.UI.Text EpicToonFX.ETFXButtonScript::MyButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MyButtonText_5;
	// System.String EpicToonFX.ETFXButtonScript::projectileParticleName
	String_t* ___projectileParticleName_6;
	// EpicToonFX.ETFXFireProjectile EpicToonFX.ETFXButtonScript::effectScript
	ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* ___effectScript_7;
	// ETFXProjectileScript EpicToonFX.ETFXButtonScript::projectileScript
	ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* ___projectileScript_8;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsX
	float ___buttonsX_9;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsY
	float ___buttonsY_10;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeX
	float ___buttonsSizeX_11;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeY
	float ___buttonsSizeY_12;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsDistance
	float ___buttonsDistance_13;
};

// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EpicToonFX.ETFXFireProjectile::projectiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___projectiles_4;
	// UnityEngine.Transform EpicToonFX.ETFXFireProjectile::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_5;
	// System.Int32 EpicToonFX.ETFXFireProjectile::currentProjectile
	int32_t ___currentProjectile_6;
	// System.Single EpicToonFX.ETFXFireProjectile::speed
	float ___speed_7;
	// EpicToonFX.ETFXButtonScript EpicToonFX.ETFXFireProjectile::selectedProjectileButton
	ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* ___selectedProjectileButton_8;
	// UnityEngine.RaycastHit EpicToonFX.ETFXFireProjectile::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
};

// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXLightFade::life
	float ___life_4;
	// System.Boolean EpicToonFX.ETFXLightFade::killAfterLife
	bool ___killAfterLife_5;
	// UnityEngine.Light EpicToonFX.ETFXLightFade::li
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___li_6;
	// System.Single EpicToonFX.ETFXLightFade::initIntensity
	float ___initIntensity_7;
};

// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript::chosenEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chosenEffect_4;
	// System.Single EpicToonFX.ETFXLoopScript::loopTimeLimit
	float ___loopTimeLimit_5;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutLight
	bool ___spawnWithoutLight_6;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutSound
	bool ___spawnWithoutSound_7;
};

// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EpicToonFX.ETFXMouseOrbit::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single EpicToonFX.ETFXMouseOrbit::distance
	float ___distance_5;
	// System.Single EpicToonFX.ETFXMouseOrbit::xSpeed
	float ___xSpeed_6;
	// System.Single EpicToonFX.ETFXMouseOrbit::ySpeed
	float ___ySpeed_7;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMinLimit
	float ___yMinLimit_8;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMin
	float ___distanceMin_10;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMax
	float ___distanceMax_11;
	// System.Single EpicToonFX.ETFXMouseOrbit::smoothTime
	float ___smoothTime_12;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationYAxis
	float ___rotationYAxis_13;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationXAxis
	float ___rotationXAxis_14;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityX
	float ___velocityX_15;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityY
	float ___velocityY_16;
};

// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXPitchRandomizer::randomPercent
	float ___randomPercent_4;
};

// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ETFXProjectileScript::impactParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactParticle_4;
	// UnityEngine.GameObject ETFXProjectileScript::projectileParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileParticle_5;
	// UnityEngine.GameObject ETFXProjectileScript::muzzleParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleParticle_6;
	// System.Single ETFXProjectileScript::colliderRadius
	float ___colliderRadius_7;
	// System.Single ETFXProjectileScript::collideOffset
	float ___collideOffset_8;
};

// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 EpicToonFX.ETFXRotation::rotateVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateVector_4;
	// EpicToonFX.ETFXRotation/spaceEnum EpicToonFX.ETFXRotation::rotateSpace
	int32_t ___rotateSpace_5;
};

// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::hitParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitParticle_4;
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::respawnParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___respawnParticle_5;
	// UnityEngine.Renderer EpicToonFX.ETFXTarget::targetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___targetRenderer_6;
	// UnityEngine.Collider EpicToonFX.ETFXTarget::targetCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___targetCollider_7;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MenuManager::m_animationPropertyName
	String_t* ___m_animationPropertyName_4;
	// UnityEngine.GameObject MenuManager::m_initialScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_initialScreen_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MenuManager::m_navigationHistory
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_navigationHistory_6;
};

// PlayerPlaneController
struct PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D PlayerPlaneController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_4;
	// System.Single PlayerPlaneController::impulseMultiplicator
	float ___impulseMultiplicator_5;
	// UnityEngine.Vector2 PlayerPlaneController::impulseVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___impulseVector_6;
};

// PlayerTopDownController
struct PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D PlayerTopDownController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_4;
	// System.Single PlayerTopDownController::movementSpeedMultiplicator
	float ___movementSpeedMultiplicator_5;
	// UnityEngine.Vector2 PlayerTopDownController::movementVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movementVector_6;
};

// SearchCone
struct SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SearchCone::_isReady
	bool ____isReady_4;
	// System.Single SearchCone::_searchRotationAngle
	float ____searchRotationAngle_5;
	// System.Boolean SearchCone::evaluateChanges
	bool ___evaluateChanges_6;
	// UnityEngine.GameObject SearchCone::goSearchCone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goSearchCone_7;
	// System.Int32 SearchCone::searchConeAngle
	int32_t ___searchConeAngle_8;
	// System.Int32 SearchCone::searchConeSize
	int32_t ___searchConeSize_9;
	// System.Single SearchCone::searchConeStartRotationAngle
	float ___searchConeStartRotationAngle_10;
	// System.Boolean SearchCone::useSearchConeSweep
	bool ___useSearchConeSweep_11;
	// System.Single SearchCone::searchConeSweepAngle
	float ___searchConeSweepAngle_12;
	// System.Single SearchCone::searchConeSweepTime
	float ___searchConeSweepTime_13;
	// System.Boolean SearchCone::stopSearchConeSweepOnDetection
	bool ___stopSearchConeSweepOnDetection_14;
	// System.Boolean SearchCone::displaySearchCone
	bool ___displaySearchCone_15;
	// System.Boolean SearchCone::useColorChangeOnDetection
	bool ___useColorChangeOnDetection_16;
	// UnityEngine.Color SearchCone::colNeutral
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colNeutral_17;
	// UnityEngine.Color SearchCone::colDetected
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colDetected_18;
	// System.Single SearchCone::colChangeTime
	float ___colChangeTime_19;
	// System.Boolean SearchCone::useCustomSearchConeSprites
	bool ___useCustomSearchConeSprites_20;
	// UnityEngine.Sprite SearchCone::spriteNeutral
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteNeutral_21;
	// UnityEngine.Sprite SearchCone::spriteDetected
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteDetected_22;
	// System.String[] SearchCone::tagsToDetect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tagsToDetect_23;
	// System.Int32[] SearchCone::raycastIncludedLayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___raycastIncludedLayers_24;
	// System.Single SearchCone::detectionInterval
	float ___detectionInterval_25;
	// System.Int32 SearchCone::raycastDensity
	int32_t ___raycastDensity_26;
	// System.Boolean SearchCone::searchFromOutsideIn
	bool ___searchFromOutsideIn_27;
	// System.Boolean SearchCone::showDebugRays
	bool ___showDebugRays_28;
	// TargetEvent SearchCone::OnTargetDetected
	TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* ___OnTargetDetected_29;
	// TargetEvent SearchCone::OnTargetLost
	TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* ___OnTargetLost_30;
	// SearchConeImageHelpers SearchCone::searchConeImg
	SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* ___searchConeImg_31;
	// UnityEngine.RectTransform SearchCone::rectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTrans_32;
	// UnityEngine.CircleCollider2D SearchCone::circleColl
	CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ___circleColl_33;
	// System.Int32 SearchCone::_searchConeAngle
	int32_t ____searchConeAngle_34;
	// System.Int32 SearchCone::_searchConeSize
	int32_t ____searchConeSize_35;
	// System.Single SearchCone::_searchConeStartRotationAngle
	float ____searchConeStartRotationAngle_36;
	// System.Boolean SearchCone::_useSearchConeSweep
	bool ____useSearchConeSweep_37;
	// System.Single SearchCone::_searchConeSweepAngle
	float ____searchConeSweepAngle_38;
	// System.Single SearchCone::_searchConeSweepTime
	float ____searchConeSweepTime_39;
	// System.Boolean SearchCone::_stopSearchConeSweepOnDetection
	bool ____stopSearchConeSweepOnDetection_40;
	// System.Boolean SearchCone::_displaySearchCone
	bool ____displaySearchCone_41;
	// System.Boolean SearchCone::_useColorChangeOnDetection
	bool ____useColorChangeOnDetection_42;
	// UnityEngine.Color SearchCone::_colNeutral
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colNeutral_43;
	// UnityEngine.Color SearchCone::_colDetected
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colDetected_44;
	// System.Single SearchCone::_colChangeTime
	float ____colChangeTime_45;
	// System.Boolean SearchCone::_useCustomSearchConeSprites
	bool ____useCustomSearchConeSprites_46;
	// UnityEngine.Sprite SearchCone::_spriteNeutral
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____spriteNeutral_47;
	// UnityEngine.Sprite SearchCone::_spriteDetected
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____spriteDetected_48;
	// System.String[] SearchCone::_tagsToDetect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____tagsToDetect_49;
	// System.Int32[] SearchCone::_raycastIncludedLayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____raycastIncludedLayers_50;
	// System.Single SearchCone::_detectionInterval
	float ____detectionInterval_51;
	// System.Int32 SearchCone::_raycastDensity
	int32_t ____raycastDensity_52;
	// System.Boolean SearchCone::_searchFromOutsideIn
	bool ____searchFromOutsideIn_53;
	// System.Boolean SearchCone::_showDebugRays
	bool ____showDebugRays_54;
	// System.Boolean SearchCone::objectEnteredDetectionArea
	bool ___objectEnteredDetectionArea_55;
	// System.Boolean SearchCone::objectWasDetected
	bool ___objectWasDetected_56;
	// System.Boolean SearchCone::searchConeRotationActive
	bool ___searchConeRotationActive_57;
	// System.Boolean SearchCone::searchConeRotationPaused
	bool ___searchConeRotationPaused_58;
	// System.Single SearchCone::sweepRotationTime
	float ___sweepRotationTime_59;
	// UnityEngine.Vector3 SearchCone::rotVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotVector_60;
	// UnityEngine.Coroutine SearchCone::coroutineSearchConeRotation
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutineSearchConeRotation_61;
};

// SearchConeImageHelpers
struct SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SearchConeImageHelpers::_lastDetectedGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____lastDetectedGO_4;
	// System.Boolean SearchConeImageHelpers::_targetDetected
	bool ____targetDetected_5;
	// UnityEngine.GameObject SearchConeImageHelpers::searchRaycastHolderPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___searchRaycastHolderPrefab_6;
	// UnityEngine.Transform SearchConeImageHelpers::raycastOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___raycastOrigin_7;
	// UnityEngine.UI.Image SearchConeImageHelpers::imgSearchCone
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgSearchCone_8;
	// UnityEngine.RectTransform SearchConeImageHelpers::rectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTrans_9;
	// System.Int32 SearchConeImageHelpers::searchConeAngle
	int32_t ___searchConeAngle_10;
	// System.Int32 SearchConeImageHelpers::searchConeSize
	int32_t ___searchConeSize_11;
	// System.Boolean SearchConeImageHelpers::displaySearchCone
	bool ___displaySearchCone_12;
	// System.Boolean SearchConeImageHelpers::useColorChangeOnDetection
	bool ___useColorChangeOnDetection_13;
	// UnityEngine.Color SearchConeImageHelpers::colNeutral
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colNeutral_14;
	// UnityEngine.Color SearchConeImageHelpers::colDetectd
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colDetectd_15;
	// System.Single SearchConeImageHelpers::colChangeTime
	float ___colChangeTime_16;
	// System.Boolean SearchConeImageHelpers::useCustomSearchConeSprites
	bool ___useCustomSearchConeSprites_17;
	// UnityEngine.Sprite SearchConeImageHelpers::spriteNeutral
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteNeutral_18;
	// UnityEngine.Sprite SearchConeImageHelpers::spriteDetected
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteDetected_19;
	// System.String[] SearchConeImageHelpers::tagsToDetect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tagsToDetect_20;
	// System.Int32[] SearchConeImageHelpers::raycastIncludedLayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___raycastIncludedLayers_21;
	// System.Single SearchConeImageHelpers::detectionInterval
	float ___detectionInterval_22;
	// System.Int32 SearchConeImageHelpers::raycastDensity
	int32_t ___raycastDensity_23;
	// System.Boolean SearchConeImageHelpers::searchFromOutsideIn
	bool ___searchFromOutsideIn_24;
	// System.Boolean SearchConeImageHelpers::showDebugRays
	bool ___showDebugRays_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SearchConeImageHelpers::listDetectors
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___listDetectors_26;
	// System.Collections.Generic.List`1<SearchRaycastHolder> SearchConeImageHelpers::listRaycastHolders
	List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* ___listRaycastHolders_27;
	// UnityEngine.LayerMask SearchConeImageHelpers::includedLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___includedLayerMask_28;
	// System.Single SearchConeImageHelpers::nextRaycastTime
	float ___nextRaycastTime_29;
	// System.Single SearchConeImageHelpers::raycastLength
	float ___raycastLength_30;
	// System.Single SearchConeImageHelpers::colorFadeTime
	float ___colorFadeTime_31;
	// UnityEngine.Color SearchConeImageHelpers::colFade
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colFade_32;
	// System.Boolean SearchConeImageHelpers::detectionActive
	bool ___detectionActive_33;
	// System.Boolean SearchConeImageHelpers::isInCreation
	bool ___isInCreation_34;
	// UnityEngine.Coroutine SearchConeImageHelpers::coroutineFadeSearchConeToDetected
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutineFadeSearchConeToDetected_35;
	// UnityEngine.Coroutine SearchConeImageHelpers::coroutineFadeSearchConeToNeutral
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutineFadeSearchConeToNeutral_36;
};

// SearchHeadRotator
struct SearchHeadRotator_tFDA975EB54879E8A7331804CB36CDA6742739EFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SearchCone SearchHeadRotator::searchCone
	SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* ___searchCone_4;
	// UnityEngine.Vector3 SearchHeadRotator::rotVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotVector_5;
	// System.Single SearchHeadRotator::startRotationAngle
	float ___startRotationAngle_6;
};

// SearchRaycastHolder
struct SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SearchRaycastHolder::_lineOfSightDirection
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____lineOfSightDirection_4;
	// System.Boolean SearchRaycastHolder::hasHitTarget
	bool ___hasHitTarget_5;
};

// StopSentryAnimation
struct StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator StopSentryAnimation::animSentry
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animSentry_4;
	// System.Single StopSentryAnimation::animationSpeed
	float ___animationSpeed_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void DetectedTextOutput::fnc_updateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput_fnc_updateText_m8AF3CA3CEEE15F4126153B238609963741F80206 (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single SearchCone::get_searchRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SearchCone_get_searchRotationAngle_mE349CDB9C5F0FC45B0BBFCB7BC448BEEF346816E (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,UnityEngine.GameObject>::.ctor()
inline void UnityEvent_2__ctor_mDD8D5454221B08A5AC1169EFED1CF8B0D15545AF (UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.CircleCollider2D::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52 (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SearchConeImageHelpers>()
inline SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SearchCone::fnc_checkForValueChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_checkForValueChanges_m7DD67C27DB4AB29D2B38B45794AAD9FDBA2737F4 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void SearchCone::fnc_checkForObjectDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_checkForObjectDetection_mA9E2F1E2733FA3F6432E75744EB7BDE34F306D9A (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setSearchConeAngle(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchConeAngle_m7AA6C602A88570700091F75259F8D787E1E87BD8 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inAngle0, bool ___inEavluateChanges1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setSearchConeSize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchConeSize_mBFBA22F40D674B839FC850B5749B31C7BDC34E65 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inSize0, bool ___inEavluateChanges1, const RuntimeMethod* method) ;
// System.Void SearchCone::fnc_startRotationSweep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_startRotationSweep_m9414A6B777E145304804E95EF9C56FCE4BD9CBF4 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// System.Void SearchCone::fnc_stopRotationSweep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_stopRotationSweep_mC4B57EAF707D5E3AF3BE0DA4FA79224AA8C01120 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setDisplaySearchCone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDisplaySearchCone_mDBC02A89CAF8D9ED4A1F7A6825BB2082C820177E (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inDisplaySearchCone0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setUseColorChangeOnDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setUseColorChangeOnDetection_mA5300A91744251F05B51922D0D361D9943E5DB41 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inUseColorChange0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setColNeutral(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColNeutral_mDD17A8F8520F3C2743951FD400922EAA04A7BF1E (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___inCol0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setColDetected(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColDetected_mBF14162F51B1E2EFC7317CCFFF449475CBBA056A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___inCol0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setColChangeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColChangeTime_m34D58DF3EC1DA3B66F3521E98F7A46F28C07FBD9 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, float ___inChangeTime0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setUseCustomSearchConeSprites(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setUseCustomSearchConeSprites_mC4B65BA727D6D9FEE64AFE68E3491298DB2E2F29 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inUse0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setSpriteNeutral(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSpriteNeutral_m622087062E8802B5B9D35BE23D4700B52D371A0D (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___inSprite0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setSpriteDetected(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSpriteDetected_m7E82A00AD62DE3BFAD0AEEB3068EEB144B8675E7 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___inSprite0, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setTagsToDetect(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setTagsToDetect_mE6BBEA679D3D37C3881C388A2E033EA43376822A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___inTagsToDetect0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.String>(T[]&,System.Int32)
inline void Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___array0, ___newSize1, method);
}
// System.Void SearchConeImageHelpers::fnc_setRaycastIncludedLayers(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setRaycastIncludedLayers_m04AB1718F9623690BC6C0BBFAF7532D370133133 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inRaycastIncludedLayers0, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___array0, ___newSize1, method);
}
// System.Void SearchConeImageHelpers::fnc_setDetectionInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDetectionInterval_m3A3B51594F1D637C647B7914C0BE268A7382ECA3 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, float ___inDetectionInterval0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setRaycastDensity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setRaycastDensity_mC83911AACA9EEBC6AFD4BE565CD44218BBA500CE (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inDensity0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setSearchFromOutsideIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchFromOutsideIn_m3E5463AC9C501ACFD7F9C1758720503D983E3B97 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inFromOutsideIn0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setShowDebugRays(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setShowDebugRays_mAA4B42777E201C5287DB8100AD702FEA62075336 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inShowDebugRays0, const RuntimeMethod* method) ;
// System.Void SearchCone/<RotateSearchCone>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateSearchConeU3Ed__68__ctor_mFF6EE24DCEABDE672FC7A1C8BC9056D1AB34D48B (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator SearchCone::RotateSearchCone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchCone_RotateSearchCone_m33AC6212BC20DB5C1F5EE8EE354158B32D7990EC (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Boolean SearchConeImageHelpers::get_targetDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject SearchConeImageHelpers::get_lastDetectedGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SearchConeImageHelpers_get_lastDetectedGO_mB328E5B70D00B73AEEFD4F4F3CE8AB50E19DB923 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,UnityEngine.GameObject>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF (UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg00, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t1B86B884160240F62EF41197FB2A78FF9EBB8E1F*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_setDetectionActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDetectionActive_m8D05F6C96DE4F6D75615A314734BC2F3E210292B (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inIsActive0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void TargetEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetEvent__ctor_m97514B4D20FC76FA67D8ED4D4AD088859FA5B7C7 (TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SearchCone::set_searchRotationAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_set_searchRotationAngle_mAF42CF7A9F5FA67DFC488198FE313DB16AFA76D2 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillMethod_m5361D29BA950BEFE72E7270AC3BFA0B00AE7E294 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillOrigin_m2D89BA820DABB26123A33059CA266212E7970B4E (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillClockwise_mB5DBAFC66370F906EA2CC1D49D49FCC366B64646 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SearchRaycastHolder>()
inline SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_displayDebugRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_displayDebugRays_mFC678F0CFF78970DC0C4CFF1DCA0151FEB63BA70 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_checkForRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_checkForRaycastHit_mBB2A5C5987B2D8B9D8D985EE9B92570FC4D36D31 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void SearchRaycastHolder::fnc_destroyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_destroyObject_mCDF3DB7B3A6EEABFF0BAB708349D1CFCB6DB4141 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
inline void List_1_TrimExcess_m3B1F58F2A3CE7F4FA8E4C24A520CA3E858DFBB3E (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SearchRaycastHolder>::Clear()
inline void List_1_Clear_m033BC28EFDE3A40850EF85326F92C84016CA77BC_inline (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SearchRaycastHolder>::TrimExcess()
inline void List_1_TrimExcess_mC47BED4537BB5A0EEE34E9737895529305153DDD (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, const RuntimeMethod*))List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SearchRaycastHolder>::Add(T)
inline void List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_inline (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<SearchRaycastHolder>::get_Count()
inline int32_t List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<SearchRaycastHolder>::get_Item(System.Int32)
inline SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24 (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void SearchRaycastHolder::fnc_drawDebugRay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_drawDebugRay_mCC77AF922239956D72C36B6D3304D81DB7FD13F1 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, float ___inDisplayFor0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Transform SearchRaycastHolder::get_lineOfSightDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void SearchRaycastHolder::fnc_setHitState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_setHitState_m83D2C052C5275323FA3A5D1211F87B30F48A80A9 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, bool ___inHasHit0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::set_lastDetectedGO(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_set_lastDetectedGO_mE3E253C6EAAE54AC775C09DB51D8FB960935537B (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::set_targetDetected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_set_targetDetected_mD8CDEAD6B65ADC89AB5B5C29C7C8512B01620265 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_fadeToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_fadeToDetected_m8964623BAF705109683E58023B6DCB92179B1322 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_changeSpriteToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_changeSpriteToDetected_mEA77B00ACE28847CD638931DE35EFA3C82225FB2 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_fadeToUndetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_fadeToUndetected_m347DCBA6228EAA0A43AF1140CE0BED6D994037ED (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_changeSpriteToUndetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_changeSpriteToUndetected_mD13E7D01BF7933AD54C7A6D7115F2E86DD9B006F (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SearchConeImageHelpers::FadeSearchConeColorToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchConeImageHelpers_FadeSearchConeColorToDetected_m3489CE9EE44C3DE8B11C0F1167FE225EE0A0B5C4 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SearchConeImageHelpers::FadeSearchConeColorToNeutral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchConeImageHelpers_FadeSearchConeColorToNeutral_m748FD183DD442C137C958BEB934987547857692C (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToDetectedU3Ed__49__ctor_mBC75949BB1471084B7CA685670552C634753C8A2 (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToNeutralU3Ed__50__ctor_mAFC5864538B5EF180C050EFE33CA2E349331E1C4 (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void SearchConeImageHelpers::fnc_createDetectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_createDetectors_m80E86C9D308F9F02D834F6112F7F5E44FFEE578A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SearchRaycastHolder>::.ctor()
inline void List_1__ctor_m17389E68D56688407FA6BA8B99CB808D3629DCD4 (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void MenuManager::Animate(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, bool ___direction1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_overrideSorting_m155D936A457E7935683894150A0E5DBED2170F54 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_sortingOrder_m70D89DB61A3C0589C0FAB525E613DE9D0C799AAC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXFireProjectile>()
inline ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ETFXProjectileScript>()
inline ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXButtonScript>()
inline ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3ComponentType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ComponentType__ctor_m7FA59B12B3D19ED10A3C26C644D95150B82C93C6 (ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3ArrayType::.ctor(System.Type,ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ArrayType__ctor_mF040194430AE308C5CF11EFAEF6BC9F4334B9085 (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* __this, Type_t* ___type0, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___elementType1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DetectedTextOutput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput_Awake_m9514A7C838F7F7378EB18104233BB28BD64C7F72 (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59D15FB875824B42FB29E0473002A89344F9248);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(txtDetectedOut == null){
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___txtDetectedOut_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("DetectedTextOutput: No textfield for the output of the detected text was set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB59D15FB875824B42FB29E0473002A89344F9248, NULL);
		// return;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void DetectedTextOutput::fnc_detected(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput_fnc_detected_mEB8B61298E2206DE95D30DDAE21B1D2FC1870273 (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectorGO0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectedGO1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(!listDetectors.Contains(inDetectorGO.name)){
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___listDetectors_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___inDetectorGO0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_2, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// listDetectors.Add(inDetectorGO.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___listDetectors_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___inDetectorGO0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_002d:
	{
		// detectedObj = inDetectedGO.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___inDetectedGO1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		__this->___detectedObj_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___detectedObj_6), (void*)L_9);
		// fnc_updateText();
		DetectedTextOutput_fnc_updateText_m8AF3CA3CEEE15F4126153B238609963741F80206(__this, NULL);
		// }
		return;
	}
}
// System.Void DetectedTextOutput::fnc_removedDetected(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput_fnc_removedDetected_mA4BBF1F0CA7AF5D7A1F82FD5DE6A16E29019751F (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectorGO0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectedGO1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(listDetectors.Contains(inDetectorGO.name)){
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___listDetectors_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___inDetectorGO0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_2, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// listDetectors.Remove(inDetectorGO.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___listDetectors_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___inDetectorGO0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_5, L_7, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
	}

IL_002a:
	{
		// fnc_updateText();
		DetectedTextOutput_fnc_updateText_m8AF3CA3CEEE15F4126153B238609963741F80206(__this, NULL);
		// }
		return;
	}
}
// System.Void DetectedTextOutput::fnc_updateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput_fnc_updateText_m8AF3CA3CEEE15F4126153B238609963741F80206 (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF20B7FA0252D0EE5B17766552AD69D948EEF98A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if(txtDetectedOut != null){
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___txtDetectedOut_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b0;
		}
	}
	{
		// if(listDetectors.Count > 0){
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___listDetectors_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_3, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_009c;
		}
	}
	{
		// string textOut = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_6;
		// for(int i = 0; i < listDetectors.Count; i++){
		V_3 = 0;
		goto IL_0078;
	}

IL_0032:
	{
		// textOut += "Detected " + detectedObj + " by " + listDetectors[i] + System.Environment.NewLine;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12 = __this->___detectedObj_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralCF20B7FA0252D0EE5B17766552AD69D948EEF98A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralCF20B7FA0252D0EE5B17766552AD69D948EEF98A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->___listDetectors_5;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, L_16, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_14;
		String_t* L_19;
		L_19 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		V_2 = L_20;
		// for(int i = 0; i < listDetectors.Count; i++){
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0078:
	{
		// for(int i = 0; i < listDetectors.Count; i++){
		int32_t L_22 = V_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = __this->___listDetectors_5;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_23, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		// txtDetectedOut.text = textOut;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_26 = __this->___txtDetectedOut_4;
		String_t* L_27 = V_2;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_27);
		goto IL_00af;
	}

IL_009c:
	{
		// txtDetectedOut.text = string.Empty;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28 = __this->___txtDetectedOut_4;
		String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_29);
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void DetectedTextOutput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectedTextOutput__ctor_m2F70B7D8FF1D5BEDF6706C6F63E4783240EB2BFA (DetectedTextOutput_tAA586C7B00E890F9E0C39D4C9DCA2E6B021DF28A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TMP_Text txtDetectedOut = null;
		__this->___txtDetectedOut_4 = (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___txtDetectedOut_4), (void*)(TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)NULL);
		// private List<string> listDetectors = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___listDetectors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listDetectors_5), (void*)L_0);
		// private string detectedObj = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___detectedObj_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___detectedObj_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerPlaneController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPlaneController_Awake_m9498CE08890C149B6BF7738B6EFD2C83E20D28CD (PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE398F5AD533C7DA3CB3D37C599AF032BDD9AC508);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___rb_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_1);
		// if(rb == null){
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("PlayerPlaneController: No rigidBody2D was found on the gameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE398F5AD533C7DA3CB3D37C599AF032BDD9AC508, NULL);
		// return;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void PlayerPlaneController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPlaneController_Update_mEA8CDB011F6CC8A0D7FA61A941811D582E5F7EBB (PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if(Input.GetAxis("Vertical") != 0.0f || Input.GetAxis("Horizontal") != 0.0f){
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// impulseVector.x = Input.GetAxis("Horizontal") * impulseMultiplicator;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___impulseVector_6);
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_5 = __this->___impulseMultiplicator_5;
		L_3->___x_0 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// impulseVector.y = Input.GetAxis("Vertical") * impulseMultiplicator;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___impulseVector_6);
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_8 = __this->___impulseMultiplicator_5;
		L_6->___y_1 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		goto IL_0076;
	}

IL_0069:
	{
		// impulseVector = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___impulseVector_6 = L_9;
	}

IL_0076:
	{
		// if(rb.velocity.x >= 0){
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10 = __this->___rb_4;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_10, NULL);
		float L_12 = L_11.___x_0;
		V_1 = (bool)((((int32_t)((!(((float)L_12) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		// gameObject.transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
		goto IL_00e4;
	}

IL_00bd:
	{
		// gameObject.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void PlayerPlaneController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPlaneController_FixedUpdate_m214123BED95037C0C92E28FF8DB024B2A50BD43A (PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(impulseVector != Vector2.zero){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___impulseVector_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// rb.AddForce(impulseVector);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___impulseVector_6;
		NullCheck(L_4);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void PlayerPlaneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPlaneController__ctor_m4A7FB056CC71ED5E01F52F9AB7E556414E6193AE (PlayerPlaneController_tB37F31523D5F6E5A962578FE49846B702C83BE9C* __this, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D rb = null;
		__this->___rb_4 = (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)(Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)NULL);
		// private float impulseMultiplicator = 150.0f;
		__this->___impulseMultiplicator_5 = (150.0f);
		// private Vector2 impulseVector = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___impulseVector_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerTopDownController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTopDownController_Awake_m14F5ED5FF4D49791CA672F41568305E1045A9353 (PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70A465AF0832829FEA07A871F198BE82FFEB4372);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___rb_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_1);
		// if(rb == null){
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("PlayerTopDownController: No rigidBody2D was found on the gameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral70A465AF0832829FEA07A871F198BE82FFEB4372, NULL);
		// return;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void PlayerTopDownController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTopDownController_Update_m0A3C20B48926A6D7DC9E6E604BD18FA8197F50D4 (PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if(Input.GetAxis("Vertical") != 0.0f || Input.GetAxis("Horizontal") != 0.0f){
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// movementVector.x = Input.GetAxis("Horizontal") * movementSpeedMultiplicator;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___movementVector_6);
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_5 = __this->___movementSpeedMultiplicator_5;
		L_3->___x_0 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// movementVector.y = Input.GetAxis("Vertical") * movementSpeedMultiplicator;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___movementVector_6);
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_8 = __this->___movementSpeedMultiplicator_5;
		L_6->___y_1 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		goto IL_0076;
	}

IL_0069:
	{
		// movementVector = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___movementVector_6 = L_9;
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void PlayerTopDownController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTopDownController_FixedUpdate_mA029F4A5151EAA13E4B00FD1F04BF0E646C6504B (PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// rb.velocity = movementVector;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___movementVector_6;
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_1, NULL);
		// if(movementVector != Vector2.zero){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___movementVector_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		// float sign = 0.0f;
		V_1 = (0.0f);
		// if(Vector2.Dot(movementVector, Vector2.right) > 0.0f){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___movementVector_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		float L_8;
		L_8 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_6, L_7, NULL);
		V_2 = (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// sign = -1.0f;
		V_1 = (-1.0f);
		goto IL_005b;
	}

IL_0053:
	{
		// sign = 1.0f;
		V_1 = (1.0f);
	}

IL_005b:
	{
		// gameObject.transform.rotation = Quaternion.Euler(0.0f,
		//     0.0f, sign * Vector2.Angle(Vector2.up, movementVector));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		float L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = __this->___movementVector_6;
		float L_15;
		L_15 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_13, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_12, L_15)), NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_16, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void PlayerTopDownController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTopDownController__ctor_mEC08F6296CB70129E87AF02ABDB242AC48E60BD4 (PlayerTopDownController_t8B9EDA764854946EBD2882A0B0A7E94400347D48* __this, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D rb = null;
		__this->___rb_4 = (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)(Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)NULL);
		// private float movementSpeedMultiplicator = 50.0f;
		__this->___movementSpeedMultiplicator_5 = (50.0f);
		// private Vector2 movementVector = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___movementVector_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StopSentryAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSentryAnimation_Awake_mF9304E66A8A1470DD68C26B1565005D6B988B0D6 (StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD7E19C68F2D493CD0FF861272B95B93B54E1D33);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// animSentry = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animSentry_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animSentry_4), (void*)L_1);
		// if(animSentry == null){
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animSentry_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.Log("StopSentryAnimation: No animator was found on the gameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFD7E19C68F2D493CD0FF861272B95B93B54E1D33, NULL);
		// return;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void StopSentryAnimation::fnc_foundTarget(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSentryAnimation_fnc_foundTarget_m978088C62703AA24677CA5CA74545CF54ADD2965 (StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectorGO0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectedGO1, const RuntimeMethod* method) 
{
	{
		// animationSpeed = animSentry.speed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animSentry_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2(L_0, NULL);
		__this->___animationSpeed_5 = L_1;
		// animSentry.speed = 0.0f;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animSentry_4;
		NullCheck(L_2);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_2, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void StopSentryAnimation::fnc_lostTarget(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSentryAnimation_fnc_lostTarget_mB8D387B14502D090336D5909A0C849B785419A74 (StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectorGO0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inDetectedGO1, const RuntimeMethod* method) 
{
	{
		// animSentry.speed = animationSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animSentry_4;
		float L_1 = __this->___animationSpeed_5;
		NullCheck(L_0);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StopSentryAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSentryAnimation__ctor_m0204B2EAF2DB679DD3FAC0BD1BA43E63F3640E95 (StopSentryAnimation_t6308526E01DFCC5F79CDD5CD8D2832196C7568BF* __this, const RuntimeMethod* method) 
{
	{
		// private Animator animSentry = null;
		__this->___animSentry_4 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animSentry_4), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// private float animationSpeed = 1.0f;
		__this->___animationSpeed_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SearchHeadRotator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchHeadRotator_Awake_mC37ABE161C4663D851A8A24E1234BE693FEACE23 (SearchHeadRotator_tFDA975EB54879E8A7331804CB36CDA6742739EFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCF992D19FF529450D5ED419FE086199E49C1907);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(searchCone == null){
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_0 = __this->___searchCone_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("SearchHeadRotator: No SearchCone was set in the inspector. Please fix this.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFCF992D19FF529450D5ED419FE086199E49C1907, NULL);
		// return;
		goto IL_0046;
	}

IL_001f:
	{
		// rotVector = gameObject.transform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_4, NULL);
		__this->___rotVector_5 = L_5;
		// startRotationAngle = rotVector.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___rotVector_5);
		float L_7 = L_6->___z_4;
		__this->___startRotationAngle_6 = L_7;
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void SearchHeadRotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchHeadRotator_Update_m7AFA2D019ABD04DE2217016D1ED6A746318FB7FE (SearchHeadRotator_tFDA975EB54879E8A7331804CB36CDA6742739EFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(searchCone != null){
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_0 = __this->___searchCone_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// if(searchCone.useSearchConeSweep){
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_3 = __this->___searchCone_4;
		NullCheck(L_3);
		bool L_4 = L_3->___useSearchConeSweep_11;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		// rotVector.z = startRotationAngle + searchCone.searchRotationAngle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___rotVector_5);
		float L_7 = __this->___startRotationAngle_6;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_8 = __this->___searchCone_4;
		NullCheck(L_8);
		float L_9;
		L_9 = SearchCone_get_searchRotationAngle_mE349CDB9C5F0FC45B0BBFCB7BC448BEEF346816E(L_8, NULL);
		L_6->___z_4 = ((float)il2cpp_codegen_add(L_7, L_9));
		// gameObject.transform.localEulerAngles = rotVector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___rotVector_5;
		NullCheck(L_11);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_12, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void SearchHeadRotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchHeadRotator__ctor_mF898EC4ED2086F5E22B0D00F5E84481ADDD5125E (SearchHeadRotator_tFDA975EB54879E8A7331804CB36CDA6742739EFE* __this, const RuntimeMethod* method) 
{
	{
		// private SearchCone searchCone = null;
		__this->___searchCone_4 = (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchCone_4), (void*)(SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E*)NULL);
		// private Vector3 rotVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___rotVector_5 = L_0;
		// private float startRotationAngle = 0.0f;
		__this->___startRotationAngle_6 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TargetEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetEvent__ctor_m97514B4D20FC76FA67D8ED4D4AD088859FA5B7C7 (TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mDD8D5454221B08A5AC1169EFED1CF8B0D15545AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mDD8D5454221B08A5AC1169EFED1CF8B0D15545AF(__this, UnityEvent_2__ctor_mDD8D5454221B08A5AC1169EFED1CF8B0D15545AF_RuntimeMethod_var);
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
// System.Boolean SearchCone::get_isReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchCone_get_isReady_m9D5B8960FBAB747624D7541CB6BDCE6EFFC10E9E (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool isReady {get {return _isReady;} private set {_isReady = value;}}
		bool L_0 = __this->____isReady_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool isReady {get {return _isReady;} private set {_isReady = value;}}
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SearchCone::set_isReady(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_set_isReady_mC4F17428C4225C3A3FB10D101025643C82A55AE4 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isReady {get {return _isReady;} private set {_isReady = value;}}
		bool L_0 = ___value0;
		__this->____isReady_4 = L_0;
		// public bool isReady {get {return _isReady;} private set {_isReady = value;}}
		return;
	}
}
// System.Single SearchCone::get_searchRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SearchCone_get_searchRotationAngle_mE349CDB9C5F0FC45B0BBFCB7BC448BEEF346816E (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float searchRotationAngle {get {return _searchRotationAngle;} private set {_searchRotationAngle = value;}}
		float L_0 = __this->____searchRotationAngle_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float searchRotationAngle {get {return _searchRotationAngle;} private set {_searchRotationAngle = value;}}
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SearchCone::set_searchRotationAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_set_searchRotationAngle_mAF42CF7A9F5FA67DFC488198FE313DB16AFA76D2 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float searchRotationAngle {get {return _searchRotationAngle;} private set {_searchRotationAngle = value;}}
		float L_0 = ___value0;
		__this->____searchRotationAngle_5 = L_0;
		// public float searchRotationAngle {get {return _searchRotationAngle;} private set {_searchRotationAngle = value;}}
		return;
	}
}
// System.Void SearchCone::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_Awake_mFA598B4B6035749C1EC8F619703995F402F0D4A5 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597C0E5E0AD6606225673975CF28CAE66EA15D6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC156810E6BF84447CAB5100A18DA58318F9BD7B8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// rectTrans = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___rectTrans_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTrans_32), (void*)L_1);
		// if(rectTrans == null){
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___rectTrans_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("SearchCone: No rectTransform was found on this object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC156810E6BF84447CAB5100A18DA58318F9BD7B8, NULL);
		// return;
		goto IL_0070;
	}

IL_0030:
	{
		// circleColl = gameObject.GetComponent<CircleCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_6;
		L_6 = GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D(L_5, GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		__this->___circleColl_33 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___circleColl_33), (void*)L_6);
		// if(circleColl == null){
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_7 = __this->___circleColl_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.LogError("SearchCone: No CircleCollider2D was found on this object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral597C0E5E0AD6606225673975CF28CAE66EA15D6A, NULL);
		// return;
		goto IL_0070;
	}

IL_005f:
	{
		// circleColl.radius = 0.5f;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_10 = __this->___circleColl_33;
		NullCheck(L_10);
		CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52(L_10, (0.5f), NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void SearchCone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_Start_mC961EACB9B3C39F9EF0F6BABAD92359C894969B5 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C4DC013D81B50699EF47CB6C39B81B87EEF033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E6EECC26E2B37D818F64E661240B5160B8C0A61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A94196E05295CAB8E81FCED115DB2BC84F5B72);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// if(!evaluateChanges){
		bool L_0 = __this->___evaluateChanges_6;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// if(goSearchCone == null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___goSearchCone_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("SearchCone: No gameObject with the searchCone was set in the inspector.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC3A94196E05295CAB8E81FCED115DB2BC84F5B72, NULL);
		// return;
		goto IL_0100;
	}

IL_0030:
	{
		// if(searchConeImg == null){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_5 = __this->___searchConeImg_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// searchConeImg = goSearchCone.GetComponent<SearchConeImageHelpers>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___goSearchCone_7;
		NullCheck(L_8);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_9;
		L_9 = GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8(L_8, GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8_RuntimeMethod_var);
		__this->___searchConeImg_31 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchConeImg_31), (void*)L_9);
		// if(searchConeImg == null){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_10 = __this->___searchConeImg_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// Debug.Log("SearchCone: No SearchConeImageHelpers component was found on the searchCone gameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4E6EECC26E2B37D818F64E661240B5160B8C0A61, NULL);
		// return;
		goto IL_0100;
	}

IL_0075:
	{
	}

IL_0076:
	{
		// fnc_checkForValueChanges();
		SearchCone_fnc_checkForValueChanges_m7DD67C27DB4AB29D2B38B45794AAD9FDBA2737F4(__this, NULL);
	}

IL_007e:
	{
		// int layerNr = LayerMask.NameToLayer("Undetectable");
		int32_t L_13;
		L_13 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral34C4DC013D81B50699EF47CB6C39B81B87EEF033, NULL);
		V_0 = L_13;
		// if(layerNr > -1){
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_14) > ((int32_t)(-1)))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0100;
		}
	}
	{
		// if(gameObject.layer != layerNr){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_16, NULL);
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00ff;
		}
	}
	{
		// gameObject.layer = layerNr;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_20, L_21, NULL);
		// for(int i = 0; i < gameObject.transform.childCount; i++){
		V_7 = 0;
		goto IL_00e4;
	}

IL_00be:
	{
		// gameObject.transform.GetChild(i).gameObject.layer = layerNr;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		int32_t L_24 = V_7;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, L_24, NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_26, L_27, NULL);
		// for(int i = 0; i < gameObject.transform.childCount; i++){
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00e4:
	{
		// for(int i = 0; i < gameObject.transform.childCount; i++){
		int32_t L_29 = V_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_31, NULL);
		V_8 = (bool)((((int32_t)L_29) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_00be;
		}
	}
	{
	}

IL_00ff:
	{
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void SearchCone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_Update_mAD986F21BA7901B04434CCF74E9E7D4044A75FE0 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E6EECC26E2B37D818F64E661240B5160B8C0A61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A94196E05295CAB8E81FCED115DB2BC84F5B72);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if(goSearchCone == null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___goSearchCone_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("SearchCone: No gameObject with the searchCone was set in the inspector.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC3A94196E05295CAB8E81FCED115DB2BC84F5B72, NULL);
		// return;
		goto IL_007b;
	}

IL_001f:
	{
		// if(searchConeImg == null){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_3 = __this->___searchConeImg_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		// searchConeImg = goSearchCone.GetComponent<SearchConeImageHelpers>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___goSearchCone_7;
		NullCheck(L_6);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_7;
		L_7 = GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8(L_6, GameObject_GetComponent_TisSearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB_mEBC5FC8295B3A660F781B973A0750A3C6BCD3EA8_RuntimeMethod_var);
		__this->___searchConeImg_31 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchConeImg_31), (void*)L_7);
		// if(searchConeImg == null){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_8 = __this->___searchConeImg_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.Log("SearchCone: No SearchConeImageHelpers component was found on the searchCone gameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4E6EECC26E2B37D818F64E661240B5160B8C0A61, NULL);
		// return;
		goto IL_007b;
	}

IL_005f:
	{
		// return;
		goto IL_007b;
	}

IL_0061:
	{
		// if(evaluateChanges){
		bool L_11 = __this->___evaluateChanges_6;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// fnc_checkForValueChanges();
		SearchCone_fnc_checkForValueChanges_m7DD67C27DB4AB29D2B38B45794AAD9FDBA2737F4(__this, NULL);
	}

IL_0074:
	{
		// fnc_checkForObjectDetection();
		SearchCone_fnc_checkForObjectDetection_mA9E2F1E2733FA3F6432E75744EB7BDE34F306D9A(__this, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SearchCone::fnc_checkForValueChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_checkForValueChanges_m7DD67C27DB4AB29D2B38B45794AAD9FDBA2737F4 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C0F0A5C8C23F937AB68E43B571B505B014408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC6DB0F61DFE06BCE008FEC4E4C2205DE43D6B01);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
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
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	{
		// if(searchConeAngle != _searchConeAngle){
		int32_t L_0 = __this->___searchConeAngle_8;
		int32_t L_1 = __this->____searchConeAngle_34;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// _searchConeAngle = searchConeAngle;
		int32_t L_3 = __this->___searchConeAngle_8;
		__this->____searchConeAngle_34 = L_3;
		// searchConeImg.fnc_setSearchConeAngle(searchConeAngle, evaluateChanges);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_4 = __this->___searchConeImg_31;
		int32_t L_5 = __this->___searchConeAngle_8;
		bool L_6 = __this->___evaluateChanges_6;
		NullCheck(L_4);
		SearchConeImageHelpers_fnc_setSearchConeAngle_m7AA6C602A88570700091F75259F8D787E1E87BD8(L_4, L_5, L_6, NULL);
	}

IL_003c:
	{
		// if(searchConeSize != _searchConeSize){
		int32_t L_7 = __this->___searchConeSize_9;
		int32_t L_8 = __this->____searchConeSize_35;
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		// _searchConeSize = searchConeSize;
		int32_t L_10 = __this->___searchConeSize_9;
		__this->____searchConeSize_35 = L_10;
		// rectTrans.localScale = new Vector2(searchConeSize, searchConeSize);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___rectTrans_32;
		int32_t L_12 = __this->___searchConeSize_9;
		int32_t L_13 = __this->___searchConeSize_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)L_12), ((float)L_13), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_15, NULL);
		// searchConeImg.fnc_setSearchConeSize(searchConeSize, evaluateChanges);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_16 = __this->___searchConeImg_31;
		int32_t L_17 = __this->___searchConeSize_9;
		bool L_18 = __this->___evaluateChanges_6;
		NullCheck(L_16);
		SearchConeImageHelpers_fnc_setSearchConeSize_mBFBA22F40D674B839FC850B5749B31C7BDC34E65(L_16, L_17, L_18, NULL);
	}

IL_009b:
	{
		// if(searchConeStartRotationAngle != _searchConeStartRotationAngle){
		float L_19 = __this->___searchConeStartRotationAngle_10;
		float L_20 = __this->____searchConeStartRotationAngle_36;
		V_2 = (bool)((((int32_t)((((float)L_19) == ((float)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00df;
		}
	}
	{
		// _searchConeStartRotationAngle = searchConeStartRotationAngle;
		float L_22 = __this->___searchConeStartRotationAngle_10;
		__this->____searchConeStartRotationAngle_36 = L_22;
		// rectTrans.localEulerAngles = new Vector3(0.0f, 0.0f, searchConeStartRotationAngle);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___rectTrans_32;
		float L_24 = __this->___searchConeStartRotationAngle_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_23, L_25, NULL);
	}

IL_00df:
	{
		// if(useSearchConeSweep != _useSearchConeSweep){
		bool L_26 = __this->___useSearchConeSweep_11;
		bool L_27 = __this->____useSearchConeSweep_37;
		V_3 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0122;
		}
	}
	{
		// _useSearchConeSweep = useSearchConeSweep;
		bool L_29 = __this->___useSearchConeSweep_11;
		__this->____useSearchConeSweep_37 = L_29;
		// if(useSearchConeSweep){
		bool L_30 = __this->___useSearchConeSweep_11;
		V_4 = L_30;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		// fnc_startRotationSweep();
		SearchCone_fnc_startRotationSweep_m9414A6B777E145304804E95EF9C56FCE4BD9CBF4(__this, NULL);
		goto IL_0121;
	}

IL_0118:
	{
		// fnc_stopRotationSweep();
		SearchCone_fnc_stopRotationSweep_mC4B57EAF707D5E3AF3BE0DA4FA79224AA8C01120(__this, NULL);
	}

IL_0121:
	{
	}

IL_0122:
	{
		// if(searchConeSweepAngle != _searchConeSweepAngle){
		float L_32 = __this->___searchConeSweepAngle_12;
		float L_33 = __this->____searchConeSweepAngle_38;
		V_5 = (bool)((((int32_t)((((float)L_32) == ((float)L_33))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0147;
		}
	}
	{
		// _searchConeSweepAngle = searchConeSweepAngle;
		float L_35 = __this->___searchConeSweepAngle_12;
		__this->____searchConeSweepAngle_38 = L_35;
	}

IL_0147:
	{
		// if(searchConeSweepTime != _searchConeSweepTime){
		float L_36 = __this->___searchConeSweepTime_13;
		float L_37 = __this->____searchConeSweepTime_39;
		V_6 = (bool)((((int32_t)((((float)L_36) == ((float)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_016c;
		}
	}
	{
		// _searchConeSweepTime = searchConeSweepTime;
		float L_39 = __this->___searchConeSweepTime_13;
		__this->____searchConeSweepTime_39 = L_39;
	}

IL_016c:
	{
		// if(stopSearchConeSweepOnDetection != _stopSearchConeSweepOnDetection){
		bool L_40 = __this->___stopSearchConeSweepOnDetection_14;
		bool L_41 = __this->____stopSearchConeSweepOnDetection_40;
		V_7 = (bool)((((int32_t)((((int32_t)L_40) == ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_0191;
		}
	}
	{
		// _stopSearchConeSweepOnDetection = stopSearchConeSweepOnDetection;
		bool L_43 = __this->___stopSearchConeSweepOnDetection_14;
		__this->____stopSearchConeSweepOnDetection_40 = L_43;
	}

IL_0191:
	{
		// if(displaySearchCone != _displaySearchCone){
		bool L_44 = __this->___displaySearchCone_15;
		bool L_45 = __this->____displaySearchCone_41;
		V_8 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_01c8;
		}
	}
	{
		// _displaySearchCone = displaySearchCone;
		bool L_47 = __this->___displaySearchCone_15;
		__this->____displaySearchCone_41 = L_47;
		// searchConeImg.fnc_setDisplaySearchCone(displaySearchCone);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_48 = __this->___searchConeImg_31;
		bool L_49 = __this->___displaySearchCone_15;
		NullCheck(L_48);
		SearchConeImageHelpers_fnc_setDisplaySearchCone_mDBC02A89CAF8D9ED4A1F7A6825BB2082C820177E(L_48, L_49, NULL);
	}

IL_01c8:
	{
		// if(useColorChangeOnDetection != _useColorChangeOnDetection){
		bool L_50 = __this->___useColorChangeOnDetection_16;
		bool L_51 = __this->____useColorChangeOnDetection_42;
		V_9 = (bool)((((int32_t)((((int32_t)L_50) == ((int32_t)L_51))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_01ff;
		}
	}
	{
		// _useColorChangeOnDetection = useColorChangeOnDetection;
		bool L_53 = __this->___useColorChangeOnDetection_16;
		__this->____useColorChangeOnDetection_42 = L_53;
		// searchConeImg.fnc_setUseColorChangeOnDetection(useColorChangeOnDetection);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_54 = __this->___searchConeImg_31;
		bool L_55 = __this->___useColorChangeOnDetection_16;
		NullCheck(L_54);
		SearchConeImageHelpers_fnc_setUseColorChangeOnDetection_mA5300A91744251F05B51922D0D361D9943E5DB41(L_54, L_55, NULL);
	}

IL_01ff:
	{
		// if(colNeutral != _colNeutral){
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = __this->___colNeutral_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = __this->____colNeutral_43;
		bool L_58;
		L_58 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_56, L_57, NULL);
		V_10 = L_58;
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_0236;
		}
	}
	{
		// _colNeutral = colNeutral;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___colNeutral_17;
		__this->____colNeutral_43 = L_60;
		// searchConeImg.fnc_setColNeutral(colNeutral);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_61 = __this->___searchConeImg_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62 = __this->___colNeutral_17;
		NullCheck(L_61);
		SearchConeImageHelpers_fnc_setColNeutral_mDD17A8F8520F3C2743951FD400922EAA04A7BF1E(L_61, L_62, NULL);
	}

IL_0236:
	{
		// if(colDetected != _colDetected){
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = __this->___colDetected_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = __this->____colDetected_44;
		bool L_65;
		L_65 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_63, L_64, NULL);
		V_11 = L_65;
		bool L_66 = V_11;
		if (!L_66)
		{
			goto IL_026d;
		}
	}
	{
		// _colDetected = colDetected;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67 = __this->___colDetected_18;
		__this->____colDetected_44 = L_67;
		// searchConeImg.fnc_setColDetected(colDetected);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_68 = __this->___searchConeImg_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = __this->___colDetected_18;
		NullCheck(L_68);
		SearchConeImageHelpers_fnc_setColDetected_mBF14162F51B1E2EFC7317CCFFF449475CBBA056A(L_68, L_69, NULL);
	}

IL_026d:
	{
		// if(colChangeTime != _colChangeTime){
		float L_70 = __this->___colChangeTime_19;
		float L_71 = __this->____colChangeTime_45;
		V_12 = (bool)((((int32_t)((((float)L_70) == ((float)L_71))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_02a4;
		}
	}
	{
		// _colChangeTime = colChangeTime;
		float L_73 = __this->___colChangeTime_19;
		__this->____colChangeTime_45 = L_73;
		// searchConeImg.fnc_setColChangeTime(colChangeTime);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_74 = __this->___searchConeImg_31;
		float L_75 = __this->___colChangeTime_19;
		NullCheck(L_74);
		SearchConeImageHelpers_fnc_setColChangeTime_m34D58DF3EC1DA3B66F3521E98F7A46F28C07FBD9(L_74, L_75, NULL);
	}

IL_02a4:
	{
		// if(useCustomSearchConeSprites != _useCustomSearchConeSprites){
		bool L_76 = __this->___useCustomSearchConeSprites_20;
		bool L_77 = __this->____useCustomSearchConeSprites_46;
		V_13 = (bool)((((int32_t)((((int32_t)L_76) == ((int32_t)L_77))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_02db;
		}
	}
	{
		// _useCustomSearchConeSprites = useCustomSearchConeSprites;
		bool L_79 = __this->___useCustomSearchConeSprites_20;
		__this->____useCustomSearchConeSprites_46 = L_79;
		// searchConeImg.fnc_setUseCustomSearchConeSprites(useCustomSearchConeSprites);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_80 = __this->___searchConeImg_31;
		bool L_81 = __this->___useCustomSearchConeSprites_20;
		NullCheck(L_80);
		SearchConeImageHelpers_fnc_setUseCustomSearchConeSprites_mC4B65BA727D6D9FEE64AFE68E3491298DB2E2F29(L_80, L_81, NULL);
	}

IL_02db:
	{
		// if(spriteNeutral != _spriteNeutral){
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_82 = __this->___spriteNeutral_21;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_83 = __this->____spriteNeutral_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_82, L_83, NULL);
		V_14 = L_84;
		bool L_85 = V_14;
		if (!L_85)
		{
			goto IL_0312;
		}
	}
	{
		// _spriteNeutral = spriteNeutral;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_86 = __this->___spriteNeutral_21;
		__this->____spriteNeutral_47 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spriteNeutral_47), (void*)L_86);
		// searchConeImg.fnc_setSpriteNeutral(spriteNeutral);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_87 = __this->___searchConeImg_31;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_88 = __this->___spriteNeutral_21;
		NullCheck(L_87);
		SearchConeImageHelpers_fnc_setSpriteNeutral_m622087062E8802B5B9D35BE23D4700B52D371A0D(L_87, L_88, NULL);
	}

IL_0312:
	{
		// if(spriteDetected != _spriteDetected){
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_89 = __this->___spriteDetected_22;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_90 = __this->____spriteDetected_48;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_89, L_90, NULL);
		V_15 = L_91;
		bool L_92 = V_15;
		if (!L_92)
		{
			goto IL_0349;
		}
	}
	{
		// _spriteDetected = spriteDetected;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_93 = __this->___spriteDetected_22;
		__this->____spriteDetected_48 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spriteDetected_48), (void*)L_93);
		// searchConeImg.fnc_setSpriteDetected(spriteDetected);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_94 = __this->___searchConeImg_31;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_95 = __this->___spriteDetected_22;
		NullCheck(L_94);
		SearchConeImageHelpers_fnc_setSpriteDetected_m7E82A00AD62DE3BFAD0AEEB3068EEB144B8675E7(L_94, L_95, NULL);
	}

IL_0349:
	{
		// if(tagsToDetect.Length > 0){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = __this->___tagsToDetect_23;
		NullCheck(L_96);
		V_16 = (bool)((!(((uint32_t)(((RuntimeArray*)L_96)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_97 = V_16;
		if (!L_97)
		{
			goto IL_0460;
		}
	}
	{
		// if(_tagsToDetect == null){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = __this->____tagsToDetect_49;
		V_17 = (bool)((((RuntimeObject*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_98) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_99 = V_17;
		if (!L_99)
		{
			goto IL_039f;
		}
	}
	{
		// _tagsToDetect = tagsToDetect;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = __this->___tagsToDetect_23;
		__this->____tagsToDetect_49 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tagsToDetect_49), (void*)L_100);
		// tagsToDetect.CopyTo(_tagsToDetect, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = __this->___tagsToDetect_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_102 = __this->____tagsToDetect_49;
		NullCheck((RuntimeArray*)L_101);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_101, (RuntimeArray*)L_102, 0, NULL);
		// searchConeImg.fnc_setTagsToDetect(tagsToDetect);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_103 = __this->___searchConeImg_31;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = __this->___tagsToDetect_23;
		NullCheck(L_103);
		SearchConeImageHelpers_fnc_setTagsToDetect_mE6BBEA679D3D37C3881C388A2E033EA43376822A(L_103, L_104, NULL);
	}

IL_039f:
	{
		// if(tagsToDetect.Length == _tagsToDetect.Length){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = __this->___tagsToDetect_23;
		NullCheck(L_105);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_106 = __this->____tagsToDetect_49;
		NullCheck(L_106);
		V_18 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))))? 1 : 0);
		bool L_107 = V_18;
		if (!L_107)
		{
			goto IL_0422;
		}
	}
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		V_19 = 0;
		goto IL_040d;
	}

IL_03bd:
	{
		// if(!string.Equals(tagsToDetect[i], _tagsToDetect[i])){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = __this->___tagsToDetect_23;
		int32_t L_109 = V_19;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		String_t* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_112 = __this->____tagsToDetect_49;
		int32_t L_113 = V_19;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		String_t* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		bool L_116;
		L_116 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_111, L_115, NULL);
		V_20 = (bool)((((int32_t)L_116) == ((int32_t)0))? 1 : 0);
		bool L_117 = V_20;
		if (!L_117)
		{
			goto IL_0406;
		}
	}
	{
		// tagsToDetect.CopyTo(_tagsToDetect, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = __this->___tagsToDetect_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = __this->____tagsToDetect_49;
		NullCheck((RuntimeArray*)L_118);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_118, (RuntimeArray*)L_119, 0, NULL);
		// searchConeImg.fnc_setTagsToDetect(tagsToDetect);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_120 = __this->___searchConeImg_31;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = __this->___tagsToDetect_23;
		NullCheck(L_120);
		SearchConeImageHelpers_fnc_setTagsToDetect_mE6BBEA679D3D37C3881C388A2E033EA43376822A(L_120, L_121, NULL);
		// break;
		goto IL_041f;
	}

IL_0406:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_122 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_040d:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_123 = V_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = __this->___tagsToDetect_23;
		NullCheck(L_124);
		V_21 = (bool)((((int32_t)L_123) < ((int32_t)((int32_t)(((RuntimeArray*)L_124)->max_length))))? 1 : 0);
		bool L_125 = V_21;
		if (L_125)
		{
			goto IL_03bd;
		}
	}

IL_041f:
	{
		goto IL_045d;
	}

IL_0422:
	{
		// System.Array.Resize(ref _tagsToDetect, tagsToDetect.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_126 = (&__this->____tagsToDetect_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_127 = __this->___tagsToDetect_23;
		NullCheck(L_127);
		Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F(L_126, ((int32_t)(((RuntimeArray*)L_127)->max_length)), Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var);
		// tagsToDetect.CopyTo(_tagsToDetect, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_128 = __this->___tagsToDetect_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = __this->____tagsToDetect_49;
		NullCheck((RuntimeArray*)L_128);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_128, (RuntimeArray*)L_129, 0, NULL);
		// searchConeImg.fnc_setTagsToDetect(tagsToDetect);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_130 = __this->___searchConeImg_31;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_131 = __this->___tagsToDetect_23;
		NullCheck(L_130);
		SearchConeImageHelpers_fnc_setTagsToDetect_mE6BBEA679D3D37C3881C388A2E033EA43376822A(L_130, L_131, NULL);
	}

IL_045d:
	{
		goto IL_046d;
	}

IL_0460:
	{
		// Debug.LogError("SearchCone: At least one tag that should be detected has to be entered.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDC6DB0F61DFE06BCE008FEC4E4C2205DE43D6B01, NULL);
	}

IL_046d:
	{
		// if(raycastIncludedLayers.Length > 0){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->___raycastIncludedLayers_24;
		NullCheck(L_132);
		V_22 = (bool)((!(((uint32_t)(((RuntimeArray*)L_132)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_133 = V_22;
		if (!L_133)
		{
			goto IL_058e;
		}
	}
	{
		// if(_raycastIncludedLayers == null){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = __this->____raycastIncludedLayers_50;
		V_23 = (bool)((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_134) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_135 = V_23;
		if (!L_135)
		{
			goto IL_04c3;
		}
	}
	{
		// _raycastIncludedLayers = raycastIncludedLayers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = __this->___raycastIncludedLayers_24;
		__this->____raycastIncludedLayers_50 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____raycastIncludedLayers_50), (void*)L_136);
		// raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = __this->___raycastIncludedLayers_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = __this->____raycastIncludedLayers_50;
		NullCheck((RuntimeArray*)L_137);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_137, (RuntimeArray*)L_138, 0, NULL);
		// searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_139 = __this->___searchConeImg_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = __this->___raycastIncludedLayers_24;
		NullCheck(L_139);
		SearchConeImageHelpers_fnc_setRaycastIncludedLayers_m04AB1718F9623690BC6C0BBFAF7532D370133133(L_139, L_140, NULL);
	}

IL_04c3:
	{
		// if(raycastIncludedLayers.Length == _raycastIncludedLayers.Length){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = __this->___raycastIncludedLayers_24;
		NullCheck(L_141);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = __this->____raycastIncludedLayers_50;
		NullCheck(L_142);
		V_24 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))))? 1 : 0);
		bool L_143 = V_24;
		if (!L_143)
		{
			goto IL_0550;
		}
	}
	{
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		V_25 = 0;
		goto IL_053b;
	}

IL_04e1:
	{
		// if(!int.Equals(raycastIncludedLayers[i], _raycastIncludedLayers[i])){
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->___raycastIncludedLayers_24;
		int32_t L_145 = V_25;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		int32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = L_147;
		RuntimeObject* L_149 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_148);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = __this->____raycastIncludedLayers_50;
		int32_t L_151 = V_25;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		int32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = L_153;
		RuntimeObject* L_155 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_154);
		bool L_156;
		L_156 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_149, L_155, NULL);
		V_26 = (bool)((((int32_t)L_156) == ((int32_t)0))? 1 : 0);
		bool L_157 = V_26;
		if (!L_157)
		{
			goto IL_0534;
		}
	}
	{
		// raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = __this->___raycastIncludedLayers_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = __this->____raycastIncludedLayers_50;
		NullCheck((RuntimeArray*)L_158);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_158, (RuntimeArray*)L_159, 0, NULL);
		// searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_160 = __this->___searchConeImg_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = __this->___raycastIncludedLayers_24;
		NullCheck(L_160);
		SearchConeImageHelpers_fnc_setRaycastIncludedLayers_m04AB1718F9623690BC6C0BBFAF7532D370133133(L_160, L_161, NULL);
		// break;
		goto IL_054d;
	}

IL_0534:
	{
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		int32_t L_162 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_053b:
	{
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		int32_t L_163 = V_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = __this->___raycastIncludedLayers_24;
		NullCheck(L_164);
		V_27 = (bool)((((int32_t)L_163) < ((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length))))? 1 : 0);
		bool L_165 = V_27;
		if (L_165)
		{
			goto IL_04e1;
		}
	}

IL_054d:
	{
		goto IL_058b;
	}

IL_0550:
	{
		// System.Array.Resize(ref _raycastIncludedLayers, raycastIncludedLayers.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_166 = (&__this->____raycastIncludedLayers_50);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = __this->___raycastIncludedLayers_24;
		NullCheck(L_167);
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_166, ((int32_t)(((RuntimeArray*)L_167)->max_length)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = __this->___raycastIncludedLayers_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->____raycastIncludedLayers_50;
		NullCheck((RuntimeArray*)L_168);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_168, (RuntimeArray*)L_169, 0, NULL);
		// searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_170 = __this->___searchConeImg_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___raycastIncludedLayers_24;
		NullCheck(L_170);
		SearchConeImageHelpers_fnc_setRaycastIncludedLayers_m04AB1718F9623690BC6C0BBFAF7532D370133133(L_170, L_171, NULL);
	}

IL_058b:
	{
		goto IL_059b;
	}

IL_058e:
	{
		// Debug.LogError("SearchCone: At least one layer that should be targeted by the detection has to be entered");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC62C0F0A5C8C23F937AB68E43B571B505B014408, NULL);
	}

IL_059b:
	{
		// if(detectionInterval != _detectionInterval){
		float L_172 = __this->___detectionInterval_25;
		float L_173 = __this->____detectionInterval_51;
		V_28 = (bool)((((int32_t)((((float)L_172) == ((float)L_173))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_174 = V_28;
		if (!L_174)
		{
			goto IL_05d2;
		}
	}
	{
		// _detectionInterval = detectionInterval;
		float L_175 = __this->___detectionInterval_25;
		__this->____detectionInterval_51 = L_175;
		// searchConeImg.fnc_setDetectionInterval(detectionInterval);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_176 = __this->___searchConeImg_31;
		float L_177 = __this->___detectionInterval_25;
		NullCheck(L_176);
		SearchConeImageHelpers_fnc_setDetectionInterval_m3A3B51594F1D637C647B7914C0BE268A7382ECA3(L_176, L_177, NULL);
	}

IL_05d2:
	{
		// if(raycastDensity != _raycastDensity){
		int32_t L_178 = __this->___raycastDensity_26;
		int32_t L_179 = __this->____raycastDensity_52;
		V_29 = (bool)((((int32_t)((((int32_t)L_178) == ((int32_t)L_179))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_180 = V_29;
		if (!L_180)
		{
			goto IL_0609;
		}
	}
	{
		// _raycastDensity = raycastDensity;
		int32_t L_181 = __this->___raycastDensity_26;
		__this->____raycastDensity_52 = L_181;
		// searchConeImg.fnc_setRaycastDensity(raycastDensity);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_182 = __this->___searchConeImg_31;
		int32_t L_183 = __this->___raycastDensity_26;
		NullCheck(L_182);
		SearchConeImageHelpers_fnc_setRaycastDensity_mC83911AACA9EEBC6AFD4BE565CD44218BBA500CE(L_182, L_183, NULL);
	}

IL_0609:
	{
		// if(searchFromOutsideIn != _searchFromOutsideIn){
		bool L_184 = __this->___searchFromOutsideIn_27;
		bool L_185 = __this->____searchFromOutsideIn_53;
		V_30 = (bool)((((int32_t)((((int32_t)L_184) == ((int32_t)L_185))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_186 = V_30;
		if (!L_186)
		{
			goto IL_0640;
		}
	}
	{
		// _searchFromOutsideIn = searchFromOutsideIn;
		bool L_187 = __this->___searchFromOutsideIn_27;
		__this->____searchFromOutsideIn_53 = L_187;
		// searchConeImg.fnc_setSearchFromOutsideIn(searchFromOutsideIn);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_188 = __this->___searchConeImg_31;
		bool L_189 = __this->___searchFromOutsideIn_27;
		NullCheck(L_188);
		SearchConeImageHelpers_fnc_setSearchFromOutsideIn_m3E5463AC9C501ACFD7F9C1758720503D983E3B97(L_188, L_189, NULL);
	}

IL_0640:
	{
		// if(showDebugRays != _showDebugRays){
		bool L_190 = __this->___showDebugRays_28;
		bool L_191 = __this->____showDebugRays_54;
		V_31 = (bool)((((int32_t)((((int32_t)L_190) == ((int32_t)L_191))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_192 = V_31;
		if (!L_192)
		{
			goto IL_0677;
		}
	}
	{
		// _showDebugRays = showDebugRays;
		bool L_193 = __this->___showDebugRays_28;
		__this->____showDebugRays_54 = L_193;
		// searchConeImg.fnc_setShowDebugRays(showDebugRays);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_194 = __this->___searchConeImg_31;
		bool L_195 = __this->___showDebugRays_28;
		NullCheck(L_194);
		SearchConeImageHelpers_fnc_setShowDebugRays_mAA4B42777E201C5287DB8100AD702FEA62075336(L_194, L_195, NULL);
	}

IL_0677:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SearchCone::RotateSearchCone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchCone_RotateSearchCone_m33AC6212BC20DB5C1F5EE8EE354158B32D7990EC (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* L_0 = (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E*)il2cpp_codegen_object_new(U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRotateSearchConeU3Ed__68__ctor_mFF6EE24DCEABDE672FC7A1C8BC9056D1AB34D48B(L_0, 0, NULL);
		U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SearchCone::fnc_startRotationSweep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_startRotationSweep_m9414A6B777E145304804E95EF9C56FCE4BD9CBF4 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1122E199B658D45D1DADF567DB1DD527A2B999E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(Application.isPlaying){
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// if(!searchConeRotationActive){
		bool L_2 = __this->___searchConeRotationActive_57;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// searchConeRotationActive = true;
		__this->___searchConeRotationActive_57 = (bool)1;
		// searchConeRotationPaused = false;
		__this->___searchConeRotationPaused_58 = (bool)0;
		// if(coroutineSearchConeRotation == null){
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4 = __this->___coroutineSearchConeRotation_61;
		V_2 = (bool)((((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// coroutineSearchConeRotation = StartCoroutine(RotateSearchCone());
		RuntimeObject* L_6;
		L_6 = SearchCone_RotateSearchCone_m33AC6212BC20DB5C1F5EE8EE354158B32D7990EC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		__this->___coroutineSearchConeRotation_61 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutineSearchConeRotation_61), (void*)L_7);
	}

IL_0048:
	{
		goto IL_0058;
	}

IL_004b:
	{
		// Debug.Log("SearchCone: Can't start coroutine, is already running");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA1122E199B658D45D1DADF567DB1DD527A2B999E, NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void SearchCone::fnc_stopRotationSweep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_stopRotationSweep_mC4B57EAF707D5E3AF3BE0DA4FA79224AA8C01120 (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4078A2E79BCBAE4D36E2061874F4C35E5716186);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(Application.isPlaying){
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		// if(searchConeRotationActive){
		bool L_2 = __this->___searchConeRotationActive_57;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// searchConeRotationActive = false;
		__this->___searchConeRotationActive_57 = (bool)0;
		// searchConeRotationPaused = false;
		__this->___searchConeRotationPaused_58 = (bool)0;
		// if(coroutineSearchConeRotation != null){
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4 = __this->___coroutineSearchConeRotation_61;
		V_2 = (bool)((!(((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// StopCoroutine(coroutineSearchConeRotation);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6 = __this->___coroutineSearchConeRotation_61;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_6, NULL);
	}

IL_0040:
	{
		// gameObject.transform.localEulerAngles = new Vector3(0.0f, 0.0f, searchConeStartRotationAngle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		float L_9 = __this->___searchConeStartRotationAngle_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_8, L_10, NULL);
		// sweepRotationTime = 0.0f;
		__this->___sweepRotationTime_59 = (0.0f);
		goto IL_0081;
	}

IL_0074:
	{
		// Debug.Log("SearchCone: Can't stop coroutine, seems to be stopped already");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB4078A2E79BCBAE4D36E2061874F4C35E5716186, NULL);
	}

IL_0081:
	{
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void SearchCone::fnc_checkForObjectDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_fnc_checkForObjectDetection_mA9E2F1E2733FA3F6432E75744EB7BDE34F306D9A (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if(objectEnteredDetectionArea){
		bool L_0 = __this->___objectEnteredDetectionArea_55;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// if(searchConeImg.targetDetected && !objectWasDetected){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_2 = __this->___searchConeImg_31;
		NullCheck(L_2);
		bool L_3;
		L_3 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		bool L_4 = __this->___objectWasDetected_56;
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_1 = (bool)G_B4_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// if(useSearchConeSweep){
		bool L_6 = __this->___useSearchConeSweep_11;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if(stopSearchConeSweepOnDetection){
		bool L_8 = __this->___stopSearchConeSweepOnDetection_14;
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// if(searchConeRotationActive){
		bool L_10 = __this->___searchConeRotationActive_57;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// searchConeRotationPaused = true;
		__this->___searchConeRotationPaused_58 = (bool)1;
	}

IL_0055:
	{
	}

IL_0056:
	{
	}

IL_0057:
	{
		// objectWasDetected = true;
		__this->___objectWasDetected_56 = (bool)1;
		// OnTargetDetected.Invoke(gameObject, searchConeImg.lastDetectedGO);
		TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* L_12 = __this->___OnTargetDetected_29;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_14 = __this->___searchConeImg_31;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = SearchConeImageHelpers_get_lastDetectedGO_mB328E5B70D00B73AEEFD4F4F3CE8AB50E19DB923(L_14, NULL);
		NullCheck(L_12);
		UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF(L_12, L_13, L_15, UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF_RuntimeMethod_var);
		// return;
		goto IL_00f1;
	}

IL_007d:
	{
	}

IL_007e:
	{
		// if(!searchConeImg.targetDetected && objectWasDetected){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_16 = __this->___searchConeImg_31;
		NullCheck(L_16);
		bool L_17;
		L_17 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(L_16, NULL);
		if (L_17)
		{
			goto IL_0093;
		}
	}
	{
		bool L_18 = __this->___objectWasDetected_56;
		G_B16_0 = ((int32_t)(L_18));
		goto IL_0094;
	}

IL_0093:
	{
		G_B16_0 = 0;
	}

IL_0094:
	{
		V_5 = (bool)G_B16_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		// if(useSearchConeSweep){
		bool L_20 = __this->___useSearchConeSweep_11;
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		// if(stopSearchConeSweepOnDetection){
		bool L_22 = __this->___stopSearchConeSweepOnDetection_14;
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00cb;
		}
	}
	{
		// if(searchConeRotationActive){
		bool L_24 = __this->___searchConeRotationActive_57;
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		// searchConeRotationPaused = false;
		__this->___searchConeRotationPaused_58 = (bool)0;
	}

IL_00ca:
	{
	}

IL_00cb:
	{
	}

IL_00cc:
	{
		// objectWasDetected = false;
		__this->___objectWasDetected_56 = (bool)0;
		// OnTargetLost.Invoke(gameObject, searchConeImg.lastDetectedGO);
		TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* L_26 = __this->___OnTargetLost_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_28 = __this->___searchConeImg_31;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = SearchConeImageHelpers_get_lastDetectedGO_mB328E5B70D00B73AEEFD4F4F3CE8AB50E19DB923(L_28, NULL);
		NullCheck(L_26);
		UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF(L_26, L_27, L_29, UnityEvent_2_Invoke_mCD9F713C71957A711663CACB4BF32256766AD7FF_RuntimeMethod_var);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void SearchCone::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_OnTriggerEnter2D_m369F7760D5DB5408893EF8D931C19A78837CE0AB (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___coll0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		V_0 = 0;
		goto IL_0039;
	}

IL_0005:
	{
		// if(string.Equals(coll.tag, tagsToDetect[i])){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___coll0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___tagsToDetect_23;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// objectEnteredDetectionArea = true;
		__this->___objectEnteredDetectionArea_55 = (bool)1;
		// searchConeImg.fnc_setDetectionActive(true);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_8 = __this->___searchConeImg_31;
		NullCheck(L_8);
		SearchConeImageHelpers_fnc_setDetectionActive_m8D05F6C96DE4F6D75615A314734BC2F3E210292B(L_8, (bool)1, NULL);
		// break;
		goto IL_0048;
	}

IL_0034:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_10 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___tagsToDetect_23;
		NullCheck(L_11);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0005;
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SearchCone::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone_OnTriggerExit2D_m2FFA0825A9782989EBCD9F8672548BCE1686112A (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___coll0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		V_0 = 0;
		goto IL_0039;
	}

IL_0005:
	{
		// if(string.Equals(coll.tag, tagsToDetect[i])){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___coll0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___tagsToDetect_23;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_1, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// objectEnteredDetectionArea = false;
		__this->___objectEnteredDetectionArea_55 = (bool)0;
		// searchConeImg.fnc_setDetectionActive(false);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_8 = __this->___searchConeImg_31;
		NullCheck(L_8);
		SearchConeImageHelpers_fnc_setDetectionActive_m8D05F6C96DE4F6D75615A314734BC2F3E210292B(L_8, (bool)0, NULL);
		// break;
		goto IL_0048;
	}

IL_0034:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for(int i = 0; i < tagsToDetect.Length; i++){
		int32_t L_10 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___tagsToDetect_23;
		NullCheck(L_11);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0005;
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SearchCone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchCone__ctor_m47F3DA80AD5E9196FD4474015C701147CE3566CB (SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isReady = false;
		__this->____isReady_4 = (bool)0;
		// private float _searchRotationAngle = 0.0f;
		__this->____searchRotationAngle_5 = (0.0f);
		// public bool evaluateChanges = true;
		__this->___evaluateChanges_6 = (bool)1;
		// public GameObject goSearchCone = null;
		__this->___goSearchCone_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___goSearchCone_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// public int searchConeAngle = 30;
		__this->___searchConeAngle_8 = ((int32_t)30);
		// public int searchConeSize = 300;
		__this->___searchConeSize_9 = ((int32_t)300);
		// public float searchConeStartRotationAngle = 0.0f;
		__this->___searchConeStartRotationAngle_10 = (0.0f);
		// public bool useSearchConeSweep = true;
		__this->___useSearchConeSweep_11 = (bool)1;
		// public float searchConeSweepAngle = 45.0f;
		__this->___searchConeSweepAngle_12 = (45.0f);
		// public float searchConeSweepTime = 2.0f;
		__this->___searchConeSweepTime_13 = (2.0f);
		// public bool stopSearchConeSweepOnDetection = true;
		__this->___stopSearchConeSweepOnDetection_14 = (bool)1;
		// public bool displaySearchCone = true;
		__this->___displaySearchCone_15 = (bool)1;
		// public bool useColorChangeOnDetection = true;
		__this->___useColorChangeOnDetection_16 = (bool)1;
		// public Color colNeutral = new Color(1.0f, 1.0f, 1.0f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.5f), /*hidden argument*/NULL);
		__this->___colNeutral_17 = L_0;
		// public Color colDetected = new Color(1.0f, 0.0f, 0.0f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->___colDetected_18 = L_1;
		// public float colChangeTime = 1.0f;
		__this->___colChangeTime_19 = (1.0f);
		// public bool useCustomSearchConeSprites = true;
		__this->___useCustomSearchConeSprites_20 = (bool)1;
		// public Sprite spriteNeutral = null;
		__this->___spriteNeutral_21 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteNeutral_21), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		// public Sprite spriteDetected = null;
		__this->___spriteDetected_22 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteDetected_22), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		// public string [] tagsToDetect = {"Player"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		__this->___tagsToDetect_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagsToDetect_23), (void*)L_3);
		// public int [] raycastIncludedLayers = {8};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)8);
		__this->___raycastIncludedLayers_24 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastIncludedLayers_24), (void*)L_5);
		// public float detectionInterval = 0.25f;
		__this->___detectionInterval_25 = (0.25f);
		// public int raycastDensity = 5;
		__this->___raycastDensity_26 = 5;
		// public bool searchFromOutsideIn = true;
		__this->___searchFromOutsideIn_27 = (bool)1;
		// public bool showDebugRays = false;
		__this->___showDebugRays_28 = (bool)0;
		// public TargetEvent OnTargetDetected = new TargetEvent();
		TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* L_6 = (TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46*)il2cpp_codegen_object_new(TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TargetEvent__ctor_m97514B4D20FC76FA67D8ED4D4AD088859FA5B7C7(L_6, NULL);
		__this->___OnTargetDetected_29 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnTargetDetected_29), (void*)L_6);
		// public TargetEvent OnTargetLost = new TargetEvent();
		TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46* L_7 = (TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46*)il2cpp_codegen_object_new(TargetEvent_t459FE429D902E1728CD9DC842B7FF6201BE85B46_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TargetEvent__ctor_m97514B4D20FC76FA67D8ED4D4AD088859FA5B7C7(L_7, NULL);
		__this->___OnTargetLost_30 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnTargetLost_30), (void*)L_7);
		// private SearchConeImageHelpers searchConeImg = null;
		__this->___searchConeImg_31 = (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchConeImg_31), (void*)(SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB*)NULL);
		// private RectTransform rectTrans = null;
		__this->___rectTrans_32 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTrans_32), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private CircleCollider2D circleColl = null;
		__this->___circleColl_33 = (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___circleColl_33), (void*)(CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786*)NULL);
		// private bool objectEnteredDetectionArea = false;
		__this->___objectEnteredDetectionArea_55 = (bool)0;
		// private bool objectWasDetected = false;
		__this->___objectWasDetected_56 = (bool)0;
		// private bool searchConeRotationActive = false;
		__this->___searchConeRotationActive_57 = (bool)0;
		// private bool searchConeRotationPaused = false;
		__this->___searchConeRotationPaused_58 = (bool)0;
		// float sweepRotationTime = 0;
		__this->___sweepRotationTime_59 = (0.0f);
		// Vector3 rotVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___rotVector_60 = L_8;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SearchCone/<RotateSearchCone>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateSearchConeU3Ed__68__ctor_mFF6EE24DCEABDE672FC7A1C8BC9056D1AB34D48B (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SearchCone/<RotateSearchCone>d__68::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateSearchConeU3Ed__68_System_IDisposable_Dispose_m781B39902D49393C4351A6E8E0282ED3FB053752 (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SearchCone/<RotateSearchCone>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotateSearchConeU3Ed__68_MoveNext_mE717A89BB293B657EFF1FC05A614DEB62F9CB96F (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00f4;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00fc;
	}

IL_0028:
	{
		// if(!searchConeRotationPaused){
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		bool L_4 = L_3->___searchConeRotationPaused_58;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00e4;
		}
	}
	{
		// searchRotationAngle = Mathf.Sin(sweepRotationTime * (1.0f/(searchConeSweepTime * 0.5f))) * searchConeSweepAngle;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_6 = __this->___U3CU3E4__this_2;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		float L_8 = L_7->___sweepRotationTime_59;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		float L_10 = L_9->___searchConeSweepTime_13;
		float L_11;
		L_11 = sinf(((float)il2cpp_codegen_multiply(L_8, ((float)((1.0f)/((float)il2cpp_codegen_multiply(L_10, (0.5f))))))));
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		float L_13 = L_12->___searchConeSweepAngle_12;
		NullCheck(L_6);
		SearchCone_set_searchRotationAngle_mAF42CF7A9F5FA67DFC488198FE313DB16AFA76D2(L_6, ((float)il2cpp_codegen_multiply(L_11, L_13)), NULL);
		// rotVector.z = searchConeStartRotationAngle + searchRotationAngle;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&L_14->___rotVector_60);
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		float L_17 = L_16->___searchConeStartRotationAngle_10;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_18 = __this->___U3CU3E4__this_2;
		NullCheck(L_18);
		float L_19;
		L_19 = SearchCone_get_searchRotationAngle_mE349CDB9C5F0FC45B0BBFCB7BC448BEEF346816E(L_18, NULL);
		L_15->___z_4 = ((float)il2cpp_codegen_add(L_17, L_19));
		// gameObject.transform.localEulerAngles = rotVector;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___rotVector_60;
		NullCheck(L_22);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_22, L_24, NULL);
		// sweepRotationTime += Time.deltaTime;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_25 = __this->___U3CU3E4__this_2;
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		float L_27 = L_26->___sweepRotationTime_59;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_25);
		L_25->___sweepRotationTime_59 = ((float)il2cpp_codegen_add(L_27, L_28));
	}

IL_00e4:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00fc:
	{
		// while (searchConeRotationActive) {
		SearchCone_t8594F326E53B5867A0C6C5B5CD8191BF5332DB4E* L_29 = __this->___U3CU3E4__this_2;
		NullCheck(L_29);
		bool L_30 = L_29->___searchConeRotationActive_57;
		V_2 = L_30;
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_0028;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SearchCone/<RotateSearchCone>d__68::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateSearchConeU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB2BF178088F9DBA063DAD221EE35FAC368093B4F (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SearchCone/<RotateSearchCone>d__68::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateSearchConeU3Ed__68_System_Collections_IEnumerator_Reset_m82B08D6D865D272603A2B7A63CCEFD0E1F860C44 (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotateSearchConeU3Ed__68_System_Collections_IEnumerator_Reset_m82B08D6D865D272603A2B7A63CCEFD0E1F860C44_RuntimeMethod_var)));
	}
}
// System.Object SearchCone/<RotateSearchCone>d__68::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateSearchConeU3Ed__68_System_Collections_IEnumerator_get_Current_mC79E96DF5428BD4C33FD2C694E06E2633B0D5748 (U3CRotateSearchConeU3Ed__68_t8F378BA77E4FCAD545A236D894FA0B531C09006E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.GameObject SearchConeImageHelpers::get_lastDetectedGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SearchConeImageHelpers_get_lastDetectedGO_mB328E5B70D00B73AEEFD4F4F3CE8AB50E19DB923 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// public GameObject lastDetectedGO {get {return _lastDetectedGO;} private set {_lastDetectedGO = value;}}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____lastDetectedGO_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GameObject lastDetectedGO {get {return _lastDetectedGO;} private set {_lastDetectedGO = value;}}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// System.Void SearchConeImageHelpers::set_lastDetectedGO(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_set_lastDetectedGO_mE3E253C6EAAE54AC775C09DB51D8FB960935537B (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject lastDetectedGO {get {return _lastDetectedGO;} private set {_lastDetectedGO = value;}}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->____lastDetectedGO_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastDetectedGO_4), (void*)L_0);
		// public GameObject lastDetectedGO {get {return _lastDetectedGO;} private set {_lastDetectedGO = value;}}
		return;
	}
}
// System.Boolean SearchConeImageHelpers::get_targetDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool targetDetected {get {return _targetDetected;} private set {_targetDetected = value;}}
		bool L_0 = __this->____targetDetected_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool targetDetected {get {return _targetDetected;} private set {_targetDetected = value;}}
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SearchConeImageHelpers::set_targetDetected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_set_targetDetected_mD8CDEAD6B65ADC89AB5B5C29C7C8512B01620265 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool targetDetected {get {return _targetDetected;} private set {_targetDetected = value;}}
		bool L_0 = ___value0;
		__this->____targetDetected_5 = L_0;
		// public bool targetDetected {get {return _targetDetected;} private set {_targetDetected = value;}}
		return;
	}
}
// System.Void SearchConeImageHelpers::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_Start_m7DEED448893622CBEF1B4DCE8EF8142BEA1357C3 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA29C86EB397C51E7DBF72DCAAF67319DBC6FF2AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A0A0F851280DD68B4441907EFC71227663BEF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F28CD036451F9FFB4B23BADF3E180A6845EDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC86ADC0E239AE5B7E099C694236EAC10A7E1B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB8BB6CA6D6EB18FD74054203015508AF185E560);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// imgSearchCone = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___imgSearchCone_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgSearchCone_8), (void*)L_1);
		// if(imgSearchCone == null){
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imgSearchCone_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("SearchConeImageHelper: No UI Image was found on this gameObject. Please add one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB93F28CD036451F9FFB4B23BADF3E180A6845EDD, NULL);
		// return;
		goto IL_0105;
	}

IL_0033:
	{
		// imgSearchCone.raycastTarget = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___imgSearchCone_8;
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_5, (bool)0);
		// imgSearchCone.type = Image.Type.Filled;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___imgSearchCone_8;
		NullCheck(L_6);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_6, 3, NULL);
		// imgSearchCone.fillMethod = Image.FillMethod.Radial360;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___imgSearchCone_8;
		NullCheck(L_7);
		Image_set_fillMethod_m5361D29BA950BEFE72E7270AC3BFA0B00AE7E294(L_7, 4, NULL);
		// imgSearchCone.fillOrigin = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___imgSearchCone_8;
		NullCheck(L_8);
		Image_set_fillOrigin_m2D89BA820DABB26123A33059CA266212E7970B4E(L_8, 0, NULL);
		// imgSearchCone.fillClockwise = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___imgSearchCone_8;
		NullCheck(L_9);
		Image_set_fillClockwise_mB5DBAFC66370F906EA2CC1D49D49FCC366B64646(L_9, (bool)1, NULL);
		// rectTrans = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_10, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___rectTrans_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTrans_9), (void*)L_11);
		// if(rectTrans == null){
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___rectTrans_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a3;
		}
	}
	{
		// Debug.LogError("SearchConeImageHelpers: No rectTransfrom was found on this gameObject. Please add one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBC86ADC0E239AE5B7E099C694236EAC10A7E1B6A, NULL);
		// return;
		goto IL_0105;
	}

IL_00a3:
	{
		// if(searchRaycastHolderPrefab == null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___searchRaycastHolderPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00c1;
		}
	}
	{
		// Debug.LogError("SearchConeImageHelpers: No transform for the forward direction of the raycast was set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB4A0A0F851280DD68B4441907EFC71227663BEF3, NULL);
		// return;
		goto IL_0105;
	}

IL_00c1:
	{
		// if(!searchRaycastHolderPrefab.GetComponent<SearchRaycastHolder>()){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___searchRaycastHolderPrefab_6;
		NullCheck(L_18);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_19;
		L_19 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_18, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00e5;
		}
	}
	{
		// Debug.LogError("SearchConeImageHelpers: The SearchRaycastHolder script wasn't found on the supplied gameObject prefab.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA29C86EB397C51E7DBF72DCAAF67319DBC6FF2AF, NULL);
	}

IL_00e5:
	{
		// if(raycastOrigin == null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___raycastOrigin_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0105;
		}
	}
	{
		// Debug.LogError("SearchConeImageHelpers: No transform for the raycast origin was set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFB8BB6CA6D6EB18FD74054203015508AF185E560, NULL);
		// return;
		goto IL_0105;
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_Update_m1D464DC2197DEB4B7B699189A865CA9CADB836C6 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(isInCreation){
		bool L_0 = __this->___isInCreation_34;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0021;
	}

IL_000e:
	{
		// if(showDebugRays){
		bool L_2 = __this->___showDebugRays_25;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// fnc_displayDebugRays();
		SearchConeImageHelpers_fnc_displayDebugRays_mFC678F0CFF78970DC0C4CFF1DCA0151FEB63BA70(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_FixedUpdate_mC8889C8AA9DAA0F78171E391136AD5EB93989752 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(isInCreation){
		bool L_0 = __this->___isInCreation_34;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0021;
	}

IL_000e:
	{
		// if(detectionActive){
		bool L_2 = __this->___detectionActive_33;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// fnc_checkForRaycastHit();
		SearchConeImageHelpers_fnc_checkForRaycastHit_mBB2A5C5987B2D8B9D8D985EE9B92570FC4D36D31(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_createDetectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_createDetectors_m80E86C9D308F9F02D834F6112F7F5E44FFEE578A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m033BC28EFDE3A40850EF85326F92C84016CA77BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrimExcess_m3B1F58F2A3CE7F4FA8E4C24A520CA3E858DFBB3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrimExcess_mC47BED4537BB5A0EEE34E9737895529305153DDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D32971B51A965015F6A4830FD603EEA6E721052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD84F077EBA0C4D8F68CCDCB2C5EC5AF841EF9A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_18 = NULL;
	bool V_19 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_20 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_21 = NULL;
	bool V_22 = false;
	int32_t G_B23_0 = 0;
	{
		// if(isInCreation){
		bool L_0 = __this->___isInCreation_34;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogWarning("SearchConeImageHelpers: Can't create detectors, is currently in the creation process");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral9BD84F077EBA0C4D8F68CCDCB2C5EC5AF841EF9A, NULL);
		// return;
		goto IL_0423;
	}

IL_001c:
	{
		// isInCreation = true;
		__this->___isInCreation_34 = (bool)1;
		// if(listDetectors != null){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___listDetectors_26;
		V_1 = (bool)((!(((RuntimeObject*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ea;
		}
	}
	{
		// if(listDetectors.Count > 0){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___listDetectors_26;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00e9;
		}
	}
	{
		// for(int i = 0; i < listDetectors.Count; i++){
		V_3 = 0;
		goto IL_00a4;
	}

IL_004e:
	{
		// if(listDetectors[i] != null){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___listDetectors_26;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_009f;
		}
	}
	{
		// if(listDetectors[i].GetComponent<SearchRaycastHolder>() != null){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___listDetectors_26;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, L_13, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_14);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_15;
		L_15 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_14, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		// listDetectors[i].GetComponent<SearchRaycastHolder>().fnc_destroyObject();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___listDetectors_26;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, L_19, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_20);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_21;
		L_21 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_20, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		NullCheck(L_21);
		SearchRaycastHolder_fnc_destroyObject_mCDF3DB7B3A6EEABFF0BAB708349D1CFCB6DB4141(L_21, NULL);
	}

IL_009e:
	{
	}

IL_009f:
	{
		// for(int i = 0; i < listDetectors.Count; i++){
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00a4:
	{
		// for(int i = 0; i < listDetectors.Count; i++){
		int32_t L_23 = V_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___listDetectors_26;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_24, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		// listDetectors.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27 = __this->___listDetectors_26;
		NullCheck(L_27);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_27, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// listDetectors.TrimExcess();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___listDetectors_26;
		NullCheck(L_28);
		List_1_TrimExcess_m3B1F58F2A3CE7F4FA8E4C24A520CA3E858DFBB3E(L_28, List_1_TrimExcess_m3B1F58F2A3CE7F4FA8E4C24A520CA3E858DFBB3E_RuntimeMethod_var);
		// listRaycastHolders.Clear();
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_29 = __this->___listRaycastHolders_27;
		NullCheck(L_29);
		List_1_Clear_m033BC28EFDE3A40850EF85326F92C84016CA77BC_inline(L_29, List_1_Clear_m033BC28EFDE3A40850EF85326F92C84016CA77BC_RuntimeMethod_var);
		// listRaycastHolders.TrimExcess();
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_30 = __this->___listRaycastHolders_27;
		NullCheck(L_30);
		List_1_TrimExcess_mC47BED4537BB5A0EEE34E9737895529305153DDD(L_30, List_1_TrimExcess_mC47BED4537BB5A0EEE34E9737895529305153DDD_RuntimeMethod_var);
	}

IL_00e9:
	{
	}

IL_00ea:
	{
		// if(raycastOrigin.childCount > 0){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___raycastOrigin_7;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_31, NULL);
		V_7 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_0164;
		}
	}
	{
		// for(int i = 0; i < raycastOrigin.childCount; i++){
		V_8 = 0;
		goto IL_014e;
	}

IL_0104:
	{
		// if(raycastOrigin.GetChild(i).gameObject.GetComponent<SearchRaycastHolder>() != null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___raycastOrigin_7;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_34, L_35, NULL);
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_38;
		L_38 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_37, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_39;
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_0147;
		}
	}
	{
		// raycastOrigin.GetChild(i).gameObject.GetComponent<SearchRaycastHolder>().fnc_destroyObject();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___raycastOrigin_7;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_41, L_42, NULL);
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_45;
		L_45 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_44, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		NullCheck(L_45);
		SearchRaycastHolder_fnc_destroyObject_mCDF3DB7B3A6EEABFF0BAB708349D1CFCB6DB4141(L_45, NULL);
	}

IL_0147:
	{
		// for(int i = 0; i < raycastOrigin.childCount; i++){
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_014e:
	{
		// for(int i = 0; i < raycastOrigin.childCount; i++){
		int32_t L_47 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___raycastOrigin_7;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_48, NULL);
		V_10 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_10;
		if (L_50)
		{
			goto IL_0104;
		}
	}
	{
	}

IL_0164:
	{
		// if(searchConeAngle > 0 && raycastDensity > 0){
		int32_t L_51 = __this->___searchConeAngle_10;
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_52 = __this->___raycastDensity_23;
		G_B23_0 = ((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		goto IL_0179;
	}

IL_0178:
	{
		G_B23_0 = 0;
	}

IL_0179:
	{
		V_11 = (bool)G_B23_0;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_041c;
		}
	}
	{
		// int nrOfDetectors = searchConeAngle/raycastDensity;
		int32_t L_54 = __this->___searchConeAngle_10;
		int32_t L_55 = __this->___raycastDensity_23;
		V_12 = ((int32_t)(L_54/L_55));
		// if(nrOfDetectors%2 == 0){
		int32_t L_56 = V_12;
		V_15 = (bool)((((int32_t)((int32_t)(L_56%2))) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_01a7;
		}
	}
	{
		// nrOfDetectors += 1;
		int32_t L_58 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_01a7:
	{
		// Vector3 setScale = new Vector3(1.0f, 1.0f, 1.0f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_13), (1.0f), (1.0f), (1.0f), NULL);
		// float rotationVal = ((float)searchConeAngle / 2.0f) / (float)nrOfDetectors;
		int32_t L_59 = __this->___searchConeAngle_10;
		int32_t L_60 = V_12;
		V_14 = ((float)(((float)(((float)L_59)/(2.0f)))/((float)L_60)));
		// for(int i = 0; i < nrOfDetectors+2; i++){
		V_16 = 0;
		goto IL_040a;
	}

IL_01d8:
	{
		// if(i == 0){
		int32_t L_61 = V_16;
		V_17 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_0295;
		}
	}
	{
		// GameObject detector = Instantiate(searchRaycastHolderPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___searchRaycastHolderPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_63, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_18 = L_64;
		// detector.name = "SearchRaycast_" + i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_18;
		String_t* L_66;
		L_66 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_16), NULL);
		String_t* L_67;
		L_67 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0D32971B51A965015F6A4830FD603EEA6E721052, L_66, NULL);
		NullCheck(L_65);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_65, L_67, NULL);
		// detector.transform.SetParent(raycastOrigin);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_18;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___raycastOrigin_7;
		NullCheck(L_69);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_69, L_70, NULL);
		// detector.transform.localPosition = raycastOrigin.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_18;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = __this->___raycastOrigin_7;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_74, NULL);
		NullCheck(L_72);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_72, L_75, NULL);
		// detector.transform.localEulerAngles = new Vector3(0.0f, 0.0f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_18;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_77, L_78, NULL);
		// detector.transform.localScale = setScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_18;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_13;
		NullCheck(L_80);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_80, L_81, NULL);
		// listDetectors.Add(detector);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_82 = __this->___listDetectors_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = V_18;
		NullCheck(L_82);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_82, L_83, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// listRaycastHolders.Add(detector.GetComponent<SearchRaycastHolder>());
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_84 = __this->___listRaycastHolders_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_18;
		NullCheck(L_85);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_86;
		L_86 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_85, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		NullCheck(L_84);
		List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_inline(L_84, L_86, List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_RuntimeMethod_var);
		goto IL_0403;
	}

IL_0295:
	{
		// if(i%2 == 1){
		int32_t L_87 = V_16;
		V_19 = (bool)((((int32_t)((int32_t)(L_87%2))) == ((int32_t)1))? 1 : 0);
		bool L_88 = V_19;
		if (!L_88)
		{
			goto IL_0355;
		}
	}
	{
		// GameObject detectorLeft = Instantiate(searchRaycastHolderPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___searchRaycastHolderPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90;
		L_90 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_89, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_20 = L_90;
		// detectorLeft.name = "SearchRaycast_" + i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_20;
		String_t* L_92;
		L_92 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_16), NULL);
		String_t* L_93;
		L_93 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0D32971B51A965015F6A4830FD603EEA6E721052, L_92, NULL);
		NullCheck(L_91);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_91, L_93, NULL);
		// detectorLeft.transform.SetParent(raycastOrigin);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = V_20;
		NullCheck(L_94);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_94, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = __this->___raycastOrigin_7;
		NullCheck(L_95);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_95, L_96, NULL);
		// detectorLeft.transform.localPosition = raycastOrigin.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = V_20;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = __this->___raycastOrigin_7;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_99, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_100, NULL);
		NullCheck(L_98);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_98, L_101, NULL);
		// detectorLeft.transform.localEulerAngles = new Vector3(0.0f, 0.0f, i * rotationVal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = V_20;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		int32_t L_104 = V_16;
		float L_105 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_106), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)L_104), L_105)), /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_103, L_106, NULL);
		// detectorLeft.transform.localScale = setScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = V_20;
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_13;
		NullCheck(L_108);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_108, L_109, NULL);
		// listDetectors.Add(detectorLeft);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_110 = __this->___listDetectors_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = V_20;
		NullCheck(L_110);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_110, L_111, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// listRaycastHolders.Add(detectorLeft.GetComponent<SearchRaycastHolder>());
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_112 = __this->___listRaycastHolders_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = V_20;
		NullCheck(L_113);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_114;
		L_114 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_113, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		NullCheck(L_112);
		List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_inline(L_112, L_114, List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_RuntimeMethod_var);
		goto IL_0402;
	}

IL_0355:
	{
		// GameObject detectorRight = Instantiate(searchRaycastHolderPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = __this->___searchRaycastHolderPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116;
		L_116 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_115, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_21 = L_116;
		// detectorRight.name = "SearchRaycast_" + i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_21;
		String_t* L_118;
		L_118 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_16), NULL);
		String_t* L_119;
		L_119 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0D32971B51A965015F6A4830FD603EEA6E721052, L_118, NULL);
		NullCheck(L_117);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_117, L_119, NULL);
		// detectorRight.transform.SetParent(raycastOrigin);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = V_21;
		NullCheck(L_120);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_120, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122 = __this->___raycastOrigin_7;
		NullCheck(L_121);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_121, L_122, NULL);
		// detectorRight.transform.localPosition = raycastOrigin.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = V_21;
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_123, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125 = __this->___raycastOrigin_7;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_125, NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_126, NULL);
		NullCheck(L_124);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_124, L_127, NULL);
		// detectorRight.transform.localEulerAngles = new Vector3(0.0f, 0.0f, -(i - 1) * rotationVal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = V_21;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_128, NULL);
		int32_t L_130 = V_16;
		float L_131 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_132), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)((-((int32_t)il2cpp_codegen_subtract(L_130, 1))))), L_131)), /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_129, L_132, NULL);
		// detectorRight.transform.localScale = setScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = V_21;
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_133, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = V_13;
		NullCheck(L_134);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_134, L_135, NULL);
		// listDetectors.Add(detectorRight);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_136 = __this->___listDetectors_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = V_21;
		NullCheck(L_136);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_136, L_137, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// listRaycastHolders.Add(detectorRight.GetComponent<SearchRaycastHolder>());
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_138 = __this->___listRaycastHolders_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = V_21;
		NullCheck(L_139);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_140;
		L_140 = GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F(L_139, GameObject_GetComponent_TisSearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63_m5FD2FC01FADC9A5AE2BBD07B16422047417E644F_RuntimeMethod_var);
		NullCheck(L_138);
		List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_inline(L_138, L_140, List_1_Add_m26121A93E378B91AEB2C0FCC634CE52FB0DBCC4B_RuntimeMethod_var);
	}

IL_0402:
	{
	}

IL_0403:
	{
		// for(int i = 0; i < nrOfDetectors+2; i++){
		int32_t L_141 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_040a:
	{
		// for(int i = 0; i < nrOfDetectors+2; i++){
		int32_t L_142 = V_16;
		int32_t L_143 = V_12;
		V_22 = (bool)((((int32_t)L_142) < ((int32_t)((int32_t)il2cpp_codegen_add(L_143, 2))))? 1 : 0);
		bool L_144 = V_22;
		if (L_144)
		{
			goto IL_01d8;
		}
	}
	{
	}

IL_041c:
	{
		// isInCreation = false;
		__this->___isInCreation_34 = (bool)0;
	}

IL_0423:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_displayDebugRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_displayDebugRays_mFC678F0CFF78970DC0C4CFF1DCA0151FEB63BA70 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if(!isInCreation){
		bool L_0 = __this->___isInCreation_34;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		// if(listRaycastHolders != null){
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_2 = __this->___listRaycastHolders_27;
		V_1 = (bool)((!(((RuntimeObject*)(List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0081;
		}
	}
	{
		// if(listRaycastHolders.Count > 0){
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_4 = __this->___listRaycastHolders_27;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_4, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0080;
		}
	}
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		V_3 = 0;
		goto IL_006b;
	}

IL_0034:
	{
		// if(listRaycastHolders[i] !=  null){
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_7 = __this->___listRaycastHolders_27;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_9;
		L_9 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_7, L_8, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// listRaycastHolders[i].fnc_drawDebugRay(Time.deltaTime);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_12 = __this->___listRaycastHolders_27;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_14;
		L_14 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_12, L_13, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_14);
		SearchRaycastHolder_fnc_drawDebugRay_mCC77AF922239956D72C36B6D3304D81DB7FD13F1(L_14, L_15, NULL);
	}

IL_0066:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006b:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_17 = V_3;
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_18 = __this->___listRaycastHolders_27;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_18, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0034;
		}
	}
	{
	}

IL_0080:
	{
	}

IL_0081:
	{
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_checkForRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_checkForRaycastHit_mBB2A5C5987B2D8B9D8D985EE9B92570FC4D36D31 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4B7165CC9EE1D3E50F7E3F1666295E0F4E2C1B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	{
		// if(nextRaycastTime < Time.time){
		float L_0 = __this->___nextRaycastTime_29;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_029d;
		}
	}
	{
		// if(listRaycastHolders.Count > 0){
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_3 = __this->___listRaycastHolders_27;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_3, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_028f;
		}
	}
	{
		// nextRaycastTime = Time.time + detectionInterval;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___detectionInterval_22;
		__this->___nextRaycastTime_29 = ((float)il2cpp_codegen_add(L_6, L_7));
		// raycastLength = Vector2.Distance(raycastOrigin.position, listRaycastHolders[0].lineOfSightDirection.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___raycastOrigin_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_11 = __this->___listRaycastHolders_27;
		NullCheck(L_11);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_12;
		L_12 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_11, 0, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		float L_16;
		L_16 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_10, L_15, NULL);
		__this->___raycastLength_30 = L_16;
		// bool targetHitByRaycast = false;
		V_2 = (bool)0;
		// string tagOfHitObject = string.Empty;
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_17;
		// if(showDebugRays){
		bool L_18 = __this->___showDebugRays_25;
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		V_5 = 0;
		goto IL_00aa;
	}

IL_008e:
	{
		// listRaycastHolders[i].fnc_setHitState(false);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_20 = __this->___listRaycastHolders_27;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_22;
		L_22 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_20, L_21, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		NullCheck(L_22);
		SearchRaycastHolder_fnc_setHitState_m83D2C052C5275323FA3A5D1211F87B30F48A80A9(L_22, (bool)0, NULL);
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00aa:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_24 = V_5;
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_25 = __this->___listRaycastHolders_27;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_25, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_008e;
		}
	}
	{
	}

IL_00c0:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		V_7 = 0;
		goto IL_01e4;
	}

IL_00c8:
	{
		// int j = i;
		int32_t L_28 = V_7;
		V_8 = L_28;
		// if(searchFromOutsideIn){
		bool L_29 = __this->___searchFromOutsideIn_24;
		V_10 = L_29;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00ed;
		}
	}
	{
		// j = listRaycastHolders.Count - 1 - i;
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_31 = __this->___listRaycastHolders_27;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_31, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		int32_t L_33 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_32, 1)), L_33));
	}

IL_00ed:
	{
		// RaycastHit2D rHit = Physics2D.Raycast(raycastOrigin.position,
		//     listRaycastHolders[j].lineOfSightDirection.position - raycastOrigin.position,
		//         raycastLength, includedLayerMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___raycastOrigin_7;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_35, NULL);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_37 = __this->___listRaycastHolders_27;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_39;
		L_39 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_37, L_38, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___raycastOrigin_7;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_43, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_44, NULL);
		float L_46 = __this->___raycastLength_30;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_47 = __this->___includedLayerMask_28;
		int32_t L_48;
		L_48 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_49;
		L_49 = Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F(L_36, L_45, L_46, L_48, NULL);
		V_9 = L_49;
		// if(rHit){
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_50 = V_9;
		bool L_51;
		L_51 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_50, NULL);
		V_11 = L_51;
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_01d3;
		}
	}
	{
		// tagOfHitObject = rHit.transform.gameObject.tag;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_9), NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_54, NULL);
		V_3 = L_55;
		// for(int k = 0; k < tagsToDetect.Length; k++){
		V_12 = 0;
		goto IL_01c0;
	}

IL_0169:
	{
		// if(string.Equals(tagsToDetect[k], tagOfHitObject)){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = __this->___tagsToDetect_20;
		int32_t L_57 = V_12;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		String_t* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		String_t* L_60 = V_3;
		bool L_61;
		L_61 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_59, L_60, NULL);
		V_13 = L_61;
		bool L_62 = V_13;
		if (!L_62)
		{
			goto IL_01b9;
		}
	}
	{
		// lastDetectedGO = rHit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_9), NULL);
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		SearchConeImageHelpers_set_lastDetectedGO_mE3E253C6EAAE54AC775C09DB51D8FB960935537B(__this, L_64, NULL);
		// targetHitByRaycast = true;
		V_2 = (bool)1;
		// if(showDebugRays){
		bool L_65 = __this->___showDebugRays_25;
		V_14 = L_65;
		bool L_66 = V_14;
		if (!L_66)
		{
			goto IL_01b7;
		}
	}
	{
		// listRaycastHolders[j].fnc_setHitState(true);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_67 = __this->___listRaycastHolders_27;
		int32_t L_68 = V_8;
		NullCheck(L_67);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_69;
		L_69 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_67, L_68, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		NullCheck(L_69);
		SearchRaycastHolder_fnc_setHitState_m83D2C052C5275323FA3A5D1211F87B30F48A80A9(L_69, (bool)1, NULL);
	}

IL_01b7:
	{
		// break;
		goto IL_01d2;
	}

IL_01b9:
	{
		// for(int k = 0; k < tagsToDetect.Length; k++){
		int32_t L_70 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01c0:
	{
		// for(int k = 0; k < tagsToDetect.Length; k++){
		int32_t L_71 = V_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = __this->___tagsToDetect_20;
		NullCheck(L_72);
		V_15 = (bool)((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))? 1 : 0);
		bool L_73 = V_15;
		if (L_73)
		{
			goto IL_0169;
		}
	}

IL_01d2:
	{
	}

IL_01d3:
	{
		// if(targetHitByRaycast){
		bool L_74 = V_2;
		V_16 = L_74;
		bool L_75 = V_16;
		if (!L_75)
		{
			goto IL_01dd;
		}
	}
	{
		// break;
		goto IL_01fc;
	}

IL_01dd:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_76 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01e4:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_77 = V_7;
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_78 = __this->___listRaycastHolders_27;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_78, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_17;
		if (L_80)
		{
			goto IL_00c8;
		}
	}

IL_01fc:
	{
		// if(targetHitByRaycast){
		bool L_81 = V_2;
		V_18 = L_81;
		bool L_82 = V_18;
		if (!L_82)
		{
			goto IL_024a;
		}
	}
	{
		// if(!targetDetected){
		bool L_83;
		L_83 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		V_19 = (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_19;
		if (!L_84)
		{
			goto IL_0247;
		}
	}
	{
		// targetDetected = true;
		SearchConeImageHelpers_set_targetDetected_mD8CDEAD6B65ADC89AB5B5C29C7C8512B01620265(__this, (bool)1, NULL);
		// if(useColorChangeOnDetection){
		bool L_85 = __this->___useColorChangeOnDetection_13;
		V_20 = L_85;
		bool L_86 = V_20;
		if (!L_86)
		{
			goto IL_0231;
		}
	}
	{
		// fnc_fadeToDetected();
		SearchConeImageHelpers_fnc_fadeToDetected_m8964623BAF705109683E58023B6DCB92179B1322(__this, NULL);
	}

IL_0231:
	{
		// if(useCustomSearchConeSprites){
		bool L_87 = __this->___useCustomSearchConeSprites_17;
		V_21 = L_87;
		bool L_88 = V_21;
		if (!L_88)
		{
			goto IL_0246;
		}
	}
	{
		// fnc_changeSpriteToDetected();
		SearchConeImageHelpers_fnc_changeSpriteToDetected_mEA77B00ACE28847CD638931DE35EFA3C82225FB2(__this, NULL);
	}

IL_0246:
	{
	}

IL_0247:
	{
		goto IL_028c;
	}

IL_024a:
	{
		// if(targetDetected){
		bool L_89;
		L_89 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		V_22 = L_89;
		bool L_90 = V_22;
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		// targetDetected = false;
		SearchConeImageHelpers_set_targetDetected_mD8CDEAD6B65ADC89AB5B5C29C7C8512B01620265(__this, (bool)0, NULL);
		// if(useColorChangeOnDetection){
		bool L_91 = __this->___useColorChangeOnDetection_13;
		V_23 = L_91;
		bool L_92 = V_23;
		if (!L_92)
		{
			goto IL_0275;
		}
	}
	{
		// fnc_fadeToUndetected();
		SearchConeImageHelpers_fnc_fadeToUndetected_m347DCBA6228EAA0A43AF1140CE0BED6D994037ED(__this, NULL);
	}

IL_0275:
	{
		// if(useCustomSearchConeSprites){
		bool L_93 = __this->___useCustomSearchConeSprites_17;
		V_24 = L_93;
		bool L_94 = V_24;
		if (!L_94)
		{
			goto IL_028a;
		}
	}
	{
		// fnc_changeSpriteToUndetected();
		SearchConeImageHelpers_fnc_changeSpriteToUndetected_mD13E7D01BF7933AD54C7A6D7115F2E86DD9B006F(__this, NULL);
	}

IL_028a:
	{
	}

IL_028b:
	{
	}

IL_028c:
	{
		goto IL_029c;
	}

IL_028f:
	{
		// Debug.LogWarning("SearchConeImageHelper: No raycast holder were created");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2D4B7165CC9EE1D3E50F7E3F1666295E0F4E2C1B, NULL);
	}

IL_029c:
	{
	}

IL_029d:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_fadeToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_fadeToDetected_m8964623BAF705109683E58023B6DCB92179B1322 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(displaySearchCone){
		bool L_0 = __this->___displaySearchCone_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if(coroutineFadeSearchConeToNeutral != null){
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___coroutineFadeSearchConeToNeutral_36;
		V_1 = (bool)((!(((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// StopCoroutine(coroutineFadeSearchConeToNeutral);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4 = __this->___coroutineFadeSearchConeToNeutral_36;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_4, NULL);
	}

IL_0028:
	{
		// coroutineFadeSearchConeToDetected = StartCoroutine(FadeSearchConeColorToDetected());
		RuntimeObject* L_5;
		L_5 = SearchConeImageHelpers_FadeSearchConeColorToDetected_m3489CE9EE44C3DE8B11C0F1167FE225EE0A0B5C4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		__this->___coroutineFadeSearchConeToDetected_35 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutineFadeSearchConeToDetected_35), (void*)L_6);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_fadeToUndetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_fadeToUndetected_m347DCBA6228EAA0A43AF1140CE0BED6D994037ED (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(displaySearchCone){
		bool L_0 = __this->___displaySearchCone_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if(coroutineFadeSearchConeToDetected != null){
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___coroutineFadeSearchConeToDetected_35;
		V_1 = (bool)((!(((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// StopCoroutine(coroutineFadeSearchConeToDetected);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4 = __this->___coroutineFadeSearchConeToDetected_35;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_4, NULL);
	}

IL_0028:
	{
		// coroutineFadeSearchConeToNeutral = StartCoroutine(FadeSearchConeColorToNeutral());
		RuntimeObject* L_5;
		L_5 = SearchConeImageHelpers_FadeSearchConeColorToNeutral_m748FD183DD442C137C958BEB934987547857692C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		__this->___coroutineFadeSearchConeToNeutral_36 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutineFadeSearchConeToNeutral_36), (void*)L_6);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_changeSpriteToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_changeSpriteToDetected_mEA77B00ACE28847CD638931DE35EFA3C82225FB2 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(displaySearchCone){
		bool L_0 = __this->___displaySearchCone_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// if(spriteDetected != null){
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___spriteDetected_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// imgSearchCone.sprite = spriteDetected;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___imgSearchCone_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___spriteDetected_19;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
	}

IL_0030:
	{
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_changeSpriteToUndetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_changeSpriteToUndetected_mD13E7D01BF7933AD54C7A6D7115F2E86DD9B006F (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(displaySearchCone){
		bool L_0 = __this->___displaySearchCone_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// if(spriteNeutral != null){
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___spriteNeutral_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// imgSearchCone.sprite = spriteNeutral;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___imgSearchCone_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___spriteNeutral_18;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
	}

IL_0030:
	{
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SearchConeImageHelpers::FadeSearchConeColorToDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchConeImageHelpers_FadeSearchConeColorToDetected_m3489CE9EE44C3DE8B11C0F1167FE225EE0A0B5C4 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* L_0 = (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE*)il2cpp_codegen_object_new(U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeSearchConeColorToDetectedU3Ed__49__ctor_mBC75949BB1471084B7CA685670552C634753C8A2(L_0, 0, NULL);
		U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SearchConeImageHelpers::FadeSearchConeColorToNeutral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SearchConeImageHelpers_FadeSearchConeColorToNeutral_m748FD183DD442C137C958BEB934987547857692C (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* L_0 = (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42*)il2cpp_codegen_object_new(U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeSearchConeColorToNeutralU3Ed__50__ctor_mAFC5864538B5EF180C050EFE33CA2E349331E1C4(L_0, 0, NULL);
		U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SearchConeImageHelpers::fnc_setDetectionActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDetectionActive_m8D05F6C96DE4F6D75615A314734BC2F3E210292B (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inIsActive0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// detectionActive = inIsActive;
		bool L_0 = ___inIsActive0;
		__this->___detectionActive_33 = L_0;
		// if(!detectionActive){
		bool L_1 = __this->___detectionActive_33;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0098;
		}
	}
	{
		// if(targetDetected){
		bool L_3;
		L_3 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0097;
		}
	}
	{
		// targetDetected = false;
		SearchConeImageHelpers_set_targetDetected_mD8CDEAD6B65ADC89AB5B5C29C7C8512B01620265(__this, (bool)0, NULL);
		// if(useColorChangeOnDetection){
		bool L_5 = __this->___useColorChangeOnDetection_13;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// fnc_fadeToUndetected();
		SearchConeImageHelpers_fnc_fadeToUndetected_m347DCBA6228EAA0A43AF1140CE0BED6D994037ED(__this, NULL);
	}

IL_003f:
	{
		// if(useCustomSearchConeSprites){
		bool L_7 = __this->___useCustomSearchConeSprites_17;
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// fnc_changeSpriteToUndetected();
		SearchConeImageHelpers_fnc_changeSpriteToUndetected_mD13E7D01BF7933AD54C7A6D7115F2E86DD9B006F(__this, NULL);
	}

IL_0052:
	{
		// if(showDebugRays){
		bool L_9 = __this->___showDebugRays_25;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0096;
		}
	}
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		V_5 = 0;
		goto IL_0080;
	}

IL_0064:
	{
		// listRaycastHolders[i].fnc_setHitState(false);
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_11 = __this->___listRaycastHolders_27;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* L_13;
		L_13 = List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24(L_11, L_12, List_1_get_Item_mD8196B2D83AECE30FEFA643288CA4D628200CC24_RuntimeMethod_var);
		NullCheck(L_13);
		SearchRaycastHolder_fnc_setHitState_m83D2C052C5275323FA3A5D1211F87B30F48A80A9(L_13, (bool)0, NULL);
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0080:
	{
		// for(int i = 0; i < listRaycastHolders.Count; i++){
		int32_t L_15 = V_5;
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_16 = __this->___listRaycastHolders_27;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_inline(L_16, List_1_get_Count_mE99235F4EFD107E057F379D6FB32E749F2B4F68E_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0064;
		}
	}
	{
	}

IL_0096:
	{
	}

IL_0097:
	{
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setSearchConeAngle(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchConeAngle_m7AA6C602A88570700091F75259F8D787E1E87BD8 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inAngle0, bool ___inEavluateChanges1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// searchConeAngle = inAngle;
		int32_t L_0 = ___inAngle0;
		__this->___searchConeAngle_10 = L_0;
		// imgSearchCone.fillAmount = (float)searchConeAngle/360.0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgSearchCone_8;
		int32_t L_2 = __this->___searchConeAngle_10;
		NullCheck(L_1);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_1, ((float)(((float)L_2)/(360.0f))), NULL);
		// rectTrans.localEulerAngles = new Vector3(0.0f, 0.0f, (float)searchConeAngle/2.0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___rectTrans_9;
		int32_t L_4 = __this->___searchConeAngle_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), ((float)(((float)L_4)/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_3, L_5, NULL);
		// if(inEavluateChanges){
		bool L_6 = ___inEavluateChanges1;
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// fnc_createDetectors();
		SearchConeImageHelpers_fnc_createDetectors_m80E86C9D308F9F02D834F6112F7F5E44FFEE578A(__this, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setSearchConeSize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchConeSize_mBFBA22F40D674B839FC850B5749B31C7BDC34E65 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inSize0, bool ___inEavluateChanges1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// searchConeSize = inSize;
		int32_t L_0 = ___inSize0;
		__this->___searchConeSize_11 = L_0;
		// if(inEavluateChanges){
		bool L_1 = ___inEavluateChanges1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// fnc_createDetectors();
		SearchConeImageHelpers_fnc_createDetectors_m80E86C9D308F9F02D834F6112F7F5E44FFEE578A(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setDisplaySearchCone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDisplaySearchCone_mDBC02A89CAF8D9ED4A1F7A6825BB2082C820177E (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inDisplaySearchCone0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// displaySearchCone = inDisplaySearchCone;
		bool L_0 = ___inDisplaySearchCone0;
		__this->___displaySearchCone_12 = L_0;
		// if(displaySearchCone){
		bool L_1 = __this->___displaySearchCone_12;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// imgSearchCone.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___imgSearchCone_8;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		goto IL_0032;
	}

IL_0023:
	{
		// imgSearchCone.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgSearchCone_8;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setUseColorChangeOnDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setUseColorChangeOnDetection_mA5300A91744251F05B51922D0D361D9943E5DB41 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inUseColorChange0, const RuntimeMethod* method) 
{
	{
		// useColorChangeOnDetection = inUseColorChange;
		bool L_0 = ___inUseColorChange0;
		__this->___useColorChangeOnDetection_13 = L_0;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setColNeutral(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColNeutral_mDD17A8F8520F3C2743951FD400922EAA04A7BF1E (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___inCol0, const RuntimeMethod* method) 
{
	{
		// colNeutral = inCol;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___inCol0;
		__this->___colNeutral_14 = L_0;
		// imgSearchCone.color = colNeutral;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgSearchCone_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___colNeutral_14;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setColDetected(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColDetected_mBF14162F51B1E2EFC7317CCFFF449475CBBA056A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___inCol0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// colDetectd = inCol;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___inCol0;
		__this->___colDetectd_15 = L_0;
		// if(useColorChangeOnDetection && targetDetected){
		bool L_1 = __this->___useColorChangeOnDetection_13;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2;
		L_2 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// imgSearchCone.color = colDetectd;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgSearchCone_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___colDetectd_15;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setColChangeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setColChangeTime_m34D58DF3EC1DA3B66F3521E98F7A46F28C07FBD9 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, float ___inChangeTime0, const RuntimeMethod* method) 
{
	{
		// colChangeTime = inChangeTime;
		float L_0 = ___inChangeTime0;
		__this->___colChangeTime_16 = L_0;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setUseCustomSearchConeSprites(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setUseCustomSearchConeSprites_mC4B65BA727D6D9FEE64AFE68E3491298DB2E2F29 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inUse0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if(!inUse && useCustomSearchConeSprites && targetDetected){
		bool L_0 = ___inUse0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___useCustomSearchConeSprites_17;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2;
		L_2 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// imgSearchCone.sprite = spriteNeutral;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgSearchCone_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___spriteNeutral_18;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
	}

IL_002d:
	{
		// useCustomSearchConeSprites = inUse;
		bool L_6 = ___inUse0;
		__this->___useCustomSearchConeSprites_17 = L_6;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setSpriteNeutral(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSpriteNeutral_m622087062E8802B5B9D35BE23D4700B52D371A0D (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___inSprite0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// spriteNeutral = inSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___inSprite0;
		__this->___spriteNeutral_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteNeutral_18), (void*)L_0);
		// if(useCustomSearchConeSprites && !targetDetected){
		bool L_1 = __this->___useCustomSearchConeSprites_17;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// imgSearchCone.sprite = spriteNeutral;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgSearchCone_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___spriteNeutral_18;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setSpriteDetected(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSpriteDetected_m7E82A00AD62DE3BFAD0AEEB3068EEB144B8675E7 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___inSprite0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// spriteDetected = inSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___inSprite0;
		__this->___spriteDetected_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteDetected_19), (void*)L_0);
		// if(useCustomSearchConeSprites && targetDetected){
		bool L_1 = __this->___useCustomSearchConeSprites_17;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2;
		L_2 = SearchConeImageHelpers_get_targetDetected_m9F6E8142393D8114E0AF3AAB5C3B3D7B7296F558(__this, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// imgSearchCone.sprite = spriteDetected;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgSearchCone_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___spriteDetected_19;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setTagsToDetect(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setTagsToDetect_mE6BBEA679D3D37C3881C388A2E033EA43376822A (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___inTagsToDetect0, const RuntimeMethod* method) 
{
	{
		// tagsToDetect = inTagsToDetect;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___inTagsToDetect0;
		__this->___tagsToDetect_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagsToDetect_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setRaycastIncludedLayers(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setRaycastIncludedLayers_m04AB1718F9623690BC6C0BBFAF7532D370133133 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inRaycastIncludedLayers0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// raycastIncludedLayers = inRaycastIncludedLayers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___inRaycastIncludedLayers0;
		__this->___raycastIncludedLayers_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastIncludedLayers_21), (void*)L_0);
		// includedLayerMask = 0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(0, NULL);
		__this->___includedLayerMask_28 = L_1;
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		V_0 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		// includedLayerMask += 1 << raycastIncludedLayers[i];
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = __this->___includedLayerMask_28;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___raycastIncludedLayers_21;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8;
		L_8 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))), NULL);
		__this->___includedLayerMask_28 = L_8;
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0042:
	{
		// for(int i = 0; i < raycastIncludedLayers.Length; i++){
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___raycastIncludedLayers_21;
		NullCheck(L_11);
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setDetectionInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setDetectionInterval_m3A3B51594F1D637C647B7914C0BE268A7382ECA3 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, float ___inDetectionInterval0, const RuntimeMethod* method) 
{
	{
		// detectionInterval = inDetectionInterval;
		float L_0 = ___inDetectionInterval0;
		__this->___detectionInterval_22 = L_0;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setRaycastDensity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setRaycastDensity_mC83911AACA9EEBC6AFD4BE565CD44218BBA500CE (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, int32_t ___inDensity0, const RuntimeMethod* method) 
{
	{
		// raycastDensity = inDensity;
		int32_t L_0 = ___inDensity0;
		__this->___raycastDensity_23 = L_0;
		// fnc_createDetectors();
		SearchConeImageHelpers_fnc_createDetectors_m80E86C9D308F9F02D834F6112F7F5E44FFEE578A(__this, NULL);
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setSearchFromOutsideIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setSearchFromOutsideIn_m3E5463AC9C501ACFD7F9C1758720503D983E3B97 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inFromOutsideIn0, const RuntimeMethod* method) 
{
	{
		// searchFromOutsideIn = inFromOutsideIn;
		bool L_0 = ___inFromOutsideIn0;
		__this->___searchFromOutsideIn_24 = L_0;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::fnc_setShowDebugRays(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers_fnc_setShowDebugRays_mAA4B42777E201C5287DB8100AD702FEA62075336 (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, bool ___inShowDebugRays0, const RuntimeMethod* method) 
{
	{
		// showDebugRays = inShowDebugRays;
		bool L_0 = ___inShowDebugRays0;
		__this->___showDebugRays_25 = L_0;
		// }
		return;
	}
}
// System.Void SearchConeImageHelpers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchConeImageHelpers__ctor_m0F9306C407BF781EFFD880EF9DE3BBF51B27ACEB (SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17389E68D56688407FA6BA8B99CB808D3629DCD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _targetDetected = false;
		__this->____targetDetected_5 = (bool)0;
		// private GameObject searchRaycastHolderPrefab = null;
		__this->___searchRaycastHolderPrefab_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchRaycastHolderPrefab_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private Transform raycastOrigin = null;
		__this->___raycastOrigin_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastOrigin_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private Image imgSearchCone = null;
		__this->___imgSearchCone_8 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgSearchCone_8), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// private RectTransform rectTrans = null;
		__this->___rectTrans_9 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTrans_9), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private List<GameObject> listDetectors = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___listDetectors_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listDetectors_26), (void*)L_0);
		// private List<SearchRaycastHolder> listRaycastHolders = new List<SearchRaycastHolder>();
		List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D* L_1 = (List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D*)il2cpp_codegen_object_new(List_1_t56A82E04D7006BDD388CB6486C3B7E8BD233116D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17389E68D56688407FA6BA8B99CB808D3629DCD4(L_1, List_1__ctor_m17389E68D56688407FA6BA8B99CB808D3629DCD4_RuntimeMethod_var);
		__this->___listRaycastHolders_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listRaycastHolders_27), (void*)L_1);
		// private float nextRaycastTime = 0.0f;
		__this->___nextRaycastTime_29 = (0.0f);
		// private float raycastLength = 0.0f;
		__this->___raycastLength_30 = (0.0f);
		// private float colorFadeTime = 0.0f;
		__this->___colorFadeTime_31 = (0.0f);
		// private bool detectionActive = false;
		__this->___detectionActive_33 = (bool)0;
		// private bool isInCreation = false;
		__this->___isInCreation_34 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToDetectedU3Ed__49__ctor_mBC75949BB1471084B7CA685670552C634753C8A2 (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToDetectedU3Ed__49_System_IDisposable_Dispose_m46D4D01B03C0F9FD363060461D04D2FA4B54F7BA (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSearchConeColorToDetectedU3Ed__49_MoveNext_mC8460392CBDF3EC7A56C84766FC5D401F7D3C0CE (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00d5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color startCol = imgSearchCone.color;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = L_3->___imgSearchCone_8;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___U3CstartColU3E5__1_3 = L_5;
		// colorFadeTime = 0.0f;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		L_6->___colorFadeTime_31 = (0.0f);
		goto IL_00dd;
	}

IL_004e:
	{
		// colFade = Color.Lerp(startCol, colDetectd, colorFadeTime);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_7 = __this->___U3CU3E4__this_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___U3CstartColU3E5__1_3;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___colDetectd_15;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		float L_12 = L_11->___colorFadeTime_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_8, L_10, L_12, NULL);
		NullCheck(L_7);
		L_7->___colFade_32 = L_13;
		// imgSearchCone.color = colFade;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = L_14->___imgSearchCone_8;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___colFade_32;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// colorFadeTime += Time.deltaTime * (1.0f / colChangeTime);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_18 = __this->___U3CU3E4__this_2;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		float L_20 = L_19->___colorFadeTime_31;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		float L_23 = L_22->___colChangeTime_16;
		NullCheck(L_18);
		L_18->___colorFadeTime_31 = ((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_21, ((float)((1.0f)/L_23))))));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dd:
	{
		// while(colorFadeTime < 1.0f){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		float L_25 = L_24->___colorFadeTime_31;
		V_1 = (bool)((((float)L_25) < ((float)(1.0f)))? 1 : 0);
		bool L_26 = V_1;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSearchConeColorToDetectedU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m69C0AFCA52FFAB0242C24BD15A5C59942889C108 (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToDetectedU3Ed__49_System_Collections_IEnumerator_Reset_m17D499819D05A4EF9E8C7D3C72D500F926C24D36 (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSearchConeColorToDetectedU3Ed__49_System_Collections_IEnumerator_Reset_m17D499819D05A4EF9E8C7D3C72D500F926C24D36_RuntimeMethod_var)));
	}
}
// System.Object SearchConeImageHelpers/<FadeSearchConeColorToDetected>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSearchConeColorToDetectedU3Ed__49_System_Collections_IEnumerator_get_Current_m84A719D8A7EC8C0704FCC79A8F7735E696E27E53 (U3CFadeSearchConeColorToDetectedU3Ed__49_t31E55FF5E4A159A04CAF820A1F38D913BD0E9FFE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToNeutralU3Ed__50__ctor_mAFC5864538B5EF180C050EFE33CA2E349331E1C4 (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToNeutralU3Ed__50_System_IDisposable_Dispose_mD68B0905060A9BE77A367D9E853501F9CB305EE4 (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSearchConeColorToNeutralU3Ed__50_MoveNext_m5EC57F261B5C0A5FF89A05AC875F9A6642E0F99A (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00d5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color startCol = imgSearchCone.color;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = L_3->___imgSearchCone_8;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___U3CstartColU3E5__1_3 = L_5;
		// colorFadeTime = 0.0f;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		L_6->___colorFadeTime_31 = (0.0f);
		goto IL_00dd;
	}

IL_004e:
	{
		// colFade = Color.Lerp(startCol, colNeutral, colorFadeTime);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_7 = __this->___U3CU3E4__this_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___U3CstartColU3E5__1_3;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___colNeutral_14;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		float L_12 = L_11->___colorFadeTime_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_8, L_10, L_12, NULL);
		NullCheck(L_7);
		L_7->___colFade_32 = L_13;
		// imgSearchCone.color = colFade;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = L_14->___imgSearchCone_8;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___colFade_32;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// colorFadeTime += Time.deltaTime * (1.0f / colChangeTime);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_18 = __this->___U3CU3E4__this_2;
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		float L_20 = L_19->___colorFadeTime_31;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		float L_23 = L_22->___colChangeTime_16;
		NullCheck(L_18);
		L_18->___colorFadeTime_31 = ((float)il2cpp_codegen_add(L_20, ((float)il2cpp_codegen_multiply(L_21, ((float)((1.0f)/L_23))))));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dd:
	{
		// while(colorFadeTime < 1.0f){
		SearchConeImageHelpers_tDE64E5CAA90DEE04C46A9C5A1A17E1250748EFFB* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		float L_25 = L_24->___colorFadeTime_31;
		V_1 = (bool)((((float)L_25) < ((float)(1.0f)))? 1 : 0);
		bool L_26 = V_1;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSearchConeColorToNeutralU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8469E1D660A6F5B31E96FDBFA5506DD53989864C (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSearchConeColorToNeutralU3Ed__50_System_Collections_IEnumerator_Reset_mEEFE04B2CC751D32553C48BFAFF89D64035499D3 (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSearchConeColorToNeutralU3Ed__50_System_Collections_IEnumerator_Reset_mEEFE04B2CC751D32553C48BFAFF89D64035499D3_RuntimeMethod_var)));
	}
}
// System.Object SearchConeImageHelpers/<FadeSearchConeColorToNeutral>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeSearchConeColorToNeutralU3Ed__50_System_Collections_IEnumerator_get_Current_mD8C64798FF9EB46380C5AD2900EAD069C930FC64 (U3CFadeSearchConeColorToNeutralU3Ed__50_t301FF01DF65AA999EE767AC20AAFA521D7141D42* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.Transform SearchRaycastHolder::get_lineOfSightDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// public Transform lineOfSightDirection {get {return _lineOfSightDirection;} private set {_lineOfSightDirection = value;}}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____lineOfSightDirection_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Transform lineOfSightDirection {get {return _lineOfSightDirection;} private set {_lineOfSightDirection = value;}}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void SearchRaycastHolder::set_lineOfSightDirection(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_set_lineOfSightDirection_m123862E7D6860C0B6B9AE50C83AFF7CA540F079F (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform lineOfSightDirection {get {return _lineOfSightDirection;} private set {_lineOfSightDirection = value;}}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____lineOfSightDirection_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineOfSightDirection_4), (void*)L_0);
		// public Transform lineOfSightDirection {get {return _lineOfSightDirection;} private set {_lineOfSightDirection = value;}}
		return;
	}
}
// System.Void SearchRaycastHolder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_Awake_mAFE29E44F12D2B66E34B0B320513C4BDCDED7573 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9731A4E8928017510CC97D3EB0461DE947117C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(lineOfSightDirection == null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("SearchRaycastHolder: No transform for the lineOfSightDirection was set in the inspector.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0A9731A4E8928017510CC97D3EB0461DE947117C, NULL);
		// return;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SearchRaycastHolder::fnc_destroyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_destroyObject_mCDF3DB7B3A6EEABFF0BAB708349D1CFCB6DB4141 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(Application.isPlaying){
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(gameObject, 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_2, (0.5f), NULL);
		goto IL_002d;
	}

IL_001f:
	{
		// DestroyImmediate(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void SearchRaycastHolder::fnc_drawDebugRay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_drawDebugRay_mCC77AF922239956D72C36B6D3304D81DB7FD13F1 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, float ___inDisplayFor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(Application.isPlaying){
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		// if(hasHitTarget){
		bool L_2 = __this->___hasHitTarget_5;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.DrawRay(gameObject.transform.position, lineOfSightDirection.position - gameObject.transform.position,
		// Color.green, inDisplayFor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		float L_14 = ___inDisplayFor0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_6, L_12, L_13, L_14, NULL);
		goto IL_0096;
	}

IL_0058:
	{
		// Debug.DrawRay(gameObject.transform.position, lineOfSightDirection.position - gameObject.transform.position,
		// Color.red, inDisplayFor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = SearchRaycastHolder_get_lineOfSightDirection_m2F371BCB4C90AC494BB4817C5CD52AEFA231FAF2(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_22, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		float L_25 = ___inDisplayFor0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_17, L_23, L_24, L_25, NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void SearchRaycastHolder::fnc_setHitState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder_fnc_setHitState_m83D2C052C5275323FA3A5D1211F87B30F48A80A9 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, bool ___inHasHit0, const RuntimeMethod* method) 
{
	{
		// hasHitTarget = inHasHit;
		bool L_0 = ___inHasHit0;
		__this->___hasHitTarget_5 = L_0;
		// }
		return;
	}
}
// System.Void SearchRaycastHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchRaycastHolder__ctor_mBC54C67F701026810C3CF8DEFDCB6B5264EC06E3 (SearchRaycastHolder_t7247B95FF66D7A9311949C95C1E75EF2F6F14D63* __this, const RuntimeMethod* method) 
{
	{
		// private Transform _lineOfSightDirection = null;
		__this->____lineOfSightDirection_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineOfSightDirection_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private bool hasHitTarget = false;
		__this->___hasHitTarget_5 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MenuManager::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_GoBack_mBC16006E50B2C80441267E2E9A3415117093EBC4 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (m_navigationHistory.Count > 1)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___m_navigationHistory_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// int index = m_navigationHistory.Count - 1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___m_navigationHistory_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// Animate(m_navigationHistory[index - 1], true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___m_navigationHistory_6;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85(__this, L_7, (bool)1, NULL);
		// GameObject target = m_navigationHistory[index];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___m_navigationHistory_6;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_10;
		// m_navigationHistory.RemoveAt(index);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___m_navigationHistory_6;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_11, L_12, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// Animate(target, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85(__this, L_13, (bool)0, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void MenuManager::GoToMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_GoToMenu_mEF063640FE824511D8A1B0409DA666AA2E67661B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0059;
	}

IL_000f:
	{
		// if (m_navigationHistory.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___m_navigationHistory_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// Animate(m_navigationHistory[m_navigationHistory.Count - 1], false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___m_navigationHistory_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___m_navigationHistory_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_7, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85(__this, L_9, (bool)0, NULL);
	}

IL_0043:
	{
		// m_navigationHistory.Add(target);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___m_navigationHistory_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___target0;
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Animate(target, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___target0;
		MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85(__this, L_12, (bool)1, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void MenuManager::Animate(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Animate_mFC56B4A07C1639D4F9DC06FE30ABA6189D4CAF85 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, bool ___direction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0069;
	}

IL_000f:
	{
		// target.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___target0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Canvas canvasComponent = target.GetComponent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___target0;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_4, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		V_0 = L_5;
		// if (canvasComponent != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// canvasComponent.overrideSorting = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_0;
		NullCheck(L_9);
		Canvas_set_overrideSorting_m155D936A457E7935683894150A0E5DBED2170F54(L_9, (bool)1, NULL);
		// canvasComponent.sortingOrder = m_navigationHistory.Count;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___m_navigationHistory_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_11, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_10);
		Canvas_set_sortingOrder_m70D89DB61A3C0589C0FAB525E613DE9D0C799AAC(L_10, L_12, NULL);
	}

IL_0045:
	{
		// Animator animatorComponent = target.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___target0;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14;
		L_14 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_13, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_1 = L_14;
		// if (animatorComponent != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0069;
		}
	}
	{
		// animatorComponent.SetBool(m_animationPropertyName, direction);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = V_1;
		String_t* L_19 = __this->___m_animationPropertyName_4;
		bool L_20 = ___direction1;
		NullCheck(L_18);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, L_19, L_20, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void MenuManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Awake_mBE6CB23506EC05F5ED24A23ED037C9B2E33C4DD6 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_navigationHistory = new List<GameObject>{m_initialScreen};
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_initialScreen_5;
		NullCheck(L_1);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_1, L_2, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		__this->___m_navigationHistory_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_navigationHistory_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Start_m0F7F0CFD5169405746F313FF1D7ED1534412844D (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// effectScript = GameObject.Find("ETFXFireProjectile").GetComponent<ETFXFireProjectile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC, NULL);
		NullCheck(L_0);
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_1;
		L_1 = GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791(L_0, GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		__this->___effectScript_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectScript_7), (void*)L_1);
		// getProjectileNames();
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(__this, NULL);
		// MyButtonText = Button.transform.Find("Text").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Button_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9, NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_4, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___MyButtonText_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MyButtonText_5), (void*)L_5);
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___MyButtonText_5;
		String_t* L_7 = __this->___projectileParticleName_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Update_m81BD65853D34C93426A7D596C3DE2194AA0DDE65 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___MyButtonText_5;
		String_t* L_1 = __this->___projectileParticleName_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileScript = effectScript.projectiles[effectScript.currentProjectile].GetComponent<ETFXProjectileScript>();
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_0 = __this->___effectScript_7;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0->___projectiles_4;
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_2 = __this->___effectScript_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___currentProjectile_6;
		NullCheck(L_1);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_6;
		L_6 = GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436(L_5, GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		__this->___projectileScript_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileScript_8), (void*)L_6);
		// projectileParticleName = projectileScript.projectileParticle.name;    // Assign the name of the currently selected projectile to projectileParticleName
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_7 = __this->___projectileScript_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___projectileParticle_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		__this->___projectileParticleName_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileParticleName_6), (void*)L_9);
		// }
		return;
	}
}
// System.Boolean EpicToonFX.ETFXButtonScript::overButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETFXButtonScript_overButton_m91409E8AD5D3F2F253116858FFC90E972C7BA9B2 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// Rect button1 = new Rect(buttonsX, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_0 = __this->___buttonsX_9;
		float L_1 = __this->___buttonsY_10;
		float L_2 = __this->___buttonsSizeX_11;
		float L_3 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), L_0, L_1, L_2, L_3, NULL);
		// Rect button2 = new Rect(buttonsX + buttonsDistance, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_4 = __this->___buttonsX_9;
		float L_5 = __this->___buttonsDistance_13;
		float L_6 = __this->___buttonsY_10;
		float L_7 = __this->___buttonsSizeX_11;
		float L_8 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_add(L_4, L_5)), L_6, L_7, L_8, NULL);
		// if(button1.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)) ||
		//    button2.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_10 = L_9.___x_2;
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_13 = L_12.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_10, ((float)il2cpp_codegen_subtract(((float)L_11), L_13)), /*hidden argument*/NULL);
		bool L_15;
		L_15 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_0), L_14, NULL);
		if (L_15)
		{
			goto IL_0098;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_17 = L_16.___x_2;
		int32_t L_18;
		L_18 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_20 = L_19.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_17, ((float)il2cpp_codegen_subtract(((float)L_18), L_20)), /*hidden argument*/NULL);
		bool L_22;
		L_22 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_1), L_21, NULL);
		G_B3_0 = ((int32_t)(L_22));
		goto IL_0099;
	}

IL_0098:
	{
		G_B3_0 = 1;
	}

IL_0099:
	{
		V_2 = (bool)G_B3_0;
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_00a2;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_00a6;
	}

IL_00a2:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00a6;
	}

IL_00a6:
	{
		// }
		bool L_24 = V_3;
		return L_24;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript__ctor_m517511C6802BD4A71C24EB8F22F6CDB5C429FECE (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXFireProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Start_m71FE79B72E21B59B68A10A40490B898D259A1E79 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedProjectileButton = GameObject.Find("Button").GetComponent<ETFXButtonScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		NullCheck(L_0);
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_1;
		L_1 = GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2(L_0, GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		__this->___selectedProjectileButton_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedProjectileButton_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Update_mA610052D76161FC9BE9184F05BC78C01D1D2664D (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_0018:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_002c:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
		goto IL_0059;
	}

IL_0042:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
	}

IL_0059:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0)) //On left mouse down-click
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)323), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_010d;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject()) //Checks if the mouse is not over a UI part
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10;
		L_10 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_10, NULL);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_010c;
		}
	}
	{
		// if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100f)) //Finds the point where you click with the mouse
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_13);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_15;
		L_15 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_13, L_14, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_16 = (&__this->___hit_9);
		bool L_17;
		L_17 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_15, L_16, (100.0f), NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_010b;
		}
	}
	{
		// GameObject projectile = Instantiate(projectiles[currentProjectile], spawnPosition.position, Quaternion.identity) as GameObject; //Spawns the selected projectile
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___projectiles_4;
		int32_t L_20 = __this->___currentProjectile_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___spawnPosition_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_24, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_7 = L_26;
		// projectile.transform.LookAt(hit.point); //Sets the projectiles rotation to look at the point clicked
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_29 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_29, NULL);
		NullCheck(L_28);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_28, L_30, NULL);
		// projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * speed); //Set the speed of the projectile by applying force to the rigidbody
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_7;
		NullCheck(L_31);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32;
		L_32 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_31, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_7;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_34, NULL);
		float L_36 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		NullCheck(L_32);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_32, L_37, NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// Debug.DrawRay(Camera.main.ScreenPointToRay(Input.mousePosition).origin, Camera.main.ScreenPointToRay(Input.mousePosition).direction * 100, Color.yellow);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38;
		L_38 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_38);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_40;
		L_40 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_38, L_39, NULL);
		V_8 = L_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_8), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42;
		L_42 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_42);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_44;
		L_44 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_42, L_43, NULL);
		V_8 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_8), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_41, L_46, L_47, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (currentProjectile < projectiles.Length - 1)
		int32_t L_0 = __this->___currentProjectile_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___projectiles_4;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// currentProjectile++;
		int32_t L_3 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_002e;
	}

IL_0027:
	{
		// currentProjectile = 0;
		__this->___currentProjectile_6 = 0;
	}

IL_002e:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_4 = __this->___selectedProjectileButton_8;
		NullCheck(L_4);
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_4, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (currentProjectile > 0)
		int32_t L_0 = __this->___currentProjectile_6;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// currentProjectile--;
		int32_t L_2 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_002e;
	}

IL_001e:
	{
		// currentProjectile = projectiles.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___projectiles_4;
		NullCheck(L_3);
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_002e:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_4 = __this->___selectedProjectileButton_8;
		NullCheck(L_4);
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_4, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::AdjustSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_AdjustSpeed_m9A00824BF1347E0F8FE0E6126CF794676B7BB8FB (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, float ___newSpeed0, const RuntimeMethod* method) 
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->___speed_7 = L_0;
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile__ctor_m0454A1D37EA11E608273AB3987BD6D93213A31A8 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// public int currentProjectile = 0;
		__this->___currentProjectile_6 = 0;
		// public float speed = 500;
		__this->___speed_7 = (500.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXLoopScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_Start_m8B9F608C71269FF287FF5CF6A0D12F728446FE59 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// PlayEffect();
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("EffectLoop");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXLoopScript::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXLoopScript_EffectLoop_m9BD0D9DFE864FB2692165E94270E5CFB64CBE5BE (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_0 = (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C(L_0, 0, NULL);
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript__ctor_m7D358DD45F488706D4E3340A8540A6AF526BB6B7 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// public float loopTimeLimit = 2.0f;
		__this->___loopTimeLimit_5 = (2.0f);
		// public bool spawnWithoutLight = true;
		__this->___spawnWithoutLight_6 = (bool)1;
		// public bool spawnWithoutSound = true;
		__this->___spawnWithoutSound_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_mE9D671CFBC0674F6D6F1E16BCD8DB26A1FCB4B57 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__6_MoveNext_m327965464B09214DB41A74AD12ACC109A74F1DDC (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00e4;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject effectPlayer = (GameObject) Instantiate(chosenEffect, transform.position, transform.rotation);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___chosenEffect_4;
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_7, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___U3CeffectPlayerU3E5__1_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeffectPlayerU3E5__1_3), (void*)L_11);
		// if(spawnWithoutLight = true && effectPlayer.GetComponent<Light>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_12 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___U3CeffectPlayerU3E5__1_3;
		NullCheck(L_13);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14;
		L_14 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_13, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		bool L_16 = L_15;
		V_2 = L_16;
		NullCheck(L_12);
		L_12->___spawnWithoutLight_6 = L_16;
		bool L_17 = V_2;
		V_1 = L_17;
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		// effectPlayer.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___U3CeffectPlayerU3E5__1_3;
		NullCheck(L_19);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_20;
		L_20 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_19, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
	}

IL_008f:
	{
		// if(spawnWithoutSound = true && effectPlayer.GetComponent<AudioSource>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_21 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CeffectPlayerU3E5__1_3;
		NullCheck(L_22);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_22, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		bool L_25 = L_24;
		V_2 = L_25;
		NullCheck(L_21);
		L_21->___spawnWithoutSound_7 = L_25;
		bool L_26 = V_2;
		V_3 = L_26;
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		// effectPlayer.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___U3CeffectPlayerU3E5__1_3;
		NullCheck(L_28);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29;
		L_29 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_28, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
	}

IL_00c5:
	{
		// yield return new WaitForSeconds(loopTimeLimit);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_30 = __this->___U3CU3E4__this_2;
		NullCheck(L_30);
		float L_31 = L_30->___loopTimeLimit_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_32 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_32, L_31, NULL);
		__this->___U3CU3E2__current_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_32);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy (effectPlayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___U3CeffectPlayerU3E5__1_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_33, NULL);
		// PlayEffect();
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(L_34, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4095FEA0B6FAFD62E68FBC39B482787B6889936B (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_m62DB043819328D994B722601E774742FB16DBE29 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EpicToonFX.ETFXMouseOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_Start_m883ED864D07ED2B013CBEC297E413AC4F7E8403A (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// rotationYAxis = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___y_3;
		__this->___rotationYAxis_13 = L_3;
		// rotationXAxis = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		__this->___rotationXAxis_14 = L_5;
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_9);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_9, (bool)1, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_LateUpdate_m88BAD2785B3447A239E1094CBEBEC160B1D5C270 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_01c6;
		}
	}
	{
		// if (Input.GetMouseButton(1))
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		V_6 = L_3;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// velocityX += xSpeed * Input.GetAxis("Mouse X") * distance * 0.02f;
		float L_5 = __this->___velocityX_15;
		float L_6 = __this->___xSpeed_6;
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_8 = __this->___distance_5;
		__this->___velocityX_15 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8)), (0.0199999996f)))));
		// velocityY += ySpeed * Input.GetAxis("Mouse Y") * 0.02f;
		float L_9 = __this->___velocityY_16;
		float L_10 = __this->___ySpeed_7;
		float L_11;
		L_11 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___velocityY_16 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), (0.0199999996f)))));
	}

IL_0071:
	{
		// rotationYAxis += velocityX;
		float L_12 = __this->___rotationYAxis_13;
		float L_13 = __this->___velocityX_15;
		__this->___rotationYAxis_13 = ((float)il2cpp_codegen_add(L_12, L_13));
		// rotationXAxis -= velocityY;
		float L_14 = __this->___rotationXAxis_14;
		float L_15 = __this->___velocityY_16;
		__this->___rotationXAxis_14 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// rotationXAxis = ClampAngle(rotationXAxis, yMinLimit, yMaxLimit);
		float L_16 = __this->___rotationXAxis_14;
		float L_17 = __this->___yMinLimit_8;
		float L_18 = __this->___yMaxLimit_9;
		float L_19;
		L_19 = ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F(L_16, L_17, L_18, NULL);
		__this->___rotationXAxis_14 = L_19;
		// Quaternion toRotation = Quaternion.Euler(rotationXAxis, rotationYAxis, 0);
		float L_20 = __this->___rotationXAxis_14;
		float L_21 = __this->___rotationYAxis_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_20, L_21, (0.0f), NULL);
		V_1 = L_22;
		// Quaternion rotation = toRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_1;
		V_2 = L_23;
		// distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5, distanceMin, distanceMax);
		float L_24 = __this->___distance_5;
		float L_25;
		L_25 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_26 = __this->___distanceMin_10;
		float L_27 = __this->___distanceMax_11;
		float L_28;
		L_28 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_24, ((float)il2cpp_codegen_multiply(L_25, (5.0f))))), L_26, L_27, NULL);
		__this->___distance_5 = L_28;
		// if (Physics.Linecast(target.position, transform.position, out hit))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___target_4;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		bool L_33;
		L_33 = Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932(L_30, L_32, (&V_3), NULL);
		V_7 = L_33;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_0134;
		}
	}
	{
		// distance -= hit.distance;
		float L_35 = __this->___distance_5;
		float L_36;
		L_36 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		__this->___distance_5 = ((float)il2cpp_codegen_subtract(L_35, L_36));
	}

IL_0134:
	{
		// Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
		float L_37 = __this->___distance_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), (0.0f), (0.0f), ((-L_37)), NULL);
		// Vector3 position = rotation * negDistance + target.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_38, L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___target_4;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_42, NULL);
		V_5 = L_43;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = V_2;
		NullCheck(L_44);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_44, L_45, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_5;
		NullCheck(L_46);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
		// velocityX = Mathf.Lerp(velocityX, 0, Time.deltaTime * smoothTime);
		float L_48 = __this->___velocityX_15;
		float L_49;
		L_49 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_50 = __this->___smoothTime_12;
		float L_51;
		L_51 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_48, (0.0f), ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		__this->___velocityX_15 = L_51;
		// velocityY = Mathf.Lerp(velocityY, 0, Time.deltaTime * smoothTime);
		float L_52 = __this->___velocityY_16;
		float L_53;
		L_53 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_54 = __this->___smoothTime_12;
		float L_55;
		L_55 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_52, (0.0f), ((float)il2cpp_codegen_multiply(L_53, L_54)), NULL);
		__this->___velocityY_16 = L_55;
	}

IL_01c6:
	{
		// }
		return;
	}
}
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// if (angle < -360F)
		float L_0 = ___angle0;
		V_0 = (bool)((((float)L_0) < ((float)(-360.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// angle += 360F;
		float L_2 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_2, (360.0f)));
	}

IL_0016:
	{
		// if (angle > 360F)
		float L_3 = ___angle0;
		V_1 = (bool)((((float)L_3) > ((float)(360.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// angle -= 360F;
		float L_5 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_002b:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_6 = ___angle0;
		float L_7 = ___min1;
		float L_8 = ___max2;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		float L_10 = V_2;
		return L_10;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_5 = (5.0f);
		// public float xSpeed = 120.0f;
		__this->___xSpeed_6 = (120.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float distanceMin = .5f;
		__this->___distanceMin_10 = (0.5f);
		// public float distanceMax = 15f;
		__this->___distanceMax_11 = (15.0f);
		// public float smoothTime = 2f;
		__this->___smoothTime_12 = (2.0f);
		// float rotationYAxis = 0.0f;
		__this->___rotationYAxis_13 = (0.0f);
		// float rotationXAxis = 0.0f;
		__this->___rotationXAxis_14 = (0.0f);
		// float velocityX = 0.0f;
		__this->___velocityX_15 = (0.0f);
		// float velocityY = 0.0f;
		__this->___velocityY_16 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_Start_m4453DDD66DCD94DE34E122A858EF37B3622FBDDE (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___targetRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRenderer_6), (void*)L_0);
		// targetCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___targetCollider_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetCollider_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// targetRenderer.enabled = true; //Shows the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___targetRenderer_6;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// targetCollider.enabled = true; //Enables the collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___targetCollider_7;
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// GameObject respawnEffect = Instantiate(respawnParticle, transform.position, transform.rotation) as GameObject; //Spawns attached respawn effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___respawnParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_7;
		// Destroy(respawnEffect, 3.5f); //Removes attached respawn effect after x seconds
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_8, (3.5f), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_OnTriggerEnter_m02835C9D449C3DF9EF0F1ED51651FBB8B81EC58A (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (col.tag == "Missile") // If collider is tagged as missile
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		// if (hitParticle)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___hitParticle_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		// GameObject destructibleEffect = Instantiate(hitParticle, transform.position, transform.rotation) as GameObject; // Spawns attached hit effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___hitParticle_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_12;
		// Destroy(destructibleEffect, 2f); // Removes hit effect after x seconds
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_13, (2.0f), NULL);
		// targetRenderer.enabled = false; // Hides the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = __this->___targetRenderer_6;
		NullCheck(L_14);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_14, (bool)0, NULL);
		// targetCollider.enabled = false; // Disables target collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = __this->___targetCollider_7;
		NullCheck(L_15);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_15, (bool)0, NULL);
		// StartCoroutine(Respawn()); // Sets timer for respawning the target
		RuntimeObject* L_16;
		L_16 = ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_0 = (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3*)il2cpp_codegen_object_new(U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1(L_0, 0, NULL);
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget__ctor_m6D27B723D5EE302E348D7A5A7052A37FF09EFB33 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_IDisposable_Dispose_m2A539129FAD324FCCFE7570356787FA4CE45616B (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXTarget/<Respawn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRespawnU3Ed__7_MoveNext_m98CEBFB0B767AF44163EF68F42B2F00DA7C99D1A (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SpawnTarget();
		ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E9C4DF0C87738322C436CFF672F3C0FDD320374 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_mFCD05AB83ED3E741E6D5D7F5F8B51CEA97F24FBF (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EpicToonFX.ETFXLightFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// li = gameObject.GetComponent<Light>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5;
		L_5 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_4, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		__this->___li_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___li_6), (void*)L_5);
		// initIntensity = li.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->___li_6;
		NullCheck(L_6);
		float L_7;
		L_7 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_6, NULL);
		__this->___initIntensity_7 = L_7;
		goto IL_0056;
	}

IL_003b:
	{
		// print("No light object found on " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082, L_9, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_10, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// li.intensity -= initIntensity * (Time.deltaTime / life);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = __this->___li_6;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_5, NULL);
		float L_7 = __this->___initIntensity_7;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_9 = __this->___life_4;
		NullCheck(L_5);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_5, ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, ((float)(L_8/L_9)))))), NULL);
		// if (killAfterLife && li.intensity <= 0)
		bool L_10 = __this->___killAfterLife_5;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = __this->___li_6;
		NullCheck(L_11);
		float L_12;
		L_12 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_11, NULL);
		G_B4_0 = ((((int32_t)((!(((float)L_12) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B4_0 = 0;
	}

IL_005c:
	{
		V_1 = (bool)G_B4_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// Destroy(gameObject.GetComponent<Light>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15;
		L_15 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_14, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
	}

IL_0071:
	{
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	{
		// public float life = 0.2f;
		__this->___life_4 = (0.200000003f);
		// public bool killAfterLife = true;
		__this->___killAfterLife_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXPitchRandomizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<AudioSource>().pitch *= 1 + Random.Range(-randomPercent / 100, randomPercent / 100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_0, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1;
		NullCheck(L_2);
		float L_3;
		L_3 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_2, NULL);
		float L_4 = __this->___randomPercent_4;
		float L_5 = __this->___randomPercent_4;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_4))/(100.0f))), ((float)(L_5/(100.0f))), NULL);
		NullCheck(L_2);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_2, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add((1.0f), L_6)))), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXPitchRandomizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	{
		// public float randomPercent = 10;
		__this->___randomPercent_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (rotateSpace == spaceEnum.Local)
		int32_t L_0 = __this->___rotateSpace_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___rotateVector_4;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_2, L_5, NULL);
	}

IL_002a:
	{
		// if (rotateSpace == spaceEnum.World)
		int32_t L_6 = __this->___rotateSpace_5;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___rotateVector_4;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		NullCheck(L_8);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_8, L_11, 0, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotateVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___rotateVector_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ES3Types.ES3UserType_Transform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3UserType_Transform__ctor_mD757DDC6FF80E08FD6236BF47122447F5C4B9E83 (ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ES3UserType_Transform() : base(typeof(UnityEngine.Transform)){ Instance = this; priority = 1;}
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ES3ComponentType__ctor_m7FA59B12B3D19ED10A3C26C644D95150B82C93C6(__this, L_1, NULL);
		// public ES3UserType_Transform() : base(typeof(UnityEngine.Transform)){ Instance = this; priority = 1;}
		((ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_StaticFields*)il2cpp_codegen_static_fields_for(ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var))->___Instance_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_StaticFields*)il2cpp_codegen_static_fields_for(ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var))->___Instance_13), (void*)__this);
		// public ES3UserType_Transform() : base(typeof(UnityEngine.Transform)){ Instance = this; priority = 1;}
		((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this)->___priority_11 = 1;
		// public ES3UserType_Transform() : base(typeof(UnityEngine.Transform)){ Instance = this; priority = 1;}
		return;
	}
}
// System.Void ES3Types.ES3UserType_Transform::WriteComponent(System.Object,ES3Writer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3UserType_Transform_WriteComponent_m92A73D01356C4DE8F2C25905FBAFA9AAD78909A6 (ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89* __this, RuntimeObject* ___obj0, ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var instance = (UnityEngine.Transform)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		// writer.WriteProperty("localPosition", instance.localPosition, ES3Type_Vector3.Instance);
		ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402* L_1 = ___writer1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_4);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_6 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_1);
		VirtualActionInvoker3< String_t*, RuntimeObject*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(48 /* System.Void ES3Writer::WriteProperty(System.String,System.Object,ES3Types.ES3Type) */, L_1, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, L_5, L_6);
		// writer.WriteProperty("localRotation", instance.localRotation, ES3Type_Quaternion.Instance);
		ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402* L_7 = ___writer1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9;
		RuntimeObject* L_11 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_10);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_12 = ((ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t2C32E7A8DD7265D4EBBC31C9DD4293EFD524E997_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		VirtualActionInvoker3< String_t*, RuntimeObject*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(48 /* System.Void ES3Writer::WriteProperty(System.String,System.Object,ES3Types.ES3Type) */, L_7, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, L_11, L_12);
		// writer.WriteProperty("localScale", instance.localScale, ES3Type_Vector3.Instance);
		ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402* L_13 = ___writer1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15;
		RuntimeObject* L_17 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_16);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_18 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		VirtualActionInvoker3< String_t*, RuntimeObject*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(48 /* System.Void ES3Writer::WriteProperty(System.String,System.Object,ES3Types.ES3Type) */, L_13, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, L_17, L_18);
		// writer.WritePropertyByRef("parent", instance.parent);
		ES3Writer_t5A16ADFC5224FE9D0AD11178428144A2664AB402* L_19 = ___writer1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker2< String_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(50 /* System.Void ES3Writer::WritePropertyByRef(System.String,UnityEngine.Object) */, L_19, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, L_21);
		// }
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
// System.Void ES3Types.ES3UserType_TransformArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3UserType_TransformArray__ctor_mBBB41BF772D3E3136F3136E92FCF702229C2F200 (ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ES3UserType_TransformArray() : base(typeof(UnityEngine.Transform[]), ES3UserType_Transform.Instance)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_2 = ((ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_StaticFields*)il2cpp_codegen_static_fields_for(ES3UserType_Transform_tDF896FC95C22CC4591624452E88687395317FD89_il2cpp_TypeInfo_var))->___Instance_13;
		ES3ArrayType__ctor_mF040194430AE308C5CF11EFAEF6BC9F4334B9085(__this, L_1, L_2, NULL);
		// Instance = this;
		((ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_StaticFields*)il2cpp_codegen_static_fields_for(ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_il2cpp_TypeInfo_var))->___Instance_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_StaticFields*)il2cpp_codegen_static_fields_for(ES3UserType_TransformArray_t5DF848F636814B156B2F52C80B5B238F4563E45D_il2cpp_TypeInfo_var))->___Instance_13), (void*)__this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
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
