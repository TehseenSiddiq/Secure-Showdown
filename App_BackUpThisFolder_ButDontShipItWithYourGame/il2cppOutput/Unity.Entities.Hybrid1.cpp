#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// Unity.Properties.ContainerPropertyBag`1<Unity.Entities.CompanionLink>
struct ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54;
// Unity.Properties.ContainerPropertyBag`1<System.Object>
struct ContainerPropertyBag_1_t36E372108282A4F6A656E63EA61F250D1253F35C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.HashSet`1<Unity.Entities.ComponentType>
struct HashSet_1_t69D50C3A48150C3206F0F570417E2C4805C9807D;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.Int32>>
struct IEnumerable_1_t8CEA5DF3384490C6E36438814FC9AB06FBF8C237;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>>
struct IEnumerator_1_t8013373F277D6B4B080C248F956F2C87B5025E41;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Component>
struct IReadOnlyList_1_t88E41C8F517A9868C1BCB0EC9C0F77A6830E0CA7;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.GameObject>
struct IReadOnlyList_1_t9787CF2B3B67DF8AF6BCA1B9CE882104A1942DB4;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<Unity.Entities.CompanionLink>
struct PropertyCollection_tFE9611CF857B6538B9D074502893B552123CFD37;
// Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>
struct Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4;
// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_tEF74403992C129B5F082074DEC32B50DD8709307;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>
struct UnsafeList_1_tFF1E6CFF34F987C38C811AFAF1F46F011D8131DF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.Entities.EntityArchetype[]
struct EntityArchetypeU5BU5D_t2D8E5BC062CE98F22997764C78233FDD5570F488;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.Entities.Conversion.LogEventData[]
struct LogEventDataU5BU5D_t00EA2A116A41BA41905DD5953A0871D915ED932A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// Unity.Entities.CompanionLink
struct CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2;
// Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_tEBEB69126C6527FF9E4EEB9D51486B2B2F5CB07B;
// Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.Entities.Conversion.GameObjectConversionMappingSystem
struct GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439;
// Unity.Entities.GameObjectConversionSettings
struct GameObjectConversionSettings_tF525E8254FA8A6B46ECEBEA549D9477F7ECDE4CC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ILogHandler
struct ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Unity.Entities.Conversion.JournalingUnityLogger
struct JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360;
// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag
struct Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213;
// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Entities.World
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A;
// Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1
struct U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D;
// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property
struct Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F;
// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec
struct Exec_t837C0014CAFC9669A955D4720094E96064FF9225;
// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate
struct Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D;

IL2CPP_EXTERN_C RuntimeClass* Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exec_t837C0014CAFC9669A955D4720094E96064FF9225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0618592085C4D5577A6289D727B824764DA5E3;
IL2CPP_EXTERN_C String_t* _stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral9F39D85EC6679B4A4FE598496DB45A4612DEB2E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD40126EA7F761F62B90F4B6DFA879C1C78386F9F;
IL2CPP_EXTERN_C String_t* _stringLiteralDC53EDD9136045066E3343C9C8133528AA9F76EF;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileFunctionPointer_TisExec_t837C0014CAFC9669A955D4720094E96064FF9225_mA9291040A23111E6AF40C24E75B58F08AEE60069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1_AddProperty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2AEE7A3E82B61C345D2590F05DD483DAFF868AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1__ctor_mC74D6C6014F6C99D885F6C61485F9F00507D37ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_mADDB90F78D2CD6A696B242E5B67059E4641A6D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_IsCreated_m8EF0F298457D456B9C79912195575161E31DA77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m4CC28A4CF821ADA338084BBCDD4F1CA6F304D4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JournalingUnityLogger_Hook_mA64FFF7DDDA47402ABF7DF1FBA2A2B8589091019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JournalingUnityLogger_Unhook_mD2DD70F93A9560E401208ADC9E42C264F68DE37D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFBF9F235533E988941ACFA007B807DAD8B9940AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_mB587E39122BFA749A02A922A9CB4677D0E6B17D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mAEAA5064391FCE394CEA5614FCDBFDDFA461B130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyBag_Register_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m223B4973FDFF26081EAEFEDF20DE07260BC551BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_2__ctor_m4B9717ECE7DB8E49C68CF189F88D88630F2331F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mCD0224C54FCF7A097FA948718B67C06DAF1F5E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEngineExtensions_CheckObjectIsNotComponent_m7BCF259590121570DD839BF18B70036172C9AE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D_0_0_0_var;
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B;;
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com;
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com;;
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke;
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___s_emptyArray_5;
};

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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// Unity.Properties.PropertyBag`1<Unity.Entities.CompanionLink>
struct PropertyBag_1_t0F0E89D19BBEB6E22D8D5777F021FF0797DA7E84  : public RuntimeObject
{
};

// Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>
struct Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes_0;
};

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_tC66C39EC22E3813F507D2BE48753F44EA87204F6  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Unity.Entities.CompanionLink
struct CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368  : public RuntimeObject
{
	// UnityEngine.GameObject Unity.Entities.CompanionLink::Companion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Companion_0;
};

// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625  : public RuntimeObject
{
	// Unity.Entities.SystemState* Unity.Entities.ComponentSystemBase::m_StatePtr
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___m_StatePtr_0;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// Unity.Entities.Hybrid.Internal.GeneratedAuthoringComponentImplementation
struct GeneratedAuthoringComponentImplementation_t8354615D1E057B99358B67EB6A9A69D4156A1990  : public RuntimeObject
{
};

// Unity.Entities.Conversion.IncrementalHierarchyFunctions
struct IncrementalHierarchyFunctions_tC0E410050159F3C0902D8D8619C2EEAA8E1978CF  : public RuntimeObject
{
};

// Unity.Entities.Conversion.JournalDataDebug
struct JournalDataDebug_tEA459EF9548FE216CB14DDA1891C4CE9128A003A  : public RuntimeObject
{
};

// Unity.Entities.Conversion.JournalDataDebugExtensions
struct JournalDataDebugExtensions_t5B32FE2C68C9845573B1133B516F42852A05410A  : public RuntimeObject
{
};

// Unity.Entities.Conversion.JournalingUnityLogger
struct JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360  : public RuntimeObject
{
	// UnityEngine.ILogHandler Unity.Entities.Conversion.JournalingUnityLogger::m_HookedLogger
	RuntimeObject* ___m_HookedLogger_0;
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem Unity.Entities.Conversion.JournalingUnityLogger::m_MappingSystem
	GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* ___m_MappingSystem_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Entities.Conversion.MultiList
struct MultiList_tC6BD2444286A222F24481FEF6F4D66CDD95F8488  : public RuntimeObject
{
};

// Unity.Entities.Conversion.MultiListDebugUtility
struct MultiListDebugUtility_tC913B1AA5B27A1D86192692DADF66A891141E363  : public RuntimeObject
{
};

// Unity.Properties.Generated.PropertyBagRegistry
struct PropertyBagRegistry_tEDED6AB50A3FA776444337962106D5EDEDF8AE72  : public RuntimeObject
{
};

// Unity.Entities.Conversion.SceneHierarchyExtensions
struct SceneHierarchyExtensions_t9940E9E438A1E97A1201126D9ED78BF09F13CE86  : public RuntimeObject
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

// Unity.Entities.Conversion.UnityEngineExtensions
struct UnityEngineExtensions_t7691B8D978B02349E2638F0D5C87A6ABC1E6A1CB  : public RuntimeObject
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

// Unity.Properties.ContainerPropertyBag`1<Unity.Entities.CompanionLink>
struct ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54  : public PropertyBag_1_t0F0E89D19BBEB6E22D8D5777F021FF0797DA7E84
{
	// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<TContainer> Unity.Properties.ContainerPropertyBag`1::m_Properties
	PropertyCollection_tFE9611CF857B6538B9D074502893B552123CFD37* ___m_Properties_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>
struct MultiListArrayData_1_t4787A3BBF8BDC69D25D8D04379EC00DF8EAEA2E7 
{
	// T[] Unity.Entities.Conversion.MultiListArrayData`1::Data
	LogEventDataU5BU5D_t00EA2A116A41BA41905DD5953A0871D915ED932A* ___Data_0;
};

// Unity.Collections.NativeArray`1<Unity.Entities.Entity>
struct NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeParallelMultiHashMapIterator`1<System.Int32>
struct NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC 
{
	// TKey Unity.Collections.NativeParallelMultiHashMapIterator`1::key
	int32_t ___key_0;
	// System.Int32 Unity.Collections.NativeParallelMultiHashMapIterator`1::NextEntryIndex
	int32_t ___NextEntryIndex_1;
	// System.Int32 Unity.Collections.NativeParallelMultiHashMapIterator`1::EntryIndex
	int32_t ___EntryIndex_2;
};

// Unity.Collections.NativeArray`1/ReadOnly<System.Int32>
struct ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B 
{
	// System.Void* Unity.Collections.NativeArray`1/ReadOnly::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1/ReadOnly::m_Length
	int32_t ___m_Length_1;
};

// Unity.Collections.NativeArray`1/ReadOnly<Unity.Entities.IncrementalConversionChanges/ParentChange>
struct ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 
{
	// System.Void* Unity.Collections.NativeArray`1/ReadOnly::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1/ReadOnly::m_Length
	int32_t ___m_Length_1;
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

// Unity.Entities.ComponentType
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	// System.Int32 Unity.Entities.ComponentType::TypeIndex
	int32_t ___TypeIndex_0;
	// Unity.Entities.ComponentType/AccessMode Unity.Entities.ComponentType::AccessModeType
	int32_t ___AccessModeType_1;
};

// Unity.Entities.Entity
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;
};

// Unity.Entities.EntityGuid
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	// System.UInt64 Unity.Entities.EntityGuid::a
	uint64_t ___a_0;
	// System.UInt64 Unity.Entities.EntityGuid::b
	uint64_t ___b_1;
};

struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	// Unity.Entities.EntityGuid Unity.Entities.EntityGuid::Null
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null_2;
};

// Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	// Unity.Entities.EntityQueryImpl* Unity.Entities.EntityQuery::__impl
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl_0;
	// System.UInt64 Unity.Entities.EntityQuery::__seqno
	uint64_t _____seqno_1;
};

// UnityEngine.Hash128
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	// System.UInt64 UnityEngine.Hash128::u64_0
	uint64_t ___u64_0_0;
	// System.UInt64 UnityEngine.Hash128::u64_1
	uint64_t ___u64_1_1;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Unity.Entities.SystemHandleUntyped
struct SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 
{
	// System.UInt16 Unity.Entities.SystemHandleUntyped::m_Handle
	uint16_t ___m_Handle_0;
	// System.UInt16 Unity.Entities.SystemHandleUntyped::m_Version
	uint16_t ___m_Version_1;
	// System.UInt32 Unity.Entities.SystemHandleUntyped::m_WorldSeqNo
	uint32_t ___m_WorldSeqNo_2;
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

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_t76F2F9780A6A6CE9544AD5D163C306B783122E73 
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::OldGameObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___OldGameObjects_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::NewGameObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___NewGameObjects_1;
	// System.Collections.Generic.List`1<UnityEngine.Object> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::TmpObjects
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___TmpObjects_2;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::Transforms
	Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993* ___Transforms_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::GameObjectsWithEntities
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___GameObjectsWithEntities_4;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_t76F2F9780A6A6CE9544AD5D163C306B783122E73_marshaled_pinvoke
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___OldGameObjects_0;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___NewGameObjects_1;
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___TmpObjects_2;
	Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993* ___Transforms_3;
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___GameObjectsWithEntities_4;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_t76F2F9780A6A6CE9544AD5D163C306B783122E73_marshaled_com
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___OldGameObjects_0;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___NewGameObjects_1;
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___TmpObjects_2;
	Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993* ___Transforms_3;
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___GameObjectsWithEntities_4;
};

// Unity.Entities.IncrementalConversionChanges/ParentChange
struct ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF 
{
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::InstanceId
	int32_t ___InstanceId_0;
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::PreviousParentInstanceId
	int32_t ___PreviousParentInstanceId_1;
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::NewParentInstanceId
	int32_t ___NewParentInstanceId_2;
};

// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property
struct Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F  : public Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4
{
};

// Unity.Collections.NativeArray`1/Enumerator<System.Int32>
struct Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>
struct FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>
struct MultiListNativeArrayData_1_t2D4EDFF1659E91F4A6F507D845FCEB583D54DE54 
{
	// Unity.Collections.NativeArray`1<T> Unity.Entities.Conversion.MultiListNativeArrayData`1::Data
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___Data_0;
};

// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>
struct MultiList_2_t6FA358241B66B2D90F4B262F99CEE7CBEE1151EC 
{
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::HeadIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___HeadIds_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::Next
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiList`2::NextFree
	int32_t ___NextFree_2;
	// I Unity.Entities.Conversion.MultiList`2::Data
	MultiListArrayData_1_t4787A3BBF8BDC69D25D8D04379EC00DF8EAEA2E7 ___Data_3;
};

// Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32>
struct NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 
{
	// Unity.Collections.NativeArray`1<TKey> Unity.Collections.NativeKeyValueArrays`2::Keys
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Keys_0;
	// Unity.Collections.NativeArray`1<TValue> Unity.Collections.NativeKeyValueArrays`2::Values
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values_1;
};

// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>
struct NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tFF1E6CFF34F987C38C811AFAF1F46F011D8131DF* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	int32_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<System.Int32,System.Boolean>
struct UnsafeParallelHashMap_2_tB0EF444B0EA824B2595D7B590514C1694673D0FA 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<System.Int32,Unity.Entities.DependencyTracker>
struct UnsafeParallelHashMap_2_t27643135CFCF3A769E9E726C29C2C630D644091C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<System.Int32,System.Int32>
struct UnsafeParallelHashMap_2_tAF5198A4416D9CB11063A92F93C2C7AA10BFDEE0 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<System.Int32,System.Int32>
struct UnsafeParallelMultiHashMap_2_tCF40ECA8A3C560BCDC694B5633B2E2E2D92D9A42 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
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

// Unity.Entities.Hash128
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value_0;
};

struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex_2;
};

// Unity.Entities.IncrementalConversionChanges
struct IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C 
{
	// System.Collections.Generic.IReadOnlyList`1<UnityEngine.GameObject> Unity.Entities.IncrementalConversionChanges::ChangedGameObjects
	RuntimeObject* ___ChangedGameObjects_0;
	// Unity.Collections.NativeArray`1/ReadOnly<System.Int32> Unity.Entities.IncrementalConversionChanges::ChangedGameObjectsInstanceIds
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___ChangedGameObjectsInstanceIds_1;
	// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Component> Unity.Entities.IncrementalConversionChanges::ChangedComponents
	RuntimeObject* ___ChangedComponents_2;
	// Unity.Collections.NativeArray`1/ReadOnly<Unity.Entities.IncrementalConversionChanges/ParentChange> Unity.Entities.IncrementalConversionChanges::ParentChanges
	ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 ___ParentChanges_3;
	// Unity.Collections.NativeArray`1/ReadOnly<System.Int32> Unity.Entities.IncrementalConversionChanges::RemovedGameObjectInstanceIds
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___RemovedGameObjectInstanceIds_4;
};
// Native definition for P/Invoke marshalling of Unity.Entities.IncrementalConversionChanges
struct IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C_marshaled_pinvoke
{
	RuntimeObject* ___ChangedGameObjects_0;
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___ChangedGameObjectsInstanceIds_1;
	RuntimeObject* ___ChangedComponents_2;
	ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 ___ParentChanges_3;
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___RemovedGameObjectInstanceIds_4;
};
// Native definition for COM marshalling of Unity.Entities.IncrementalConversionChanges
struct IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C_marshaled_com
{
	RuntimeObject* ___ChangedGameObjects_0;
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___ChangedGameObjectsInstanceIds_1;
	RuntimeObject* ___ChangedComponents_2;
	ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 ___ParentChanges_3;
	ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B ___RemovedGameObjectInstanceIds_4;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
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

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Jobs.TransformAccessArray
struct TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 
{
	// System.IntPtr UnityEngine.Jobs.TransformAccessArray::m_TransformArray
	intptr_t ___m_TransformArray_0;
};

// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag
struct Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213  : public ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54
{
};

// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall
struct Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B  : public RuntimeObject
{
};

struct Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields
{
	// System.IntPtr Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Entity,Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>>
struct MultiList_2_t518A033F315CB6B60F4BAE430594ADFAAA5E7FA3 
{
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::HeadIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___HeadIds_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::Next
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiList`2::NextFree
	int32_t ___NextFree_2;
	// I Unity.Entities.Conversion.MultiList`2::Data
	MultiListNativeArrayData_1_t2D4EDFF1659E91F4A6F507D845FCEB583D54DE54 ___Data_3;
};

// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Boolean>
struct NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey,TValue> Unity.Collections.NativeParallelHashMap`2::m_HashMapData
	UnsafeParallelHashMap_2_tB0EF444B0EA824B2595D7B590514C1694673D0FA ___m_HashMapData_0;
};

// Unity.Collections.NativeParallelHashMap`2<System.Int32,Unity.Entities.DependencyTracker>
struct NativeParallelHashMap_2_t9B093D9EDC4388AFC90E2593D02641561A05E924 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey,TValue> Unity.Collections.NativeParallelHashMap`2::m_HashMapData
	UnsafeParallelHashMap_2_t27643135CFCF3A769E9E726C29C2C630D644091C ___m_HashMapData_0;
};

// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>
struct NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey,TValue> Unity.Collections.NativeParallelHashMap`2::m_HashMapData
	UnsafeParallelHashMap_2_tAF5198A4416D9CB11063A92F93C2C7AA10BFDEE0 ___m_HashMapData_0;
};

// Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>
struct NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey,TValue> Unity.Collections.NativeParallelMultiHashMap`2::m_MultiHashMapData
	UnsafeParallelMultiHashMap_2_tCF40ECA8A3C560BCDC694B5633B2E2E2D92D9A42 ___m_MultiHashMapData_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Entities.DependencyTracker
struct DependencyTracker_tA5ED094A5BD4EF3107AB5A6D855EC09867A11525 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.DependencyTracker::_dependentsByInstanceId
	UnsafeParallelMultiHashMap_2_tCF40ECA8A3C560BCDC694B5633B2E2E2D92D9A42 ____dependentsByInstanceId_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.DependencyTracker::_dependenciesByInstanceId
	UnsafeParallelMultiHashMap_2_tCF40ECA8A3C560BCDC694B5633B2E2E2D92D9A42 ____dependenciesByInstanceId_1;
};

// Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008 
{
	// Unity.Entities.EntityCommandBufferData* Unity.Entities.EntityCommandBuffer::m_Data
	EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* ___m_Data_1;
	// System.Int32 Unity.Entities.EntityCommandBuffer::SystemID
	int32_t ___SystemID_2;
	// Unity.Entities.SystemHandleUntyped Unity.Entities.EntityCommandBuffer::OriginSystemHandle
	SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 ___OriginSystemHandle_3;
};

struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_StaticFields
{
	// System.Int32 Unity.Entities.EntityCommandBuffer::ms_CommandBufferIDAllocator
	int32_t ___ms_CommandBufferIDAllocator_4;
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityCommandBuffer::k_ProfileEcbPlayback
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileEcbPlayback_5;
};

// Unity.Entities.EntityManager
struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 
{
	// Unity.Entities.EntityDataAccess* Unity.Entities.EntityManager::m_EntityDataAccess
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ___m_EntityDataAccess_2;
};

struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_StaticFields
{
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveSharedComponents
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileMoveSharedComponents_0;
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveManagedComponents
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileMoveManagedComponents_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 
{
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ChangedAssets
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedAssets_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::DeletedAssets
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___DeletedAssets_1;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::RemovedInstanceIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___RemovedInstanceIds_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.IncrementalConversionData::ChangedGameObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ChangedGameObjects_3;
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.Entities.Conversion.IncrementalConversionData::ChangedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ChangedComponents_4;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ReconvertHierarchyRequests
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertHierarchyRequests_5;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ReconvertSingleRequests
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertSingleRequests_6;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::_changedGameObjectInstanceIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ____changedGameObjectInstanceIds_7;
	// Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange> Unity.Entities.Conversion.IncrementalConversionData::ParentChangeInstanceIds
	NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 ___ParentChangeInstanceIds_8;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_pinvoke
{
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedAssets_0;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___DeletedAssets_1;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___RemovedInstanceIds_2;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ChangedGameObjects_3;
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ChangedComponents_4;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertHierarchyRequests_5;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertSingleRequests_6;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ____changedGameObjectInstanceIds_7;
	NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 ___ParentChangeInstanceIds_8;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_com
{
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedAssets_0;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___DeletedAssets_1;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___RemovedInstanceIds_2;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ChangedGameObjects_3;
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ChangedComponents_4;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertHierarchyRequests_5;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ReconvertSingleRequests_6;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ____changedGameObjectInstanceIds_7;
	NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 ___ParentChangeInstanceIds_8;
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

// Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1
struct U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D  : public RuntimeObject
{
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.List`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>2__current
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CU3E2__current_1;
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::headIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___headIds_3;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>3__headIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___U3CU3E3__headIds_4;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::next
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___next_5;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>3__next
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___U3CU3E3__next_6;
	// Unity.Collections.NativeArray`1/Enumerator<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>s__1
	Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 ___U3CU3Es__1_7;
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<headId>5__2
	int32_t ___U3CheadIdU3E5__2_8;
	// System.Collections.Generic.List`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<list>5__3
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3ClistU3E5__3_9;
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_10;
};

// Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D 
{
	// Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue> Unity.Collections.NativeParallelMultiHashMap`2/Enumerator::hashmap
	NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 ___hashmap_0;
	// TKey Unity.Collections.NativeParallelMultiHashMap`2/Enumerator::key
	int32_t ___key_1;
	// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2/Enumerator::isFirst
	bool ___isFirst_2;
	// TValue Unity.Collections.NativeParallelMultiHashMap`2/Enumerator::value
	int32_t ___value_3;
	// Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey> Unity.Collections.NativeParallelMultiHashMap`2/Enumerator::iterator
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___iterator_4;
};

// Unity.Collections.NativeParallelHashSet`1<System.Int32>
struct NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F 
{
	// Unity.Collections.NativeParallelHashMap`2<T,System.Boolean> Unity.Collections.NativeParallelHashSet`1::m_Data
	NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049 ___m_Data_0;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Entities.ComponentSystem
struct ComponentSystem_t0357452663010AC3459AFD9496555C9D0CD7B6AA  : public ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625
{
	// Unity.Entities.EntityCommandBuffer Unity.Entities.ComponentSystem::m_DeferredEntities
	EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008 ___m_DeferredEntities_1;
	// Unity.Entities.EntityQueryCache Unity.Entities.ComponentSystem::m_EntityQueryCache
	EntityQueryCache_tEBEB69126C6527FF9E4EEB9D51486B2B2F5CB07B* ___m_EntityQueryCache_2;
};

// Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311 
{
	// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.ConversionJournalData::m_HeadIdIndices
	NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 ___m_HeadIdIndices_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.ConversionJournalData::m_FreeHeadIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_FreeHeadIds_1;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData::m_HeadIdCount
	int32_t ___m_HeadIdCount_2;
	// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Entity,Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>> Unity.Entities.Conversion.ConversionJournalData::m_Entities
	MultiList_2_t518A033F315CB6B60F4BAE430594ADFAAA5E7FA3 ___m_Entities_3;
	// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>> Unity.Entities.Conversion.ConversionJournalData::m_LogEvents
	MultiList_2_t6FA358241B66B2D90F4B262F99CEE7CBEE1151EC ___m_LogEvents_4;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311_marshaled_pinvoke
{
	NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 ___m_HeadIdIndices_0;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_FreeHeadIds_1;
	int32_t ___m_HeadIdCount_2;
	MultiList_2_t518A033F315CB6B60F4BAE430594ADFAAA5E7FA3 ___m_Entities_3;
	MultiList_2_t6FA358241B66B2D90F4B262F99CEE7CBEE1151EC ___m_LogEvents_4;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311_marshaled_com
{
	NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 ___m_HeadIdIndices_0;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_FreeHeadIds_1;
	int32_t ___m_HeadIdCount_2;
	MultiList_2_t518A033F315CB6B60F4BAE430594ADFAAA5E7FA3 ___m_Entities_3;
	MultiList_2_t6FA358241B66B2D90F4B262F99CEE7CBEE1151EC ___m_LogEvents_4;
};

// Unity.Entities.Conversion.IncrementalHierarchy
struct IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 
{
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::InstanceId
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___InstanceId_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::ParentIndex
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ParentIndex_1;
	// UnityEngine.Jobs.TransformAccessArray Unity.Entities.Conversion.IncrementalHierarchy::TransformArray
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ___TransformArray_2;
	// Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::ChildIndicesByIndex
	NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 ___ChildIndicesByIndex_3;
	// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::IndexByInstanceId
	NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 ___IndexByInstanceId_4;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Entities.Conversion.SceneHierarchy
struct SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 
{
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy::_instanceId
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ____instanceId_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy::_parentIndex
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ____parentIndex_1;
	// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy::_indexByInstanceId
	NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 ____indexByInstanceId_2;
	// Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy::_childIndicesByIndex
	NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 ____childIndicesByIndex_3;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec
struct Exec_t837C0014CAFC9669A955D4720094E96064FF9225  : public MulticastDelegate_t
{
};

// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate
struct Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D  : public MulticastDelegate_t
{
};

// Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B 
{
	// Unity.Entities.DependencyTracker Unity.Entities.Conversion.ConversionDependencies::GameObjectDependencyTracker
	DependencyTracker_tA5ED094A5BD4EF3107AB5A6D855EC09867A11525 ___GameObjectDependencyTracker_0;
	// Unity.Collections.NativeParallelHashMap`2<System.Int32,Unity.Entities.DependencyTracker> Unity.Entities.Conversion.ConversionDependencies::_componentDependenciesByTypeIndex
	NativeParallelHashMap_2_t9B093D9EDC4388AFC90E2593D02641561A05E924 ____componentDependenciesByTypeIndex_1;
	// Unity.Collections.NativeParallelHashSet`1<System.Int32> Unity.Entities.Conversion.ConversionDependencies::_unresolvedComponentInstanceIds
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ____unresolvedComponentInstanceIds_2;
	// System.Boolean Unity.Entities.Conversion.ConversionDependencies::_isLiveConversion
	bool ____isLiveConversion_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke
{
	DependencyTracker_tA5ED094A5BD4EF3107AB5A6D855EC09867A11525 ___GameObjectDependencyTracker_0;
	NativeParallelHashMap_2_t9B093D9EDC4388AFC90E2593D02641561A05E924 ____componentDependenciesByTypeIndex_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ____unresolvedComponentInstanceIds_2;
	int32_t ____isLiveConversion_3;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com
{
	DependencyTracker_tA5ED094A5BD4EF3107AB5A6D855EC09867A11525 ___GameObjectDependencyTracker_0;
	NativeParallelHashMap_2_t9B093D9EDC4388AFC90E2593D02641561A05E924 ____componentDependenciesByTypeIndex_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ____unresolvedComponentInstanceIds_2;
	int32_t ____isLiveConversion_3;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Entities.Conversion.SceneHierarchyWithTransforms
struct SceneHierarchyWithTransforms_t1DFB9390481B0F130B5D0B0896AF3D95F020C916 
{
	// UnityEngine.Jobs.TransformAccessArray Unity.Entities.Conversion.SceneHierarchyWithTransforms::TransformAccessArray
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ___TransformAccessArray_0;
	// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.SceneHierarchyWithTransforms::Hierarchy
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___Hierarchy_1;
};

// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy
struct RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F 
{
	// Unity.Entities.Conversion.IncrementalHierarchy Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Hierarchy
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___Hierarchy_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::DeletedInstanceIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstanceIds_1;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::ReconvertHierarchyInstanceIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___ReconvertHierarchyInstanceIds_2;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RemovedInstanceIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___RemovedInstanceIds_3;
};

struct RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields
{
	// Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::_burstFunction
	FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A ____burstFunction_4;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Marker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___Marker_5;
};

// Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F 
{
	// Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::_iter
	Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ____iter_0;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_pinvoke
{
	Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ____iter_0;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_com
{
	Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ____iter_0;
};

// Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob
struct CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763 
{
	// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Hierarchy
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___Hierarchy_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::VisitedInstanceIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___VisitedInstanceIds_1;
	// Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Boolean> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::VisitedIndices
	NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049 ___VisitedIndices_2;
};

// Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob
struct CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76 
{
	// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Hierarchy
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___Hierarchy_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Roots
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Roots_1;
	// Unity.Collections.NativeParallelHashSet`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::VisitedInstances
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___VisitedInstances_2;
};

// Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
struct ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4 
{
	// Unity.Entities.Conversion.ConversionDependencies Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies::Dependencies
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B ___Dependencies_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies::DeletedInstances
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstances_1;
	// Unity.Collections.NativeParallelHashSet`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies::ChangedInstances
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___ChangedInstances_2;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
struct ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_pinvoke
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke ___Dependencies_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstances_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___ChangedInstances_2;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
struct ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_com
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com ___Dependencies_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstances_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___ChangedInstances_2;
};

// Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
struct CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560 
{
	// Unity.Entities.Conversion.ConversionDependencies Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::Dependencies
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B ___Dependencies_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::DeletedAssets
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedAssets_1;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::ChangedAssets
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___ChangedAssets_2;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::ChangedInstanceIds
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedInstanceIds_3;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::DeletedInstanceIds
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstanceIds_4;
	// Unity.Collections.NativeParallelHashSet`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::Dependents
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___Dependents_5;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
struct CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_pinvoke
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke ___Dependencies_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedAssets_1;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___ChangedAssets_2;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedInstanceIds_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstanceIds_4;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___Dependents_5;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
struct CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_com
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com ___Dependencies_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedAssets_1;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___ChangedAssets_2;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___ChangedInstanceIds_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___DeletedInstanceIds_4;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___Dependents_5;
};

// Unity.Entities.GameObjectEntity
struct GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Entities.World Unity.Entities.GameObjectEntity::m_World
	World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___m_World_4;
	// Unity.Entities.Entity Unity.Entities.GameObjectEntity::m_Entity
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity_5;
};

struct GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.Entities.GameObjectEntity::s_ComponentsCache
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___s_ComponentsCache_6;
};

// Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C 
{
	// Unity.Entities.Conversion.ConversionDependencies Unity.Entities.Conversion.IncrementalConversionContext::Dependencies
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B ___Dependencies_0;
	// Unity.Entities.Conversion.IncrementalHierarchy Unity.Entities.Conversion.IncrementalConversionContext::Hierarchy
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___Hierarchy_1;
	// UnityEngine.SceneManagement.Scene Unity.Entities.Conversion.IncrementalConversionContext::Scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___Scene_2;
};

struct IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_StaticFields
{
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_parentChangeHierarchyMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____parentChangeHierarchyMarker_3;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_deleteFromHierarchyMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____deleteFromHierarchyMarker_4;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_registerNewInstancesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____registerNewInstancesMarker_5;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_collectNewGameObjectsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____collectNewGameObjectsMarker_6;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_updateHierarchyMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____updateHierarchyMarker_7;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_handleChangedMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ____handleChangedMarker_8;
	// System.Collections.Generic.List`1<UnityEngine.Object> Unity.Entities.Conversion.IncrementalConversionContext::ObjectCache
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___ObjectCache_9;
};
// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_marshaled_pinvoke
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke ___Dependencies_0;
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___Hierarchy_1;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___Scene_2;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_marshaled_com
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com ___Dependencies_0;
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___Hierarchy_1;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___Scene_2;
};

// Unity.Entities.Conversion.GameObjectConversionMappingSystem
struct GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439  : public ComponentSystem_t0357452663010AC3459AFD9496555C9D0CD7B6AA
{
	// Unity.Entities.GameObjectConversionSettings Unity.Entities.Conversion.GameObjectConversionMappingSystem::<Settings>k__BackingField
	GameObjectConversionSettings_tF525E8254FA8A6B46ECEBEA549D9477F7ECDE4CC* ___U3CSettingsU3Ek__BackingField_9;
	// Unity.Entities.Conversion.IncrementalConversionContext Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_LiveConversionContext
	IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C ___m_LiveConversionContext_10;
	// Unity.Entities.Conversion.IncrementalConversionData Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_IncrementalConversionData
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 ___m_IncrementalConversionData_11;
	// Unity.Entities.EntityManager Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstManager
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___m_DstManager_12;
	// Unity.Entities.Conversion.JournalingUnityLogger Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_JournalingUnityLogger
	JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* ___m_JournalingUnityLogger_13;
	// Unity.Entities.Conversion.ConversionState Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_ConversionState
	int32_t ___m_ConversionState_14;
	// System.Int32 Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_BeginConvertingRefCount
	int32_t ___m_BeginConvertingRefCount_15;
	// Unity.Entities.Conversion.ConversionJournalData Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_JournalData
	ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311 ___m_JournalData_16;
	// Unity.Entities.EntityArchetype[] Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_Archetypes
	EntityArchetypeU5BU5D_t2D8E5BC062CE98F22997764C78233FDD5570F488* ___m_Archetypes_17;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstPrefabs
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___m_DstPrefabs_18;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstLinkedEntityGroups
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___m_DstLinkedEntityGroups_19;
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstAssets
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ___m_DstAssets_20;
	// Unity.Entities.EntityQuery Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CompanionComponentsQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_CompanionComponentsQuery_21;
	// System.Collections.Generic.HashSet`1<Unity.Entities.ComponentType> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CompanionTypeSet
	HashSet_1_t69D50C3A48150C3206F0F570417E2C4805C9807D* ___m_CompanionTypeSet_22;
	// System.Boolean Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CompanionQueryDirty
	bool ___m_CompanionQueryDirty_23;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreateCompanionGameObjectsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_CreateCompanionGameObjectsMarker_25;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_FastUnityObjectNameLookup
	Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* ___m_FastUnityObjectNameLookup_26;
	// Unity.Entities.EntityQuery Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_SceneSectionEntityQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_SceneSectionEntityQuery_27;
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections Unity.Entities.Conversion.GameObjectConversionMappingSystem::_cachedCollections
	CachedCollections_t76F2F9780A6A6CE9544AD5D163C306B783122E73 ____cachedCollections_28;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_EntityIdsChached
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_EntityIdsChached_37;
};

struct GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.Entities.Conversion.GameObjectConversionMappingSystem::s_ComponentsCache
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___s_ComponentsCache_8;
	// System.String Unity.Entities.Conversion.GameObjectConversionMappingSystem::k_CreateCompanionGameObjectsMarkerName
	String_t* ___k_CreateCompanionGameObjectsMarkerName_24;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreateEntity
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_CreateEntity_29;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreatePrimaryEntities
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_CreatePrimaryEntities_30;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreateAdditional
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_CreateAdditional_31;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalClearEntities
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IncrementalClearEntities_32;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCreateEntitiesOld
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IncrementalCreateEntitiesOld_33;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCreateEntitiesNew
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IncrementalCreateEntitiesNew_34;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalDeleteEntities
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IncrementalDeleteEntities_35;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCollectDependencies
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IncrementalCollectDependencies_36;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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

IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke(const ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B& unmarshaled, ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_back(const ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke& marshaled, ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B& unmarshaled);
IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_cleanup(ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com(const ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B& unmarshaled, ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_back(const ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com& marshaled, ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B& unmarshaled);
IL2CPP_EXTERN_C void ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_cleanup(ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshaled_com& marshaled);

// System.Boolean Unity.Burst.FunctionPointer`1<System.Object>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionPointer_1_get_IsCreated_m8AF702C769120359D2E3139EC7CC73C3849CFC95_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// Unity.Burst.FunctionPointer`1<T> Unity.Burst.BurstCompiler::CompileFunctionPointer<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared (RuntimeObject* ___delegateMethod0, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AsRef<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_gshared (void* ___ptr0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashSet`1<System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_gshared (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeParallelHashSet`1<System.Int32>::ToNativeArray(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_gshared (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::AddRange(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashSet`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_gshared (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::Add(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/ReadOnly<T> Unity.Collections.NativeList`1<System.Int32>::AsParallelReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/ReadOnly<T> Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::AsParallelReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<System.Int32>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t ___item1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t* ___item1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, int32_t ___item1, const RuntimeMethod* method) ;
// T Unity.Collections.NativeList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMapExtensions::Remove<System.Int32,System.Int32>(Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 ___container0, int32_t ___key1, int32_t ___value2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Add(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_gshared (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<TKey,TValue> Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::GetValuesForKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_gshared_inline (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_gshared (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::RemoveAtSwapBack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9_gshared (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B_gshared (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<System.Int32>::op_Implicit(Unity.Collections.NativeList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_gshared (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___nativeList0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432_gshared (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B_gshared (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_gshared (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, int32_t ___item0, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532_gshared (CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76 ___jobData0, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn1, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7_gshared (CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763 ___jobData0, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Boolean>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_gshared (NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049* __this, int32_t ___key0, bool ___item1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeArray`1/Enumerator<System.Int32>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522_gshared (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA_gshared (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2_gshared (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.HashUtilities::ComputeHash128<System.Int32>(T&,UnityEngine.Hash128&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33_gshared (int32_t* ___value0, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___hash1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_m229EA7DB30835BBAB5C266DA550803D08F83199D_gshared (ContainerPropertyBag_1_t36E372108282A4F6A656E63EA61F250D1253F35C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<System.Object>::AddProperty<System.Object>(Unity.Properties.Property`2<TContainer,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1_AddProperty_TisRuntimeObject_mBEFBEEB52AAF1E497460FA2D7019C1B636CD7D76_gshared (ContainerPropertyBag_1_t36E372108282A4F6A656E63EA61F250D1253F35C* __this, Property_2_tEF74403992C129B5F082074DEC32B50DD8709307* ___property0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.Property`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m3DF81E0A0B399C4C0839B034EE6156FA8B776209_gshared (Property_2_tEF74403992C129B5F082074DEC32B50DD8709307* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<System.Object>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_Register_TisRuntimeObject_m941A3FB6C085956BBE63C3D6466D33E571D4EF69_gshared (ContainerPropertyBag_1_t36E372108282A4F6A656E63EA61F250D1253F35C* ___propertyBag0, const RuntimeMethod* method) ;

// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Execute(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538 (void* ___ptr0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_Invoke_mAB6A7A9A3320B963E8BAB6DA4F60772223821DB2 (void* ___ptr0, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>::get_IsCreated()
inline bool FunctionPointer_1_get_IsCreated_m8EF0F298457D456B9C79912195575161E31DA77F (FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A*, const RuntimeMethod*))FunctionPointer_1_get_IsCreated_m8AF702C769120359D2E3139EC7CC73C3849CFC95_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec__ctor_m3F9D77F558DDA944CDC94C5945518C7F22819CC8 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Unity.Burst.FunctionPointer`1<T> Unity.Burst.BurstCompiler::CompileFunctionPointer<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>(T)
inline FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A BurstCompiler_CompileFunctionPointer_TisExec_t837C0014CAFC9669A955D4720094E96064FF9225_mA9291040A23111E6AF40C24E75B58F08AEE60069 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* ___delegateMethod0, const RuntimeMethod* method)
{
	return ((  FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A (*) (Exec_t837C0014CAFC9669A955D4720094E96064FF9225*, const RuntimeMethod*))BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared)(___delegateMethod0, method);
}
// System.Void Unity.Profiling.ProfilerMarker::Begin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>::get_Invoke()
inline Exec_t837C0014CAFC9669A955D4720094E96064FF9225* FunctionPointer_1_get_Invoke_mADDB90F78D2CD6A696B242E5B67059E4641A6D30 (FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A* __this, const RuntimeMethod* method)
{
	return ((  Exec_t837C0014CAFC9669A955D4720094E96064FF9225* (*) (FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::Invoke(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_inline (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RunWithBurst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_RunWithBurst_m7329D063E4AA202669522CBFF78CA91E97C71D12 (RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AsRef<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy>(System.Void*)
inline RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238 (void* ___ptr0, const RuntimeMethod* method)
{
	return ((  RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_gshared)(___ptr0, method);
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___a0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashSet`1<System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_gshared)(__this, ___capacity0, ___allocator1, method);
}
// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.IncrementalHierarchy::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIds(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rootInstanceIds1, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___visitedInstanceIds2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeParallelHashSet`1<System.Int32>::ToNativeArray(Unity.Collections.AllocatorManager/AllocatorHandle)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_gshared)(__this, ___allocator0, method);
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::Remove(Unity.Entities.Conversion.IncrementalHierarchy,Unity.Collections.NativeArray`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_Remove_m61BFEA92C86599C03564C3800E3306C588986795 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instances1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::AddRange(Unity.Collections.NativeArray`1<T>)
inline void NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_gshared)(__this, ___array0, method);
}
// System.Void Unity.Collections.NativeParallelHashSet`1<System.Int32>::Dispose()
inline void NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33 (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F*, const RuntimeMethod*))NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_gshared)(__this, method);
}
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer2(System.IntPtr,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567 (intptr_t ___ilppMethod0, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___managedMethodHandle1, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___delegateTypeHandle2, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_GetFunctionPointerDiscard_mA66C5F81A1E81C9A5B1ADC62EBE83F67F8748485 (intptr_t* p0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod2(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod2_m545A8FC57B460871C1715F32DD601F2C1CA9C7FA (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___burstMethodHandle0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_Constructor_m609DC56577BDE50E66803E2A1AF457C1304F32C9 (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Execute_0000019CU24BurstDirectCall_GetFunctionPointer_m04696C6F65E4F41630FCC26EE09C8EC0719839A0 (const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Execute$BurstManaged(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_inline (void* ___ptr0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_gshared)(__this, ___allocator0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
inline void List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0 (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0 (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0_gshared)(__this, ___allocator0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::Add(T&)
inline void NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t*, const RuntimeMethod*))NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1/ReadOnly<T> Unity.Collections.NativeList`1<System.Int32>::AsParallelReader()
inline ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, const RuntimeMethod*))NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1/ReadOnly<T> Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::AsParallelReader()
inline ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, const RuntimeMethod*))NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC_gshared)(__this, method);
}
// Unity.Entities.IncrementalConversionChanges Unity.Entities.Conversion.IncrementalConversionData::ToChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C IncrementalConversionData_ToChanges_mC1C6DB0239E256C4DDCCED9C8B758DF875CE4CDC (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Int32>::Clear()
inline void NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, const RuntimeMethod*))NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
inline void List_1_Clear_mFBF9F235533E988941ACFA007B807DAD8B9940AF_inline (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Clear()
inline void NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510 (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, const RuntimeMethod*))NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalConversionData_Clear_mB4852541C98FA140AEBD834ADA9B79B0B82DBBAF (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<System.Int32>::get_IsCreated()
inline bool NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, const RuntimeMethod*))NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::Dispose()
inline void NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, const RuntimeMethod*))NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::get_IsCreated()
inline bool NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607 (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, const RuntimeMethod*))NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Dispose()
inline void NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074 (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, const RuntimeMethod*))NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalConversionData_Dispose_m07FB9A0430213739A1E8BD913A362F0DD94F0726 (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Jobs.TransformAccessArray::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformAccessArray_get_isCreated_m27A01F9644D14864AAF311A87959DF8705A0B142 (TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Jobs.TransformAccessArray::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray_Dispose_mC0775DCFFE41173544615D7031AC028D653C4186 (TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::get_IsCreated()
inline bool NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, const RuntimeMethod*))NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Dispose()
inline void NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117 (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, const RuntimeMethod*))NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::get_IsCreated()
inline bool NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750 (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, const RuntimeMethod*))NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::Dispose()
inline void NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, const RuntimeMethod*))NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchy::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchy_Dispose_m7C3F45538E39BB1C25A2B396FAC588B6D71E53F8 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.SceneHierarchy::.ctor(Unity.Entities.Conversion.IncrementalHierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchy__ctor_m7B1511B7DA10F638E50B937CC61A0D1CF796192C (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.IncrementalHierarchyFunctions::TryAddSingle(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IncrementalHierarchyFunctions_TryAddSingle_m1400617082E73A545483B67895180A70FA2BE9A2 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent3, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<System.Int32>::get_Length()
inline int32_t NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, const RuntimeMethod*))NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::TryAdd(TKey,TValue)
inline bool NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, int32_t, int32_t, const RuntimeMethod*))NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F_gshared)(__this, ___key0, ___item1, method);
}
// System.Void UnityEngine.Jobs.TransformAccessArray::Add(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray_Add_mC1B41F75FE0CD6AAB77186F6EF7A41E790BDE336 (TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
inline bool NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t* ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, int32_t, int32_t*, const RuntimeMethod*))NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_gshared)(__this, ___key0, ___item1, method);
}
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Add(TKey,TValue)
inline void NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9 (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, int32_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, int32_t, int32_t, const RuntimeMethod*))NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_gshared)(__this, ___key0, ___item1, method);
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::AddRecurse(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_AddRecurse_m3E22C0693F0F4FEBAD0577FF6CB7EE48564A587B (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___top2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Unity.Collections.NativeList`1<System.Int32>::get_Item(System.Int32)
inline int32_t NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_gshared)(__this, ___index0, method);
}
// System.Void Unity.Collections.NativeParallelHashMapExtensions::Remove<System.Int32,System.Int32>(Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue>,TKey,TValue)
inline void NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4 (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 ___container0, int32_t ___key1, int32_t ___value2, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4, int32_t, int32_t, const RuntimeMethod*))NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_gshared)(___container0, ___key1, ___value2, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Item(System.Int32,T)
inline void NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t, int32_t, const RuntimeMethod*))NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>::Add(T&)
inline void NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* __this, ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF* ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592*, ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF*, const RuntimeMethod*))NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_gshared)(__this, ___initialCapacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Length(System.Int32)
inline void NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t, const RuntimeMethod*))NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_gshared)(__this, ___value0, method);
}
// Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<TKey,TValue> Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::GetValuesForKey(TKey)
inline Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, int32_t, const RuntimeMethod*))NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_gshared)(__this, ___key0, method);
}
// TValue Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_inline (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D*, const RuntimeMethod*))Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_gshared_inline)(__this, method);
}
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D*, const RuntimeMethod*))Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_gshared)(__this, method);
}
// System.Int32 Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::Remove(TKey)
inline int32_t NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019 (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, int32_t, const RuntimeMethod*))NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_gshared)(__this, ___key0, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::RemoveAtSwapBack(System.Int32)
inline void NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213*, int32_t, const RuntimeMethod*))NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Jobs.TransformAccessArray::RemoveAtSwapBack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray_RemoveAtSwapBack_m20FDDF2B47CD9A3778D4B59AD6598DCF9D985776 (TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::Remove(TKey)
inline bool NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9 (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, int32_t, const RuntimeMethod*))NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9_gshared)(__this, ___key0, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5 (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, int32_t, int32_t, const RuntimeMethod*))NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Jobs.TransformAccessArray::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray__ctor_m66B44699D46850AA776992B25A5443B6BAC42ED1 (TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* __this, int32_t ___capacity0, int32_t ___desiredJobCount1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9 (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9_gshared)(__this, ___capacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B_gshared)(__this, ___capacity0, ___allocator1, method);
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::AddRoots(Unity.Entities.Conversion.IncrementalHierarchy,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_AddRoots_m133F8E64FF6AC939E12FBB27DB293C540B567724 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, RuntimeObject* ___gameObjects1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<System.Int32>::op_Implicit(Unity.Collections.NativeList`1<T>)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065 (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___nativeList0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213, const RuntimeMethod*))NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_gshared)(___nativeList0, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy::GetInstanceIdForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.Conversion.SceneHierarchy::GetParentForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneHierarchy_GetParentForIndex_mDC05BB77F8F7FC5F81A7DABA5874630803C96111 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::.ctor(Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children__ctor_m571A0E7A71F32DC3A8F745DFF66EB63AD456DD57 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ___iter0, const RuntimeMethod* method) ;
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy::GetChildIndicesForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.SceneHierarchy::TryGetIndexForInstanceId(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___instanceId0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.SceneHierarchy/Children::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Reset()
inline void Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432 (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D*, const RuntimeMethod*))Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Reset_m72B559B2BD5B6C3BE13C462E2457BDB54AB9E1E4 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.Conversion.SceneHierarchy/Children::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Object Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerator_get_Current_mECF2BEDE877FA0A7C34A1A0EEFE13019713D1F38 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Dispose()
inline void Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D*, const RuntimeMethod*))Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Dispose_mEC8A4C656658C46F4919AAB588CA4EFDC8D686B2 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy/Children::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F Children_GetEnumerator_mA51B695F63D61F41C7C4BAFF8A517DC392719CD4 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mD20D30B3E2E93A77A77F3CFE8EAC15F6DEDBB3D1 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m54C34E9760CAE39994D3872DD5C3F429F6704514 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIdsImpl(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchyExtensions_CollectHierarchyInstanceIdsImpl_m934AAB8F40BF614A8786EC4E9F8D6CFBF5FF4D58 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rootInstanceIds1, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___visitedInstanceIds2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashSet`1<System.Int32>::Add(T)
inline bool NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F*, int32_t, const RuntimeMethod*))NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_gshared)(__this, ___item0, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532 (CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76 ___jobData0, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn1, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532_gshared)(___jobData0, ___dependsOn1, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob>(T,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7 (CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763 ___jobData0, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn1, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7_gshared)(___jobData0, ___dependsOn1, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Unity.Jobs.IJob.Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m709458F3D96B4344B68ADD588CA6C27270B4C7B5 (CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Boolean>::TryAdd(TKey,TValue)
inline bool NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47 (NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049* __this, int32_t ___key0, bool ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049*, int32_t, bool, const RuntimeMethod*))NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_gshared)(__this, ___key0, ___item1, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsAndIndicesJob_Execute_m124F30D83D411EBBE19D0A778142B6F8321DC7FD (CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
// Unity.Entities.Conversion.ConversionJournalData& Unity.Entities.Conversion.GameObjectConversionMappingSystem::get_JournalData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311* GameObjectConversionMappingSystem_get_JournalData_m4081627172C40F1427DB62035C8EE2469C6C3E69 (GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.ConversionJournalData::RecordLogEvent(UnityEngine.Object,UnityEngine.LogType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionJournalData_RecordLogEvent_mD3CAB5B8D2D56AF269957F48C793799C26783BA6 (ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context0, int32_t ___logType1, String_t* ___message2, String_t* ___stacktrace3, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.ConversionJournalData::RecordExceptionEvent(UnityEngine.Object,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionJournalData_RecordExceptionEvent_mA86DAD0AEF53A4DBFEE0C8B7C10ED78AC9B34CF6 (ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context0, Exception_t* ___exception1, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.Conversion.MultiList::CalcEnsureCapacity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiList_CalcEnsureCapacity_m9C7CBBA820B5F890562B70AEEA026660A0B725AB (int32_t ___current0, int32_t ___needed1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1__ctor_mC19272C2A77CE3166F8E06DB26961E4BA95153BC (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mEAA880102831BFBA42D1D57A904F074B3B8D2F32 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m3F6A5B844518C7B1DDA6F4441CEB97E66178B69B (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
inline Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389_gshared)(__this, method);
}
// T Unity.Collections.NativeArray`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522 (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30*, const RuntimeMethod*))Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30*, const RuntimeMethod*))Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2 (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30*, const RuntimeMethod*))Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerable<System.Collections.Generic.List<System.Int32>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_mDF67ADFE69AD19EC6B0AE282102563C338F73285 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.HashUtilities::ComputeHash128<System.Int32>(T&,UnityEngine.Hash128&)
inline void HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33 (int32_t* ___value0, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___hash1, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*, const RuntimeMethod*))HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33_gshared)(___value0, ___hash1, method);
}
// Unity.Entities.Hash128 Unity.Entities.Hash128::op_Implicit(UnityEngine.Hash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B Hash128_op_Implicit_m4541C1729F491B83F9A08C22C1E3A2226FECE308 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___guid0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.EntityGuid::.ctor(System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityGuid__ctor_mC2347A652181ECADBA43A4F02E10DB64FC097167 (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* __this, int32_t ___originatingId0, uint32_t ___namespaceId1, uint32_t ___serial2, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsPrefab_m00C8A2EC5F61873044C337E5580D4F4064D334BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___this0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LODGroup::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODGroup_get_enabled_mB9DAA82B339C2681F43C6ADE451D59E50DEA90E0 (LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Component>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m4CC28A4CF821ADA338084BBCDD4F1CA6F304D4D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
inline int32_t List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Unity.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m6C7D0578D758663B92AD9550C0A6243A97F80F38 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsComponentDisabled(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsComponentDisabled_m2D935C04C52F56526435A7CCDA769837F8061122 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___this0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_op_Implicit_m1297C314B95D22B7F95B4441EDE137459D75417E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.ComponentType::Equals(Unity.Entities.ComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentType_Equals_m3ED0DF028815A8429AB93E726FDD859E69C45A95 (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* __this, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___other0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
inline void List_1_set_Item_mAEAA5064391FCE394CEA5614FCDBFDDFA461B130 (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, int32_t ___index0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, int32_t, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_mB587E39122BFA749A02A922A9CB4677D0E6B17D1 (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___index0, ___count1, method);
}
// System.Void Unity.Entities.Conversion.ConversionDependencies::CalculateDependents(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionDependencies_CalculateDependents_m6AD6BF82E131480FF0984B5ABD0AAE3FEFEEC38F (ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instanceIds0, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___outDependents1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.ConversionDependencies::CalculateAssetDependents(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionDependencies_CalculateAssetDependents_m2840ECDE7C754699F975B5E21B777BCCD63E93A9 (ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___assetInstanceIds0, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___outDependents1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectDependencies_Execute_mD4F9B7FF0926CB5ACCDAD3499D9F36C5526F713F (CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.ConversionDependencies::ClearDependencies(Unity.Collections.NativeArray`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionDependencies_ClearDependencies_m3DD9378FB2F22C60DC5914E4FEFA75CC4B43F03D (ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instanceIds0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ClearDependencies_Execute_m4E318C2705E5589E5371CD7A8470BD8C8A055991 (ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.Entities.Hybrid.Internal.GeneratedAuthoringComponentImplementation::AddReferencedPrefab(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedAuthoringComponentImplementation_AddReferencedPrefab_m00D349796ED26EF8068618CBEDD74F5B503DA4AC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___referencedPrefabs0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Entities.CompanionLink>::.ctor()
inline void ContainerPropertyBag_1__ctor_mC74D6C6014F6C99D885F6C61485F9F00507D37ED (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54* __this, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54*, const RuntimeMethod*))ContainerPropertyBag_1__ctor_m229EA7DB30835BBAB5C266DA550803D08F83199D_gshared)(__this, method);
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Companion_Property__ctor_mCB518079E16A0DB5ABABB24F9E96F27766A97A6B (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Entities.CompanionLink>::AddProperty<UnityEngine.GameObject>(Unity.Properties.Property`2<TContainer,TValue>)
inline void ContainerPropertyBag_1_AddProperty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2AEE7A3E82B61C345D2590F05DD483DAFF868AD9 (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54* __this, Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4* ___property0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54*, Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4*, const RuntimeMethod*))ContainerPropertyBag_1_AddProperty_TisRuntimeObject_mBEFBEEB52AAF1E497460FA2D7019C1B636CD7D76_gshared)(__this, ___property0, method);
}
// System.Void Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>::.ctor()
inline void Property_2__ctor_m4B9717ECE7DB8E49C68CF189F88D88630F2331F8 (Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_tA879A413A33994E108C83415C539B016D0F0F4A4*, const RuntimeMethod*))Property_2__ctor_m3DF81E0A0B399C4C0839B034EE6156FA8B776209_gshared)(__this, method);
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Entities_CompanionLink_PropertyBag__ctor_mA802440DA7BA8FE00A61B9E1BE5F7CA8869AE486 (Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<Unity.Entities.CompanionLink>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
inline void PropertyBag_Register_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m223B4973FDFF26081EAEFEDF20DE07260BC551BA (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54* ___propertyBag0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54*, const RuntimeMethod*))PropertyBag_Register_TisRuntimeObject_m941A3FB6C085956BBE63C3D6466D33E571D4EF69_gshared)(___propertyBag0, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext::Initialize$RemoveFromHierarchy_Execute_0000019C$BurstDirectCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalConversionContext_InitializeU24RemoveFromHierarchy_Execute_0000019CU24BurstDirectCall_m56AF39A097183CE194D67D389F5F14CDE41CE971 (const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538(void* ___ptr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538(___ptr0, NULL);

}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Execute(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538 (void* ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// {
		void* L_0 = ___ptr0;
		// ref var data = ref UnsafeUtility.AsRef<RemoveFromHierarchy>(ptr);
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		Execute_0000019CU24BurstDirectCall_Invoke_mAB6A7A9A3320B963E8BAB6DA4F60772223821DB2(L_0, NULL);
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RunWithBurst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_RunWithBurst_m7329D063E4AA202669522CBFF78CA91E97C71D12 (RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_CompileFunctionPointer_TisExec_t837C0014CAFC9669A955D4720094E96064FF9225_mA9291040A23111E6AF40C24E75B58F08AEE60069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exec_t837C0014CAFC9669A955D4720094E96064FF9225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mADDB90F78D2CD6A696B242E5B67059E4641A6D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_IsCreated_m8EF0F298457D456B9C79912195575161E31DA77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F V_0;
	memset((&V_0), 0, sizeof(V_0));
	void* V_1 = NULL;
	bool V_2 = false;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var data = this;
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F L_0 = (*(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F*)__this);
		V_0 = L_0;
		// void* ptr = UnsafeUtility.AddressOf(ref data);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast((&V_0));
		V_1 = L_1;
		// if (!_burstFunction.IsCreated)
		il2cpp_codegen_runtime_class_init_inline(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = FunctionPointer_1_get_IsCreated_m8EF0F298457D456B9C79912195575161E31DA77F((&((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->____burstFunction_4), FunctionPointer_1_get_IsCreated_m8EF0F298457D456B9C79912195575161E31DA77F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// _burstFunction = BurstCompiler.CompileFunctionPointer<Exec>(Execute);
		Exec_t837C0014CAFC9669A955D4720094E96064FF9225* L_4 = (Exec_t837C0014CAFC9669A955D4720094E96064FF9225*)il2cpp_codegen_object_new(Exec_t837C0014CAFC9669A955D4720094E96064FF9225_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Exec__ctor_m3F9D77F558DDA944CDC94C5945518C7F22819CC8(L_4, NULL, (intptr_t)((void*)RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		FunctionPointer_1_t0897CAC8D251AB02CF50639A6D78E3068F60E26A L_5;
		L_5 = BurstCompiler_CompileFunctionPointer_TisExec_t837C0014CAFC9669A955D4720094E96064FF9225_mA9291040A23111E6AF40C24E75B58F08AEE60069(L_4, BurstCompiler_CompileFunctionPointer_TisExec_t837C0014CAFC9669A955D4720094E96064FF9225_mA9291040A23111E6AF40C24E75B58F08AEE60069_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->____burstFunction_4 = L_5;
	}

IL_0037:
	{
		// Marker.Begin();
		il2cpp_codegen_runtime_class_init_inline(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6 = ((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->___Marker_5;
		V_3 = L_6;
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&V_3), NULL);
		// _burstFunction.Invoke(ptr);
		Exec_t837C0014CAFC9669A955D4720094E96064FF9225* L_7;
		L_7 = FunctionPointer_1_get_Invoke_mADDB90F78D2CD6A696B242E5B67059E4641A6D30((&((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->____burstFunction_4), FunctionPointer_1_get_Invoke_mADDB90F78D2CD6A696B242E5B67059E4641A6D30_RuntimeMethod_var);
		void* L_8 = V_1;
		NullCheck(L_7);
		Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_inline(L_7, L_8, NULL);
		// Marker.End();
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_9 = ((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->___Marker_5;
		V_3 = L_9;
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&V_3), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RemoveFromHierarchy_RunWithBurst_m7329D063E4AA202669522CBFF78CA91E97C71D12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F*>(__this + _offset);
	RemoveFromHierarchy_RunWithBurst_m7329D063E4AA202669522CBFF78CA91E97C71D12(_thisAdjusted, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy__cctor_mD89B6EB84FAD04C5C55BEA838CD1BD0A5743AE24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ProfilerMarker Marker = new ProfilerMarker(nameof(RemoveFromHierarchy));
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89, /*hidden argument*/NULL);
		((RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var))->___Marker_5 = L_0;
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Execute$BurstManaged(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66 (void* ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* V_0 = NULL;
	int32_t V_1 = 0;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// ref var data = ref UnsafeUtility.AsRef<RemoveFromHierarchy>(ptr);
		void* L_0 = ___ptr0;
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_1;
		L_1 = UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238(L_0, UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_RuntimeMethod_var);
		V_0 = L_1;
		// int capacity = data.DeletedInstanceIds.Length + data.ReconvertHierarchyInstanceIds.Length;
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_2 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = (&L_2->___DeletedInstanceIds_1);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_5 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (&L_5->___ReconvertHierarchyInstanceIds_2);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_6)->___m_Length_1);
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_7));
		// var deletedInstances = new NativeParallelHashSet<int>(capacity, Allocator.TempJob);
		int32_t L_8 = V_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9;
		L_9 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E((&V_2), L_8, L_9, NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_RuntimeMethod_var);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.DeletedInstanceIds, deletedInstances);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_10 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_11 = (&L_10->___Hierarchy_0);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_12;
		L_12 = IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD(L_11, NULL);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_13 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14 = L_13->___DeletedInstanceIds_1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_15 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F(L_12, L_14, L_15, NULL);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.ReconvertHierarchyInstanceIds, deletedInstances);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_16 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_17 = (&L_16->___Hierarchy_0);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_18;
		L_18 = IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD(L_17, NULL);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_19 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_20 = L_19->___ReconvertHierarchyInstanceIds_2;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_21 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F(L_18, L_20, L_21, NULL);
		// var arr = deletedInstances.ToNativeArray(Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_22;
		L_22 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_23;
		L_23 = NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA((&V_2), L_22, NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		V_3 = L_23;
		// IncrementalHierarchyFunctions.Remove(data.Hierarchy, arr);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_24 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_25 = L_24->___Hierarchy_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_3;
		IncrementalHierarchyFunctions_Remove_m61BFEA92C86599C03564C3800E3306C588986795(L_25, L_26, NULL);
		// data.RemovedInstanceIds.AddRange(arr);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_27 = V_0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_28 = (&L_27->___RemovedInstanceIds_3);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_29 = V_3;
		NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81(L_28, L_29, NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		// deletedInstances.Dispose();
		NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33((&V_2), NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_RuntimeMethod_var);
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
void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_Multicast(Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Exec_t837C0014CAFC9669A955D4720094E96064FF9225* currentDelegate = reinterpret_cast<Exec_t837C0014CAFC9669A955D4720094E96064FF9225*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenInst(Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	NullCheck(___ptr0);
	typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenStatic(Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenStaticInvoker(Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< void* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_ClosedStaticInvoker(Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Exec_t837C0014CAFC9669A955D4720094E96064FF9225 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec__ctor_m3F9D77F558DDA944CDC94C5945518C7F22819CC8 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_Multicast;
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::BeginInvoke(System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Exec_BeginInvoke_mC5F55765B94B342D3BC9AA239494C435CE16DD2F (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ptr0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec_EndInvoke_mEF913C3A412EAAFF033A757FD89970A8428373B2 (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_Multicast(Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* currentDelegate = reinterpret_cast<Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenInst(Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	NullCheck(___ptr0);
	typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenStatic(Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenStaticInvoker(Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< void* >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_ClosedStaticInvoker(Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24PostfixBurstDelegate__ctor_mC661CA6CDD44BE0300E60BE9CC5458C8534F5385 (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_OpenInst;
		}
		else
		{
			if (p0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32_Multicast;
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24PostfixBurstDelegate_Invoke_mC0B62CCC4510A00387673D8F5A0881890CF80A32 (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate::BeginInvoke(System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Execute_0000019CU24PostfixBurstDelegate_BeginInvoke_m0AF218FB0C32A5C35EB964EE39D3C24865C76B32 (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, void* ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* p1, RuntimeObject* p2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ptr0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p1, (RuntimeObject*)p2);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24PostfixBurstDelegate_EndInvoke_m7060AAE9B6D9B5BE72AA90CE1FDE504BB6FC7F5F (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D* __this, RuntimeObject* p0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_GetFunctionPointerDiscard_mA66C5F81A1E81C9A5B1ADC62EBE83F67F8748485 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields*)il2cpp_codegen_static_fields_for(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields*)il2cpp_codegen_static_fields_for(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_2 = { reinterpret_cast<intptr_t> (RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Execute_0000019CU24PostfixBurstDelegate_tC28DE03A0E0DAA6218F7B8A9ECE4610154B5445D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_4;
		L_4 = BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567(L_1, L_2, L_3, NULL);
		((Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields*)il2cpp_codegen_static_fields_for(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_4;
	}

IL_0023:
	{
		intptr_t* L_5 = p0;
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields*)il2cpp_codegen_static_fields_for(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_5) = (intptr_t)L_6;
		return;
	}
}
// System.IntPtr Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Execute_0000019CU24BurstDirectCall_GetFunctionPointer_m04696C6F65E4F41630FCC26EE09C8EC0719839A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		Execute_0000019CU24BurstDirectCall_GetFunctionPointerDiscard_mA66C5F81A1E81C9A5B1ADC62EBE83F67F8748485((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_Constructor_m609DC56577BDE50E66803E2A1AF457C1304F32C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (RemoveFromHierarchy_Execute_m7365AB5AC71C14C8D29AD70F67873BAF73C7E538_RuntimeMethod_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = BurstCompiler_CompileILPPMethod2_m545A8FC57B460871C1715F32DD601F2C1CA9C7FA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		((Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_StaticFields*)il2cpp_codegen_static_fields_for(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_1;
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_Initialize_m7E82C86F3D5B1C25F09173AACEFEA5C7B3A076EB (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall__cctor_m5716CCF5CABB5701A50372B7753259180510AF77 (const RuntimeMethod* method) 
{
	{
		Execute_0000019CU24BurstDirectCall_Constructor_m609DC56577BDE50E66803E2A1AF457C1304F32C9(NULL);
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Execute_0000019C$BurstDirectCall::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Execute_0000019CU24BurstDirectCall_Invoke_mAB6A7A9A3320B963E8BAB6DA4F60772223821DB2 (void* ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Execute_0000019CU24BurstDirectCall_t0D6C3BC26CBECEB9DA8920059373B39DF129432B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Execute_0000019CU24BurstDirectCall_GetFunctionPointer_m04696C6F65E4F41630FCC26EE09C8EC0719839A0(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		void* L_3 = ___ptr0;
		intptr_t L_4 = V_0;
		typedef void (CDECL *func_L_5)(void*);
		((func_L_5)L_4)(L_3);
		return;
	}

IL_001e:
	{
		void* L_6 = ___ptr0;
		il2cpp_codegen_runtime_class_init_inline(RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_il2cpp_TypeInfo_var);
		RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_inline(L_6, NULL);
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
// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionData
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_pinvoke(const IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09& unmarshaled, IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ChangedGameObjects_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ChangedGameObjects' of type 'IncrementalConversionData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ChangedGameObjects_3Exception, NULL);
}
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_pinvoke_back(const IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_pinvoke& marshaled, IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09& unmarshaled)
{
	Exception_t* ___ChangedGameObjects_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ChangedGameObjects' of type 'IncrementalConversionData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ChangedGameObjects_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionData
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_pinvoke_cleanup(IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionData
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_com(const IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09& unmarshaled, IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_com& marshaled)
{
	Exception_t* ___ChangedGameObjects_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ChangedGameObjects' of type 'IncrementalConversionData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ChangedGameObjects_3Exception, NULL);
}
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_com_back(const IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_com& marshaled, IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09& unmarshaled)
{
	Exception_t* ___ChangedGameObjects_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ChangedGameObjects' of type 'IncrementalConversionData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ChangedGameObjects_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionData
IL2CPP_EXTERN_C void IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshal_com_cleanup(IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09_marshaled_com& marshaled)
{
}
// Unity.Entities.Conversion.IncrementalConversionData Unity.Entities.Conversion.IncrementalConversionData::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 IncrementalConversionData_Create_m067D4BF4A14D942E01ABFE46D74987D79B11D0FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new IncrementalConversionData
		// {
		//     RemovedInstanceIds = new NativeList<int>(Allocator.Persistent),
		//     ChangedGameObjects = new List<GameObject>(),
		//     ChangedComponents = new List<Component>(),
		//     ReconvertHierarchyRequests = new NativeList<int>(Allocator.Persistent),
		//     ReconvertSingleRequests = new NativeList<int>(Allocator.Persistent),
		//     ChangedAssets = new NativeList<int>(Allocator.Persistent),
		//     DeletedAssets = new NativeList<int>(Allocator.Persistent),
		//     _changedGameObjectInstanceIds = new NativeList<int>(Allocator.Persistent),
		//     ParentChangeInstanceIds = new NativeList<IncrementalConversionChanges.ParentChange>(Allocator.Persistent)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_1), L_0, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->___RemovedInstanceIds_2 = L_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		(&V_0)->___ChangedGameObjects_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ChangedGameObjects_3), (void*)L_2);
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_3 = (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*)il2cpp_codegen_object_new(List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0(L_3, List_1__ctor_mD81EA72BD71489E733E09639A9DC2356A3F65FE0_RuntimeMethod_var);
		(&V_0)->___ChangedComponents_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ChangedComponents_4), (void*)L_3);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4;
		L_4 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_5), L_4, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->___ReconvertHierarchyRequests_5 = L_5;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_7;
		memset((&L_7), 0, sizeof(L_7));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_7), L_6, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->___ReconvertSingleRequests_6 = L_7;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_9), L_8, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->___ChangedAssets_0 = L_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10;
		L_10 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_11), L_10, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->___DeletedAssets_1 = L_11;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12;
		L_12 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E((&L_13), L_12, /*hidden argument*/NativeList_1__ctor_m98E15AF6E12EDECAB34F6D2B40A8D5201465427E_RuntimeMethod_var);
		(&V_0)->____changedGameObjectInstanceIds_7 = L_13;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_14;
		L_14 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0((&L_15), L_14, /*hidden argument*/NativeList_1__ctor_m583E10D7134D79BBB517D5850ADD695C92F8ACE0_RuntimeMethod_var);
		(&V_0)->___ParentChangeInstanceIds_8 = L_15;
		IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 L_16 = V_0;
		V_1 = L_16;
		goto IL_00a3;
	}

IL_00a3:
	{
		// }
		IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09 L_17 = V_1;
		return L_17;
	}
}
// Unity.Entities.IncrementalConversionChanges Unity.Entities.Conversion.IncrementalConversionData::ToChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C IncrementalConversionData_ToChanges_mC1C6DB0239E256C4DDCCED9C8B758DF875CE4CDC (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C V_3;
	memset((&V_3), 0, sizeof(V_3));
	IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// foreach (var go in ChangedGameObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___ChangedGameObjects_3;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0010_1:
			{
				// foreach (var go in ChangedGameObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// _changedGameObjectInstanceIds.Add(go.GetInstanceID());
				NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_3 = (&__this->____changedGameObjectInstanceIds_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_4, NULL);
				V_2 = L_5;
				NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064(L_3, (&V_2), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
			}

IL_002d_1:
			{
				// foreach (var go in ChangedGameObjects)
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return new IncrementalConversionChanges
		// {
		//     ChangedGameObjects = ChangedGameObjects,
		//     ChangedGameObjectsInstanceIds = _changedGameObjectInstanceIds.AsParallelReader(),
		//     RemovedGameObjectInstanceIds = RemovedInstanceIds.AsParallelReader(),
		//     ChangedComponents = ChangedComponents,
		//     ParentChanges = ParentChangeInstanceIds.AsParallelReader()
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___ChangedGameObjects_3;
		(&V_3)->___ChangedGameObjects_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___ChangedGameObjects_0), (void*)L_7);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_8 = (&__this->____changedGameObjectInstanceIds_7);
		ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B L_9;
		L_9 = NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971(L_8, NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_RuntimeMethod_var);
		(&V_3)->___ChangedGameObjectsInstanceIds_1 = L_9;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_10 = (&__this->___RemovedInstanceIds_2);
		ReadOnly_tE5BD616B34DA7C51EB808FBF52C839354E8B0E0B L_11;
		L_11 = NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971(L_10, NativeList_1_AsParallelReader_m3D2918872F9E9B6AF39D3C776217D1235127E971_RuntimeMethod_var);
		(&V_3)->___RemovedGameObjectInstanceIds_4 = L_11;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_12 = __this->___ChangedComponents_4;
		(&V_3)->___ChangedComponents_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___ChangedComponents_2), (void*)L_12);
		NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* L_13 = (&__this->___ParentChangeInstanceIds_8);
		ReadOnly_t2097F8A2F7CC4A9C8DE8A276676897F0461E4FE9 L_14;
		L_14 = NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC(L_13, NativeList_1_AsParallelReader_mDF81538F7C5E68C936EFBD27D604D1CB05F9AECC_RuntimeMethod_var);
		(&V_3)->___ParentChanges_3 = L_14;
		IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C L_15 = V_3;
		V_4 = L_15;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C L_16 = V_4;
		return L_16;
	}
}
IL2CPP_EXTERN_C  IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C IncrementalConversionData_ToChanges_mC1C6DB0239E256C4DDCCED9C8B758DF875CE4CDC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09*>(__this + _offset);
	IncrementalConversionChanges_t819A8776C9B820E1641BEA5170251358862E727C _returnValue;
	_returnValue = IncrementalConversionData_ToChanges_mC1C6DB0239E256C4DDCCED9C8B758DF875CE4CDC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.Conversion.IncrementalConversionData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalConversionData_Clear_mB4852541C98FA140AEBD834ADA9B79B0B82DBBAF (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFBF9F235533E988941ACFA007B807DAD8B9940AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangedAssets.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_0 = (&__this->___ChangedAssets_0);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_0, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// DeletedAssets.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_1 = (&__this->___DeletedAssets_1);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_1, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// RemovedInstanceIds.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_2 = (&__this->___RemovedInstanceIds_2);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_2, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// ChangedGameObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___ChangedGameObjects_3;
		NullCheck(L_3);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_3, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// ChangedComponents.Clear();
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_4 = __this->___ChangedComponents_4;
		NullCheck(L_4);
		List_1_Clear_mFBF9F235533E988941ACFA007B807DAD8B9940AF_inline(L_4, List_1_Clear_mFBF9F235533E988941ACFA007B807DAD8B9940AF_RuntimeMethod_var);
		// ReconvertHierarchyRequests.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_5 = (&__this->___ReconvertHierarchyRequests_5);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_5, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// ReconvertSingleRequests.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_6 = (&__this->___ReconvertSingleRequests_6);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_6, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// _changedGameObjectInstanceIds.Clear();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_7 = (&__this->____changedGameObjectInstanceIds_7);
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D(L_7, NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		// ParentChangeInstanceIds.Clear();
		NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* L_8 = (&__this->___ParentChangeInstanceIds_8);
		NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510(L_8, NativeList_1_Clear_mF048E285F24AA685391C05192085907D9B864510_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IncrementalConversionData_Clear_mB4852541C98FA140AEBD834ADA9B79B0B82DBBAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09*>(__this + _offset);
	IncrementalConversionData_Clear_mB4852541C98FA140AEBD834ADA9B79B0B82DBBAF(_thisAdjusted, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalConversionData_Dispose_m07FB9A0430213739A1E8BD913A362F0DD94F0726 (IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (RemovedInstanceIds.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_0 = (&__this->___RemovedInstanceIds_2);
		bool L_1;
		L_1 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_0, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// RemovedInstanceIds.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_3 = (&__this->___RemovedInstanceIds_2);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_3, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_001c:
	{
		// if (ReconvertHierarchyRequests.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_4 = (&__this->___ReconvertHierarchyRequests_5);
		bool L_5;
		L_5 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_4, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// ReconvertHierarchyRequests.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_7 = (&__this->___ReconvertHierarchyRequests_5);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_7, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_0037:
	{
		// if (ReconvertSingleRequests.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_8 = (&__this->___ReconvertSingleRequests_6);
		bool L_9;
		L_9 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_8, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// ReconvertSingleRequests.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_11 = (&__this->___ReconvertSingleRequests_6);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_11, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (ChangedAssets.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_12 = (&__this->___ChangedAssets_0);
		bool L_13;
		L_13 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_12, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// ChangedAssets.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_15 = (&__this->___ChangedAssets_0);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_15, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (DeletedAssets.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_16 = (&__this->___DeletedAssets_1);
		bool L_17;
		L_17 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_16, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// DeletedAssets.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_19 = (&__this->___DeletedAssets_1);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_19, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_008a:
	{
		// if (_changedGameObjectInstanceIds.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_20 = (&__this->____changedGameObjectInstanceIds_7);
		bool L_21;
		L_21 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_20, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00a7;
		}
	}
	{
		// _changedGameObjectInstanceIds.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_23 = (&__this->____changedGameObjectInstanceIds_7);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_23, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_00a7:
	{
		// if (ParentChangeInstanceIds.IsCreated)
		NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* L_24 = (&__this->___ParentChangeInstanceIds_8);
		bool L_25;
		L_25 = NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607(L_24, NativeList_1_get_IsCreated_m5055195E6F28C8CD522859C27CB5DEC50C4BC607_RuntimeMethod_var);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00c4;
		}
	}
	{
		// ParentChangeInstanceIds.Dispose();
		NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592* L_27 = (&__this->___ParentChangeInstanceIds_8);
		NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074(L_27, NativeList_1_Dispose_m824839A3A3DFFA9F65D7F5C6CE06ABFC4E376074_RuntimeMethod_var);
	}

IL_00c4:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IncrementalConversionData_Dispose_m07FB9A0430213739A1E8BD913A362F0DD94F0726_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IncrementalConversionData_tDE5E76DBD890FE8E1E6639031E579FB1C8129C09*>(__this + _offset);
	IncrementalConversionData_Dispose_m07FB9A0430213739A1E8BD913A362F0DD94F0726(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.IncrementalHierarchy::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchy_Dispose_m7C3F45538E39BB1C25A2B396FAC588B6D71E53F8 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (TransformArray.isCreated)
		TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* L_0 = (&__this->___TransformArray_2);
		bool L_1;
		L_1 = TransformAccessArray_get_isCreated_m27A01F9644D14864AAF311A87959DF8705A0B142(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// TransformArray.Dispose();
		TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* L_3 = (&__this->___TransformArray_2);
		TransformAccessArray_Dispose_mC0775DCFFE41173544615D7031AC028D653C4186(L_3, NULL);
	}

IL_001c:
	{
		// if (InstanceId.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_4 = (&__this->___InstanceId_0);
		bool L_5;
		L_5 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_4, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// InstanceId.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_7 = (&__this->___InstanceId_0);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_7, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_0037:
	{
		// if (ParentIndex.IsCreated)
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_8 = (&__this->___ParentIndex_1);
		bool L_9;
		L_9 = NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1(L_8, NativeList_1_get_IsCreated_m78B7C2B2827151A332E74D3019F98073EC9F90E1_RuntimeMethod_var);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// ParentIndex.Dispose();
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_11 = (&__this->___ParentIndex_1);
		NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E(L_11, NativeList_1_Dispose_m84213D7E2FCB5934C5E1C073C68F55FBD0383E1E_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (ChildIndicesByIndex.IsCreated)
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_12 = (&__this->___ChildIndicesByIndex_3);
		bool L_13;
		L_13 = NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E(L_12, NativeParallelMultiHashMap_2_get_IsCreated_mAE92E32D7232215D38745DA4CF54F51A9703D06E_RuntimeMethod_var);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// ChildIndicesByIndex.Dispose();
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_15 = (&__this->___ChildIndicesByIndex_3);
		NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117(L_15, NativeParallelMultiHashMap_2_Dispose_mCEBC9E7FBEF97985494589FB0ECEF47257C6F117_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (IndexByInstanceId.IsCreated)
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_16 = (&__this->___IndexByInstanceId_4);
		bool L_17;
		L_17 = NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750(L_16, NativeParallelHashMap_2_get_IsCreated_m9CAD809B525AF41F3B4029606DCD42E3156E8750_RuntimeMethod_var);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// IndexByInstanceId.Dispose();
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_19 = (&__this->___IndexByInstanceId_4);
		NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E(L_19, NativeParallelHashMap_2_Dispose_m424865EAF792C6A590BB7F8F0D2760F358CEC15E_RuntimeMethod_var);
	}

IL_008a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IncrementalHierarchy_Dispose_m7C3F45538E39BB1C25A2B396FAC588B6D71E53F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177*>(__this + _offset);
	IncrementalHierarchy_Dispose_m7C3F45538E39BB1C25A2B396FAC588B6D71E53F8(_thisAdjusted, method);
}
// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.IncrementalHierarchy::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* __this, const RuntimeMethod* method) 
{
	{
		// public SceneHierarchy AsReadOnly() => new SceneHierarchy(this);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_0 = (*(IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177*)__this);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_1;
		memset((&L_1), 0, sizeof(L_1));
		SceneHierarchy__ctor_m7B1511B7DA10F638E50B937CC61A0D1CF796192C((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177*>(__this + _offset);
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 _returnValue;
	_returnValue = IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD(_thisAdjusted, method);
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
// System.Boolean Unity.Entities.Conversion.IncrementalHierarchyFunctions::TryAddSingle(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IncrementalHierarchyFunctions_TryAddSingle_m6CBF4FA7B54AC82AF846191A7FE1CFCB24017ED5 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// var t = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		V_0 = L_1;
		// var p = t.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		V_1 = L_3;
		// GameObject parent = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if (p != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// parent = p.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		V_2 = L_8;
	}

IL_0023:
	{
		// return TryAddSingle(hierarchy, go, t, parent);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_9 = ___hierarchy0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___go1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		bool L_13;
		L_13 = IncrementalHierarchyFunctions_TryAddSingle_m1400617082E73A545483B67895180A70FA2BE9A2(L_9, L_10, L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Boolean Unity.Entities.Conversion.IncrementalHierarchyFunctions::TryAddSingle(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IncrementalHierarchyFunctions_TryAddSingle_m1400617082E73A545483B67895180A70FA2BE9A2 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int id = go.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		V_0 = L_1;
		// int index = hierarchy.InstanceId.Length;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_2 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_2, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_1 = L_3;
		// if (!hierarchy.IndexByInstanceId.TryAdd(id, index))
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_4 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F(L_4, L_5, L_6, NativeParallelHashMap_2_TryAdd_m5C703FAD6CDC9DDEB077674DB4579B274D49307F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00aa;
	}

IL_002e:
	{
		// hierarchy.InstanceId.Add(id);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_9 = (&(&___hierarchy0)->___InstanceId_0);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064(L_9, (&V_0), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		// hierarchy.TransformArray.Add(t);
		TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* L_10 = (&(&___hierarchy0)->___TransformArray_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___t2;
		TransformAccessArray_Add_mC1B41F75FE0CD6AAB77186F6EF7A41E790BDE336(L_10, L_11, NULL);
		// if (parent != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___parent3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		// var pid = parent.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___parent3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_15, NULL);
		V_5 = L_16;
		// hierarchy.IndexByInstanceId.TryGetValue(pid, out var parentIndex);
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_17 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_18 = V_5;
		bool L_19;
		L_19 = NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B(L_17, L_18, (&V_6), NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		// hierarchy.ParentIndex.Add(parentIndex);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_20 = (&(&___hierarchy0)->___ParentIndex_1);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064(L_20, (&V_6), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		// hierarchy.ChildIndicesByIndex.Add(parentIndex, index);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_21 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_22 = V_6;
		int32_t L_23 = V_1;
		NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9(L_21, L_22, L_23, NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		goto IL_00a6;
	}

IL_0094:
	{
		// hierarchy.ParentIndex.Add(-1);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_24 = (&(&___hierarchy0)->___ParentIndex_1);
		V_7 = (-1);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064(L_24, (&V_7), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_00a6:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		bool L_25 = V_3;
		return L_25;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::AddRecurse(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_AddRecurse_m3B8C3B93203D6313D8A1235DE2973CFC2F86F9C6 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// var t = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		V_0 = L_1;
		// var p = t.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		V_1 = L_3;
		// AddRecurse(hierarchy, go, t, p != null ? p.gameObject : null);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_4 = ___hierarchy0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___go1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_6;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		if (L_8)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0024;
	}

IL_001e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0024:
	{
		IncrementalHierarchyFunctions_AddRecurse_m3E22C0693F0F4FEBAD0577FF6CB7EE48564A587B(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::AddRecurse(Unity.Entities.Conversion.IncrementalHierarchy,UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_AddRecurse_m3E22C0693F0F4FEBAD0577FF6CB7EE48564A587B (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___top2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	bool V_3 = false;
	{
		// TryAddSingle(hierarchy, go, top, parent);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_0 = ___hierarchy0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___top2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___parent3;
		bool L_4;
		L_4 = IncrementalHierarchyFunctions_TryAddSingle_m1400617082E73A545483B67895180A70FA2BE9A2(L_0, L_1, L_2, L_3, NULL);
		// int n = top.transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___top2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_6, NULL);
		V_0 = L_7;
		// for (int i = 0; i < n; i++)
		V_1 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		// var child = top.transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___top2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, L_10, NULL);
		V_2 = L_11;
		// AddRecurse(hierarchy, child.gameObject, child, go);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_12 = ___hierarchy0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_2;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___go1;
		IncrementalHierarchyFunctions_AddRecurse_m3E22C0693F0F4FEBAD0577FF6CB7EE48564A587B(L_12, L_14, L_15, L_16, NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::AddRoots(Unity.Entities.Conversion.IncrementalHierarchy,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_AddRoots_m133F8E64FF6AC939E12FBB27DB293C540B567724 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, RuntimeObject* ___gameObjects1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// foreach (var go in gameObjects)
		RuntimeObject* L_0 = ___gameObjects1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator() */, IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_000b_1:
			{
				// foreach (var go in gameObjects)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current() */, IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// var t = go.transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
				V_2 = L_7;
				// AddRecurse(hierarchy, go, t, null);
				IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_8 = ___hierarchy0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
				IncrementalHierarchyFunctions_AddRecurse_m3E22C0693F0F4FEBAD0577FF6CB7EE48564A587B(L_8, L_9, L_10, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_0025_1:
			{
				// foreach (var go in gameObjects)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::ChangeParents(Unity.Entities.Conversion.IncrementalHierarchy,Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32>,Unity.Collections.NativeList`1<System.Int32>,Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_ChangeParents_m82A7FC057AC0179E02F8F8270E34E031EB997C12 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 ___parentChange1, NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___outChangeFailed2, NativeList_1_tFFC81E63CE9E0AE7F858A77E33BA465655D07592 ___outChangeSuccessful3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	{
		// var instanceIds = parentChange.Keys;
		NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 L_0 = ___parentChange1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = L_0.___Keys_0;
		V_0 = L_1;
		// var parentInstanceIds = parentChange.Values;
		NativeKeyValueArrays_2_tF51A55D75DBB6D766D8D5B99DC29C3762BA12496 L_2 = ___parentChange1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = L_2.___Values_1;
		V_1 = L_3;
		// for (int i = 0; i < instanceIds.Length; i++)
		V_2 = 0;
		goto IL_0159;
	}

IL_0016:
	{
		// var instanceId = instanceIds[i];
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer_0, L_4);
		V_3 = L_5;
		// if (!hierarchy.IndexByInstanceId.TryGetValue(instanceId, out int idx))
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_6 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_7 = V_3;
		bool L_8;
		L_8 = NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B(L_6, L_7, (&V_4), NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_9;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// outChangeFailed.Add(instanceId);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&___outChangeFailed2), (&V_3), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		// continue;
		goto IL_0155;
	}

IL_0048:
	{
		// int oldParentIdx = hierarchy.ParentIndex[idx];
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_10 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_10, L_11, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_5 = L_12;
		// int oldParentId = 0;
		V_6 = 0;
		// if (oldParentIdx != -1)
		int32_t L_13 = V_5;
		V_10 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// oldParentId = hierarchy.InstanceId[oldParentIdx];
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_15 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_16 = V_5;
		int32_t L_17;
		L_17 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_15, L_16, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_6 = L_17;
		// hierarchy.ChildIndicesByIndex.Remove(oldParentIdx, idx);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_18 = ___hierarchy0;
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 L_19 = L_18.___ChildIndicesByIndex_3;
		int32_t L_20 = V_5;
		int32_t L_21 = V_4;
		NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4(L_19, L_20, L_21, NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var);
	}

IL_008b:
	{
		// int newParentId = parentInstanceIds[i];
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_1))->___m_Buffer_0, L_22);
		V_7 = L_23;
		// if (hierarchy.IndexByInstanceId.TryGetValue(newParentId, out int newParentIdx))
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_24 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_25 = V_7;
		bool L_26;
		L_26 = NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B(L_24, L_25, (&V_8), NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		V_11 = L_26;
		bool L_27 = V_11;
		if (!L_27)
		{
			goto IL_00fd;
		}
	}
	{
		// hierarchy.ChildIndicesByIndex.Add(newParentIdx, idx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_28 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_29 = V_8;
		int32_t L_30 = V_4;
		NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9(L_28, L_29, L_30, NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		// hierarchy.ParentIndex[idx] = newParentIdx;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_31 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_32 = V_4;
		int32_t L_33 = V_8;
		NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05(L_31, L_32, L_33, NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var);
		// outChangeSuccessful.Add(new IncrementalConversionChanges.ParentChange
		// {
		//     InstanceId = instanceId,
		//     NewParentInstanceId = newParentId,
		//     PreviousParentInstanceId = oldParentId
		// });
		il2cpp_codegen_initobj((&V_12), sizeof(ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF));
		int32_t L_34 = V_3;
		(&V_12)->___InstanceId_0 = L_34;
		int32_t L_35 = V_7;
		(&V_12)->___NewParentInstanceId_2 = L_35;
		int32_t L_36 = V_6;
		(&V_12)->___PreviousParentInstanceId_1 = L_36;
		NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A((&___outChangeSuccessful3), (&V_12), NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_RuntimeMethod_var);
		goto IL_0154;
	}

IL_00fd:
	{
		// if (newParentId != 0)
		int32_t L_37 = V_7;
		V_13 = (bool)((!(((uint32_t)L_37) <= ((uint32_t)0)))? 1 : 0);
		bool L_38 = V_13;
		if (!L_38)
		{
			goto IL_0115;
		}
	}
	{
		// outChangeFailed.Add(instanceId);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&___outChangeFailed2), (&V_3), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		goto IL_0143;
	}

IL_0115:
	{
		// outChangeSuccessful.Add(new IncrementalConversionChanges.ParentChange
		// {
		//     InstanceId = instanceId,
		//     NewParentInstanceId = newParentId,
		//     PreviousParentInstanceId = oldParentId
		// });
		il2cpp_codegen_initobj((&V_12), sizeof(ParentChange_t2AE4C78954828689842E136F26AAF94656EA45CF));
		int32_t L_39 = V_3;
		(&V_12)->___InstanceId_0 = L_39;
		int32_t L_40 = V_7;
		(&V_12)->___NewParentInstanceId_2 = L_40;
		int32_t L_41 = V_6;
		(&V_12)->___PreviousParentInstanceId_1 = L_41;
		NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A((&___outChangeSuccessful3), (&V_12), NativeList_1_Add_mF130AFCFCD8FACE9B0E4C709CE01B19E824AC50A_RuntimeMethod_var);
	}

IL_0143:
	{
		// hierarchy.ParentIndex[idx] = -1;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_42 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_43 = V_4;
		NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05(L_42, L_43, (-1), NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var);
	}

IL_0154:
	{
	}

IL_0155:
	{
		// for (int i = 0; i < instanceIds.Length; i++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0159:
	{
		// for (int i = 0; i < instanceIds.Length; i++)
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		V_14 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_14;
		if (L_47)
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::Remove(Unity.Entities.Conversion.IncrementalHierarchy,Unity.Collections.NativeArray`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_Remove_m61BFEA92C86599C03564C3800E3306C588986795 (IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instances1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B11_0 = 0;
	{
		// var openInstanceIds = new NativeList<int>(instances.Length, Allocator.Temp);
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___instances1))->___m_Length_1);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&V_0), L_0, L_1, NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		// openInstanceIds.AddRange(instances);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2 = ___instances1;
		NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81((&V_0), L_2, NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		// var tmpChildren = new NativeList<int>(16, Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3;
		L_3 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&V_1), ((int32_t)16), L_3, NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		goto IL_023d;
	}

IL_0032:
	{
		// int id = openInstanceIds[openInstanceIds.Length - 1];
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		int32_t L_5;
		L_5 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C((&V_0), ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_2 = L_5;
		// openInstanceIds.Length -= 1;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_6 = (&V_0);
		int32_t L_7;
		L_7 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_6, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		// if (!hierarchy.IndexByInstanceId.TryGetValue(id, out int idx))
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_8 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B(L_8, L_9, (&V_3), NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// continue;
		goto IL_023d;
	}

IL_0071:
	{
		// var iter = hierarchy.ChildIndicesByIndex.GetValuesForKey(idx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_12 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_13 = V_3;
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D L_14;
		L_14 = NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF(L_12, L_13, NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var);
		V_7 = L_14;
		goto IL_00a2;
	}

IL_0083:
	{
		// openInstanceIds.Add(hierarchy.InstanceId[iter.Current]);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_15 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_16;
		L_16 = Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_inline((&V_7), Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		int32_t L_17;
		L_17 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_15, L_16, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_8 = L_17;
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_0), (&V_8), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_00a2:
	{
		// while (iter.MoveNext())
		bool L_18;
		L_18 = Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC((&V_7), Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var);
		V_9 = L_18;
		bool L_19 = V_9;
		if (L_19)
		{
			goto IL_0083;
		}
	}
	{
		// hierarchy.ChildIndicesByIndex.Remove(idx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_20 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_21 = V_3;
		int32_t L_22;
		L_22 = NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019(L_20, L_21, NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_RuntimeMethod_var);
		// hierarchy.InstanceId.RemoveAtSwapBack(idx);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_23 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_24 = V_3;
		NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262(L_23, L_24, NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_RuntimeMethod_var);
		// int oldParentIdx = hierarchy.ParentIndex[idx];
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_25 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_26 = V_3;
		int32_t L_27;
		L_27 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_25, L_26, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_4 = L_27;
		// hierarchy.ParentIndex.RemoveAtSwapBack(idx);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_28 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_29 = V_3;
		NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262(L_28, L_29, NativeList_1_RemoveAtSwapBack_mEED4A2B321358C4354A173FBFAAADBE4F9F64262_RuntimeMethod_var);
		// hierarchy.TransformArray.RemoveAtSwapBack(idx);
		TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4* L_30 = (&(&___hierarchy0)->___TransformArray_2);
		int32_t L_31 = V_3;
		TransformAccessArray_RemoveAtSwapBack_m20FDDF2B47CD9A3778D4B59AD6598DCF9D985776(L_30, L_31, NULL);
		// hierarchy.IndexByInstanceId.Remove(id);
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_32 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_33 = V_2;
		bool L_34;
		L_34 = NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9(L_32, L_33, NativeParallelHashMap_2_Remove_m8C584829B282C40C60A88AB121C670DB050058C9_RuntimeMethod_var);
		// if (oldParentIdx != -1)
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)((((int32_t)L_35) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0122;
		}
	}
	{
		// hierarchy.ChildIndicesByIndex.Remove(oldParentIdx, idx);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_37 = ___hierarchy0;
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 L_38 = L_37.___ChildIndicesByIndex_3;
		int32_t L_39 = V_4;
		int32_t L_40 = V_3;
		NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4(L_38, L_39, L_40, NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var);
	}

IL_0122:
	{
		// int swappedIdx = hierarchy.InstanceId.Length;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_41 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_41, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_5 = L_42;
		// if (swappedIdx > 0 && swappedIdx != idx)
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_3;
		G_B11_0 = ((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0140;
	}

IL_013f:
	{
		G_B11_0 = 0;
	}

IL_0140:
	{
		V_11 = (bool)G_B11_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_023c;
		}
	}
	{
		// int swappedId = hierarchy.InstanceId[idx];
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_47 = (&(&___hierarchy0)->___InstanceId_0);
		int32_t L_48 = V_3;
		int32_t L_49;
		L_49 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_47, L_48, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_12 = L_49;
		// hierarchy.IndexByInstanceId[swappedId] = idx;
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_50 = (&(&___hierarchy0)->___IndexByInstanceId_4);
		int32_t L_51 = V_12;
		int32_t L_52 = V_3;
		NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5(L_50, L_51, L_52, NativeParallelHashMap_2_set_Item_mF96710B66D342A8B53AC3ED005A5FAD94A0CFDB5_RuntimeMethod_var);
		// int swappedParentIdx = hierarchy.ParentIndex[idx];
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_53 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_54 = V_3;
		int32_t L_55;
		L_55 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_53, L_54, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_13 = L_55;
		// if (swappedParentIdx != -1)
		int32_t L_56 = V_13;
		V_15 = (bool)((((int32_t)((((int32_t)L_56) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_01a8;
		}
	}
	{
		// hierarchy.ChildIndicesByIndex.Remove(swappedParentIdx, swappedIdx);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_58 = ___hierarchy0;
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 L_59 = L_58.___ChildIndicesByIndex_3;
		int32_t L_60 = V_13;
		int32_t L_61 = V_5;
		NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4(L_59, L_60, L_61, NativeParallelHashMapExtensions_Remove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0E6DB83BD7F1C2D479EFAC40BD785C478A6E9E4_RuntimeMethod_var);
		// hierarchy.ChildIndicesByIndex.Add(swappedParentIdx, idx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_62 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_63 = V_13;
		int32_t L_64 = V_3;
		NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9(L_62, L_63, L_64, NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
	}

IL_01a8:
	{
		// var iter = hierarchy.ChildIndicesByIndex.GetValuesForKey(swappedIdx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_65 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_66 = V_5;
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D L_67;
		L_67 = NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF(L_65, L_66, NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var);
		V_14 = L_67;
		goto IL_01e4;
	}

IL_01ba:
	{
		// tmpChildren.Add(iter.Current);
		int32_t L_68;
		L_68 = Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_inline((&V_14), Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		V_8 = L_68;
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_1), (&V_8), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		// hierarchy.ParentIndex[iter.Current] = idx;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_69 = (&(&___hierarchy0)->___ParentIndex_1);
		int32_t L_70;
		L_70 = Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_inline((&V_14), Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		int32_t L_71 = V_3;
		NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05(L_69, L_70, L_71, NativeList_1_set_Item_mA471F77F2D730916D611ABCC0101077F2047CF05_RuntimeMethod_var);
	}

IL_01e4:
	{
		// while (iter.MoveNext())
		bool L_72;
		L_72 = Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC((&V_14), Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var);
		V_16 = L_72;
		bool L_73 = V_16;
		if (L_73)
		{
			goto IL_01ba;
		}
	}
	{
		// hierarchy.ChildIndicesByIndex.Remove(swappedIdx);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_74 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_75 = V_5;
		int32_t L_76;
		L_76 = NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019(L_74, L_75, NativeParallelMultiHashMap_2_Remove_m87CCE1E7566E8DCEB05B47F00F571B619F061019_RuntimeMethod_var);
		// for (int i = 0; i < tmpChildren.Length; i++)
		V_17 = 0;
		goto IL_0222;
	}

IL_0205:
	{
		// hierarchy.ChildIndicesByIndex.Add(idx, tmpChildren[i]);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_77 = (&(&___hierarchy0)->___ChildIndicesByIndex_3);
		int32_t L_78 = V_3;
		int32_t L_79 = V_17;
		int32_t L_80;
		L_80 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C((&V_1), L_79, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9(L_77, L_78, L_80, NativeParallelMultiHashMap_2_Add_m308B936AF7BE5D39D30DAF434CE76C45E5F6F4F9_RuntimeMethod_var);
		// for (int i = 0; i < tmpChildren.Length; i++)
		int32_t L_81 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0222:
	{
		// for (int i = 0; i < tmpChildren.Length; i++)
		int32_t L_82 = V_17;
		int32_t L_83;
		L_83 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_1), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_82) < ((int32_t)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (L_84)
		{
			goto IL_0205;
		}
	}
	{
		// tmpChildren.Clear();
		NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D((&V_1), NativeList_1_Clear_mFF2A9DF92D06E801580682242510539BA186CD9D_RuntimeMethod_var);
	}

IL_023c:
	{
	}

IL_023d:
	{
		// while (openInstanceIds.Length > 0)
		int32_t L_85;
		L_85 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_85) > ((int32_t)0))? 1 : 0);
		bool L_86 = V_19;
		if (L_86)
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::Build(UnityEngine.GameObject[],Unity.Entities.Conversion.IncrementalHierarchy&,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_Build_m98D15E9CA017F94A69AF46931DA653E204143949 (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___roots0, IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* ___hierarchy1, int32_t ___alloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hierarchy = new IncrementalHierarchy
		// {
		//     TransformArray = new TransformAccessArray(roots.Length),
		//     ChildIndicesByIndex = new NativeParallelMultiHashMap<int, int>(roots.Length, alloc),
		//     IndexByInstanceId = new NativeParallelHashMap<int, int>(roots.Length, alloc),
		//     InstanceId = new NativeList<int>(roots.Length, alloc),
		//     ParentIndex = new NativeList<int>(roots.Length, alloc)
		// };
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_0 = ___hierarchy1;
		il2cpp_codegen_initobj((&V_0), sizeof(IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___roots0;
		NullCheck(L_1);
		TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TransformAccessArray__ctor_m66B44699D46850AA776992B25A5443B6BAC42ED1((&L_2), ((int32_t)(((RuntimeArray*)L_1)->max_length)), (-1), /*hidden argument*/NULL);
		(&V_0)->___TransformArray_2 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = ___roots0;
		NullCheck(L_3);
		int32_t L_4 = ___alloc2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5;
		L_5 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_4, NULL);
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9((&L_6), ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_5, /*hidden argument*/NativeParallelMultiHashMap_2__ctor_mF4F640CFBCCFAC8F7B81ADDBE067C77F3CE2F8E9_RuntimeMethod_var);
		(&V_0)->___ChildIndicesByIndex_3 = L_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = ___roots0;
		NullCheck(L_7);
		int32_t L_8 = ___alloc2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9;
		L_9 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_8, NULL);
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B((&L_10), ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_9, /*hidden argument*/NativeParallelHashMap_2__ctor_m5B14A187C0C4A05D6B129B300B602E387F42A04B_RuntimeMethod_var);
		(&V_0)->___IndexByInstanceId_4 = L_10;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = ___roots0;
		NullCheck(L_11);
		int32_t L_12 = ___alloc2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_13;
		L_13 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_12, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&L_14), ((int32_t)(((RuntimeArray*)L_11)->max_length)), L_13, /*hidden argument*/NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		(&V_0)->___InstanceId_0 = L_14;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = ___roots0;
		NullCheck(L_15);
		int32_t L_16 = ___alloc2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_17;
		L_17 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_16, NULL);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_18;
		memset((&L_18), 0, sizeof(L_18));
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&L_18), ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_17, /*hidden argument*/NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		(&V_0)->___ParentIndex_1 = L_18;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_19 = V_0;
		*(IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177*)L_0 = L_19;
		// AddRoots(hierarchy, roots);
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_20 = ___hierarchy1;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_21 = (*(IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177*)L_20);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = ___roots0;
		IncrementalHierarchyFunctions_AddRoots_m133F8E64FF6AC939E12FBB27DB293C540B567724(L_21, (RuntimeObject*)L_22, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.SceneHierarchy::.ctor(Unity.Entities.Conversion.IncrementalHierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchy__ctor_m7B1511B7DA10F638E50B937CC61A0D1CF796192C (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instanceId = hierarchy.InstanceId;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_0 = ___hierarchy0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_1 = L_0.___InstanceId_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2;
		L_2 = NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065(L_1, NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var);
		__this->____instanceId_0 = L_2;
		// _parentIndex = hierarchy.ParentIndex;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_3 = ___hierarchy0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_4 = L_3.___ParentIndex_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065(L_4, NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var);
		__this->____parentIndex_1 = L_5;
		// _indexByInstanceId = hierarchy.IndexByInstanceId;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_6 = ___hierarchy0;
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9 L_7 = L_6.___IndexByInstanceId_4;
		__this->____indexByInstanceId_2 = L_7;
		// _childIndicesByIndex = hierarchy.ChildIndicesByIndex;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_8 = ___hierarchy0;
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4 L_9 = L_8.___ChildIndicesByIndex_3;
		__this->____childIndicesByIndex_3 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneHierarchy__ctor_m7B1511B7DA10F638E50B937CC61A0D1CF796192C_AdjustorThunk (RuntimeObject* __this, IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 ___hierarchy0, const RuntimeMethod* method)
{
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12*>(__this + _offset);
	SceneHierarchy__ctor_m7B1511B7DA10F638E50B937CC61A0D1CF796192C(_thisAdjusted, ___hierarchy0, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy::GetInstanceIdForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public int GetInstanceIdForIndex(int index) => _instanceId[index];
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->____instanceId_0);
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy::GetParentForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneHierarchy_GetParentForIndex_mDC05BB77F8F7FC5F81A7DABA5874630803C96111 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public int GetParentForIndex(int index) => _parentIndex[index];
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->____parentIndex_1);
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t SceneHierarchy_GetParentForIndex_mDC05BB77F8F7FC5F81A7DABA5874630803C96111_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SceneHierarchy_GetParentForIndex_mDC05BB77F8F7FC5F81A7DABA5874630803C96111(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy::GetChildIndicesForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Children GetChildIndicesForIndex(int index) => new Children(_childIndicesByIndex.GetValuesForKey(index));
		NativeParallelMultiHashMap_2_tD81E7EF3383996B1618DE4E7AAF9B5CE63994BF4* L_0 = (&__this->____childIndicesByIndex_3);
		int32_t L_1 = ___index0;
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D L_2;
		L_2 = NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF(L_0, L_1, NativeParallelMultiHashMap_2_GetValuesForKey_m80CD689D8082E3739D927A3FF98C31672151ACCF_RuntimeMethod_var);
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Children__ctor_m571A0E7A71F32DC3A8F745DFF66EB63AD456DD57((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12*>(__this + _offset);
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F _returnValue;
	_returnValue = SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Boolean Unity.Entities.Conversion.SceneHierarchy::TryGetIndexForInstanceId(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* __this, int32_t ___instanceId0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _indexByInstanceId.TryGetValue(instanceId, out index);
		NativeParallelHashMap_2_t4D02654CEC4D45A2841FD43547AD1E2F506E72A9* L_0 = (&__this->____indexByInstanceId_2);
		int32_t L_1 = ___instanceId0;
		int32_t* L_2 = ___index1;
		bool L_3;
		L_3 = NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B(L_0, L_1, L_2, NativeParallelHashMap_2_TryGetValue_mEB06806E6F478080C8D6A32DAAEE123E58B5D02B_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076_AdjustorThunk (RuntimeObject* __this, int32_t ___instanceId0, int32_t* ___index1, const RuntimeMethod* method)
{
	SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12*>(__this + _offset);
	bool _returnValue;
	_returnValue = SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076(_thisAdjusted, ___instanceId0, ___index1, method);
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
// Conversion methods for marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_pinvoke(const Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F& unmarshaled, Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_pinvoke& marshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_pinvoke_back(const Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_pinvoke& marshaled, Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F& unmarshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_pinvoke_cleanup(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_com(const Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F& unmarshaled, Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_com& marshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_com_back(const Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_com& marshaled, Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F& unmarshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshal_com_cleanup(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_marshaled_com& marshaled)
{
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::.ctor(Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children__ctor_m571A0E7A71F32DC3A8F745DFF66EB63AD456DD57 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ___iter0, const RuntimeMethod* method) 
{
	{
		// _iter = iter;
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D L_0 = ___iter0;
		__this->____iter_0 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Children__ctor_m571A0E7A71F32DC3A8F745DFF66EB63AD456DD57_AdjustorThunk (RuntimeObject* __this, Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D ___iter0, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	Children__ctor_m571A0E7A71F32DC3A8F745DFF66EB63AD456DD57(_thisAdjusted, ___iter0, method);
}
// System.Boolean Unity.Entities.Conversion.SceneHierarchy/Children::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool MoveNext() => _iter.MoveNext();
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* L_0 = (&__this->____iter_0);
		bool L_1;
		L_1 = Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC(L_0, Enumerator_MoveNext_mC2A4A2637E470B87A9DE5C6E38B05DB66A3ADBCC_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Reset_m72B559B2BD5B6C3BE13C462E2457BDB54AB9E1E4 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Reset() => _iter.Reset();
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* L_0 = (&__this->____iter_0);
		Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432(L_0, Enumerator_Reset_mDAF54665760AEA87E20F7B7AC0A86DCB3544A432_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void Children_Reset_m72B559B2BD5B6C3BE13C462E2457BDB54AB9E1E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	Children_Reset_m72B559B2BD5B6C3BE13C462E2457BDB54AB9E1E4(_thisAdjusted, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy/Children::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Current => _iter.Current;
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* L_0 = (&__this->____iter_0);
		int32_t L_1;
		L_1 = Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_inline(L_0, Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC(_thisAdjusted, method);
	return _returnValue;
}
// System.Object Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerator_get_Current_mECF2BEDE877FA0A7C34A1A0EEFE13019713D1F38 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object IEnumerator.Current => Current;
		int32_t L_0;
		L_0 = Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Children_System_Collections_IEnumerator_get_Current_mECF2BEDE877FA0A7C34A1A0EEFE13019713D1F38_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Children_System_Collections_IEnumerator_get_Current_mECF2BEDE877FA0A7C34A1A0EEFE13019713D1F38(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Dispose_mEC8A4C656658C46F4919AAB588CA4EFDC8D686B2 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => _iter.Dispose();
		Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* L_0 = (&__this->____iter_0);
		Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B(L_0, Enumerator_Dispose_mC19AF68BC2BF167875BC296BD5B24DEFB6BCA38B_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void Children_Dispose_mEC8A4C656658C46F4919AAB588CA4EFDC8D686B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	Children_Dispose_mEC8A4C656658C46F4919AAB588CA4EFDC8D686B2(_thisAdjusted, method);
}
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy/Children::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F Children_GetEnumerator_mA51B695F63D61F41C7C4BAFF8A517DC392719CD4 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	{
		// public Children GetEnumerator() => this;
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_0 = (*(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F Children_GetEnumerator_mA51B695F63D61F41C7C4BAFF8A517DC392719CD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F _returnValue;
	_returnValue = Children_GetEnumerator_mA51B695F63D61F41C7C4BAFF8A517DC392719CD4(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mD20D30B3E2E93A77A77F3CFE8EAC15F6DEDBB3D1 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerator<int> IEnumerable<int>.GetEnumerator() => this;
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_0 = (*(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*)__this);
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_1 = L_0;
		RuntimeObject* L_2 = Box(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mD20D30B3E2E93A77A77F3CFE8EAC15F6DEDBB3D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mD20D30B3E2E93A77A77F3CFE8EAC15F6DEDBB3D1(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m54C34E9760CAE39994D3872DD5C3F429F6704514 (Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerator IEnumerable.GetEnumerator() => (this as IEnumerable<int>).GetEnumerator();
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_0 = (*(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*)__this);
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_1 = L_0;
		RuntimeObject* L_2 = Box(Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3;
		L_3 = Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mD20D30B3E2E93A77A77F3CFE8EAC15F6DEDBB3D1((Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*)UnBox(L_2, Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F_il2cpp_TypeInfo_var), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m54C34E9760CAE39994D3872DD5C3F429F6704514_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Children_System_Collections_IEnumerable_GetEnumerator_m54C34E9760CAE39994D3872DD5C3F429F6704514(_thisAdjusted, method);
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
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIds(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rootInstanceIds1, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___visitedInstanceIds2, const RuntimeMethod* method) 
{
	{
		// CollectHierarchyInstanceIdsImpl(hierarchy, rootInstanceIds, visitedInstanceIds);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_0 = ___hierarchy0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = ___rootInstanceIds1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_2 = ___visitedInstanceIds2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIdsImpl_m934AAB8F40BF614A8786EC4E9F8D6CFBF5FF4D58(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIdsImpl(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchyExtensions_CollectHierarchyInstanceIdsImpl_m934AAB8F40BF614A8786EC4E9F8D6CFBF5FF4D58 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rootInstanceIds1, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___visitedInstanceIds2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	{
		// var openIndices = new NativeList<int>(0, Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&V_0), 0, L_0, NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		// for (int i = 0; i < rootInstanceIds.Length; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_0013:
	{
		// if (hierarchy.TryGetIndexForInstanceId(rootInstanceIds[i], out int idx))
		int32_t L_1 = V_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___rootInstanceIds1))->___m_Buffer_0, L_1);
		bool L_3;
		L_3 = SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076((&___hierarchy0), L_2, (&V_2), NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// openIndices.Add(idx);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_0), (&V_2), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_0033:
	{
		// for (int i = 0; i < rootInstanceIds.Length; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < rootInstanceIds.Length; i++)
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___rootInstanceIds1))->___m_Length_1);
		V_4 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00b0;
	}

IL_004a:
	{
		// int idx = openIndices[openIndices.Length - 1];
		int32_t L_9;
		L_9 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		int32_t L_10;
		L_10 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C((&V_0), ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_5 = L_10;
		// openIndices.Length--;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_11 = (&V_0);
		int32_t L_12;
		L_12 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_11, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_7 = L_12;
		int32_t L_13 = V_7;
		NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		// visitedInstanceIds.Add(hierarchy.GetInstanceIdForIndex(idx));
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9((&___hierarchy0), L_14, NULL);
		bool L_16;
		L_16 = NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF((&___visitedInstanceIds2), L_15, NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_RuntimeMethod_var);
		// var iter = hierarchy.GetChildIndicesForIndex(idx);
		int32_t L_17 = V_5;
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_18;
		L_18 = SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746((&___hierarchy0), L_17, NULL);
		V_6 = L_18;
		goto IL_00a2;
	}

IL_008f:
	{
		// openIndices.Add(iter.Current);
		int32_t L_19;
		L_19 = Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC((&V_6), NULL);
		V_7 = L_19;
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_0), (&V_7), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_00a2:
	{
		// while (iter.MoveNext())
		bool L_20;
		L_20 = Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A((&V_6), NULL);
		V_8 = L_20;
		bool L_21 = V_8;
		if (L_21)
		{
			goto IL_008f;
		}
	}
	{
	}

IL_00b0:
	{
		// while (openIndices.Length > 0)
		int32_t L_22;
		L_22 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		bool L_23 = V_9;
		if (L_23)
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// Unity.Jobs.JobHandle Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIdsAsync(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeParallelHashSet`1<System.Int32>,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SceneHierarchyExtensions_CollectHierarchyInstanceIdsAsync_m5F627948C983C9DAE14504270DE974986AB46D41 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rootInstanceIds1, NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F ___visitedInstanceIds2, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependency3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new CollectHierarchyInstanceIdsJob
		// {
		//     Hierarchy = hierarchy,
		//     Roots = rootInstanceIds,
		//     VisitedInstances = visitedInstanceIds
		// }.Schedule(dependency);
		il2cpp_codegen_initobj((&V_0), sizeof(CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76));
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_0 = ___hierarchy0;
		(&V_0)->___Hierarchy_0 = L_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = ___rootInstanceIds1;
		(&V_0)->___Roots_1 = L_1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_2 = ___visitedInstanceIds2;
		(&V_0)->___VisitedInstances_2 = L_2;
		CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76 L_3 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___dependency3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5;
		L_5 = IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532(L_3, L_4, IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76_m5744A64D993D49C4C63865AF44F0861DF28DB532_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIdsAndIndicesAsync(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeList`1<System.Int32>,Unity.Collections.NativeParallelHashMap`2<System.Int32,System.Boolean>,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SceneHierarchyExtensions_CollectHierarchyInstanceIdsAndIndicesAsync_mE20C5F71CF6C97C26E9323EEE1A681E3844B4798 (SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 ___hierarchy0, NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___instanceIds1, NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049 ___visitedIndices2, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependency3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new CollectHierarchyInstanceIdsAndIndicesJob
		// {
		//     Hierarchy = hierarchy,
		//     VisitedInstanceIds = instanceIds,
		//     VisitedIndices = visitedIndices
		// }.Schedule(dependency);
		il2cpp_codegen_initobj((&V_0), sizeof(CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763));
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_0 = ___hierarchy0;
		(&V_0)->___Hierarchy_0 = L_0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_1 = ___instanceIds1;
		(&V_0)->___VisitedInstanceIds_1 = L_1;
		NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049 L_2 = ___visitedIndices2;
		(&V_0)->___VisitedIndices_2 = L_2;
		CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763 L_3 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___dependency3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5;
		L_5 = IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7(L_3, L_4, IJobExtensions_Schedule_TisCollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763_mFEA62C702A048E8D60B8C044A4D49300F1E1AFC7_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = V_1;
		return L_6;
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
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Unity.Jobs.IJob.Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m709458F3D96B4344B68ADD588CA6C27270B4C7B5 (CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// CollectHierarchyInstanceIds(Hierarchy, Roots, VisitedInstances);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_0 = __this->___Hierarchy_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = __this->___Roots_1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_2 = __this->___VisitedInstances_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m709458F3D96B4344B68ADD588CA6C27270B4C7B5_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CollectHierarchyInstanceIdsJob_t7779CA23E6BD7C88183164CD3727F2EA7E40FE76*>(__this + _offset);
	CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m709458F3D96B4344B68ADD588CA6C27270B4C7B5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsAndIndicesJob_Execute_m124F30D83D411EBBE19D0A778142B6F8321DC7FD (CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// var openIndices = new NativeList<int>(0, Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA((&V_0), 0, L_0, NativeList_1__ctor_m5697273576B6FA770C7C26B21495B790E0D88EFA_RuntimeMethod_var);
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_0013:
	{
		// if (Hierarchy.TryGetIndexForInstanceId(VisitedInstanceIds[i], out int idx))
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* L_1 = (&__this->___Hierarchy_0);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_2 = (&__this->___VisitedInstanceIds_1);
		int32_t L_3 = V_1;
		int32_t L_4;
		L_4 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_2, L_3, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		bool L_5;
		L_5 = SceneHierarchy_TryGetIndexForInstanceId_mA2822F3E4C1C9671C71255F8AB640A2E4DE5A076(L_1, L_4, (&V_2), NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// openIndices.Add(idx);
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_0), (&V_2), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
		// VisitedIndices.TryAdd(idx, true);
		NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049* L_7 = (&__this->___VisitedIndices_2);
		int32_t L_8 = V_2;
		bool L_9;
		L_9 = NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47(L_7, L_8, (bool)1, NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_RuntimeMethod_var);
	}

IL_004b:
	{
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		int32_t L_11 = V_1;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_12 = (&__this->___VisitedInstanceIds_1);
		int32_t L_13;
		L_13 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_12, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00f3;
	}

IL_0069:
	{
		// int idx = openIndices[openIndices.Length - 1];
		int32_t L_15;
		L_15 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		int32_t L_16;
		L_16 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C((&V_0), ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		V_5 = L_16;
		// openIndices.Length--;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_17 = (&V_0);
		int32_t L_18;
		L_18 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_17, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_7 = L_18;
		int32_t L_19 = V_7;
		NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25(L_17, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NativeList_1_set_Length_mBCC2C2854400594DDFB9DC08CD2AEA0084966E25_RuntimeMethod_var);
		// if (VisitedIndices.TryAdd(idx, false))
		NativeParallelHashMap_2_tB05D1E69D88D85DD1B491D928E5ACED33CA99049* L_20 = (&__this->___VisitedIndices_2);
		int32_t L_21 = V_5;
		bool L_22;
		L_22 = NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47(L_20, L_21, (bool)0, NativeParallelHashMap_2_TryAdd_mAC901517AD690FE3F3A9439BB03B91A576CB9A47_RuntimeMethod_var);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		// VisitedInstanceIds.Add(Hierarchy.GetInstanceIdForIndex(idx));
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_24 = (&__this->___VisitedInstanceIds_1);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* L_25 = (&__this->___Hierarchy_0);
		int32_t L_26 = V_5;
		int32_t L_27;
		L_27 = SceneHierarchy_GetInstanceIdForIndex_m6EB0FEFE0C15A2A6B2276B9BF6A004D3674921E9(L_25, L_26, NULL);
		V_7 = L_27;
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064(L_24, (&V_7), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_00c1:
	{
		// var iter = Hierarchy.GetChildIndicesForIndex(idx);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12* L_28 = (&__this->___Hierarchy_0);
		int32_t L_29 = V_5;
		Children_t8B0A95BE6A57C5F0ED326A15CF2255FC71EA0E6F L_30;
		L_30 = SceneHierarchy_GetChildIndicesForIndex_m982FAFA309E7E7158875A0F666AC8CA01B8A8746(L_28, L_29, NULL);
		V_6 = L_30;
		goto IL_00e5;
	}

IL_00d2:
	{
		// openIndices.Add(iter.Current);
		int32_t L_31;
		L_31 = Children_get_Current_m585BC1C6A18E6AF01E657EE929515048666540DC((&V_6), NULL);
		V_7 = L_31;
		NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064((&V_0), (&V_7), NativeList_1_Add_mD5F3F9AEDF81C4AE1F22A002348E5296010D0064_RuntimeMethod_var);
	}

IL_00e5:
	{
		// while (iter.MoveNext())
		bool L_32;
		L_32 = Children_MoveNext_mF201C21851C76A66B6B9D27F042B455E0050188A((&V_6), NULL);
		V_9 = L_32;
		bool L_33 = V_9;
		if (L_33)
		{
			goto IL_00d2;
		}
	}
	{
	}

IL_00f3:
	{
		// while (openIndices.Length > 0)
		int32_t L_34;
		L_34 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B((&V_0), NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_0069;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectHierarchyInstanceIdsAndIndicesJob_Execute_m124F30D83D411EBBE19D0A778142B6F8321DC7FD_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CollectHierarchyInstanceIdsAndIndicesJob_tBBFF9FE467A52D20BB27968525E25351D0C44763*>(__this + _offset);
	CollectHierarchyInstanceIdsAndIndicesJob_Execute_m124F30D83D411EBBE19D0A778142B6F8321DC7FD(_thisAdjusted, method);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.JournalingUnityLogger::.ctor(Unity.Entities.Conversion.GameObjectConversionMappingSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JournalingUnityLogger__ctor_mA7F3C83AFE36965AA605C0D6732597CC2C48AF1F (JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* __this, GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* ___mappingSystem0, const RuntimeMethod* method) 
{
	{
		// public JournalingUnityLogger(GameObjectConversionMappingSystem mappingSystem) =>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_MappingSystem = mappingSystem;
		GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* L_0 = ___mappingSystem0;
		__this->___m_MappingSystem_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MappingSystem_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Entities.Conversion.JournalingUnityLogger::Hook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JournalingUnityLogger_Hook_mA64FFF7DDDA47402ABF7DF1FBA2A2B8589091019 (JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_HookedLogger != null)
		RuntimeObject* L_0 = __this->___m_HookedLogger_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Unexpected double-hook");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F39D85EC6679B4A4FE598496DB45A4612DEB2E6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JournalingUnityLogger_Hook_mA64FFF7DDDA47402ABF7DF1FBA2A2B8589091019_RuntimeMethod_var)));
	}

IL_0019:
	{
		// m_HookedLogger = UnityDebug.unityLogger.logHandler;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.ILogHandler UnityEngine.ILogger::get_logHandler() */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_3);
		__this->___m_HookedLogger_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HookedLogger_0), (void*)L_4);
		// UnityDebug.unityLogger.logHandler = this;
		RuntimeObject* L_5;
		L_5 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.ILogger::set_logHandler(UnityEngine.ILogHandler) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_5, __this);
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.JournalingUnityLogger::Unhook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JournalingUnityLogger_Unhook_mD2DD70F93A9560E401208ADC9E42C264F68DE37D (JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (UnityDebug.unityLogger.logHandler != this)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.ILogHandler UnityEngine.ILogger::get_logHandler() */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360*)__this))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("Not currently hooked into logger");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F0618592085C4D5577A6289D727B824764DA5E3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JournalingUnityLogger_Unhook_mD2DD70F93A9560E401208ADC9E42C264F68DE37D_RuntimeMethod_var)));
	}

IL_0020:
	{
		// UnityDebug.unityLogger.logHandler = m_HookedLogger;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_5 = __this->___m_HookedLogger_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.ILogger::set_logHandler(UnityEngine.ILogHandler) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_4, L_5);
		// m_HookedLogger = null;
		__this->___m_HookedLogger_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HookedLogger_0), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.JournalingUnityLogger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JournalingUnityLogger_LogFormat_m4DBE5F5C3808AA02CB877B783DD8F56DD8ECC0D2 (JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* __this, int32_t ___logType0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, String_t* ___format2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (context is Component component)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___context1;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// context = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		___context1 = L_4;
	}

IL_0018:
	{
		// m_MappingSystem.JournalData.RecordLogEvent(context, logType, string.Format(format, args));
		GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* L_5 = __this->___m_MappingSystem_1;
		NullCheck(L_5);
		ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311* L_6;
		L_6 = GameObjectConversionMappingSystem_get_JournalData_m4081627172C40F1427DB62035C8EE2469C6C3E69(L_5, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7 = ___context1;
		int32_t L_8 = ___logType0;
		String_t* L_9 = ___format2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args3;
		String_t* L_11;
		L_11 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_9, L_10, NULL);
		bool L_12;
		L_12 = ConversionJournalData_RecordLogEvent_mD3CAB5B8D2D56AF269957F48C793799C26783BA6(L_6, L_7, L_8, L_11, (String_t*)NULL, NULL);
		// m_HookedLogger?.LogFormat(logType, context, format, args);
		RuntimeObject* L_13 = __this->___m_HookedLogger_0;
		RuntimeObject* L_14 = L_13;
		G_B3_0 = L_14;
		if (L_14)
		{
			G_B4_0 = L_14;
			goto IL_0040;
		}
	}
	{
		goto IL_004b;
	}

IL_0040:
	{
		int32_t L_15 = ___logType0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_16 = ___context1;
		String_t* L_17 = ___format2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = ___args3;
		NullCheck(G_B4_0);
		InterfaceActionInvoker4< int32_t, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var, G_B4_0, L_15, L_16, L_17, L_18);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.JournalingUnityLogger::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JournalingUnityLogger_LogException_m6087BB9229A9EBEC973DD51247DB6051598A5AAB (JournalingUnityLogger_tE5202FF772167630312A5A9868EFA66D3987B360* __this, Exception_t* ___exception0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (context is Component component)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___context1;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// context = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		___context1 = L_4;
	}

IL_0018:
	{
		// m_MappingSystem.JournalData.RecordExceptionEvent(context, exception);
		GameObjectConversionMappingSystem_tC8C292FD8EBD4E0FD7D0C9E5479AB3CD996E4439* L_5 = __this->___m_MappingSystem_1;
		NullCheck(L_5);
		ConversionJournalData_tF96858AB007430EBB6E10FA0C54F36639DB58311* L_6;
		L_6 = GameObjectConversionMappingSystem_get_JournalData_m4081627172C40F1427DB62035C8EE2469C6C3E69(L_5, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7 = ___context1;
		Exception_t* L_8 = ___exception0;
		bool L_9;
		L_9 = ConversionJournalData_RecordExceptionEvent_mA86DAD0AEF53A4DBFEE0C8B7C10ED78AC9B34CF6(L_6, L_7, L_8, NULL);
		// m_HookedLogger?.LogException(exception, context);
		RuntimeObject* L_10 = __this->___m_HookedLogger_0;
		RuntimeObject* L_11 = L_10;
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0037;
		}
	}
	{
		goto IL_003f;
	}

IL_0037:
	{
		Exception_t* L_12 = ___exception0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13 = ___context1;
		NullCheck(G_B4_0);
		InterfaceActionInvoker2< Exception_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(1 /* System.Void UnityEngine.ILogHandler::LogException(System.Exception,UnityEngine.Object) */, ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var, G_B4_0, L_12, L_13);
	}

IL_003f:
	{
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
// System.Int32 Unity.Entities.Conversion.MultiList::CalcEnsureCapacity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiList_CalcEnsureCapacity_m9C7CBBA820B5F890562B70AEEA026660A0B725AB (int32_t ___current0, int32_t ___needed1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (current == 0)
		int32_t L_0 = ___current0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// current = k_FirstUsageSize;
		___current0 = ((int32_t)128);
	}

IL_0010:
	{
		goto IL_0019;
	}

IL_0012:
	{
		// current += current / 2;
		int32_t L_2 = ___current0;
		int32_t L_3 = ___current0;
		___current0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
	}

IL_0019:
	{
		// while (current < needed)
		int32_t L_4 = ___current0;
		int32_t L_5 = ___needed1;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0012;
		}
	}
	{
		// return current;
		int32_t L_7 = ___current0;
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Unity.Entities.Conversion.MultiList::CalcExpandCapacity(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiList_CalcExpandCapacity_mFF56C575448E22887B2CBDD6E172E25726EF1BA7 (int32_t ___current0, int32_t* ___needed1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (current >= needed)
		int32_t L_0 = ___current0;
		int32_t* L_1 = ___needed1;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_0011:
	{
		// needed = CalcEnsureCapacity(current, needed);
		int32_t* L_4 = ___needed1;
		int32_t L_5 = ___current0;
		int32_t* L_6 = ___needed1;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8;
		L_8 = MultiList_CalcEnsureCapacity_m9C7CBBA820B5F890562B70AEEA026660A0B725AB(L_5, L_7, NULL);
		*((int32_t*)L_4) = (int32_t)L_8;
		// return true;
		V_1 = (bool)1;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_9 = V_1;
		return L_9;
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
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.Int32>> Unity.Entities.Conversion.MultiListDebugUtility::SelectAllLists(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiListDebugUtility_SelectAllLists_m3B16E628252E14F2E1042927C695324DC9FA77D4 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___headIds0, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___next1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_0 = (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D*)il2cpp_codegen_object_new(U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSelectAllListsU3Ed__1__ctor_mC19272C2A77CE3166F8E06DB26961E4BA95153BC(L_0, ((int32_t)-2), NULL);
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_1 = L_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2 = ___headIds0;
		NullCheck(L_1);
		L_1->___U3CU3E3__headIds_4 = L_2;
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_3 = L_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = ___next1;
		NullCheck(L_3);
		L_3->___U3CU3E3__next_6 = L_4;
		return L_3;
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
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1__ctor_mC19272C2A77CE3166F8E06DB26961E4BA95153BC (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m3F6A5B844518C7B1DDA6F4441CEB97E66178B69B (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mEAA880102831BFBA42D1D57A904F074B3B8D2F32(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectAllListsU3Ed__1_MoveNext_m1D3D06E9AC6FD140AE6E216D0FA9303BC0F33458 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_010b:
			{// begin fault (depth: 1)
				U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m3F6A5B844518C7B1DDA6F4441CEB97E66178B69B(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00d3_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0113;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var headId in headIds)
				NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = (&__this->___headIds_3);
				Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30 L_4;
				L_4 = NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389(L_3, NativeArray_1_GetEnumerator_m6E656AE4243351850AD99E832638DDF081239389_RuntimeMethod_var);
				__this->___U3CU3Es__1_7 = L_4;
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00e4_1;
			}

IL_0047_1:
			{
				// foreach (var headId in headIds)
				Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* L_5 = (&__this->___U3CU3Es__1_7);
				int32_t L_6;
				L_6 = Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522(L_5, Enumerator_get_Current_m9615CE722B0B33517472FA29CB73AE60D8E8D522_RuntimeMethod_var);
				__this->___U3CheadIdU3E5__2_8 = L_6;
				// if (headId >= 0)
				int32_t L_7 = __this->___U3CheadIdU3E5__2_8;
				V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_00e3_1;
				}
			}
			{
				// var list = new List<int>();
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_9, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
				__this->___U3ClistU3E5__3_9 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistU3E5__3_9), (void*)L_9);
				// for (var i = headId; i >= 0; i = next[i])
				int32_t L_10 = __this->___U3CheadIdU3E5__2_8;
				__this->___U3CiU3E5__4_10 = L_10;
				goto IL_00ac_1;
			}

IL_0083_1:
			{
				// list.Add(i);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->___U3ClistU3E5__3_9;
				int32_t L_12 = __this->___U3CiU3E5__4_10;
				NullCheck(L_11);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_11, L_12, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				// for (var i = headId; i >= 0; i = next[i])
				NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_13 = (&__this->___next_5);
				int32_t L_14 = __this->___U3CiU3E5__4_10;
				int32_t L_15;
				L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_13)->___m_Buffer_0, L_14);
				__this->___U3CiU3E5__4_10 = L_15;
			}

IL_00ac_1:
			{
				// for (var i = headId; i >= 0; i = next[i])
				int32_t L_16 = __this->___U3CiU3E5__4_10;
				V_3 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_17 = V_3;
				if (L_17)
				{
					goto IL_0083_1;
				}
			}
			{
				// yield return list;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___U3ClistU3E5__3_9;
				__this->___U3CU3E2__current_1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0113;
			}

IL_00d3_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				__this->___U3ClistU3E5__3_9 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistU3E5__3_9), (void*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL);
			}

IL_00e3_1:
			{
			}

IL_00e4_1:
			{
				// foreach (var headId in headIds)
				Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* L_19 = (&__this->___U3CU3Es__1_7);
				bool L_20;
				L_20 = Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA(L_19, Enumerator_MoveNext_m62905577B99C79AEA734E15AC569B10365214EDA_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0047_1;
				}
			}
			{
				U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mEAA880102831BFBA42D1D57A904F074B3B8D2F32(__this, NULL);
				Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* L_21 = (&__this->___U3CU3Es__1_7);
				il2cpp_codegen_initobj(L_21, sizeof(Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30));
				// }
				V_0 = (bool)0;
				goto IL_0113;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0113:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mEAA880102831BFBA42D1D57A904F074B3B8D2F32 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t7767C5CF41D19BF6C7326C9870C530F1AD3CAC30* L_0 = (&__this->___U3CU3Es__1_7);
		Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2(L_0, Enumerator_Dispose_m76DC8FCCF3E42CD42363AD6C2BAC71ABDA1535C2_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerator<System.Collections.Generic.List<System.Int32>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_get_Current_mDE950027F01B5F114D29858975F78953D4F19D5F (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mCD0224C54FCF7A097FA948718B67C06DAF1F5E55 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mCD0224C54FCF7A097FA948718B67C06DAF1F5E55_RuntimeMethod_var)));
	}
}
// System.Object Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_get_Current_mAFA9986C881C857F24CCAA5495140D74B033BF41 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerable<System.Collections.Generic.List<System.Int32>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_mDF67ADFE69AD19EC6B0AE282102563C338F73285 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_3 = (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D*)il2cpp_codegen_object_new(U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CSelectAllListsU3Ed__1__ctor_mC19272C2A77CE3166F8E06DB26961E4BA95153BC(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_4 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = __this->___U3CU3E3__headIds_4;
		NullCheck(L_4);
		L_4->___headIds_3 = L_5;
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_6 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_7 = __this->___U3CU3E3__next_6;
		NullCheck(L_6);
		L_6->___next_5 = L_7;
		U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_IEnumerable_GetEnumerator_mD4769CB9DC0B3CDD6F08090E985307D3C5C05514 (U3CSelectAllListsU3Ed__1_tEE846B87A88411AB9FD68905CF833DA643FADD0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_mDF67ADFE69AD19EC6B0AE282102563C338F73285(__this, NULL);
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
// Unity.Entities.Hash128 Unity.Entities.Conversion.UnityEngineExtensions::ComputeInstanceHash(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnityEngineExtensions_ComputeInstanceHash_m44B6B1BADD63494050A37A3BFC9EC26971372766 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	int32_t V_1 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (@this is Component component)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___this0;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// @this = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		___this0 = L_4;
	}

IL_0018:
	{
		// var instanceID = @this.GetInstanceID();
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___this0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		V_1 = L_6;
		// var hash = new UnityEngine.Hash128();
		il2cpp_codegen_initobj((&V_2), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		// HashUtilities.ComputeHash128(ref instanceID, ref hash);
		HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33((&V_1), (&V_2), HashUtilities_ComputeHash128_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m00D77DDE776A1A1F0F765CAEFE1BF0A36A8A0F33_RuntimeMethod_var);
		// return hash;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_8;
		L_8 = Hash128_op_Implicit_m4541C1729F491B83F9A08C22C1E3A2226FECE308(L_7, NULL);
		V_4 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_9 = V_4;
		return L_9;
	}
}
// Unity.Entities.EntityGuid Unity.Entities.Conversion.UnityEngineExtensions::ComputeEntityGuid(UnityEngine.Object,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnityEngineExtensions_ComputeEntityGuid_mB696B3D635E4ABFE58081CD6530E470E4542AEAB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___this0, uint32_t ___namespaceId1, int32_t ___serial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	bool V_1 = false;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (@this is Component component)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___this0;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// @this = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		___this0 = L_4;
	}

IL_0018:
	{
		// return new EntityGuid(@this.GetInstanceID(), namespaceId, (uint)serial);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___this0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		uint32_t L_7 = ___namespaceId1;
		int32_t L_8 = ___serial2;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_9;
		memset((&L_9), 0, sizeof(L_9));
		EntityGuid__ctor_mC2347A652181ECADBA43A4F02E10DB64FC097167((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_10 = V_2;
		return L_10;
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsPrefab(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsPrefab_mCA9ED4A4498DB038A8C30B76BD5ABF74AF511600 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// @this is GameObject go && IsPrefab(go);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___this0;
		V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		bool L_3;
		L_3 = UnityEngineExtensions_IsPrefab_m00C8A2EC5F61873044C337E5580D4F4064D334BF(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsPrefab_m00C8A2EC5F61873044C337E5580D4F4064D334BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___this0, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// !@this.scene.IsValid();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___this0;
		NullCheck(L_0);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsAsset(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsAsset_m1BF28EAD599169AAF4DFBD983F831B555D10781B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// !(@this is GameObject) && !(@this is Component);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___this0;
		if (((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___this0;
		G_B3_0 = ((((int32_t)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsActiveIgnorePrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsActiveIgnorePrefab_m9FAD751D1D7C6DF9EDAD0492EBC82EA54B8FB5C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!@this.IsPrefab())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___this0;
		bool L_1;
		L_1 = UnityEngineExtensions_IsPrefab_m00C8A2EC5F61873044C337E5580D4F4064D334BF(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return @this.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___this0;
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		V_2 = L_4;
		goto IL_0050;
	}

IL_0017:
	{
		// var parent = @this.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___this0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		V_0 = L_6;
		goto IL_003f;
	}

IL_0020:
	{
		// if (!parent.gameObject.activeSelf)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_8, NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0050;
	}

IL_0037:
	{
		// parent = parent.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		V_0 = L_12;
	}

IL_003f:
	{
		// while (parent != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.Entities.Conversion.UnityEngineExtensions::CheckObjectIsNotComponent(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineExtensions_CheckObjectIsNotComponent_m7BCF259590121570DD839BF18B70036172C9AE1A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (@this is Component)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___this0;
		V_0 = (bool)((!(((RuntimeObject*)(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityEngineExtensions_CheckObjectIsNotComponent_m7BCF259590121570DD839BF18B70036172C9AE1A_RuntimeMethod_var)));
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::IsComponentDisabled(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_IsComponentDisabled_m2D935C04C52F56526435A7CCDA769837F8061122 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_1 = NULL;
	LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* V_2 = NULL;
	Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* V_3 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_4 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_5 = NULL;
	bool V_6 = false;
	{
		// switch (@this)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___this0;
		V_5 = L_0;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_5;
		V_4 = L_1;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2 = V_4;
		V_0 = ((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)IsInstClass((RuntimeObject*)L_2, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = V_4;
		V_1 = ((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)IsInstClass((RuntimeObject*)L_4, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var));
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = V_1;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6 = V_4;
		V_2 = ((LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A*)IsInstClass((RuntimeObject*)L_6, LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_il2cpp_TypeInfo_var));
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_7 = V_2;
		if (L_7)
		{
			goto IL_0054;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8 = V_4;
		V_3 = ((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)IsInstClass((RuntimeObject*)L_8, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var));
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_9 = V_3;
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		goto IL_0072;
	}

IL_0036:
	{
		goto IL_0038;
	}

IL_0038:
	{
		// case Renderer  r: return !r.enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_10, NULL);
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0045:
	{
		goto IL_0047;
	}

IL_0047:
	{
		// case Collider  c: return !c.enabled;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_12, NULL);
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0054:
	{
		goto IL_0056;
	}

IL_0056:
	{
		// case LODGroup  l: return !l.enabled;
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_14 = V_2;
		NullCheck(L_14);
		bool L_15;
		L_15 = LODGroup_get_enabled_mB9DAA82B339C2681F43C6ADE451D59E50DEA90E0(L_14, NULL);
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0063:
	{
		goto IL_0065;
	}

IL_0065:
	{
		// case Behaviour b: return !b.enabled;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_16 = V_3;
		NullCheck(L_16);
		bool L_17;
		L_17 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_16, NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0072:
	{
		// return false;
		V_6 = (bool)0;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_18 = V_6;
		return L_18;
	}
}
// System.Boolean Unity.Entities.Conversion.UnityEngineExtensions::GetComponents(UnityEngine.GameObject,Unity.Entities.ComponentType*,System.Int32,System.Collections.Generic.List`1<UnityEngine.Component>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEngineExtensions_GetComponents_mB90CF23B00245749CBBD3AD68CF512B08520FBE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___this0, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___componentTypes1, int32_t ___maxComponentTypes2, List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___componentsCache3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m4CC28A4CF821ADA338084BBCDD4F1CA6F304D4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mB587E39122BFA749A02A922A9CB4677D0E6B17D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mAEAA5064391FCE394CEA5614FCDBFDDFA461B130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD40126EA7F761F62B90F4B6DFA879C1C78386F9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC53EDD9136045066E3343C9C8133528AA9F76EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Type_t* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	{
		// int outputIndex = 0;
		V_0 = 0;
		// @this.GetComponents(componentsCache);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___this0;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_1 = ___componentsCache3;
		NullCheck(L_0);
		GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m4CC28A4CF821ADA338084BBCDD4F1CA6F304D4D7(L_0, L_1, GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_m4CC28A4CF821ADA338084BBCDD4F1CA6F304D4D7_RuntimeMethod_var);
		// if (maxComponentTypes < componentsCache.Count)
		int32_t L_2 = ___maxComponentTypes2;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_3 = ___componentsCache3;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_3, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// LogWarning($"Too many components on {@this.name}", @this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___this0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD40126EA7F761F62B90F4B6DFA879C1C78386F9F, L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___this0;
		Debug_LogWarning_m6C7D0578D758663B92AD9550C0A6243A97F80F38(L_8, L_9, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_013b;
	}

IL_0037:
	{
		// for (var i = 0; i != componentsCache.Count; i++)
		V_3 = 0;
		goto IL_0112;
	}

IL_003e:
	{
		// var component = componentsCache[i];
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_10 = ___componentsCache3;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_12;
		L_12 = List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E(L_10, L_11, List_1_get_Item_m20568C4E9C1A6EA9AB25A9DE601FC55AE369A75E_RuntimeMethod_var);
		V_4 = L_12;
		// if (component == null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0072;
		}
	}
	{
		// LogWarning($"The referenced script is missing on {@this.name}", @this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___this0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDC53EDD9136045066E3343C9C8133528AA9F76EF, L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___this0;
		Debug_LogWarning_m6C7D0578D758663B92AD9550C0A6243A97F80F38(L_18, L_19, NULL);
		goto IL_010d;
	}

IL_0072:
	{
		// else if (!component.IsComponentDisabled() && !(component is GameObjectEntity))
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_20 = V_4;
		bool L_21;
		L_21 = UnityEngineExtensions_IsComponentDisabled_m2D935C04C52F56526435A7CCDA769837F8061122(L_20, NULL);
		if (L_21)
		{
			goto IL_008a;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_22 = V_4;
		G_B8_0 = ((((int32_t)((!(((RuntimeObject*)(GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B*)((GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B*)IsInstClass((RuntimeObject*)L_22, GameObjectEntity_t603672ED715F8A153DEBD478CB140D7E9873130B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B8_0 = 0;
	}

IL_008b:
	{
		V_6 = (bool)G_B8_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_010d;
		}
	}
	{
		// var componentType = component.GetType();
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_24 = V_4;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_24, NULL);
		V_7 = L_25;
		// var isUniqueType = true;
		V_8 = (bool)1;
		// for (var j = 0; j < outputIndex; ++j)
		V_9 = 0;
		goto IL_00cf;
	}

IL_00a3:
	{
		// if (componentTypes[j].Equals(componentType))
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_26 = ___componentTypes1;
		int32_t L_27 = V_9;
		uint32_t L_28 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		Type_t* L_29 = V_7;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_30;
		L_30 = ComponentType_op_Implicit_m1297C314B95D22B7F95B4441EDE137459D75417E(L_29, NULL);
		bool L_31;
		L_31 = ComponentType_Equals_m3ED0DF028815A8429AB93E726FDD859E69C45A95((ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), (int32_t)L_28)))), L_30, NULL);
		V_10 = L_31;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00c8;
		}
	}
	{
		// isUniqueType = false;
		V_8 = (bool)0;
		// break;
		goto IL_00da;
	}

IL_00c8:
	{
		// for (var j = 0; j < outputIndex; ++j)
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00cf:
	{
		// for (var j = 0; j < outputIndex; ++j)
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		V_11 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_11;
		if (L_36)
		{
			goto IL_00a3;
		}
	}

IL_00da:
	{
		// if (!isUniqueType)
		bool L_37 = V_8;
		V_12 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_00e7;
		}
	}
	{
		// continue;
		goto IL_010e;
	}

IL_00e7:
	{
		// componentsCache[outputIndex] = component;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_39 = ___componentsCache3;
		int32_t L_40 = V_0;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_41 = V_4;
		NullCheck(L_39);
		List_1_set_Item_mAEAA5064391FCE394CEA5614FCDBFDDFA461B130(L_39, L_40, L_41, List_1_set_Item_mAEAA5064391FCE394CEA5614FCDBFDDFA461B130_RuntimeMethod_var);
		// componentTypes[outputIndex] = componentType;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_42 = ___componentTypes1;
		int32_t L_43 = V_0;
		uint32_t L_44 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		Type_t* L_45 = V_7;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_46;
		L_46 = ComponentType_op_Implicit_m1297C314B95D22B7F95B4441EDE137459D75417E(L_45, NULL);
		*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), (int32_t)L_44)))) = L_46;
		// outputIndex++;
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010d:
	{
	}

IL_010e:
	{
		// for (var i = 0; i != componentsCache.Count; i++)
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0112:
	{
		// for (var i = 0; i != componentsCache.Count; i++)
		int32_t L_49 = V_3;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_50 = ___componentsCache3;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_50, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)((((int32_t)L_49) == ((int32_t)L_51))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_13;
		if (L_52)
		{
			goto IL_003e;
		}
	}
	{
		// componentsCache.RemoveRange(outputIndex, componentsCache.Count - outputIndex);
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_53 = ___componentsCache3;
		int32_t L_54 = V_0;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_55 = ___componentsCache3;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_inline(L_55, List_1_get_Count_m06EAEA52AB075AB3B80E493CE0593C177AB19727_RuntimeMethod_var);
		int32_t L_57 = V_0;
		NullCheck(L_53);
		List_1_RemoveRange_mB587E39122BFA749A02A922A9CB4677D0E6B17D1(L_53, L_54, ((int32_t)il2cpp_codegen_subtract(L_56, L_57)), List_1_RemoveRange_mB587E39122BFA749A02A922A9CB4677D0E6B17D1_RuntimeMethod_var);
		// return true;
		V_2 = (bool)1;
		goto IL_013b;
	}

IL_013b:
	{
		// }
		bool L_58 = V_2;
		return L_58;
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


// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_pinvoke(const CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560& unmarshaled, CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_pinvoke& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke(unmarshaled.___Dependencies_0, marshaled.___Dependencies_0);
	marshaled.___DeletedAssets_1 = unmarshaled.___DeletedAssets_1;
	marshaled.___ChangedAssets_2 = unmarshaled.___ChangedAssets_2;
	marshaled.___ChangedInstanceIds_3 = unmarshaled.___ChangedInstanceIds_3;
	marshaled.___DeletedInstanceIds_4 = unmarshaled.___DeletedInstanceIds_4;
	marshaled.___Dependents_5 = unmarshaled.___Dependents_5;
}
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_pinvoke_back(const CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_pinvoke& marshaled, CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560& unmarshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B unmarshaledDependencies_temp_0;
	memset((&unmarshaledDependencies_temp_0), 0, sizeof(unmarshaledDependencies_temp_0));
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_back(marshaled.___Dependencies_0, unmarshaledDependencies_temp_0);
	unmarshaled.___Dependencies_0 = unmarshaledDependencies_temp_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedAssets_temp_1;
	memset((&unmarshaledDeletedAssets_temp_1), 0, sizeof(unmarshaledDeletedAssets_temp_1));
	unmarshaledDeletedAssets_temp_1 = marshaled.___DeletedAssets_1;
	unmarshaled.___DeletedAssets_1 = unmarshaledDeletedAssets_temp_1;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledChangedAssets_temp_2;
	memset((&unmarshaledChangedAssets_temp_2), 0, sizeof(unmarshaledChangedAssets_temp_2));
	unmarshaledChangedAssets_temp_2 = marshaled.___ChangedAssets_2;
	unmarshaled.___ChangedAssets_2 = unmarshaledChangedAssets_temp_2;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 unmarshaledChangedInstanceIds_temp_3;
	memset((&unmarshaledChangedInstanceIds_temp_3), 0, sizeof(unmarshaledChangedInstanceIds_temp_3));
	unmarshaledChangedInstanceIds_temp_3 = marshaled.___ChangedInstanceIds_3;
	unmarshaled.___ChangedInstanceIds_3 = unmarshaledChangedInstanceIds_temp_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedInstanceIds_temp_4;
	memset((&unmarshaledDeletedInstanceIds_temp_4), 0, sizeof(unmarshaledDeletedInstanceIds_temp_4));
	unmarshaledDeletedInstanceIds_temp_4 = marshaled.___DeletedInstanceIds_4;
	unmarshaled.___DeletedInstanceIds_4 = unmarshaledDeletedInstanceIds_temp_4;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F unmarshaledDependents_temp_5;
	memset((&unmarshaledDependents_temp_5), 0, sizeof(unmarshaledDependents_temp_5));
	unmarshaledDependents_temp_5 = marshaled.___Dependents_5;
	unmarshaled.___Dependents_5 = unmarshaledDependents_temp_5;
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_pinvoke_cleanup(CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_pinvoke& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_cleanup(marshaled.___Dependencies_0);
}


// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_com(const CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560& unmarshaled, CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_com& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com(unmarshaled.___Dependencies_0, marshaled.___Dependencies_0);
	marshaled.___DeletedAssets_1 = unmarshaled.___DeletedAssets_1;
	marshaled.___ChangedAssets_2 = unmarshaled.___ChangedAssets_2;
	marshaled.___ChangedInstanceIds_3 = unmarshaled.___ChangedInstanceIds_3;
	marshaled.___DeletedInstanceIds_4 = unmarshaled.___DeletedInstanceIds_4;
	marshaled.___Dependents_5 = unmarshaled.___Dependents_5;
}
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_com_back(const CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_com& marshaled, CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560& unmarshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B unmarshaledDependencies_temp_0;
	memset((&unmarshaledDependencies_temp_0), 0, sizeof(unmarshaledDependencies_temp_0));
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_back(marshaled.___Dependencies_0, unmarshaledDependencies_temp_0);
	unmarshaled.___Dependencies_0 = unmarshaledDependencies_temp_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedAssets_temp_1;
	memset((&unmarshaledDeletedAssets_temp_1), 0, sizeof(unmarshaledDeletedAssets_temp_1));
	unmarshaledDeletedAssets_temp_1 = marshaled.___DeletedAssets_1;
	unmarshaled.___DeletedAssets_1 = unmarshaledDeletedAssets_temp_1;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledChangedAssets_temp_2;
	memset((&unmarshaledChangedAssets_temp_2), 0, sizeof(unmarshaledChangedAssets_temp_2));
	unmarshaledChangedAssets_temp_2 = marshaled.___ChangedAssets_2;
	unmarshaled.___ChangedAssets_2 = unmarshaledChangedAssets_temp_2;
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 unmarshaledChangedInstanceIds_temp_3;
	memset((&unmarshaledChangedInstanceIds_temp_3), 0, sizeof(unmarshaledChangedInstanceIds_temp_3));
	unmarshaledChangedInstanceIds_temp_3 = marshaled.___ChangedInstanceIds_3;
	unmarshaled.___ChangedInstanceIds_3 = unmarshaledChangedInstanceIds_temp_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedInstanceIds_temp_4;
	memset((&unmarshaledDeletedInstanceIds_temp_4), 0, sizeof(unmarshaledDeletedInstanceIds_temp_4));
	unmarshaledDeletedInstanceIds_temp_4 = marshaled.___DeletedInstanceIds_4;
	unmarshaled.___DeletedInstanceIds_4 = unmarshaledDeletedInstanceIds_temp_4;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F unmarshaledDependents_temp_5;
	memset((&unmarshaledDependents_temp_5), 0, sizeof(unmarshaledDependents_temp_5));
	unmarshaledDependents_temp_5 = marshaled.___Dependents_5;
	unmarshaled.___Dependents_5 = unmarshaledDependents_temp_5;
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies
IL2CPP_EXTERN_C void CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshal_com_cleanup(CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560_marshaled_com& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_cleanup(marshaled.___Dependencies_0);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionJobs.CollectDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectDependencies_Execute_mD4F9B7FF0926CB5ACCDAD3499D9F36C5526F713F (CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Dependencies.CalculateDependents(ChangedInstanceIds, Dependents);
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_0 = (&__this->___Dependencies_0);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 L_1 = __this->___ChangedInstanceIds_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2;
		L_2 = NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065(L_1, NativeList_1_op_Implicit_m35CB4E1D0D332C1326A4E1FC9A371E8D05497065_RuntimeMethod_var);
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_3 = __this->___Dependents_5;
		ConversionDependencies_CalculateDependents_m6AD6BF82E131480FF0984B5ABD0AAE3FEFEEC38F(L_0, L_2, L_3, NULL);
		// Dependencies.CalculateDependents(DeletedInstanceIds, Dependents);
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_4 = (&__this->___Dependencies_0);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = __this->___DeletedInstanceIds_4;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_6 = __this->___Dependents_5;
		ConversionDependencies_CalculateDependents_m6AD6BF82E131480FF0984B5ABD0AAE3FEFEEC38F(L_4, L_5, L_6, NULL);
		// Dependencies.CalculateAssetDependents(ChangedAssets, Dependents);
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_7 = (&__this->___Dependencies_0);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_8 = __this->___ChangedAssets_2;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_9 = __this->___Dependents_5;
		ConversionDependencies_CalculateAssetDependents_m2840ECDE7C754699F975B5E21B777BCCD63E93A9(L_7, L_8, L_9, NULL);
		// Dependencies.CalculateAssetDependents(DeletedAssets, Dependents);
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_10 = (&__this->___Dependencies_0);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_11 = __this->___DeletedAssets_1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_12 = __this->___Dependents_5;
		ConversionDependencies_CalculateAssetDependents_m2840ECDE7C754699F975B5E21B777BCCD63E93A9(L_10, L_11, L_12, NULL);
		// for (int i = 0; i < ChangedInstanceIds.Length; i++)
		V_0 = 0;
		goto IL_0088;
	}

IL_006a:
	{
		// Dependents.Add(ChangedInstanceIds[i]);
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* L_13 = (&__this->___Dependents_5);
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_14 = (&__this->___ChangedInstanceIds_3);
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C(L_14, L_15, NativeList_1_get_Item_m963766393E6261D56BB3704947609551E7752A1C_RuntimeMethod_var);
		bool L_17;
		L_17 = NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF(L_13, L_16, NativeParallelHashSet_1_Add_m8F9B8A7C0108309A72D2C8FCED5F01D77AE8FCBF_RuntimeMethod_var);
		// for (int i = 0; i < ChangedInstanceIds.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < ChangedInstanceIds.Length; i++)
		int32_t L_19 = V_0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_20 = (&__this->___ChangedInstanceIds_3);
		int32_t L_21;
		L_21 = NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B(L_20, NativeList_1_get_Length_m2327DF25C0CCD96DB5AB1F1500FBD411D60AC36B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_006a;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectDependencies_Execute_mD4F9B7FF0926CB5ACCDAD3499D9F36C5526F713F_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CollectDependencies_t51CDF94E5156FD95ADBB47AE9D0055FA7319E560*>(__this + _offset);
	CollectDependencies_Execute_mD4F9B7FF0926CB5ACCDAD3499D9F36C5526F713F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_pinvoke(const ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4& unmarshaled, ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_pinvoke& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke(unmarshaled.___Dependencies_0, marshaled.___Dependencies_0);
	marshaled.___DeletedInstances_1 = unmarshaled.___DeletedInstances_1;
	marshaled.___ChangedInstances_2 = unmarshaled.___ChangedInstances_2;
}
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_pinvoke_back(const ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_pinvoke& marshaled, ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4& unmarshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B unmarshaledDependencies_temp_0;
	memset((&unmarshaledDependencies_temp_0), 0, sizeof(unmarshaledDependencies_temp_0));
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_back(marshaled.___Dependencies_0, unmarshaledDependencies_temp_0);
	unmarshaled.___Dependencies_0 = unmarshaledDependencies_temp_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedInstances_temp_1;
	memset((&unmarshaledDeletedInstances_temp_1), 0, sizeof(unmarshaledDeletedInstances_temp_1));
	unmarshaledDeletedInstances_temp_1 = marshaled.___DeletedInstances_1;
	unmarshaled.___DeletedInstances_1 = unmarshaledDeletedInstances_temp_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F unmarshaledChangedInstances_temp_2;
	memset((&unmarshaledChangedInstances_temp_2), 0, sizeof(unmarshaledChangedInstances_temp_2));
	unmarshaledChangedInstances_temp_2 = marshaled.___ChangedInstances_2;
	unmarshaled.___ChangedInstances_2 = unmarshaledChangedInstances_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_pinvoke_cleanup(ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_pinvoke& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_pinvoke_cleanup(marshaled.___Dependencies_0);
}


// Conversion methods for marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_com(const ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4& unmarshaled, ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_com& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com(unmarshaled.___Dependencies_0, marshaled.___Dependencies_0);
	marshaled.___DeletedInstances_1 = unmarshaled.___DeletedInstances_1;
	marshaled.___ChangedInstances_2 = unmarshaled.___ChangedInstances_2;
}
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_com_back(const ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_com& marshaled, ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4& unmarshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B unmarshaledDependencies_temp_0;
	memset((&unmarshaledDependencies_temp_0), 0, sizeof(unmarshaledDependencies_temp_0));
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_back(marshaled.___Dependencies_0, unmarshaledDependencies_temp_0);
	unmarshaled.___Dependencies_0 = unmarshaledDependencies_temp_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C unmarshaledDeletedInstances_temp_1;
	memset((&unmarshaledDeletedInstances_temp_1), 0, sizeof(unmarshaledDeletedInstances_temp_1));
	unmarshaledDeletedInstances_temp_1 = marshaled.___DeletedInstances_1;
	unmarshaled.___DeletedInstances_1 = unmarshaledDeletedInstances_temp_1;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F unmarshaledChangedInstances_temp_2;
	memset((&unmarshaledChangedInstances_temp_2), 0, sizeof(unmarshaledChangedInstances_temp_2));
	unmarshaledChangedInstances_temp_2 = marshaled.___ChangedInstances_2;
	unmarshaled.___ChangedInstances_2 = unmarshaledChangedInstances_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies
IL2CPP_EXTERN_C void ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshal_com_cleanup(ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4_marshaled_com& marshaled)
{
	ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B_marshal_com_cleanup(marshaled.___Dependencies_0);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionJobs.ClearDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ClearDependencies_Execute_m4E318C2705E5589E5371CD7A8470BD8C8A055991 (ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dependencies.ClearDependencies(DeletedInstances);
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_0 = (&__this->___Dependencies_0);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = __this->___DeletedInstances_1;
		ConversionDependencies_ClearDependencies_m3DD9378FB2F22C60DC5914E4FEFA75CC4B43F03D(L_0, L_1, NULL);
		// Dependencies.ClearDependencies(ChangedInstances.ToNativeArray(Allocator.Temp));
		ConversionDependencies_tF1D9D450CD1D663797010E6B9BD1C242A6D5D10B* L_2 = (&__this->___Dependencies_0);
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F* L_3 = (&__this->___ChangedInstances_2);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4;
		L_4 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA(L_3, L_4, NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		ConversionDependencies_ClearDependencies_m3DD9378FB2F22C60DC5914E4FEFA75CC4B43F03D(L_2, L_5, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ClearDependencies_Execute_m4E318C2705E5589E5371CD7A8470BD8C8A055991_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ClearDependencies_t7FFC1B0CEAFAD4B0F5CA3362FE17AA9AE4FADFA4*>(__this + _offset);
	ClearDependencies_Execute_m4E318C2705E5589E5371CD7A8470BD8C8A055991(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Hybrid.Internal.GeneratedAuthoringComponentImplementation::AddReferencedPrefab(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedAuthoringComponentImplementation_AddReferencedPrefab_m00D349796ED26EF8068618CBEDD74F5B503DA4AC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___referencedPrefabs0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (gameObject != null && gameObject.IsPrefab())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject1;
		bool L_3;
		L_3 = UnityEngineExtensions_IsPrefab_m00C8A2EC5F61873044C337E5580D4F4064D334BF(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// referencedPrefabs.Add(gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = ___referencedPrefabs0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___gameObject1;
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Unity.Entities.Hybrid.Internal.GeneratedAuthoringComponentImplementation::AddReferencedPrefabs(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedAuthoringComponentImplementation_AddReferencedPrefabs_m300934AB32A3BEA7EAC032622F69EBF097AC0F6B (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___referencedPrefabs0, RuntimeObject* ___gameObjects1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (var obj in gameObjects)
		RuntimeObject* L_0 = ___gameObjects1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator() */, IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000b_1:
			{
				// foreach (var obj in gameObjects)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current() */, IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// AddReferencedPrefab(referencedPrefabs, obj);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___referencedPrefabs0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
				GeneratedAuthoringComponentImplementation_AddReferencedPrefab_m00D349796ED26EF8068618CBEDD74F5B503DA4AC(L_6, L_7, NULL);
			}

IL_001a_1:
			{
				// foreach (var obj in gameObjects)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_002f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
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
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Entities_CompanionLink_PropertyBag__ctor_mA802440DA7BA8FE00A61B9E1BE5F7CA8869AE486 (Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_AddProperty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2AEE7A3E82B61C345D2590F05DD483DAFF868AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1__ctor_mC74D6C6014F6C99D885F6C61485F9F00507D37ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ContainerPropertyBag_1_t3C1F2D4EB1A293C93A60BAB9A9F107EE5D7D0F54_il2cpp_TypeInfo_var);
		ContainerPropertyBag_1__ctor_mC74D6C6014F6C99D885F6C61485F9F00507D37ED(__this, ContainerPropertyBag_1__ctor_mC74D6C6014F6C99D885F6C61485F9F00507D37ED_RuntimeMethod_var);
		Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* L_0 = (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F*)il2cpp_codegen_object_new(Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Companion_Property__ctor_mCB518079E16A0DB5ABABB24F9E96F27766A97A6B(L_0, NULL);
		ContainerPropertyBag_1_AddProperty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2AEE7A3E82B61C345D2590F05DD483DAFF868AD9(__this, L_0, ContainerPropertyBag_1_AddProperty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2AEE7A3E82B61C345D2590F05DD483DAFF868AD9_RuntimeMethod_var);
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
// System.String Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Companion_Property_get_Name_mA87D4E86E3D849DCAC9FE3818441B9C8DCF0AD6F (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0;
	}
}
// System.Boolean Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Companion_Property_get_IsReadOnly_mC839D157EA4706E4F0A6CCC6AEB9A7186D66DE5C (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Companion_Property__ctor_mCB518079E16A0DB5ABABB24F9E96F27766A97A6B (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_2__ctor_m4B9717ECE7DB8E49C68CF189F88D88630F2331F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_2__ctor_m4B9717ECE7DB8E49C68CF189F88D88630F2331F8(__this, Property_2__ctor_m4B9717ECE7DB8E49C68CF189F88D88630F2331F8_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.GameObject Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::GetValue(Unity.Entities.CompanionLink&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Companion_Property_GetValue_m9BF40984060CEA9731ED91D2F50EBECB697EC16F (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368** ___container0, const RuntimeMethod* method) 
{
	{
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368** L_0 = ___container0;
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_1 = *((CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368**)L_0);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___Companion_0;
		return L_2;
	}
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::SetValue(Unity.Entities.CompanionLink&,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Companion_Property_SetValue_m05008A2E6EEB27163DC003D5AED24B48482EDBDE (Companion_Property_tC13287A82EF5829FAF4A8009E1B0EE81BDC6827F* __this, CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368** ___container0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method) 
{
	{
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368** L_0 = ___container0;
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_1 = *((CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368**)L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___value1;
		NullCheck(L_1);
		L_1->___Companion_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Companion_0), (void*)L_2);
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
// System.Void Unity.Properties.Generated.PropertyBagRegistry::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagRegistry_Initialize_m2AAA99B80D1376A9C112747AF0A9A6B2546E2433 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_Register_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m223B4973FDFF26081EAEFEDF20DE07260BC551BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213* L_0 = (Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213*)il2cpp_codegen_object_new(Unity_Entities_CompanionLink_PropertyBag_t0C559CE1BA8E86EC47621B4C019E95B4BC803213_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Unity_Entities_CompanionLink_PropertyBag__ctor_mA802440DA7BA8FE00A61B9E1BE5F7CA8869AE486(L_0, NULL);
		PropertyBag_Register_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m223B4973FDFF26081EAEFEDF20DE07260BC551BA(L_0, PropertyBag_Register_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m223B4973FDFF26081EAEFEDF20DE07260BC551BA_RuntimeMethod_var);
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
// System.Void $BurstDirectCallInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_mF6C66C9DFA23673B3CDA5E592ADE51B87332F3CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IncrementalConversionContext_t972E9DA8815EFDB0A6FB0869278293F941619D3C_il2cpp_TypeInfo_var);
		IncrementalConversionContext_InitializeU24RemoveFromHierarchy_Execute_0000019CU24BurstDirectCall_m56AF39A097183CE194D67D389F5F14CDE41CE971(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exec_Invoke_mECD556D92EE7A33723E7891C19DEEA32F8F91BA2_inline (Exec_t837C0014CAFC9669A955D4720094E96064FF9225* __this, void* ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoveFromHierarchy_ExecuteU24BurstManaged_m5BFD88DDA4E5C606AC4D347A697B75C613A15A66_inline (void* ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* V_0 = NULL;
	int32_t V_1 = 0;
	NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// ref var data = ref UnsafeUtility.AsRef<RemoveFromHierarchy>(ptr);
		void* L_0 = ___ptr0;
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_1;
		L_1 = UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238(L_0, UnsafeUtility_AsRef_TisRemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F_mB0BCD60FBE0459B19F02AE0C4BE4A0B93CA52238_RuntimeMethod_var);
		V_0 = L_1;
		// int capacity = data.DeletedInstanceIds.Length + data.ReconvertHierarchyInstanceIds.Length;
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_2 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = (&L_2->___DeletedInstanceIds_1);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_5 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (&L_5->___ReconvertHierarchyInstanceIds_2);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_6)->___m_Length_1);
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_7));
		// var deletedInstances = new NativeParallelHashSet<int>(capacity, Allocator.TempJob);
		int32_t L_8 = V_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9;
		L_9 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E((&V_2), L_8, L_9, NativeParallelHashSet_1__ctor_m6F1958169E2417BEAB5451841ED7F3C93B1DF83E_RuntimeMethod_var);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.DeletedInstanceIds, deletedInstances);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_10 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_11 = (&L_10->___Hierarchy_0);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_12;
		L_12 = IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD(L_11, NULL);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_13 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14 = L_13->___DeletedInstanceIds_1;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_15 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F(L_12, L_14, L_15, NULL);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.ReconvertHierarchyInstanceIds, deletedInstances);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_16 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177* L_17 = (&L_16->___Hierarchy_0);
		SceneHierarchy_t8881D01B56A37AC8C6D16C67FF459518C1F92B12 L_18;
		L_18 = IncrementalHierarchy_AsReadOnly_m94D1C4296D0B884A20B9D129266CAEDA186505DD(L_17, NULL);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_19 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_20 = L_19->___ReconvertHierarchyInstanceIds_2;
		NativeParallelHashSet_1_t4FBB39FCA1F3A028450183D34C6CBFC99C37B66F L_21 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m2EABBB1CE48695D98A4FEAA85DAD8E5561464D7F(L_18, L_20, L_21, NULL);
		// var arr = deletedInstances.ToNativeArray(Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_22;
		L_22 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_23;
		L_23 = NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA((&V_2), L_22, NativeParallelHashSet_1_ToNativeArray_mE01BB5A7F4494B9636582C6968377BB703356FFA_RuntimeMethod_var);
		V_3 = L_23;
		// IncrementalHierarchyFunctions.Remove(data.Hierarchy, arr);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_24 = V_0;
		IncrementalHierarchy_t118B5B37F9575F80BA24BE8BCFAD5B4DC9808177 L_25 = L_24->___Hierarchy_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_3;
		IncrementalHierarchyFunctions_Remove_m61BFEA92C86599C03564C3800E3306C588986795(L_25, L_26, NULL);
		// data.RemovedInstanceIds.AddRange(arr);
		RemoveFromHierarchy_tCE4E889AAC4796F3A8B36FE3B088626D2F2A390F* L_27 = V_0;
		NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213* L_28 = (&L_27->___RemovedInstanceIds_3);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_29 = V_3;
		NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81(L_28, L_29, NativeList_1_AddRange_m079A575FFD2C1C8D32500A9EA9C079FF011A4F81_RuntimeMethod_var);
		// deletedInstances.Dispose();
		NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33((&V_2), NativeParallelHashSet_1_Dispose_m28CF5C3202F9B7E68150E03186DFAC985A984A33_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m4F373E1C579075E65C433D84C0A7F25D857DA849_gshared_inline (Enumerator_tAF670485DE246E9735739A3998EEB81986F6AD3D* __this, const RuntimeMethod* method) 
{
	{
		// public TValue Current => value;
		int32_t L_0 = (int32_t)__this->___value_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
