#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Unity.Entities.World>
struct Action_1_tF01EC860CB363E6A3245B6F34E103517EAA4C3E1;
// System.Action`2<Unity.Entities.World,Unity.Entities.ComponentSystemBase>
struct Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597;
// Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>
struct ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E;
// Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>
struct ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF;
// Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.SceneSectionBundle>
struct ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ComponentSystemBase>
struct Dictionary_2_t3103E354F468B89433E1F3869E44058AC4BC55E3;
// Unity.Properties.ReflectedMemberProperty`2/GetClassValueAction<UnityEngine.SceneManagement.Scene,System.Int32>
struct GetClassValueAction_tA3FB8FEF2CE3B936D04E58F3B5E6DA36B0EE1DA8;
// Unity.Properties.ReflectedMemberProperty`2/GetStructValueAction<UnityEngine.SceneManagement.Scene,System.Int32>
struct GetStructValueAction_t11FD46118DFC612DA96B629614B422CAF31A1F90;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase>
struct List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A;
// System.Collections.Generic.List`1<Unity.Entities.World>
struct List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322;
// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<Unity.Scenes.GameObjectSceneData>
struct PropertyCollection_tEB4EE2B34444802994C68391B3B6BA6EE9DC556B;
// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<UnityEngine.SceneManagement.Scene>
struct PropertyCollection_t95BD260F87D59485DFE7998FBCC09A168FF8F641;
// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<Unity.Scenes.SceneSectionBundle>
struct PropertyCollection_tEDBBF1A4D8B4A80FF03724D579109B811B7B023F;
// Unity.Properties.Property`2<Unity.Scenes.GameObjectSceneData,UnityEngine.SceneManagement.Scene>
struct Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B;
// Unity.Properties.Property`2<UnityEngine.SceneManagement.Scene,System.Int32>
struct Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0;
// Unity.Properties.ReflectedMemberProperty`2<UnityEngine.SceneManagement.Scene,System.Int32>
struct ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<UnityEngine.SceneManagement.Scene,System.Int32>
struct SetClassValueAction_t9668AC3A51C14CDDAEDCBBD532302F662B8A9E86;
// Unity.Properties.ReflectedMemberProperty`2/SetStructValueAction<UnityEngine.SceneManagement.Scene,System.Int32>
struct SetStructValueAction_t1AEF90EE125A37F4C44EC349ECB2000F8A0EC4BA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Unity.Entities.ComponentType[]
struct ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C;
// Unity.Entities.EntityQueryDesc[]
struct EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625;
// Unity.Entities.Entity
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2;
// Unity.Entities.EntityComponentStore
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
// Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_tEBEB69126C6527FF9E4EEB9D51486B2B2F5CB07B;
// Unity.Entities.EntityQueryDesc
struct EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1;
// Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Unity.Scenes.GameObjectSceneRefCount
struct GameObjectSceneRefCount_t464A70BCC96BCFF6541C32E997C79DA0BF6E9B0D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Properties.IMemberInfo
struct IMemberInfo_t1B23C194980A2AF078BD24A3F55D069BA12B762E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Scenes.SceneSystem
struct SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72;
// System.String
struct String_t;
// Unity.Entities.SystemBase
struct SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D;
// Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
// System.Type
struct Type_t;
// Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag
struct UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5;
// Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag
struct Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794;
// Unity.Properties.Generated.Unity_Scenes_SceneSectionBundle_PropertyBag
struct Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D;
// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Scenes.WeakAssetReferenceLoadingSystem
struct WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181;
// Unity.Entities.World
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A;
// Unity.Entities.WorldAllocator
struct WorldAllocator_t86FB5E0B0505249BDACAE980021C8EBADEE8A62B;
// Unity.Entities.WorldUnmanagedImpl
struct WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830;
// Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag/m_Handle
struct m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F;
// Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property
struct Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D;

IL2CPP_EXTERN_C RuntimeClass* ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2325C363A9392C027893DBF069AB2A86AEB5CCC7;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Scene_tA1DC762B79745EB5140F054C884855B922318356_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C;
struct EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Properties.PropertyBag`1<Unity.Scenes.GameObjectSceneData>
struct PropertyBag_1_t452012CD8C5A50896C1F5098DEEE5DD6653491E5  : public RuntimeObject
{
};

// Unity.Properties.PropertyBag`1<UnityEngine.SceneManagement.Scene>
struct PropertyBag_1_t73CD1A2D94E2739E1A33F7F4BD1CFF4B87A70C04  : public RuntimeObject
{
};

// Unity.Properties.PropertyBag`1<Unity.Scenes.SceneSectionBundle>
struct PropertyBag_1_tDBE0AEA295E92B2D2AB249858C0EA20CEAD89815  : public RuntimeObject
{
};

// Unity.Properties.Property`2<Unity.Scenes.GameObjectSceneData,UnityEngine.SceneManagement.Scene>
struct Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes_0;
};

// Unity.Properties.Property`2<UnityEngine.SceneManagement.Scene,System.Int32>
struct Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes_0;
};

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_t9C45C05CD54AF6DC8E3A8C2B8651CCAB4CDBDF71  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625  : public RuntimeObject
{
	// Unity.Entities.SystemState* Unity.Entities.ComponentSystemBase::m_StatePtr
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___m_StatePtr_0;
};

// Unity.Entities.EntityQueryDesc
struct EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1  : public RuntimeObject
{
	// Unity.Entities.ComponentType[] Unity.Entities.EntityQueryDesc::Any
	ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* ___Any_0;
	// Unity.Entities.ComponentType[] Unity.Entities.EntityQueryDesc::None
	ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* ___None_1;
	// Unity.Entities.ComponentType[] Unity.Entities.EntityQueryDesc::All
	ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* ___All_2;
	// Unity.Entities.EntityQueryOptions Unity.Entities.EntityQueryDesc::Options
	int32_t ___Options_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Properties.Generated.PropertyBagRegistry
struct PropertyBagRegistry_t1BDCAB02CED5B55EA4903FD95B3738D13E838C36  : public RuntimeObject
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

// __JobReflectionRegistrationOutput__3053272308
struct __JobReflectionRegistrationOutput__3053272308_t9FB3C1D1FC53CFD95CF4005CBB71E312F17F11C4  : public RuntimeObject
{
};

// Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.PrefabAssetReference>
struct ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 
{
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_TypeIndex
	int32_t ___m_TypeIndex_0;
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_SizeInChunk
	int32_t ___m_SizeInChunk_1;
	// System.UInt32 Unity.Entities.ComponentTypeHandle`1::m_GlobalSystemVersion
	uint32_t ___m_GlobalSystemVersion_2;
	// System.Boolean Unity.Entities.ComponentTypeHandle`1::m_IsReadOnly
	bool ___m_IsReadOnly_3;
	// System.Boolean Unity.Entities.ComponentTypeHandle`1::m_IsZeroSized
	bool ___m_IsZeroSized_4;
	// System.Int16 Unity.Entities.ComponentTypeHandle`1::m_LookupCache
	int16_t ___m_LookupCache_5;
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_Length
	int32_t ___m_Length_6;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ComponentTypeHandle`1
#ifndef ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke_define
#define ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke_define
struct ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke
{
	int32_t ___m_TypeIndex_0;
	int32_t ___m_SizeInChunk_1;
	uint32_t ___m_GlobalSystemVersion_2;
	int32_t ___m_IsReadOnly_3;
	int32_t ___m_IsZeroSized_4;
	int16_t ___m_LookupCache_5;
	int32_t ___m_Length_6;
};
#endif
// Native definition for COM marshalling of Unity.Entities.ComponentTypeHandle`1
#ifndef ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com_define
#define ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com_define
struct ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com
{
	int32_t ___m_TypeIndex_0;
	int32_t ___m_SizeInChunk_1;
	uint32_t ___m_GlobalSystemVersion_2;
	int32_t ___m_IsReadOnly_3;
	int32_t ___m_IsZeroSized_4;
	int16_t ___m_LookupCache_5;
	int32_t ___m_Length_6;
};
#endif

// Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.RequestEntityPrefabLoaded>
struct ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA 
{
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_TypeIndex
	int32_t ___m_TypeIndex_0;
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_SizeInChunk
	int32_t ___m_SizeInChunk_1;
	// System.UInt32 Unity.Entities.ComponentTypeHandle`1::m_GlobalSystemVersion
	uint32_t ___m_GlobalSystemVersion_2;
	// System.Boolean Unity.Entities.ComponentTypeHandle`1::m_IsReadOnly
	bool ___m_IsReadOnly_3;
	// System.Boolean Unity.Entities.ComponentTypeHandle`1::m_IsZeroSized
	bool ___m_IsZeroSized_4;
	// System.Int16 Unity.Entities.ComponentTypeHandle`1::m_LookupCache
	int16_t ___m_LookupCache_5;
	// System.Int32 Unity.Entities.ComponentTypeHandle`1::m_Length
	int32_t ___m_Length_6;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ComponentTypeHandle`1
#ifndef ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke_define
#define ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke_define
struct ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_pinvoke
{
	int32_t ___m_TypeIndex_0;
	int32_t ___m_SizeInChunk_1;
	uint32_t ___m_GlobalSystemVersion_2;
	int32_t ___m_IsReadOnly_3;
	int32_t ___m_IsZeroSized_4;
	int16_t ___m_LookupCache_5;
	int32_t ___m_Length_6;
};
#endif
// Native definition for COM marshalling of Unity.Entities.ComponentTypeHandle`1
#ifndef ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com_define
#define ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com_define
struct ComponentTypeHandle_1_tA87C85034206BFA47C0596E8C9B012DC4C2C8606_marshaled_com
{
	int32_t ___m_TypeIndex_0;
	int32_t ___m_SizeInChunk_1;
	uint32_t ___m_GlobalSystemVersion_2;
	int32_t ___m_IsReadOnly_3;
	int32_t ___m_IsZeroSized_4;
	int16_t ___m_LookupCache_5;
	int32_t ___m_Length_6;
};
#endif

// Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>
struct ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E  : public PropertyBag_1_t452012CD8C5A50896C1F5098DEEE5DD6653491E5
{
	// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<TContainer> Unity.Properties.ContainerPropertyBag`1::m_Properties
	PropertyCollection_tEB4EE2B34444802994C68391B3B6BA6EE9DC556B* ___m_Properties_0;
};

// Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>
struct ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF  : public PropertyBag_1_t73CD1A2D94E2739E1A33F7F4BD1CFF4B87A70C04
{
	// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<TContainer> Unity.Properties.ContainerPropertyBag`1::m_Properties
	PropertyCollection_t95BD260F87D59485DFE7998FBCC09A168FF8F641* ___m_Properties_0;
};

// Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.SceneSectionBundle>
struct ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF  : public PropertyBag_1_tDBE0AEA295E92B2D2AB249858C0EA20CEAD89815
{
	// Unity.Properties.ContainerPropertyBag`1/PropertyCollection<TContainer> Unity.Properties.ContainerPropertyBag`1::m_Properties
	PropertyCollection_tEDBBF1A4D8B4A80FF03724D579109B811B7B023F* ___m_Properties_0;
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

// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.ComponentSystemBase>
struct NoAllocReadOnlyCollection_1_tB2536E6674017BCC0F082E490DE70E833406AFB1 
{
	// System.Collections.Generic.List`1<T> Unity.Entities.World/NoAllocReadOnlyCollection`1::m_Source
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_Source_0;
};

// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.World>
struct NoAllocReadOnlyCollection_1_tDC2663E3C123F6214C6F9CDB3100A48AA01DA7FE 
{
	// System.Collections.Generic.List`1<T> Unity.Entities.World/NoAllocReadOnlyCollection`1::m_Source
	List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322* ___m_Source_0;
};

// Unity.Properties.ReflectedMemberProperty`2<UnityEngine.SceneManagement.Scene,System.Int32>
struct ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E  : public Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0
{
	// Unity.Properties.IMemberInfo Unity.Properties.ReflectedMemberProperty`2::m_Info
	RuntimeObject* ___m_Info_1;
	// System.Boolean Unity.Properties.ReflectedMemberProperty`2::m_IsStructContainerType
	bool ___m_IsStructContainerType_2;
	// Unity.Properties.ReflectedMemberProperty`2/GetStructValueAction<TContainer,TValue> Unity.Properties.ReflectedMemberProperty`2::m_GetStructValueAction
	GetStructValueAction_t11FD46118DFC612DA96B629614B422CAF31A1F90* ___m_GetStructValueAction_3;
	// Unity.Properties.ReflectedMemberProperty`2/SetStructValueAction<TContainer,TValue> Unity.Properties.ReflectedMemberProperty`2::m_SetStructValueAction
	SetStructValueAction_t1AEF90EE125A37F4C44EC349ECB2000F8A0EC4BA* ___m_SetStructValueAction_4;
	// Unity.Properties.ReflectedMemberProperty`2/GetClassValueAction<TContainer,TValue> Unity.Properties.ReflectedMemberProperty`2::m_GetClassValueAction
	GetClassValueAction_tA3FB8FEF2CE3B936D04E58F3B5E6DA36B0EE1DA8* ___m_GetClassValueAction_5;
	// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<TContainer,TValue> Unity.Properties.ReflectedMemberProperty`2::m_SetClassValueAction
	SetClassValueAction_t9668AC3A51C14CDDAEDCBBD532302F662B8A9E86* ___m_SetClassValueAction_6;
	// System.String Unity.Properties.ReflectedMemberProperty`2::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// System.Boolean Unity.Properties.ReflectedMemberProperty`2::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_8;
};

// Unity.Burst.SharedStatic`1<System.UInt64>
struct SharedStatic_1_tB042D7198B3BD170F6B8D07127F90A916DCE64B5 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Entities.BlobAssetReferenceData
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte* Unity.Entities.BlobAssetReferenceData::m_Ptr
					uint8_t* ___m_Ptr_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int64 Unity.Entities.BlobAssetReferenceData::m_Align8Union
					int64_t ___m_Align8Union_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_1_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)

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

// Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	// Unity.Entities.EntityQueryImpl* Unity.Entities.EntityQuery::__impl
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl_0;
	// System.UInt64 Unity.Entities.EntityQuery::__seqno
	uint64_t _____seqno_1;
};

// Unity.Entities.EntityQueryMask
struct EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF 
{
	// System.Byte Unity.Entities.EntityQueryMask::Index
	uint8_t ___Index_0;
	// System.Byte Unity.Entities.EntityQueryMask::Mask
	uint8_t ___Mask_1;
	// Unity.Entities.EntityComponentStore* Unity.Entities.EntityQueryMask::EntityComponentStore
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___EntityComponentStore_2;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// Unity.Entities.SystemBase
struct SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D  : public ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625
{
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

// Unity.Scenes.SceneSystem/LoadParameters
struct LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 
{
	// Unity.Entities.SceneLoadFlags Unity.Scenes.SceneSystem/LoadParameters::Flags
	int32_t ___Flags_0;
	// System.Int32 Unity.Scenes.SceneSystem/LoadParameters::Priority
	int32_t ___Priority_1;
};

// Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property
struct Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D  : public Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B
{
};

// Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92 
{
	// Unity.Scenes.WeakAssetReferenceLoadingSystem Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job::__this
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};
// Native definition for P/Invoke marshalling of Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_pinvoke
{
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};
// Native definition for COM marshalling of Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_com
{
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};

// Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806 
{
	// Unity.Scenes.WeakAssetReferenceLoadingSystem Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job::__this
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};
// Native definition for P/Invoke marshalling of Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_pinvoke
{
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};
// Native definition for COM marshalling of Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
struct WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_com
{
	WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* _____this_0;
};

// Unity.Collections.AllocatorHelper`1<Unity.Entities.WorldAllocator>
struct AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 
{
	// T* Unity.Collections.AllocatorHelper`1::m_allocator
	WorldAllocator_t86FB5E0B0505249BDACAE980021C8EBADEE8A62B* ___m_allocator_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorHelper`1::m_backingAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_backingAllocator_1;
};

// Unity.Entities.BlobAssetReference`1<Unity.Scenes.ResourceCatalogData>
struct BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B 
{
	// Unity.Entities.BlobAssetReferenceData Unity.Entities.BlobAssetReference`1::m_data
	BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>
struct UnsafeParallelHashMap_2_tC7A8B2B5CCF43E97D8016CED624851E804E50FB6 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>
struct UnsafeParallelMultiHashMap_2_t92223A149BD612AA9F36478DAF40C40894DACC68 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
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

// Unity.Scenes.GameObjectSceneData
struct GameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278 
{
	// UnityEngine.SceneManagement.Scene Unity.Scenes.GameObjectSceneData::Scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___Scene_0;
	// Unity.Scenes.GameObjectSceneRefCount* Unity.Scenes.GameObjectSceneData::gameObjectSceneHandle
	GameObjectSceneRefCount_t464A70BCC96BCFF6541C32E997C79DA0BF6E9B0D* ___gameObjectSceneHandle_1;
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

// Unity.Scenes.PrefabLoadResult
struct PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 
{
	// Unity.Entities.Entity Unity.Scenes.PrefabLoadResult::PrefabRoot
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag
struct UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5  : public ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF
{
};

// Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag
struct Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794  : public ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E
{
};

// Unity.Properties.Generated.Unity_Scenes_SceneSectionBundle_PropertyBag
struct Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D  : public ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF
{
};

// Unity.Entities.EntityQuery/GatherEntitiesResult
struct GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71 
{
	// System.Int32 Unity.Entities.EntityQuery/GatherEntitiesResult::StartingOffset
	int32_t ___StartingOffset_0;
	// System.Int32 Unity.Entities.EntityQuery/GatherEntitiesResult::EntityCount
	int32_t ___EntityCount_1;
	// Unity.Entities.Entity* Unity.Entities.EntityQuery/GatherEntitiesResult::EntityBuffer
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___EntityBuffer_2;
	// Unity.Collections.NativeArray`1<Unity.Entities.Entity> Unity.Entities.EntityQuery/GatherEntitiesResult::EntityArray
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___EntityArray_3;
};

// Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag/m_Handle
struct m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F  : public ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E
{
};

// Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab
struct LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 
{
	// System.Int32 Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab::RefCount
	int32_t ___RefCount_0;
	// Unity.Entities.Entity Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab::SceneEntity
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity_1;
	// Unity.Entities.Entity Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab::PrefabRoot
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot_2;
};

// Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>
struct NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey,TValue> Unity.Collections.NativeParallelHashMap`2::m_HashMapData
	UnsafeParallelHashMap_2_tC7A8B2B5CCF43E97D8016CED624851E804E50FB6 ___m_HashMapData_0;
};

// Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>
struct NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey,TValue> Unity.Collections.NativeParallelMultiHashMap`2::m_MultiHashMapData
	UnsafeParallelMultiHashMap_2_t92223A149BD612AA9F36478DAF40C40894DACC68 ___m_MultiHashMapData_0;
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

// Unity.Entities.Serialization.UntypedWeakReferenceId
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	// Unity.Entities.Hash128 Unity.Entities.Serialization.UntypedWeakReferenceId::AssetId
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetId_0;
	// System.Int64 Unity.Entities.Serialization.UntypedWeakReferenceId::LfId
	int64_t ___LfId_1;
	// Unity.Entities.Serialization.WeakReferenceGenerationType Unity.Entities.Serialization.UntypedWeakReferenceId::GenerationType
	int16_t ___GenerationType_2;
};

// Unity.Entities.ComponentSystem
struct ComponentSystem_t0357452663010AC3459AFD9496555C9D0CD7B6AA  : public ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625
{
	// Unity.Entities.EntityCommandBuffer Unity.Entities.ComponentSystem::m_DeferredEntities
	EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008 ___m_DeferredEntities_1;
	// Unity.Entities.EntityQueryCache Unity.Entities.ComponentSystem::m_EntityQueryCache
	EntityQueryCache_tEBEB69126C6527FF9E4EEB9D51486B2B2F5CB07B* ___m_EntityQueryCache_2;
};

// Unity.Entities.Serialization.EntityPrefabReference
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	// Unity.Entities.Serialization.UntypedWeakReferenceId Unity.Entities.Serialization.EntityPrefabReference::PrefabId
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___PrefabId_0;
};

// Unity.Scenes.WeakAssetReferenceLoadingSystem
struct WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181  : public SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D
{
	// Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity> Unity.Scenes.WeakAssetReferenceLoadingSystem::InProgressLoads
	NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE ___InProgressLoads_1;
	// Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab> Unity.Scenes.WeakAssetReferenceLoadingSystem::LoadedPrefabs
	NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62 ___LoadedPrefabs_2;
	// Unity.Entities.EntityQuery Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_0_Query
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___WeakAssetReferenceLoadingSystem_LambdaJob_0_Query_3;
	// Unity.Entities.EntityQuery Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_1_Query
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___WeakAssetReferenceLoadingSystem_LambdaJob_1_Query_4;
	// Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.RequestEntityPrefabLoaded> Unity.Scenes.WeakAssetReferenceLoadingSystem::__Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle
	ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA _____Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle_5;
	// Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.PrefabAssetReference> Unity.Scenes.WeakAssetReferenceLoadingSystem::__Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle
	ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 _____Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle_6;
};

// Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F 
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Entities.WorldUnmanaged::m_AllocatorHandle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorHandle_0;
	// Unity.Entities.WorldUnmanagedImpl* Unity.Entities.WorldUnmanaged::m_Impl
	WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830* ___m_Impl_1;
	// Unity.Entities.EntityManager Unity.Entities.WorldUnmanaged::m_EntityManager
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___m_EntityManager_2;
	// Unity.Collections.AllocatorHelper`1<Unity.Entities.WorldAllocator> Unity.Entities.WorldUnmanaged::m_WorldAllocatorHelper
	AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 ___m_WorldAllocatorHelper_4;
};

struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_StaticFields
{
	// Unity.Burst.SharedStatic`1<System.UInt64> Unity.Entities.WorldUnmanaged::ms_NextSequenceNumber
	SharedStatic_1_tB042D7198B3BD170F6B8D07127F90A916DCE64B5 ___ms_NextSequenceNumber_3;
};

// Unity.Collections.NativeParallelMultiHashMapIterator`1<Unity.Entities.Serialization.EntityPrefabReference>
struct NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB 
{
	// TKey Unity.Collections.NativeParallelMultiHashMapIterator`1::key
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key_0;
	// System.Int32 Unity.Collections.NativeParallelMultiHashMapIterator`1::NextEntryIndex
	int32_t ___NextEntryIndex_1;
	// System.Int32 Unity.Collections.NativeParallelMultiHashMapIterator`1::EntryIndex
	int32_t ___EntryIndex_2;
};

// Unity.Scenes.PrefabAssetReference
struct PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 
{
	// Unity.Entities.Serialization.EntityPrefabReference Unity.Scenes.PrefabAssetReference::_ReferenceId
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ____ReferenceId_0;
};

// Unity.Scenes.RequestEntityPrefabLoaded
struct RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 
{
	// Unity.Entities.Serialization.EntityPrefabReference Unity.Scenes.RequestEntityPrefabLoaded::Prefab
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___Prefab_0;
};

// Unity.Scenes.SceneSystem
struct SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72  : public ComponentSystem_t0357452663010AC3459AFD9496555C9D0CD7B6AA
{
	// Unity.Entities.EntityQuery Unity.Scenes.SceneSystem::_unloadSceneQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ____unloadSceneQuery_3;
	// Unity.Entities.BlobAssetReference`1<Unity.Scenes.ResourceCatalogData> Unity.Scenes.SceneSystem::catalogData
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B ___catalogData_4;
	// System.String Unity.Scenes.SceneSystem::_sceneLoadDir
	String_t* ____sceneLoadDir_5;
	// Unity.Entities.Hash128 Unity.Scenes.SceneSystem::<BuildConfigurationGUID>k__BackingField
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___U3CBuildConfigurationGUIDU3Ek__BackingField_6;
};

// Unity.Scenes.WeakAssetPrefabLoadRequest
struct WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7 
{
	// Unity.Entities.Serialization.EntityPrefabReference Unity.Scenes.WeakAssetPrefabLoadRequest::WeakReferenceId
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___WeakReferenceId_0;
};

// Unity.Entities.World
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ComponentSystemBase> Unity.Entities.World::m_SystemLookup
	Dictionary_2_t3103E354F468B89433E1F3869E44058AC4BC55E3* ___m_SystemLookup_2;
	// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase> Unity.Entities.World::m_Systems
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_Systems_8;
	// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.ComponentSystemBase> Unity.Entities.World::<Systems>k__BackingField
	NoAllocReadOnlyCollection_1_tB2536E6674017BCC0F082E490DE70E833406AFB1 ___U3CSystemsU3Ek__BackingField_9;
	// Unity.Entities.WorldUnmanaged Unity.Entities.World::m_Unmanaged
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F ___m_Unmanaged_10;
	// System.String Unity.Entities.World::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_11;
	// Unity.Entities.EntityQuery Unity.Entities.World::m_TimeSingletonQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_TimeSingletonQuery_12;
	// System.Boolean Unity.Entities.World::<QuitUpdate>k__BackingField
	bool ___U3CQuitUpdateU3Ek__BackingField_13;
};

struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A_StaticFields
{
	// System.Collections.Generic.List`1<Unity.Entities.World> Unity.Entities.World::s_AllWorlds
	List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322* ___s_AllWorlds_0;
	// Unity.Entities.World Unity.Entities.World::<DefaultGameObjectInjectionWorld>k__BackingField
	World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1;
	// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.World> Unity.Entities.World::<All>k__BackingField
	NoAllocReadOnlyCollection_1_tDC2663E3C123F6214C6F9CDB3100A48AA01DA7FE ___U3CAllU3Ek__BackingField_3;
	// System.Action`1<Unity.Entities.World> Unity.Entities.World::WorldCreated
	Action_1_tF01EC860CB363E6A3245B6F34E103517EAA4C3E1* ___WorldCreated_4;
	// System.Action`1<Unity.Entities.World> Unity.Entities.World::WorldDestroyed
	Action_1_tF01EC860CB363E6A3245B6F34E103517EAA4C3E1* ___WorldDestroyed_5;
	// System.Action`2<Unity.Entities.World,Unity.Entities.ComponentSystemBase> Unity.Entities.World::SystemCreated
	Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597* ___SystemCreated_6;
	// System.Action`2<Unity.Entities.World,Unity.Entities.ComponentSystemBase> Unity.Entities.World::SystemDestroyed
	Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597* ___SystemDestroyed_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Entities.EntityQueryDesc[]
struct EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* m_Items[1];

	inline EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Entities.ComponentType[]
struct ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C  : public RuntimeArray
{
	ALIGN_FIELD (8) ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA m_Items[1];

	inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA value)
	{
		m_Items[index] = value;
	}
};


// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161_gshared (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8_gshared (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_gshared (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98* ___item1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.Entity,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 ___componentData1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.PrefabLoadResult>(Unity.Entities.Entity,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 ___componentData1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_gshared (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_gshared (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 ___item1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method) ;
// T Unity.Entities.World::GetExistingSystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* World_GetExistingSystem_TisRuntimeObject_mD6B5AFD46D84DC9DB322402A0BDBF204793E9C8D_gshared (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.WeakAssetPrefabLoadRequest>(Unity.Entities.Entity,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7 ___componentData1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___item1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::TryGetFirstValue(TKey,TValue&,Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___item1, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB* ___it2, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.Entity,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 ___componentData1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::TryGetNextValue(TValue&,Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___item0, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB* ___it1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.RequestEntityPrefabLoaded>::Update(Unity.Entities.SystemBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799_gshared (ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA* __this, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* ___system0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMapExtensions::Remove<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>(Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_gshared (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE ___container0, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key1, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___value2, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::RemoveComponent<Unity.Scenes.PrefabAssetReference>(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.PrefabAssetReference>::Update(Unity.Entities.SystemBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8_gshared (ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020* __this, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* ___system0, const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadWrite<Unity.Scenes.RequestEntityPrefabLoaded>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529_gshared (const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadOnly<Unity.Scenes.PrefabAssetReference>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927_gshared (const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadWrite<Unity.Scenes.PrefabAssetReference>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033_gshared (const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadOnly<Unity.Scenes.RequestEntityPrefabLoaded>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001_gshared (const RuntimeMethod* method) ;
// Unity.Entities.ComponentTypeHandle`1<T> Unity.Entities.ComponentSystemBase::GetComponentTypeHandle<Unity.Scenes.RequestEntityPrefabLoaded>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB_gshared (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, bool ___isReadOnly0, const RuntimeMethod* method) ;
// Unity.Entities.ComponentTypeHandle`1<T> Unity.Entities.ComponentSystemBase::GetComponentTypeHandle<Unity.Scenes.PrefabAssetReference>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062_gshared (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, bool ___isReadOnly0, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.TypeManager::GetTypeIndex<Unity.Scenes.RequestEntityPrefabLoaded>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF_gshared (const RuntimeMethod* method) ;
// T Unity.Entities.InternalCompilerInterface::GetComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___originalComponent3, const RuntimeMethod* method) ;
// System.Void Unity.Entities.InternalCompilerInterface::WriteComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___lambdaComponent3, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___originalComponent4, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.TypeManager::GetTypeIndex<Unity.Scenes.PrefabAssetReference>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C_gshared (const RuntimeMethod* method) ;
// T Unity.Entities.InternalCompilerInterface::GetComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___originalComponent3, const RuntimeMethod* method) ;
// System.Void Unity.Entities.InternalCompilerInterface::WriteComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11_gshared (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___lambdaComponent3, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___originalComponent4, const RuntimeMethod* method) ;
// System.Void Unity.Entities.JobEntityBatchExtensions::EarlyJobInit<Unity.Scenes.LiveConversionPatcher/RemoveLiveConversionSceneState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Entities.JobEntityBatchExtensions::EarlyJobInit<Unity.Scenes.SceneSectionStreamingSystem/SceneSectionStreamingSystem_LambdaJob_0_Job>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE_gshared (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>::AddProperty<UnityEngine.SceneManagement.Scene>(Unity.Properties.Property`2<TContainer,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F_gshared (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* __this, Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B* ___property0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.Property`2<Unity.Scenes.GameObjectSceneData,UnityEngine.SceneManagement.Scene>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235_gshared (Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654_gshared (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>::AddProperty<System.Int32>(Unity.Properties.Property`2<TContainer,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955_gshared (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* __this, Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0* ___property0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ReflectedMemberProperty`2<UnityEngine.SceneManagement.Scene,System.Int32>::.ctor(System.Reflection.FieldInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0_gshared (ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E* __this, FieldInfo_t* ___info0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.SceneSectionBundle>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7_gshared (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<Unity.Scenes.GameObjectSceneData>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13_gshared (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* ___propertyBag0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<UnityEngine.SceneManagement.Scene>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73_gshared (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* ___propertyBag0, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<Unity.Scenes.SceneSectionBundle>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290_gshared (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF* ___propertyBag0, const RuntimeMethod* method) ;

// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___a0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2_gshared)(__this, ___capacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161 (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, int32_t ___capacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161_gshared)(__this, ___capacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Dispose()
inline void NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, const RuntimeMethod*))NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Dispose()
inline void NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8 (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62*, const RuntimeMethod*))NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8_gshared)(__this, method);
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_0_Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_Execute_mF38D4FD62922AE44D71110FCD944EBFB1B3572BD (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) ;
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_1_Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_Execute_m18BD1055147BD8D1CE88C9BFD7C5B70817E656F2 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::TryGetValue(TKey,TValue&)
inline bool NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98* ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98*, const RuntimeMethod*))NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_gshared)(__this, ___key0, ___item1, method);
}
// Unity.Entities.EntityManager Unity.Entities.ComponentSystemBase::get_EntityManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.Entity,T)
inline bool EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 ___componentData1, const RuntimeMethod* method)
{
	return ((  bool (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736, const RuntimeMethod*))EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_gshared)(__this, ___entity0, ___componentData1, method);
}
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.PrefabLoadResult>(Unity.Entities.Entity,T)
inline bool EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 ___componentData1, const RuntimeMethod* method)
{
	return ((  bool (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56, const RuntimeMethod*))EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_gshared)(__this, ___entity0, ___componentData1, method);
}
// System.Boolean Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Remove(TKey)
inline bool NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, const RuntimeMethod*))NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_gshared)(__this, ___key0, method);
}
// System.Void Unity.Collections.NativeParallelHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.WeakAssetReferenceLoadingSystem/LoadedPrefab>::Add(TKey,TValue)
inline void NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3 (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 ___item1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98, const RuntimeMethod*))NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_gshared)(__this, ___key0, ___item1, method);
}
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::ContainsKey(TKey)
inline bool NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, const RuntimeMethod*))NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0_gshared)(__this, ___key0, method);
}
// Unity.Entities.World Unity.Entities.ComponentSystemBase::get_World()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ComponentSystemBase_get_World_mCA361EABE4397A5D3573AC569E53A2BF80AE6CDD (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, const RuntimeMethod* method) ;
// T Unity.Entities.World::GetExistingSystem<Unity.Scenes.SceneSystem>()
inline SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* __this, const RuntimeMethod* method)
{
	return ((  SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* (*) (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A*, const RuntimeMethod*))World_GetExistingSystem_TisRuntimeObject_mD6B5AFD46D84DC9DB322402A0BDBF204793E9C8D_gshared)(__this, method);
}
// Unity.Entities.Entity Unity.Scenes.SceneSystem::LoadPrefabAsync(Unity.Entities.Serialization.EntityPrefabReference,Unity.Scenes.SceneSystem/LoadParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD SceneSystem_LoadPrefabAsync_mE50B82B3771BE6179B0E4294084EAE4B92F3904C (SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___prefabReferenceId0, LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 ___parameters1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.WeakAssetPrefabLoadRequest>(Unity.Entities.Entity,T)
inline bool EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7 ___componentData1, const RuntimeMethod* method)
{
	return ((  bool (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7, const RuntimeMethod*))EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03_gshared)(__this, ___entity0, ___componentData1, method);
}
// System.Void Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Add(TKey,TValue)
inline void NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___item1, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, const RuntimeMethod*))NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011_gshared)(__this, ___key0, ___item1, method);
}
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::TryGetFirstValue(TKey,TValue&,Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>&)
inline bool NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___item1, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB* ___it2, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB*, const RuntimeMethod*))NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2_gshared)(__this, ___key0, ___item1, ___it2, method);
}
// System.Void Unity.Scenes.SceneSystem::UnloadScene(Unity.Entities.Entity,Unity.Scenes.SceneSystem/UnloadParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSystem_UnloadScene_mF2C80F036F3844D7059D8330F5F29FFF5828210C (SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___sceneEntity0, int32_t ___unloadParams1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityManager::AddComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.Entity,T)
inline bool EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 ___componentData1, const RuntimeMethod* method)
{
	return ((  bool (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7, const RuntimeMethod*))EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C_gshared)(__this, ___entity0, ___componentData1, method);
}
// System.Boolean Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::TryGetNextValue(TValue&,Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>&)
inline bool NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76 (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___item0, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB* ___it1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*, NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB*, const RuntimeMethod*))NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76_gshared)(__this, ___item0, ___it1, method);
}
// System.Int32 Unity.Collections.NativeParallelMultiHashMap`2<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>::Remove(TKey)
inline int32_t NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* __this, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE*, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, const RuntimeMethod*))NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC_gshared)(__this, ___key0, method);
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::StartLoadRequest(Unity.Entities.Entity,Unity.Entities.Serialization.EntityPrefabReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_StartLoadRequest_m3E245261F874FA4A048F4BB44669B90DEDDAB69B (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___loadRequestWeakReferenceId1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.RequestEntityPrefabLoaded>::Update(Unity.Entities.SystemBase)
inline void ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799 (ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA* __this, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* ___system0, const RuntimeMethod* method)
{
	((  void (*) (ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA*, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D*, const RuntimeMethod*))ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799_gshared)(__this, ___system0, method);
}
// System.Void Unity.Entities.SystemBase::CompleteDependency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemBase_CompleteDependency_m6A50401D4D48AA0F64ABC1F99A8ABA0F34EB7BB6 (SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job::RunWithStructuralChange(Unity.Entities.EntityQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_RunWithStructuralChange_mEC9713B71A2274243DFD6FDEFB162DC6E349BE19 (WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeParallelHashMapExtensions::Remove<Unity.Entities.Serialization.EntityPrefabReference,Unity.Entities.Entity>(Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue>,TKey,TValue)
inline void NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE ___container0, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___key1, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___value2, const RuntimeMethod* method)
{
	((  void (*) (NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, const RuntimeMethod*))NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_gshared)(___container0, ___key1, ___value2, method);
}
// System.Boolean Unity.Entities.EntityManager::RemoveComponent<Unity.Scenes.PrefabAssetReference>(Unity.Entities.Entity)
inline bool EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, const RuntimeMethod* method)
{
	return ((  bool (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, const RuntimeMethod*))EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_gshared)(__this, ___entity0, method);
}
// System.Void Unity.Entities.ComponentTypeHandle`1<Unity.Scenes.PrefabAssetReference>::Update(Unity.Entities.SystemBase)
inline void ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8 (ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020* __this, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* ___system0, const RuntimeMethod* method)
{
	((  void (*) (ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020*, SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D*, const RuntimeMethod*))ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8_gshared)(__this, ___system0, method);
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job::RunWithStructuralChange(Unity.Entities.EntityQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_RunWithStructuralChange_mED2AA30B7F7E31AFEE159391798110C6E93F2C3A (WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.ComponentSystemBase::OnCreateForCompiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSystemBase_OnCreateForCompiler_mE0B70EDF4B717B5AB04C77DC20ED957C2D69D089 (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, const RuntimeMethod* method) ;
// System.Void Unity.Entities.EntityQueryDesc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityQueryDesc__ctor_m811E0AE92BFB5E76C084319DF05EE9E7BE24E4D6 (EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* __this, const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadWrite<Unity.Scenes.RequestEntityPrefabLoaded>()
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529 (const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529_gshared)(method);
}
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadOnly<Unity.Scenes.PrefabAssetReference>()
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927 (const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927_gshared)(method);
}
// Unity.Entities.EntityQuery Unity.Entities.ComponentSystemBase::GetEntityQuery(Unity.Entities.EntityQueryDesc[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ComponentSystemBase_GetEntityQuery_m2DDDDFD060F9D52C3FF4904D1711C5C4F662CC3B (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B* ___queryDesc0, const RuntimeMethod* method) ;
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadWrite<Unity.Scenes.PrefabAssetReference>()
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033 (const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033_gshared)(method);
}
// Unity.Entities.ComponentType Unity.Entities.ComponentType::ReadOnly<Unity.Scenes.RequestEntityPrefabLoaded>()
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001 (const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001_gshared)(method);
}
// Unity.Entities.ComponentTypeHandle`1<T> Unity.Entities.ComponentSystemBase::GetComponentTypeHandle<Unity.Scenes.RequestEntityPrefabLoaded>(System.Boolean)
inline ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, bool ___isReadOnly0, const RuntimeMethod* method)
{
	return ((  ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA (*) (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625*, bool, const RuntimeMethod*))ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB_gshared)(__this, ___isReadOnly0, method);
}
// Unity.Entities.ComponentTypeHandle`1<T> Unity.Entities.ComponentSystemBase::GetComponentTypeHandle<Unity.Scenes.PrefabAssetReference>(System.Boolean)
inline ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062 (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* __this, bool ___isReadOnly0, const RuntimeMethod* method)
{
	return ((  ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 (*) (ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625*, bool, const RuntimeMethod*))ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062_gshared)(__this, ___isReadOnly0, method);
}
// System.Void Unity.Entities.SystemBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemBase__ctor_m39B6958995338637EFBABA389CA0A64D018EC30D (SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D* __this, const RuntimeMethod* method) ;
// Unity.Entities.EntityQueryMask Unity.Entities.EntityManager::GetEntityQueryMask(Unity.Entities.EntityQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF EntityManager_GetEntityQueryMask_m8684727194E90667F6E75E18BE36250E06257861 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method) ;
// System.Void Unity.Entities.InternalCompilerInterface::UnsafeCreateGatherEntitiesResult(Unity.Entities.EntityQuery&,Unity.Entities.EntityQuery/GatherEntitiesResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalCompilerInterface_UnsafeCreateGatherEntitiesResult_mACE3055D9D7B519119682165555C728C812023AA (EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___query0, GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71* ___result1, const RuntimeMethod* method) ;
// System.Int32 Unity.Entities.TypeManager::GetTypeIndex<Unity.Scenes.RequestEntityPrefabLoaded>()
inline int32_t TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF_gshared)(method);
}
// System.Void Unity.Entities.InternalCompilerInterface::UnsafeReleaseGatheredEntities(Unity.Entities.EntityQuery&,Unity.Entities.EntityQuery/GatherEntitiesResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalCompilerInterface_UnsafeReleaseGatheredEntities_m3FECB40955DAD1CA6FC9DE899B2C409DEA594B4F (EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___query0, GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71* ___result1, const RuntimeMethod* method) ;
// Unity.Entities.Entity Unity.Entities.InternalCompilerInterface::UnsafeGetEntityFromGatheredEntities(Unity.Entities.EntityQuery/GatherEntitiesResult&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD InternalCompilerInterface_UnsafeGetEntityFromGatheredEntities_mBD3BFD33B03365AFB0100D62B6724A5CB2018C07 (GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71* ___result0, int32_t ___entityIndex1, const RuntimeMethod* method) ;
// System.Boolean Unity.Entities.EntityQueryMask::Matches(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityQueryMask_Matches_mEBA825285137E95230824E1B25EED6F7FDAFA0B7 (EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, const RuntimeMethod* method) ;
// T Unity.Entities.InternalCompilerInterface::GetComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&)
inline RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___originalComponent3, const RuntimeMethod* method)
{
	return ((  RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, int32_t, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7*, const RuntimeMethod*))InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400_gshared)(___manager0, ___entity1, ___typeIndex2, ___originalComponent3, method);
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody(Unity.Entities.Entity,Unity.Scenes.RequestEntityPrefabLoaded&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody_mC6D4BFB6F2F2AC30A237E41096E1650EDAFE793D (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___loadRequest1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.InternalCompilerInterface::WriteComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&,T&)
inline void InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___lambdaComponent3, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___originalComponent4, const RuntimeMethod* method)
{
	((  void (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, int32_t, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7*, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7*, const RuntimeMethod*))InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7_gshared)(___manager0, ___entity1, ___typeIndex2, ___lambdaComponent3, ___originalComponent4, method);
}
// System.Int32 Unity.Entities.TypeManager::GetTypeIndex<Unity.Scenes.PrefabAssetReference>()
inline int32_t TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C_gshared)(method);
}
// T Unity.Entities.InternalCompilerInterface::GetComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&)
inline PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___originalComponent3, const RuntimeMethod* method)
{
	return ((  PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, int32_t, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736*, const RuntimeMethod*))InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C_gshared)(___manager0, ___entity1, ___typeIndex2, ___originalComponent3, method);
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody(Unity.Entities.Entity,Unity.Scenes.PrefabAssetReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody_mFCF8BA4555184DD6C38357A2795CD14E28725D2D (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___prefabReference1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.InternalCompilerInterface::WriteComponentData<Unity.Scenes.PrefabAssetReference>(Unity.Entities.EntityManager,Unity.Entities.Entity,System.Int32,T&,T&)
inline void InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11 (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___manager0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity1, int32_t ___typeIndex2, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___lambdaComponent3, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___originalComponent4, const RuntimeMethod* method)
{
	((  void (*) (EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, int32_t, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736*, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736*, const RuntimeMethod*))InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11_gshared)(___manager0, ___entity1, ___typeIndex2, ___lambdaComponent3, ___originalComponent4, method);
}
// System.Void Unity.Entities.JobEntityBatchExtensions::EarlyJobInit<Unity.Scenes.LiveConversionPatcher/RemoveLiveConversionSceneState>()
inline void JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA_gshared)(method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.EarlyInitHelpers::JobReflectionDataCreationFailed(System.Exception,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarlyInitHelpers_JobReflectionDataCreationFailed_m385E2249E15484F8BCB1A1EA9BA9AFB7EB425109 (Exception_t* ___ex0, Type_t* ___jobType1, const RuntimeMethod* method) ;
// System.Void Unity.Entities.JobEntityBatchExtensions::EarlyJobInit<Unity.Scenes.SceneSectionStreamingSystem/SceneSectionStreamingSystem_LambdaJob_0_Job>()
inline void JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B_gshared)(method);
}
// System.Void __JobReflectionRegistrationOutput__3053272308::CreateJobReflectionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __JobReflectionRegistrationOutput__3053272308_CreateJobReflectionData_m78E625F2C86108EEC5C484918EF98DDBDDA32274 (const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>::.ctor()
inline void ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* __this, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E*, const RuntimeMethod*))ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE_gshared)(__this, method);
}
// System.Void Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Property__ctor_mB224F61FACB7F90E92740AEB85E206852D6616C7 (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.GameObjectSceneData>::AddProperty<UnityEngine.SceneManagement.Scene>(Unity.Properties.Property`2<TContainer,TValue>)
inline void ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* __this, Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B* ___property0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E*, Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B*, const RuntimeMethod*))ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F_gshared)(__this, ___property0, method);
}
// System.Void Unity.Properties.Property`2<Unity.Scenes.GameObjectSceneData,UnityEngine.SceneManagement.Scene>::.ctor()
inline void Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235 (Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B* __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_tE4AC947E10A46050DFBB5F4F64DB6700536A836B*, const RuntimeMethod*))Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235_gshared)(__this, method);
}
// System.Void Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>::.ctor()
inline void ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654 (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* __this, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF*, const RuntimeMethod*))ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654_gshared)(__this, method);
}
// System.Void Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag/m_Handle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void m_Handle__ctor_mBECE430280C87905EF9830F143149EB36552197D (m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.ContainerPropertyBag`1<UnityEngine.SceneManagement.Scene>::AddProperty<System.Int32>(Unity.Properties.Property`2<TContainer,TValue>)
inline void ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955 (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* __this, Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0* ___property0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF*, Property_2_t1394951CD7755D66A8549B8C920BD1E5F27B9CF0*, const RuntimeMethod*))ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955_gshared)(__this, ___property0, method);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2<UnityEngine.SceneManagement.Scene,System.Int32>::.ctor(System.Reflection.FieldInfo,System.String)
inline void ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0 (ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E* __this, FieldInfo_t* ___info0, String_t* ___name1, const RuntimeMethod* method)
{
	((  void (*) (ReflectedMemberProperty_2_tC4E9F7DBDDCD37C260A6127FD3B024308280179E*, FieldInfo_t*, String_t*, const RuntimeMethod*))ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0_gshared)(__this, ___info0, ___name1, method);
}
// System.Void Unity.Properties.ContainerPropertyBag`1<Unity.Scenes.SceneSectionBundle>::.ctor()
inline void ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7 (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF* __this, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF*, const RuntimeMethod*))ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7_gshared)(__this, method);
}
// System.Void Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Scenes_GameObjectSceneData_PropertyBag__ctor_m3EEEB86FE2834BF7230FD48DF8D2014B9567C588 (Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<Unity.Scenes.GameObjectSceneData>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
inline void PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13 (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E* ___propertyBag0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E*, const RuntimeMethod*))PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13_gshared)(___propertyBag0, method);
}
// System.Void Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngine_SceneManagement_Scene_PropertyBag__ctor_m617EB7827A97FE1DDBB2747E8703B520B8B03E63 (UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<UnityEngine.SceneManagement.Scene>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
inline void PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73 (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF* ___propertyBag0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF*, const RuntimeMethod*))PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73_gshared)(___propertyBag0, method);
}
// System.Void Unity.Properties.Generated.Unity_Scenes_SceneSectionBundle_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Scenes_SceneSectionBundle_PropertyBag__ctor_m1678EEFC1C4E33E180AB277A94920EF06FB2A49C (Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Properties.PropertyBag::Register<Unity.Scenes.SceneSectionBundle>(Unity.Properties.ContainerPropertyBag`1<TContainer>)
inline void PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290 (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF* ___propertyBag0, const RuntimeMethod* method)
{
	((  void (*) (ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF*, const RuntimeMethod*))PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290_gshared)(___propertyBag0, method);
}
// System.Void Unity.Scenes.SceneSectionStreamingSystem::Initialize$SceneSectionStreamingSystem_LambdaJob_0_Job_RunWithoutJobSystem_000000E5$BurstDirectCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSectionStreamingSystem_InitializeU24SceneSectionStreamingSystem_LambdaJob_0_Job_RunWithoutJobSystem_000000E5U24BurstDirectCall_mCA4B641A798ACC5264BBBA8D9DC552C27CC66B2A (const RuntimeMethod* method) ;
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
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::OnCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_OnCreate_m310FD47FF554FEE4C676F9B2AA5685B1FB2C98EB (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InProgressLoads = new NativeParallelMultiHashMap<EntityPrefabReference, Entity>(1, Allocator.Persistent);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2((&L_1), 1, L_0, /*hidden argument*/NativeParallelMultiHashMap_2__ctor_m4DB6A37698BD4593E7401CF1AC40F50F1884A7F2_RuntimeMethod_var);
		__this->___InProgressLoads_1 = L_1;
		// LoadedPrefabs = new NativeParallelHashMap<EntityPrefabReference, LoadedPrefab>(1, Allocator.Persistent);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161((&L_3), 1, L_2, /*hidden argument*/NativeParallelHashMap_2__ctor_m1B91273C2155665B6ACEAC61BAA8EC397358D161_RuntimeMethod_var);
		__this->___LoadedPrefabs_2 = L_3;
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_OnDestroy_mF5BF485EECCB735C59FD9C87C5C08866FB434DB9 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InProgressLoads.Dispose();
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_0 = (&__this->___InProgressLoads_1);
		NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572(L_0, NativeParallelMultiHashMap_2_Dispose_m1B4A238ECFDB3A17EEE6499353DDA4E39B1B0572_RuntimeMethod_var);
		// LoadedPrefabs.Dispose();
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_1 = (&__this->___LoadedPrefabs_2);
		NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8(L_1, NativeParallelHashMap_2_Dispose_mB788F86B89DE5B66E8AEE0CBB9D0B7FE8E9166A8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_OnUpdate_mB144A39D35A7C3031E8D86D0E2CEF3D1CBEC2BB9 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	{
		// Entities.WithoutBurst().WithStructuralChanges()
		WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_Execute_mF38D4FD62922AE44D71110FCD944EBFB1B3572BD(__this, NULL);
		// Entities.WithoutBurst().WithStructuralChanges()
		WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_Execute_m18BD1055147BD8D1CE88C9BFD7C5B70817E656F2(__this, NULL);
		// .WithNone<RequestEntityPrefabLoaded>()
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::StartLoadRequest(Unity.Entities.Entity,Unity.Entities.Serialization.EntityPrefabReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_StartLoadRequest_m3E245261F874FA4A048F4BB44669B90DEDDAB69B (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity0, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___loadRequestWeakReferenceId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 V_3;
	memset((&V_3), 0, sizeof(V_3));
	PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_7;
	memset((&V_7), 0, sizeof(V_7));
	LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 V_8;
	memset((&V_8), 0, sizeof(V_8));
	WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (LoadedPrefabs.TryGetValue(loadRequestWeakReferenceId, out var loadedPrefab))
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_0 = (&__this->___LoadedPrefabs_2);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_1 = ___loadRequestWeakReferenceId1;
		bool L_2;
		L_2 = NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB(L_0, L_1, (&V_0), NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		// EntityManager.AddComponentData(entity, new PrefabAssetReference { _ReferenceId = loadRequestWeakReferenceId});
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_4;
		L_4 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_2 = L_4;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_5 = ___entity0;
		il2cpp_codegen_initobj((&V_3), sizeof(PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736));
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_6 = ___loadRequestWeakReferenceId1;
		(&V_3)->____ReferenceId_0 = L_6;
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 L_7 = V_3;
		bool L_8;
		L_8 = EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8((&V_2), L_5, L_7, EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var);
		// EntityManager.AddComponentData(entity, new PrefabLoadResult { PrefabRoot = loadedPrefab.PrefabRoot});
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_9;
		L_9 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_2 = L_9;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_10 = ___entity0;
		il2cpp_codegen_initobj((&V_4), sizeof(PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56));
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_11 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_12 = L_11.___PrefabRoot_2;
		(&V_4)->___PrefabRoot_0 = L_12;
		PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 L_13 = V_4;
		bool L_14;
		L_14 = EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C((&V_2), L_10, L_13, EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_RuntimeMethod_var);
		// loadedPrefab.RefCount++;
		int32_t* L_15 = (&(&V_0)->___RefCount_0);
		int32_t* L_16 = L_15;
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		// LoadedPrefabs.Remove(loadRequestWeakReferenceId);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_18 = (&__this->___LoadedPrefabs_2);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_19 = ___loadRequestWeakReferenceId1;
		bool L_20;
		L_20 = NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF(L_18, L_19, NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		// LoadedPrefabs.Add(loadRequestWeakReferenceId, loadedPrefab);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_21 = (&__this->___LoadedPrefabs_2);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_22 = ___loadRequestWeakReferenceId1;
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_23 = V_0;
		NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3(L_21, L_22, L_23, NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		// return;
		goto IL_011b;
	}

IL_0088:
	{
		// EntityManager.AddComponentData(entity, new PrefabAssetReference { _ReferenceId = loadRequestWeakReferenceId });
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_24;
		L_24 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_2 = L_24;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_25 = ___entity0;
		il2cpp_codegen_initobj((&V_3), sizeof(PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736));
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_26 = ___loadRequestWeakReferenceId1;
		(&V_3)->____ReferenceId_0 = L_26;
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 L_27 = V_3;
		bool L_28;
		L_28 = EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8((&V_2), L_25, L_27, EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var);
		// if (!InProgressLoads.ContainsKey(loadRequestWeakReferenceId))
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_29 = (&__this->___InProgressLoads_1);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_30 = ___loadRequestWeakReferenceId1;
		bool L_31;
		L_31 = NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0(L_29, L_30, NativeParallelMultiHashMap_2_ContainsKey_m6B62B8B0909D91445286FBC1FA35A85D8CA8AAD0_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_010d;
		}
	}
	{
		// var loadParameters = new SceneSystem.LoadParameters { Flags = SceneLoadFlags.NewInstance };
		il2cpp_codegen_initobj((&V_8), sizeof(LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4));
		(&V_8)->___Flags_0 = ((int32_t)16);
		LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 L_33 = V_8;
		V_6 = L_33;
		// var sceneEntity = World.GetExistingSystem<SceneSystem>().LoadPrefabAsync(loadRequestWeakReferenceId, loadParameters);
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_34;
		L_34 = ComponentSystemBase_get_World_mCA361EABE4397A5D3573AC569E53A2BF80AE6CDD(__this, NULL);
		NullCheck(L_34);
		SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* L_35;
		L_35 = World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED(L_34, World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_36 = ___loadRequestWeakReferenceId1;
		LoadParameters_tE7A1DD41ACEF94245CF2EBF5DAC4B91F67DEC3D4 L_37 = V_6;
		NullCheck(L_35);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_38;
		L_38 = SceneSystem_LoadPrefabAsync_mE50B82B3771BE6179B0E4294084EAE4B92F3904C(L_35, L_36, L_37, NULL);
		V_7 = L_38;
		// EntityManager.AddComponentData(sceneEntity, new WeakAssetPrefabLoadRequest { WeakReferenceId = loadRequestWeakReferenceId });
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_39;
		L_39 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_2 = L_39;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_40 = V_7;
		il2cpp_codegen_initobj((&V_9), sizeof(WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7));
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_41 = ___loadRequestWeakReferenceId1;
		(&V_9)->___WeakReferenceId_0 = L_41;
		WeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7 L_42 = V_9;
		bool L_43;
		L_43 = EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03((&V_2), L_40, L_42, EntityManager_AddComponentData_TisWeakAssetPrefabLoadRequest_tC9471654DF6D82D19D72EA88AEE7C1C1FB46F1D7_m3948503DD652E7566F5C7E3A303E96AED8694D03_RuntimeMethod_var);
	}

IL_010d:
	{
		// InProgressLoads.Add(loadRequestWeakReferenceId, entity);
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_44 = (&__this->___InProgressLoads_1);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_45 = ___loadRequestWeakReferenceId1;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_46 = ___entity0;
		NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011(L_44, L_45, L_46, NativeParallelMultiHashMap_2_Add_m2454434738C7E910F05E4F161E8C069B4F1D7011_RuntimeMethod_var);
	}

IL_011b:
	{
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::CompleteLoad(Unity.Entities.Entity,Unity.Entities.Entity,Unity.Entities.Serialization.EntityPrefabReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_CompleteLoad_mD016751870FB994795A4DFB846824EF11C9BB5D2 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___sceneEntity0, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___prefabRoot1, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 ___weakReferenceId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t3CC888D171A12691B3D947F8A8862FBC9CDD5BFB V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (!InProgressLoads.TryGetFirstValue(weakReferenceId, out var entity, out var it))
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_0 = (&__this->___InProgressLoads_1);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_1 = ___weakReferenceId2;
		bool L_2;
		L_2 = NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2(L_0, L_1, (&V_0), (&V_1), NativeParallelMultiHashMap_2_TryGetFirstValue_m297922DB599560DD06C49E1FAAF426D76A1EE5C2_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// World.GetExistingSystem<SceneSystem>().UnloadScene(sceneEntity,
		//     SceneSystem.UnloadParameters.DestroySceneProxyEntity | SceneSystem.UnloadParameters.DestroySectionProxyEntities);
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_4;
		L_4 = ComponentSystemBase_get_World_mCA361EABE4397A5D3573AC569E53A2BF80AE6CDD(__this, NULL);
		NullCheck(L_4);
		SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* L_5;
		L_5 = World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED(L_4, World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_6 = ___sceneEntity0;
		NullCheck(L_5);
		SceneSystem_UnloadScene_mF2C80F036F3844D7059D8330F5F29FFF5828210C(L_5, L_6, 6, NULL);
		// return;
		goto IL_00f3;
	}

IL_0031:
	{
		// EntityManager.AddComponentData(prefabRoot, new RequestEntityPrefabLoaded() {Prefab =  weakReferenceId});
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_7;
		L_7 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_4 = L_7;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_8 = ___prefabRoot1;
		il2cpp_codegen_initobj((&V_5), sizeof(RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7));
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_9 = ___weakReferenceId2;
		(&V_5)->___Prefab_0 = L_9;
		RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 L_10 = V_5;
		bool L_11;
		L_11 = EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C((&V_4), L_8, L_10, EntityManager_AddComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mE14462DB2A342CD87FACE30E5DE80F17050D2F5C_RuntimeMethod_var);
		// int count = 0;
		V_2 = 0;
	}

IL_0056:
	{
		// EntityManager.AddComponentData(entity, new PrefabAssetReference { _ReferenceId = weakReferenceId});
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_12;
		L_12 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_4 = L_12;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736));
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_14 = ___weakReferenceId2;
		(&V_6)->____ReferenceId_0 = L_14;
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 L_15 = V_6;
		bool L_16;
		L_16 = EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8((&V_4), L_13, L_15, EntityManager_AddComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD9C48AF94BA6A964A0BC615A64B85BC8581C06A8_RuntimeMethod_var);
		// EntityManager.AddComponentData(entity, new PrefabLoadResult { PrefabRoot =  prefabRoot});
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_17;
		L_17 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_4 = L_17;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_18 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56));
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_19 = ___prefabRoot1;
		(&V_7)->___PrefabRoot_0 = L_19;
		PrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56 L_20 = V_7;
		bool L_21;
		L_21 = EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C((&V_4), L_18, L_20, EntityManager_AddComponentData_TisPrefabLoadResult_t81CAFC4F52A88EFB85401C3704EDFB2956B22E56_m5E14D60AC4606471F86056A47E0942A72405642C_RuntimeMethod_var);
		// count++;
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// } while (InProgressLoads.TryGetNextValue(out entity, ref it));
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_23 = (&__this->___InProgressLoads_1);
		bool L_24;
		L_24 = NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76(L_23, (&V_0), (&V_1), NativeParallelMultiHashMap_2_TryGetNextValue_m6CC930C9D483FC9AC67DA2415051104D71994A76_RuntimeMethod_var);
		V_8 = L_24;
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0056;
		}
	}
	{
		// InProgressLoads.Remove(weakReferenceId);
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE* L_26 = (&__this->___InProgressLoads_1);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_27 = ___weakReferenceId2;
		int32_t L_28;
		L_28 = NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC(L_26, L_27, NativeParallelMultiHashMap_2_Remove_m15616C522258270F101BAACDC295BB8389833DBC_RuntimeMethod_var);
		// LoadedPrefabs.Add(weakReferenceId, new LoadedPrefab{SceneEntity = sceneEntity, PrefabRoot = prefabRoot, RefCount = count});
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_29 = (&__this->___LoadedPrefabs_2);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_30 = ___weakReferenceId2;
		il2cpp_codegen_initobj((&V_9), sizeof(LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98));
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_31 = ___sceneEntity0;
		(&V_9)->___SceneEntity_1 = L_31;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_32 = ___prefabRoot1;
		(&V_9)->___PrefabRoot_2 = L_32;
		int32_t L_33 = V_2;
		(&V_9)->___RefCount_0 = L_33;
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_34 = V_9;
		NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3(L_29, L_30, L_34, NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody(Unity.Entities.Entity,Unity.Scenes.RequestEntityPrefabLoaded&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody_mC6D4BFB6F2F2AC30A237E41096E1650EDAFE793D (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___loadRequest1, const RuntimeMethod* method) 
{
	{
		// StartLoadRequest(e, loadRequest.Prefab);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_0 = ___e0;
		RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* L_1 = ___loadRequest1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_2 = L_1->___Prefab_0;
		WeakAssetReferenceLoadingSystem_StartLoadRequest_m3E245261F874FA4A048F4BB44669B90DEDDAB69B(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_0_Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_Execute_mF38D4FD62922AE44D71110FCD944EBFB1B3572BD (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// __Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle.Update(this);
		ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA* L_0 = (&__this->_____Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle_5);
		ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799(L_0, __this, ComponentTypeHandle_1_Update_mF52A9EFE0C326C0C6595C385579B9B1267003799_RuntimeMethod_var);
		// var __job = new WeakAssetReferenceLoadingSystem_LambdaJob_0_Job{__this = this};
		il2cpp_codegen_initobj((&V_1), sizeof(WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92));
		(&V_1)->_____this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->_____this_0), (void*)__this);
		WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92 L_1 = V_1;
		V_0 = L_1;
		// CompleteDependency();
		SystemBase_CompleteDependency_m6A50401D4D48AA0F64ABC1F99A8ABA0F34EB7BB6(__this, NULL);
		// __job.RunWithStructuralChange(WeakAssetReferenceLoadingSystem_LambdaJob_0_Query);
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_2 = __this->___WeakAssetReferenceLoadingSystem_LambdaJob_0_Query_3;
		WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_RunWithStructuralChange_mEC9713B71A2274243DFD6FDEFB162DC6E349BE19((&V_0), L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody(Unity.Entities.Entity,Unity.Scenes.PrefabAssetReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody_mFCF8BA4555184DD6C38357A2795CD14E28725D2D (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___prefabReference1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (LoadedPrefabs.TryGetValue(prefabReference._ReferenceId, out var loadedPrefab))
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_0 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_1 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_2 = L_1->____ReferenceId_0;
		bool L_3;
		L_3 = NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB(L_0, L_2, (&V_0), NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// LoadedPrefabs.Remove(prefabReference._ReferenceId);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_5 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_6 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_7 = L_6->____ReferenceId_0;
		bool L_8;
		L_8 = NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF(L_5, L_7, NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		// if (loadedPrefab.RefCount > 1)
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_9 = V_0;
		int32_t L_10 = L_9.___RefCount_0;
		V_2 = (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// loadedPrefab.RefCount--;
		int32_t* L_12 = (&(&V_0)->___RefCount_0);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// LoadedPrefabs.Add(prefabReference._ReferenceId, loadedPrefab);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_15 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_16 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_17 = L_16->____ReferenceId_0;
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_18 = V_0;
		NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3(L_15, L_17, L_18, NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		goto IL_0075;
	}

IL_005b:
	{
		// World.GetExistingSystem<SceneSystem>().UnloadScene(loadedPrefab.SceneEntity, SceneSystem.UnloadParameters.DestroySceneProxyEntity | SceneSystem.UnloadParameters.DestroySectionProxyEntities);
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_19;
		L_19 = ComponentSystemBase_get_World_mCA361EABE4397A5D3573AC569E53A2BF80AE6CDD(__this, NULL);
		NullCheck(L_19);
		SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* L_20;
		L_20 = World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED(L_19, World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_21 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_22 = L_21.___SceneEntity_1;
		NullCheck(L_20);
		SceneSystem_UnloadScene_mF2C80F036F3844D7059D8330F5F29FFF5828210C(L_20, L_22, 6, NULL);
	}

IL_0075:
	{
		goto IL_008d;
	}

IL_0078:
	{
		// InProgressLoads.Remove(prefabReference._ReferenceId, e);
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE L_23 = __this->___InProgressLoads_1;
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_24 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_25 = L_24->____ReferenceId_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_26 = ___e0;
		NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B(L_23, L_25, L_26, NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_RuntimeMethod_var);
	}

IL_008d:
	{
		// EntityManager.RemoveComponent<PrefabAssetReference>(e);
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_27;
		L_27 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_3 = L_27;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_28 = ___e0;
		bool L_29;
		L_29 = EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA((&V_3), L_28, EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::WeakAssetReferenceLoadingSystem_LambdaJob_1_Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_Execute_m18BD1055147BD8D1CE88C9BFD7C5B70817E656F2 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// __Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle.Update(this);
		ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020* L_0 = (&__this->_____Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle_6);
		ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8(L_0, __this, ComponentTypeHandle_1_Update_mC47BCB213AA89A475D0DFCB5D163272962D858C8_RuntimeMethod_var);
		// var __job = new WeakAssetReferenceLoadingSystem_LambdaJob_1_Job{__this = this};
		il2cpp_codegen_initobj((&V_1), sizeof(WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806));
		(&V_1)->_____this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->_____this_0), (void*)__this);
		WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806 L_1 = V_1;
		V_0 = L_1;
		// CompleteDependency();
		SystemBase_CompleteDependency_m6A50401D4D48AA0F64ABC1F99A8ABA0F34EB7BB6(__this, NULL);
		// __job.RunWithStructuralChange(WeakAssetReferenceLoadingSystem_LambdaJob_1_Query);
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_2 = __this->___WeakAssetReferenceLoadingSystem_LambdaJob_1_Query_4;
		WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_RunWithStructuralChange_mED2AA30B7F7E31AFEE159391798110C6E93F2C3A((&V_0), L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::OnCreateForCompiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_OnCreateForCompiler_mCD1DC5E992ABB278A55ECBBDA64A914EAAE4A7EF (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* V_0 = NULL;
	{
		// base.OnCreateForCompiler();
		ComponentSystemBase_OnCreateForCompiler_mE0B70EDF4B717B5AB04C77DC20ED957C2D69D089(__this, NULL);
		// WeakAssetReferenceLoadingSystem_LambdaJob_0_Query = GetEntityQuery(new Unity.Entities.EntityQueryDesc{All = new Unity.Entities.ComponentType[]{Unity.Entities.ComponentType.ReadWrite<Unity.Scenes.RequestEntityPrefabLoaded>()}, Any = new Unity.Entities.ComponentType[]{}, None = new Unity.Entities.ComponentType[]{Unity.Entities.ComponentType.ReadOnly<Unity.Scenes.PrefabAssetReference>()}, Options = Unity.Entities.EntityQueryOptions.Default});
		EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B* L_0 = (EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B*)(EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B*)SZArrayNew(EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B_il2cpp_TypeInfo_var, (uint32_t)1);
		EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B* L_1 = L_0;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_2 = (EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1*)il2cpp_codegen_object_new(EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EntityQueryDesc__ctor_m811E0AE92BFB5E76C084319DF05EE9E7BE24E4D6(L_2, NULL);
		V_0 = L_2;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_3 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_4 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)1);
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_5 = L_4;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_6;
		L_6 = ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529(ComponentType_ReadWrite_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m189B8672544C260BF6CC01040EB77CBC30560529_RuntimeMethod_var);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA)L_6);
		NullCheck(L_3);
		L_3->___All_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___All_2), (void*)L_5);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_7 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_8 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_7);
		L_7->___Any_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___Any_0), (void*)L_8);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_9 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_10 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)1);
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_11 = L_10;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_12;
		L_12 = ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927(ComponentType_ReadOnly_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD4C3837CDA3A79CE684C10292EC75834FD4CA927_RuntimeMethod_var);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA)L_12);
		NullCheck(L_9);
		L_9->___None_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___None_1), (void*)L_11);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_13 = V_0;
		NullCheck(L_13);
		L_13->___Options_3 = 0;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_14 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_14);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1*)L_14);
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_15;
		L_15 = ComponentSystemBase_GetEntityQuery_m2DDDDFD060F9D52C3FF4904D1711C5C4F662CC3B(__this, L_1, NULL);
		__this->___WeakAssetReferenceLoadingSystem_LambdaJob_0_Query_3 = L_15;
		// WeakAssetReferenceLoadingSystem_LambdaJob_1_Query = GetEntityQuery(new Unity.Entities.EntityQueryDesc{All = new Unity.Entities.ComponentType[]{Unity.Entities.ComponentType.ReadWrite<Unity.Scenes.PrefabAssetReference>()}, Any = new Unity.Entities.ComponentType[]{}, None = new Unity.Entities.ComponentType[]{Unity.Entities.ComponentType.ReadOnly<Unity.Scenes.RequestEntityPrefabLoaded>()}, Options = Unity.Entities.EntityQueryOptions.Default});
		EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B* L_16 = (EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B*)(EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B*)SZArrayNew(EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B_il2cpp_TypeInfo_var, (uint32_t)1);
		EntityQueryDescU5BU5D_tDAC463E207ADB3A0620DEAC74FAE23AB46A1F43B* L_17 = L_16;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_18 = (EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1*)il2cpp_codegen_object_new(EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EntityQueryDesc__ctor_m811E0AE92BFB5E76C084319DF05EE9E7BE24E4D6(L_18, NULL);
		V_0 = L_18;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_19 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_20 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)1);
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_21 = L_20;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_22;
		L_22 = ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033(ComponentType_ReadWrite_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m73F57FC60AEFCFA1C261A18BE1D8229A6A63F033_RuntimeMethod_var);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA)L_22);
		NullCheck(L_19);
		L_19->___All_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___All_2), (void*)L_21);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_23 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_24 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_23);
		L_23->___Any_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___Any_0), (void*)L_24);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_25 = V_0;
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_26 = (ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C*)SZArrayNew(ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C_il2cpp_TypeInfo_var, (uint32_t)1);
		ComponentTypeU5BU5D_t331558D7EA88D95D7A228BE9D7B0CA2EB406836C* L_27 = L_26;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_28;
		L_28 = ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001(ComponentType_ReadOnly_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m344807AC15C9D7E36015BF2A746F9BCE65EB2001_RuntimeMethod_var);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA)L_28);
		NullCheck(L_25);
		L_25->___None_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___None_1), (void*)L_27);
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_29 = V_0;
		NullCheck(L_29);
		L_29->___Options_3 = 0;
		EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1* L_30 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (EntityQueryDesc_tF763EF854EFC4D825A92A5E4DADFCF5B0750C9A1*)L_30);
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_31;
		L_31 = ComponentSystemBase_GetEntityQuery_m2DDDDFD060F9D52C3FF4904D1711C5C4F662CC3B(__this, L_17, NULL);
		__this->___WeakAssetReferenceLoadingSystem_LambdaJob_1_Query_4 = L_31;
		// __Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle = GetComponentTypeHandle<Unity.Scenes.RequestEntityPrefabLoaded>(false);
		ComponentTypeHandle_1_tD1DBB4D129456C4BC74C9724890008D6884165BA L_32;
		L_32 = ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB(__this, (bool)0, ComponentSystemBase_GetComponentTypeHandle_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m941A0517C5471E82068E5483A805B9ED3EEA82FB_RuntimeMethod_var);
		__this->_____Unity_Scenes_RequestEntityPrefabLoaded_RW_ComponentTypeHandle_5 = L_32;
		// __Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle = GetComponentTypeHandle<Unity.Scenes.PrefabAssetReference>(false);
		ComponentTypeHandle_1_t9BBE01D4894E571992CDD7BD3540F22ABB481020 L_33;
		L_33 = ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062(__this, (bool)0, ComponentSystemBase_GetComponentTypeHandle_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m98BB448758FA6F0A72FC0535D38D944E010F2062_RuntimeMethod_var);
		__this->_____Unity_Scenes_PrefabAssetReference_RW_ComponentTypeHandle_6 = L_33;
		// }
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem__ctor_mCE69AA426455F95844BE554D590D4FB3A9782AF3 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, const RuntimeMethod* method) 
{
	{
		SystemBase__ctor_m39B6958995338637EFBABA389CA0A64D018EC30D(__this, NULL);
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::<OnUpdate>b__5_0(Unity.Entities.Entity,Unity.Scenes.RequestEntityPrefabLoaded&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_U3COnUpdateU3Eb__5_0_m342E5CC951594DB01FDCE49B6191A4EB3A8E149F (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* ___loadRequest1, const RuntimeMethod* method) 
{
	{
		// StartLoadRequest(e, loadRequest.Prefab);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_0 = ___e0;
		RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7* L_1 = ___loadRequest1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_2 = L_1->___Prefab_0;
		WeakAssetReferenceLoadingSystem_StartLoadRequest_m3E245261F874FA4A048F4BB44669B90DEDDAB69B(__this, L_0, L_2, NULL);
		// }).Run();
		return;
	}
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem::<OnUpdate>b__5_1(Unity.Entities.Entity,Unity.Scenes.PrefabAssetReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_U3COnUpdateU3Eb__5_1_mDF99C5097C78CA9499538C347800483FD2F56076 (WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* __this, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___e0, PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* ___prefabReference1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (LoadedPrefabs.TryGetValue(prefabReference._ReferenceId, out var loadedPrefab))
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_0 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_1 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_2 = L_1->____ReferenceId_0;
		bool L_3;
		L_3 = NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB(L_0, L_2, (&V_0), NativeParallelHashMap_2_TryGetValue_m651423CAF8F94013BC09BE66F8183D328C60BBAB_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// LoadedPrefabs.Remove(prefabReference._ReferenceId);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_5 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_6 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_7 = L_6->____ReferenceId_0;
		bool L_8;
		L_8 = NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF(L_5, L_7, NativeParallelHashMap_2_Remove_mDD42C5E529F61AF147AA5D738E185CDB78B3C0AF_RuntimeMethod_var);
		// if (loadedPrefab.RefCount > 1)
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_9 = V_0;
		int32_t L_10 = L_9.___RefCount_0;
		V_2 = (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// loadedPrefab.RefCount--;
		int32_t* L_12 = (&(&V_0)->___RefCount_0);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// LoadedPrefabs.Add(prefabReference._ReferenceId, loadedPrefab);
		NativeParallelHashMap_2_t02C23F7FECF66B5DE072A2F0A4EF8997C2EC9C62* L_15 = (&__this->___LoadedPrefabs_2);
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_16 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_17 = L_16->____ReferenceId_0;
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_18 = V_0;
		NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3(L_15, L_17, L_18, NativeParallelHashMap_2_Add_m41832138C85B119B51525310517C2C9D82F720B3_RuntimeMethod_var);
		goto IL_0075;
	}

IL_005b:
	{
		// World.GetExistingSystem<SceneSystem>().UnloadScene(loadedPrefab.SceneEntity,
		//     SceneSystem.UnloadParameters.DestroySceneProxyEntity | SceneSystem.UnloadParameters.DestroySectionProxyEntities);
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_19;
		L_19 = ComponentSystemBase_get_World_mCA361EABE4397A5D3573AC569E53A2BF80AE6CDD(__this, NULL);
		NullCheck(L_19);
		SceneSystem_t203641A631340D55CF1384D143D3E115920AEA72* L_20;
		L_20 = World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED(L_19, World_GetExistingSystem_TisSceneSystem_t203641A631340D55CF1384D143D3E115920AEA72_m96CDB5309E5E48C46396D9511EA2CE94259770ED_RuntimeMethod_var);
		LoadedPrefab_t1ABF89D122B2FD622AF42B926AA4E41D2AF7AA98 L_21 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_22 = L_21.___SceneEntity_1;
		NullCheck(L_20);
		SceneSystem_UnloadScene_mF2C80F036F3844D7059D8330F5F29FFF5828210C(L_20, L_22, 6, NULL);
	}

IL_0075:
	{
		goto IL_008d;
	}

IL_0078:
	{
		// InProgressLoads.Remove(prefabReference._ReferenceId, e);
		NativeParallelMultiHashMap_2_t0B204AB1465DFA952E8861F25EE33B74B81EEDCE L_23 = __this->___InProgressLoads_1;
		PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736* L_24 = ___prefabReference1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_25 = L_24->____ReferenceId_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_26 = ___e0;
		NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B(L_23, L_25, L_26, NativeParallelHashMapExtensions_Remove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB1083C65B7C4AC7269231802DACF4F660666229B_RuntimeMethod_var);
	}

IL_008d:
	{
		// EntityManager.RemoveComponent<PrefabAssetReference>(e);
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_27;
		L_27 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(__this, NULL);
		V_3 = L_27;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_28 = ___e0;
		bool L_29;
		L_29 = EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA((&V_3), L_28, EntityManager_RemoveComponent_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mDFE4B5F7CFCC6714EC8A1B86E2E0F23617AE2DDA_RuntimeMethod_var);
		// }).Run();
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
// Conversion methods for marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_pinvoke(const WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92& unmarshaled, WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_pinvoke& marshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_0_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_pinvoke_back(const WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_pinvoke& marshaled, WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92& unmarshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_0_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_pinvoke_cleanup(WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_com(const WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92& unmarshaled, WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_com& marshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_0_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_com_back(const WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_com& marshaled, WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92& unmarshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_0_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshal_com_cleanup(WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92_marshaled_com& marshaled)
{
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_0_Job::RunWithStructuralChange(Unity.Entities.EntityQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_RunWithStructuralChange_mEC9713B71A2274243DFD6FDEFB162DC6E349BE19 (WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	{
		// var mask = __this.EntityManager.GetEntityQueryMask(query);
		WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_0 = __this->_____this_0;
		NullCheck(L_0);
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_1;
		L_1 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_0, NULL);
		V_3 = L_1;
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_2 = ___query0;
		EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF L_3;
		L_3 = EntityManager_GetEntityQueryMask_m8684727194E90667F6E75E18BE36250E06257861((&V_3), L_2, NULL);
		V_0 = L_3;
		// Unity.Entities.InternalCompilerInterface.UnsafeCreateGatherEntitiesResult(ref query, out var gatherEntitiesResult);
		InternalCompilerInterface_UnsafeCreateGatherEntitiesResult_mACE3055D9D7B519119682165555C728C812023AA((&___query0), (&V_1), NULL);
		// var loadRequestTypeIndex = Unity.Entities.TypeManager.GetTypeIndex<Unity.Scenes.RequestEntityPrefabLoaded>();
		il2cpp_codegen_runtime_class_init_inline(TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF(TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mAAAAC1FF4692F3A267BB64B0C02CC0B62094CFEF_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				// Unity.Entities.InternalCompilerInterface.UnsafeReleaseGatheredEntities(ref query, ref gatherEntitiesResult);
				InternalCompilerInterface_UnsafeReleaseGatheredEntities_m3FECB40955DAD1CA6FC9DE899B2C409DEA594B4F((&___query0), (&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int entityCount = gatherEntitiesResult.EntityCount;
				GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71 L_5 = V_1;
				int32_t L_6 = L_5.___EntityCount_1;
				V_4 = L_6;
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				V_5 = 0;
				goto IL_0097_1;
			}

IL_0034_1:
			{
				// var entity = Unity.Entities.InternalCompilerInterface.UnsafeGetEntityFromGatheredEntities(ref gatherEntitiesResult, entityIndex);
				int32_t L_7 = V_5;
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_8;
				L_8 = InternalCompilerInterface_UnsafeGetEntityFromGatheredEntities_mBD3BFD33B03365AFB0100D62B6724A5CB2018C07((&V_1), L_7, NULL);
				V_6 = L_8;
				// if (mask.Matches(entity))
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_9 = V_6;
				bool L_10;
				L_10 = EntityQueryMask_Matches_mEBA825285137E95230824E1B25EED6F7FDAFA0B7((&V_0), L_9, NULL);
				V_7 = L_10;
				bool L_11 = V_7;
				if (!L_11)
				{
					goto IL_0090_1;
				}
			}
			{
				// var loadRequest = Unity.Entities.InternalCompilerInterface.GetComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(__this.EntityManager, entity, loadRequestTypeIndex, out var originalloadRequest);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_12 = __this->_____this_0;
				NullCheck(L_12);
				EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_13;
				L_13 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_12, NULL);
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_14 = V_6;
				int32_t L_15 = V_2;
				RequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7 L_16;
				L_16 = InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400(L_13, L_14, L_15, (&V_9), InternalCompilerInterface_GetComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m4A3416A9BDAFEB7CE7023708E34BCF25CE76D400_RuntimeMethod_var);
				V_8 = L_16;
				// __this.WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody(entity, ref loadRequest);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_17 = __this->_____this_0;
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_18 = V_6;
				NullCheck(L_17);
				WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_0_LambdaBody_mC6D4BFB6F2F2AC30A237E41096E1650EDAFE793D(L_17, L_18, (&V_8), NULL);
				// Unity.Entities.InternalCompilerInterface.WriteComponentData<Unity.Scenes.RequestEntityPrefabLoaded>(__this.EntityManager, entity, loadRequestTypeIndex, ref loadRequest, ref originalloadRequest);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_19 = __this->_____this_0;
				NullCheck(L_19);
				EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_20;
				L_20 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_19, NULL);
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21 = V_6;
				int32_t L_22 = V_2;
				InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7(L_20, L_21, L_22, (&V_8), (&V_9), InternalCompilerInterface_WriteComponentData_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m3CB06424166D94BBB1EE1ED446C4ABED5E518AF7_RuntimeMethod_var);
			}

IL_0090_1:
			{
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0097_1:
			{
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				int32_t L_24 = V_5;
				int32_t L_25 = V_4;
				V_10 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_10;
				if (L_26)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_RunWithStructuralChange_mEC9713B71A2274243DFD6FDEFB162DC6E349BE19_AdjustorThunk (RuntimeObject* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method)
{
	WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_tD1F1B6BFCD9FDE60E7BE7E0B673FE8266CA23B92*>(__this + _offset);
	WeakAssetReferenceLoadingSystem_LambdaJob_0_Job_RunWithStructuralChange_mEC9713B71A2274243DFD6FDEFB162DC6E349BE19(_thisAdjusted, ___query0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_pinvoke(const WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806& unmarshaled, WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_pinvoke& marshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_1_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_pinvoke_back(const WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_pinvoke& marshaled, WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806& unmarshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_1_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_pinvoke_cleanup(WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_com(const WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806& unmarshaled, WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_com& marshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_1_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_com_back(const WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_com& marshaled, WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806& unmarshaled)
{
	Exception_t* _____this_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '__this' of type 'WeakAssetReferenceLoadingSystem_LambdaJob_1_Job': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(_____this_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job
IL2CPP_EXTERN_C void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshal_com_cleanup(WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806_marshaled_com& marshaled)
{
}
// System.Void Unity.Scenes.WeakAssetReferenceLoadingSystem/WeakAssetReferenceLoadingSystem_LambdaJob_1_Job::RunWithStructuralChange(Unity.Entities.EntityQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_RunWithStructuralChange_mED2AA30B7F7E31AFEE159391798110C6E93F2C3A (WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 V_8;
	memset((&V_8), 0, sizeof(V_8));
	PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	{
		// var mask = __this.EntityManager.GetEntityQueryMask(query);
		WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_0 = __this->_____this_0;
		NullCheck(L_0);
		EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_1;
		L_1 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_0, NULL);
		V_3 = L_1;
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 L_2 = ___query0;
		EntityQueryMask_tA3298547B0A6701B30F8E223B5346B40E68DDEEF L_3;
		L_3 = EntityManager_GetEntityQueryMask_m8684727194E90667F6E75E18BE36250E06257861((&V_3), L_2, NULL);
		V_0 = L_3;
		// Unity.Entities.InternalCompilerInterface.UnsafeCreateGatherEntitiesResult(ref query, out var gatherEntitiesResult);
		InternalCompilerInterface_UnsafeCreateGatherEntitiesResult_mACE3055D9D7B519119682165555C728C812023AA((&___query0), (&V_1), NULL);
		// var prefabReferenceTypeIndex = Unity.Entities.TypeManager.GetTypeIndex<Unity.Scenes.PrefabAssetReference>();
		il2cpp_codegen_runtime_class_init_inline(TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C(TypeManager_GetTypeIndex_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m0F5C42CD05288ABB66874EB7E17B27BB7AD2795C_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				// Unity.Entities.InternalCompilerInterface.UnsafeReleaseGatheredEntities(ref query, ref gatherEntitiesResult);
				InternalCompilerInterface_UnsafeReleaseGatheredEntities_m3FECB40955DAD1CA6FC9DE899B2C409DEA594B4F((&___query0), (&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int entityCount = gatherEntitiesResult.EntityCount;
				GatherEntitiesResult_t6B5ADB8C14276BC07FC1467699EDC78E6F372A71 L_5 = V_1;
				int32_t L_6 = L_5.___EntityCount_1;
				V_4 = L_6;
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				V_5 = 0;
				goto IL_0097_1;
			}

IL_0034_1:
			{
				// var entity = Unity.Entities.InternalCompilerInterface.UnsafeGetEntityFromGatheredEntities(ref gatherEntitiesResult, entityIndex);
				int32_t L_7 = V_5;
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_8;
				L_8 = InternalCompilerInterface_UnsafeGetEntityFromGatheredEntities_mBD3BFD33B03365AFB0100D62B6724A5CB2018C07((&V_1), L_7, NULL);
				V_6 = L_8;
				// if (mask.Matches(entity))
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_9 = V_6;
				bool L_10;
				L_10 = EntityQueryMask_Matches_mEBA825285137E95230824E1B25EED6F7FDAFA0B7((&V_0), L_9, NULL);
				V_7 = L_10;
				bool L_11 = V_7;
				if (!L_11)
				{
					goto IL_0090_1;
				}
			}
			{
				// var prefabReference = Unity.Entities.InternalCompilerInterface.GetComponentData<Unity.Scenes.PrefabAssetReference>(__this.EntityManager, entity, prefabReferenceTypeIndex, out var originalprefabReference);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_12 = __this->_____this_0;
				NullCheck(L_12);
				EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_13;
				L_13 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_12, NULL);
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_14 = V_6;
				int32_t L_15 = V_2;
				PrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736 L_16;
				L_16 = InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C(L_13, L_14, L_15, (&V_9), InternalCompilerInterface_GetComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_m5DDBDAA116B4268452987D81EC97405361186B2C_RuntimeMethod_var);
				V_8 = L_16;
				// __this.WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody(entity, ref prefabReference);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_17 = __this->_____this_0;
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_18 = V_6;
				NullCheck(L_17);
				WeakAssetReferenceLoadingSystem_WeakAssetReferenceLoadingSystem_LambdaJob_1_LambdaBody_mFCF8BA4555184DD6C38357A2795CD14E28725D2D(L_17, L_18, (&V_8), NULL);
				// Unity.Entities.InternalCompilerInterface.WriteComponentData<Unity.Scenes.PrefabAssetReference>(__this.EntityManager, entity, prefabReferenceTypeIndex, ref prefabReference, ref originalprefabReference);
				WeakAssetReferenceLoadingSystem_t60BB3F017CD2C770A2DDC3C92043C86F40826181* L_19 = __this->_____this_0;
				NullCheck(L_19);
				EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 L_20;
				L_20 = ComponentSystemBase_get_EntityManager_mB0505034AB04061030BABADB8A1F6C3112AFEB3A(L_19, NULL);
				Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_21 = V_6;
				int32_t L_22 = V_2;
				InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11(L_20, L_21, L_22, (&V_8), (&V_9), InternalCompilerInterface_WriteComponentData_TisPrefabAssetReference_t5ED5CF37BAB8B0CA45F2B99F97AA5447955E9736_mD10CB3B6CD87ED674C7566B20895BC276C6BEC11_RuntimeMethod_var);
			}

IL_0090_1:
			{
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0097_1:
			{
				// for (int entityIndex = 0; entityIndex != entityCount; entityIndex++)
				int32_t L_24 = V_5;
				int32_t L_25 = V_4;
				V_10 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_10;
				if (L_26)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_RunWithStructuralChange_mED2AA30B7F7E31AFEE159391798110C6E93F2C3A_AdjustorThunk (RuntimeObject* __this, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___query0, const RuntimeMethod* method)
{
	WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_tEF34CAAF5721B5FF847A4EFC13672B222348E806*>(__this + _offset);
	WeakAssetReferenceLoadingSystem_LambdaJob_1_Job_RunWithStructuralChange_mED2AA30B7F7E31AFEE159391798110C6E93F2C3A(_thisAdjusted, ___query0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void __JobReflectionRegistrationOutput__3053272308::CreateJobReflectionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __JobReflectionRegistrationOutput__3053272308_CreateJobReflectionData_m78E625F2C86108EEC5C484918EF98DDBDDA32274 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA(JobEntityBatchExtensions_EarlyJobInit_TisRemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_m33151C2B0E44EE89910C85E32092BFE94B8C57EA_RuntimeMethod_var);
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Exception)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RemoveLiveConversionSceneState_t45AEC710EE6D2188B23C383552AF957C68F49CF6_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		EarlyInitHelpers_JobReflectionDataCreationFailed_m385E2249E15484F8BCB1A1EA9BA9AFB7EB425109(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), L_1, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
	}
	try
	{// begin try (depth: 1)
		JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B(JobEntityBatchExtensions_EarlyJobInit_TisSceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_m4E077EF36F05B2173858C99E2AC5B73752A7CE7B_RuntimeMethod_var);
		goto IL_003f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(System.Exception)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneSectionStreamingSystem_LambdaJob_0_Job_tF63EF98C34C3AAA13321DFF3E526B08AD1231116_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		EarlyInitHelpers_JobReflectionDataCreationFailed_m385E2249E15484F8BCB1A1EA9BA9AFB7EB425109(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), L_3, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void __JobReflectionRegistrationOutput__3053272308::EarlyInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __JobReflectionRegistrationOutput__3053272308_EarlyInit_m0A0EDE365880AFD9A6188FE06ADEA159D1CAB7DA (const RuntimeMethod* method) 
{
	{
		__JobReflectionRegistrationOutput__3053272308_CreateJobReflectionData_m78E625F2C86108EEC5C484918EF98DDBDDA32274(NULL);
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
// System.Void Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Scenes_GameObjectSceneData_PropertyBag__ctor_m3EEEB86FE2834BF7230FD48DF8D2014B9567C588 (Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ContainerPropertyBag_1_t0F29072F7E471D634F56F2A78C3BA1C1B8CB1B5E_il2cpp_TypeInfo_var);
		ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE(__this, ContainerPropertyBag_1__ctor_mA6305DAEB946DA4B49CEDFC81D5B5D7DAE6ED5AE_RuntimeMethod_var);
		Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* L_0 = (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D*)il2cpp_codegen_object_new(Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Scene_Property__ctor_mB224F61FACB7F90E92740AEB85E206852D6616C7(L_0, NULL);
		ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F(__this, L_0, ContainerPropertyBag_1_AddProperty_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m9A8F43BABCBADE529C60ECBF0E472AD923645F8F_RuntimeMethod_var);
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
// System.String Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_Property_get_Name_m0BAD2DFA2C00782299911422BF247EC6D40D6326 (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD;
	}
}
// System.Boolean Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Property_get_IsReadOnly_m4F2652B7964FF2BE489AC36B4DA6908E13F21FBE (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Property__ctor_mB224F61FACB7F90E92740AEB85E206852D6616C7 (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235(__this, Property_2__ctor_mE8811E4A52C343B55143CB5B82BFE71C55190235_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.SceneManagement.Scene Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::GetValue(Unity.Scenes.GameObjectSceneData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 Scene_Property_GetValue_mF16F738EE65D6A803269D1A95ADDB755F50E15DD (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, GameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278* ___container0, const RuntimeMethod* method) 
{
	{
		GameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278* L_0 = ___container0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1 = L_0->___Scene_0;
		return L_1;
	}
}
// System.Void Unity.Properties.Generated.Unity_Scenes_GameObjectSceneData_PropertyBag/Scene_Property::SetValue(Unity.Scenes.GameObjectSceneData&,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Property_SetValue_m4B62F78EB52C864327B066D066FE0BE899DC4EF2 (Scene_Property_t4F5DE3CBB99F96B24AC1D216530FB280E81EE76D* __this, GameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278* ___container0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___value1, const RuntimeMethod* method) 
{
	{
		GameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278* L_0 = ___container0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1 = ___value1;
		L_0->___Scene_0 = L_1;
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
// System.Void Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngine_SceneManagement_Scene_PropertyBag__ctor_m617EB7827A97FE1DDBB2747E8703B520B8B03E63 (UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ContainerPropertyBag_1_t5ACF6AE2F5BCBCF1C859A4B1E394FCCD8DEED5EF_il2cpp_TypeInfo_var);
		ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654(__this, ContainerPropertyBag_1__ctor_mAC024DEE0E33E73285C16C97886D77B9523C9654_RuntimeMethod_var);
		m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F* L_0 = (m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F*)il2cpp_codegen_object_new(m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		m_Handle__ctor_mBECE430280C87905EF9830F143149EB36552197D(L_0, NULL);
		ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955(__this, L_0, ContainerPropertyBag_1_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF51E6E4E5CE2C8D6D4BCAEF042861106527C6955_RuntimeMethod_var);
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
// System.Void Unity.Properties.Generated.UnityEngine_SceneManagement_Scene_PropertyBag/m_Handle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void m_Handle__ctor_mBECE430280C87905EF9830F143149EB36552197D (m_Handle_tC7B2DAD07C2C33324B7A551A5986C2B9D32CBB6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tA1DC762B79745EB5140F054C884855B922318356_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2325C363A9392C027893DBF069AB2A86AEB5CCC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Scene_tA1DC762B79745EB5140F054C884855B922318356_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		FieldInfo_t* L_2;
		L_2 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral2325C363A9392C027893DBF069AB2A86AEB5CCC7, ((int32_t)36));
		ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0(__this, L_2, _stringLiteral2325C363A9392C027893DBF069AB2A86AEB5CCC7, ReflectedMemberProperty_2__ctor_mFB843AB9ACC70FAE3017F738DC1A5C7F93A295F0_RuntimeMethod_var);
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
// System.Void Unity.Properties.Generated.Unity_Scenes_SceneSectionBundle_PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_Scenes_SceneSectionBundle_PropertyBag__ctor_m1678EEFC1C4E33E180AB277A94920EF06FB2A49C (Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ContainerPropertyBag_1_t77ED517AD659CEE69418E1A6194376CBFF4AC7FF_il2cpp_TypeInfo_var);
		ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7(__this, ContainerPropertyBag_1__ctor_mE90E36972272772E37BD56B458158808519332F7_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagRegistry_Initialize_m75161523BCA408392C3E4BB24E4F5290F0A2266F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794* L_0 = (Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794*)il2cpp_codegen_object_new(Unity_Scenes_GameObjectSceneData_PropertyBag_t063C54DBBDB90DCED262AC422BB66B03D2C0A794_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Unity_Scenes_GameObjectSceneData_PropertyBag__ctor_m3EEEB86FE2834BF7230FD48DF8D2014B9567C588(L_0, NULL);
		PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13(L_0, PropertyBag_Register_TisGameObjectSceneData_tCEFD22C9224DFA29848641AD7CDCDC6E9EDD2278_m6292DDBA1AF7A02A3204CFE548CF0F28CE5E9B13_RuntimeMethod_var);
		UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5* L_1 = (UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5*)il2cpp_codegen_object_new(UnityEngine_SceneManagement_Scene_PropertyBag_t899B6CFE55837FB8237FCAD1EE86459CCCBFE3E5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEngine_SceneManagement_Scene_PropertyBag__ctor_m617EB7827A97FE1DDBB2747E8703B520B8B03E63(L_1, NULL);
		PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73(L_1, PropertyBag_Register_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3ACC5D9227EDE42395F61BF45B9890FD6FC80A73_RuntimeMethod_var);
		Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D* L_2 = (Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D*)il2cpp_codegen_object_new(Unity_Scenes_SceneSectionBundle_PropertyBag_t83BCA0AD426A1E3DFC25283526FA7B5F41EB7D8D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Unity_Scenes_SceneSectionBundle_PropertyBag__ctor_m1678EEFC1C4E33E180AB277A94920EF06FB2A49C(L_2, NULL);
		PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290(L_2, PropertyBag_Register_TisSceneSectionBundle_t0DCAEEF3142734B193EF57B4F3F9D4F934F78937_m96B04B8F9E7520045A3B2E103872E57CEC147290_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_mAC4915B3E6124009578A3A383E1D5BEFC062C77E (const RuntimeMethod* method) 
{
	{
		SceneSectionStreamingSystem_InitializeU24SceneSectionStreamingSystem_LambdaJob_0_Job_RunWithoutJobSystem_000000E5U24BurstDirectCall_mCA4B641A798ACC5264BBBA8D9DC552C27CC66B2A(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
