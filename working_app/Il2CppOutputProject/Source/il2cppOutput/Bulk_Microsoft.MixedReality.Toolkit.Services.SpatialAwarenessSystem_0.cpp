#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct GenericVirtActionInvoker2
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7;
// Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t4AC32F95A850DDFC479BC8DCA78F87E33584ECF4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t8F333E1BB0BBE25581EEC55DB0B74307E01E9E94;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService
struct IMixedRealityService_t0B8D0EC138B16B2FC1A9C359A57A74829F7F2563;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService[]
struct IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t811C59BBC6515F6C30820D3342E6385093ECAF19;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver[]
struct IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_tBDC277E48EB85AABE9C115382DF433C1FAC2D6F6;
// Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem
struct BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB;
// Microsoft.MixedReality.Toolkit.Core.Services.BaseService
struct BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC;
// Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817;
// Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem/<>c
struct U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>
struct IEnumerable_1_t1470832B1E0670BE3D7FB889184E44AB01F60F13;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t88A4E9E2227576782FA012A93A885BE595FA5D6E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>
struct List_1_t1F206C421814CCC64FC9C6B137762325D4724E20;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>>
struct List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>>
struct EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

extern RuntimeClass* BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityService_t0B8D0EC138B16B2FC1A9C359A57A74829F7F2563_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1F206C421814CCC64FC9C6B137762325D4724E20_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
extern String_t* _stringLiteralEB05C129FC93EC7CAEA1FA910C3E3DC242F56111;
extern const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_m30B0FD6BAA6850A1817871BB824D380D71C20958_RuntimeMethod_var;
extern const RuntimeMethod* EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mB36D286C313F787189171248D2FD0F27682419F5_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m52CB2C79B8F1385BB43AD89AFB25ED2E64D18F60_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1F77CCCA918ED7324A5F085250CBD31C950E6139_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m76A502143ADD8C5876762E11DCDFBF12D0CBBA5B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m53D87D05AF25992CE41A2C455AE8D92349CF226E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1C0DD00CB17B194D9916729977A21D839837BDA2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_mA9950DD9DBF729225D148DE68DCA94B703B17814_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_0_m1F6D0AB7AEA5B20DBAC31D97E15F647591F71258_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_1_m76207DFB5034A119E5BF88D841714D94E962AD95_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_2_mA6F40FF9FC939434C82CCA19DE29D60E4A42DFC3_RuntimeMethod_var;
extern const RuntimeType* IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_0_0_0_var;
extern const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m490D1F97D0B8A5356490EE9253E12F72821DB97E_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_m21AABA42F0D7C0098253E0F74AFC2CECDAD1EEA2_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m6285A3611134F8F2DF7E50C37771CF20574B2B6F_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Enable_mB62B430C95E315CE9A0083BAF1EA176B7541E1AE_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m435371DCDCF88E93EF8884C04A59E3B163D17E8A_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m78AF098E060BB747ACEFDE715A3F21D20C221CDD_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m552A47F43A169456D7562D5E504336ED02D4A2DB_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m458FFEA12C2EAAB1DCD3C1ECB736BFBB52358AFA_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mA49AF8D5E363EE550F0F1CC2AD142F721007337A_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_mCD294EA6EB8C25867C712ADE48D5A56C00A74B30_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_m0C5EAF99582E1EAEFA5196DD7E5C57C5481AAAEE_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem__cctor_mA481284B75594A496B727F796B28CC43FD4B26DA_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem__ctor_m14BEC1FA00B6279CB8CA80AC4CE8ECF2A0A2643E_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m5E5392CE7D41FF2C9DF345BD7F3061F32B506C55_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mB67B5A2CB939893CEA7D3EC1813B91D8965F9E2A_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_0_m1F6D0AB7AEA5B20DBAC31D97E15F647591F71258_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_1_m76207DFB5034A119E5BF88D841714D94E962AD95_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_2_mA6F40FF9FC939434C82CCA19DE29D60E4A42DFC3_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mF19935F43CA6023A6C719DD5E335290BDE05D100_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#define U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t44B733462DE5B14B2B58B57D985D3CFAFB864580 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASESPATIALAWARENESSOBJECT_T3CA04F868CBD5D9B8D69D20022550DB591D21E8E_H
#define BASESPATIALAWARENESSOBJECT_T3CA04F868CBD5D9B8D69D20022550DB591D21E8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.BaseSpatialAwarenessObject
struct  BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameObjectU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRendererU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilterU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESPATIALAWARENESSOBJECT_T3CA04F868CBD5D9B8D69D20022550DB591D21E8E_H
#ifndef BASESERVICE_T49FA0CBEE4377921759C41E76FFB92942F6D96BA_H
#define BASESERVICE_T49FA0CBEE4377921759C41E76FFB92942F6D96BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.BaseService
struct  BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Services.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Services.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.BaseService::disposed
	bool ___disposed_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA, ___U3CPriorityU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_1() const { return ___U3CPriorityU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_1() { return &___U3CPriorityU3Ek__BackingField_1; }
	inline void set_U3CPriorityU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESERVICE_T49FA0CBEE4377921759C41E76FFB92942F6D96BA_H
#ifndef U3CU3EC_T89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_H
#define U3CU3EC_T89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c
struct  U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::<>9
	U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T1434013D3C4DE6A9543D6FE3EBE4FABFA4331116_H
#define LIST_1_T1434013D3C4DE6A9543D6FE3EBE4FABFA4331116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct  List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116, ____items_1)); }
	inline IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* get__items_1() const { return ____items_1; }
	inline IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116_StaticFields, ____emptyArray_5)); }
	inline IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMixedRealityServiceU5BU5D_t3F3AC0B6166D7126B9B7D5E11E05E8FB6D300309* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1434013D3C4DE6A9543D6FE3EBE4FABFA4331116_H
#ifndef LIST_1_T1F206C421814CCC64FC9C6B137762325D4724E20_H
#define LIST_1_T1F206C421814CCC64FC9C6B137762325D4724E20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>
struct  List_1_t1F206C421814CCC64FC9C6B137762325D4724E20  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20, ____items_1)); }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* get__items_1() const { return ____items_1; }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1F206C421814CCC64FC9C6B137762325D4724E20_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20_StaticFields, ____emptyArray_5)); }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMixedRealitySpatialAwarenessObserverU5BU5D_tC7D26AA69D5E5DA981956E38F00FC41863FDCE42* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1F206C421814CCC64FC9C6B137762325D4724E20_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef SPATIALAWARENESSMESHOBJECT_T6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF_H
#define SPATIALAWARENESSMESHOBJECT_T6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject
struct  SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF  : public BaseSpatialAwarenessObject_t3CA04F868CBD5D9B8D69D20022550DB591D21E8E
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColliderU3Ek__BackingField_5), value);
	}
};

struct SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject::requiredMeshComponents
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___requiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_requiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF_StaticFields, ___requiredMeshComponents_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_requiredMeshComponents_4() const { return ___requiredMeshComponents_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_requiredMeshComponents_4() { return &___requiredMeshComponents_4; }
	inline void set_requiredMeshComponents_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___requiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((&___requiredMeshComponents_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALAWARENESSMESHOBJECT_T6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF_H
#ifndef BASEEVENTSYSTEM_T6619DD7F44699242EDC2CC914B0C7AC071B75CEB_H
#define BASEEVENTSYSTEM_T6619DD7F44699242EDC2CC914B0C7AC071B75CEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem
struct  BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB  : public BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA
{
public:
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::doneExecutingEvents
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___doneExecutingEvents_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::<EventListeners>k__BackingField
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___U3CEventListenersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_doneExecutingEvents_4() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB, ___doneExecutingEvents_4)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_doneExecutingEvents_4() const { return ___doneExecutingEvents_4; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_doneExecutingEvents_4() { return &___doneExecutingEvents_4; }
	inline void set_doneExecutingEvents_4(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___doneExecutingEvents_4 = value;
		Il2CppCodeGenWriteBarrier((&___doneExecutingEvents_4), value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB, ___U3CEventListenersU3Ek__BackingField_5)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_U3CEventListenersU3Ek__BackingField_5() const { return ___U3CEventListenersU3Ek__BackingField_5; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_U3CEventListenersU3Ek__BackingField_5() { return &___U3CEventListenersU3Ek__BackingField_5; }
	inline void set_U3CEventListenersU3Ek__BackingField_5(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___U3CEventListenersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventListenersU3Ek__BackingField_5), value);
	}
};

struct BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::isExecutingEvents
	bool ___isExecutingEvents_3;

public:
	inline static int32_t get_offset_of_isExecutingEvents_3() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_StaticFields, ___isExecutingEvents_3)); }
	inline bool get_isExecutingEvents_3() const { return ___isExecutingEvents_3; }
	inline bool* get_address_of_isExecutingEvents_3() { return &___isExecutingEvents_3; }
	inline void set_isExecutingEvents_3(bool value)
	{
		___isExecutingEvents_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTSYSTEM_T6619DD7F44699242EDC2CC914B0C7AC071B75CEB_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#define GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData
struct  GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#ifndef MIXEDREALITYSPATIALAWARENESSSYSTEM_T0632CEACFC9324B88E2009DF77C82DA1E2510817_H
#define MIXEDREALITYSPATIALAWARENESSSYSTEM_T0632CEACFC9324B88E2009DF77C82DA1E2510817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem
struct  MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817  : public BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB
{
public:
	// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * ___meshEventData_6;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::observers
	List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * ___observers_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_8;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_9;

public:
	inline static int32_t get_offset_of_meshEventData_6() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817, ___meshEventData_6)); }
	inline MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * get_meshEventData_6() const { return ___meshEventData_6; }
	inline MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD ** get_address_of_meshEventData_6() { return &___meshEventData_6; }
	inline void set_meshEventData_6(MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * value)
	{
		___meshEventData_6 = value;
		Il2CppCodeGenWriteBarrier((&___meshEventData_6), value);
	}

	inline static int32_t get_offset_of_observers_7() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817, ___observers_7)); }
	inline List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * get_observers_7() const { return ___observers_7; }
	inline List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 ** get_address_of_observers_7() { return &___observers_7; }
	inline void set_observers_7(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * value)
	{
		___observers_7 = value;
		Il2CppCodeGenWriteBarrier((&___observers_7), value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_8() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817, ___spatialAwarenessObjectParent_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_8() const { return ___spatialAwarenessObjectParent_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_8() { return &___spatialAwarenessObjectParent_8; }
	inline void set_spatialAwarenessObjectParent_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_8 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessObjectParent_8), value);
	}

	inline static int32_t get_offset_of_nextSourceId_9() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817, ___nextSourceId_9)); }
	inline uint32_t get_nextSourceId_9() const { return ___nextSourceId_9; }
	inline uint32_t* get_address_of_nextSourceId_9() { return &___nextSourceId_9; }
	inline void set_nextSourceId_9(uint32_t value)
	{
		___nextSourceId_9 = value;
	}
};

struct MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::OnMeshAdded
	EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * ___OnMeshAdded_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::OnMeshUpdated
	EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * ___OnMeshUpdated_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::OnMeshRemoved
	EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * ___OnMeshRemoved_12;

public:
	inline static int32_t get_offset_of_OnMeshAdded_10() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields, ___OnMeshAdded_10)); }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * get_OnMeshAdded_10() const { return ___OnMeshAdded_10; }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 ** get_address_of_OnMeshAdded_10() { return &___OnMeshAdded_10; }
	inline void set_OnMeshAdded_10(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * value)
	{
		___OnMeshAdded_10 = value;
		Il2CppCodeGenWriteBarrier((&___OnMeshAdded_10), value);
	}

	inline static int32_t get_offset_of_OnMeshUpdated_11() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields, ___OnMeshUpdated_11)); }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * get_OnMeshUpdated_11() const { return ___OnMeshUpdated_11; }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 ** get_address_of_OnMeshUpdated_11() { return &___OnMeshUpdated_11; }
	inline void set_OnMeshUpdated_11(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * value)
	{
		___OnMeshUpdated_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnMeshUpdated_11), value);
	}

	inline static int32_t get_offset_of_OnMeshRemoved_12() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields, ___OnMeshRemoved_12)); }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * get_OnMeshRemoved_12() const { return ___OnMeshRemoved_12; }
	inline EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 ** get_address_of_OnMeshRemoved_12() { return &___OnMeshRemoved_12; }
	inline void set_OnMeshRemoved_12(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * value)
	{
		___OnMeshRemoved_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnMeshRemoved_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSSYSTEM_T0632CEACFC9324B88E2009DF77C82DA1E2510817_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD  : public MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF
{
public:
	// T Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSpatialObjectU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef EVENTFUNCTION_1_T3931F657A917125C196724A115BA45F7EFDE0215_H
#define EVENTFUNCTION_1_T3931F657A917125C196724A115BA45F7EFDE0215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>>
struct  EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T3931F657A917125C196724A115BA45F7EFDE0215_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#define MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct  MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * ___activeProfile_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::mixedRealityPlayspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mixedRealityPlayspace_13;

public:
	inline static int32_t get_offset_of_activeProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC, ___activeProfile_7)); }
	inline MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * get_activeProfile_7() const { return ___activeProfile_7; }
	inline MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 ** get_address_of_activeProfile_7() { return &___activeProfile_7; }
	inline void set_activeProfile_7(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * value)
	{
		___activeProfile_7 = value;
		Il2CppCodeGenWriteBarrier((&___activeProfile_7), value);
	}

	inline static int32_t get_offset_of_mixedRealityPlayspace_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC, ___mixedRealityPlayspace_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mixedRealityPlayspace_13() const { return ___mixedRealityPlayspace_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mixedRealityPlayspace_13() { return &___mixedRealityPlayspace_13; }
	inline void set_mixedRealityPlayspace_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mixedRealityPlayspace_13 = value;
		Il2CppCodeGenWriteBarrier((&___mixedRealityPlayspace_13), value);
	}
};

struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::isInitializing
	bool ___isInitializing_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::activeSystems
	Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * ___activeSystems_8;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::registeredMixedRealityServices
	List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * ___registeredMixedRealityServices_9;
	// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::instance
	MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * ___instance_10;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::initializedLock
	RuntimeObject * ___initializedLock_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::searchForInstance
	bool ___searchForInstance_12;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::inputSystem
	RuntimeObject* ___inputSystem_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logInputSystem
	bool ___logInputSystem_15;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::boundarySystem
	RuntimeObject* ___boundarySystem_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logBoundarySystem
	bool ___logBoundarySystem_17;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::spatialAwarenessSystem
	RuntimeObject* ___spatialAwarenessSystem_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logSpatialAwarenessSystem
	bool ___logSpatialAwarenessSystem_19;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::teleportSystem
	RuntimeObject* ___teleportSystem_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logTeleportSystem
	bool ___logTeleportSystem_21;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::diagnosticsSystem
	RuntimeObject* ___diagnosticsSystem_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logDiagnosticsSystem
	bool ___logDiagnosticsSystem_23;

public:
	inline static int32_t get_offset_of_isInitializing_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___isInitializing_5)); }
	inline bool get_isInitializing_5() const { return ___isInitializing_5; }
	inline bool* get_address_of_isInitializing_5() { return &___isInitializing_5; }
	inline void set_isInitializing_5(bool value)
	{
		___isInitializing_5 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___isApplicationQuitting_6)); }
	inline bool get_isApplicationQuitting_6() const { return ___isApplicationQuitting_6; }
	inline bool* get_address_of_isApplicationQuitting_6() { return &___isApplicationQuitting_6; }
	inline void set_isApplicationQuitting_6(bool value)
	{
		___isApplicationQuitting_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___activeSystems_8)); }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * get_activeSystems_8() const { return ___activeSystems_8; }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F ** get_address_of_activeSystems_8() { return &___activeSystems_8; }
	inline void set_activeSystems_8(Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * value)
	{
		___activeSystems_8 = value;
		Il2CppCodeGenWriteBarrier((&___activeSystems_8), value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___registeredMixedRealityServices_9)); }
	inline List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * get_registeredMixedRealityServices_9() const { return ___registeredMixedRealityServices_9; }
	inline List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 ** get_address_of_registeredMixedRealityServices_9() { return &___registeredMixedRealityServices_9; }
	inline void set_registeredMixedRealityServices_9(List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * value)
	{
		___registeredMixedRealityServices_9 = value;
		Il2CppCodeGenWriteBarrier((&___registeredMixedRealityServices_9), value);
	}

	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___instance_10)); }
	inline MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * get_instance_10() const { return ___instance_10; }
	inline MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___instance_10), value);
	}

	inline static int32_t get_offset_of_initializedLock_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___initializedLock_11)); }
	inline RuntimeObject * get_initializedLock_11() const { return ___initializedLock_11; }
	inline RuntimeObject ** get_address_of_initializedLock_11() { return &___initializedLock_11; }
	inline void set_initializedLock_11(RuntimeObject * value)
	{
		___initializedLock_11 = value;
		Il2CppCodeGenWriteBarrier((&___initializedLock_11), value);
	}

	inline static int32_t get_offset_of_searchForInstance_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___searchForInstance_12)); }
	inline bool get_searchForInstance_12() const { return ___searchForInstance_12; }
	inline bool* get_address_of_searchForInstance_12() { return &___searchForInstance_12; }
	inline void set_searchForInstance_12(bool value)
	{
		___searchForInstance_12 = value;
	}

	inline static int32_t get_offset_of_inputSystem_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___inputSystem_14)); }
	inline RuntimeObject* get_inputSystem_14() const { return ___inputSystem_14; }
	inline RuntimeObject** get_address_of_inputSystem_14() { return &___inputSystem_14; }
	inline void set_inputSystem_14(RuntimeObject* value)
	{
		___inputSystem_14 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_14), value);
	}

	inline static int32_t get_offset_of_logInputSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logInputSystem_15)); }
	inline bool get_logInputSystem_15() const { return ___logInputSystem_15; }
	inline bool* get_address_of_logInputSystem_15() { return &___logInputSystem_15; }
	inline void set_logInputSystem_15(bool value)
	{
		___logInputSystem_15 = value;
	}

	inline static int32_t get_offset_of_boundarySystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___boundarySystem_16)); }
	inline RuntimeObject* get_boundarySystem_16() const { return ___boundarySystem_16; }
	inline RuntimeObject** get_address_of_boundarySystem_16() { return &___boundarySystem_16; }
	inline void set_boundarySystem_16(RuntimeObject* value)
	{
		___boundarySystem_16 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystem_16), value);
	}

	inline static int32_t get_offset_of_logBoundarySystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logBoundarySystem_17)); }
	inline bool get_logBoundarySystem_17() const { return ___logBoundarySystem_17; }
	inline bool* get_address_of_logBoundarySystem_17() { return &___logBoundarySystem_17; }
	inline void set_logBoundarySystem_17(bool value)
	{
		___logBoundarySystem_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystem_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___spatialAwarenessSystem_18)); }
	inline RuntimeObject* get_spatialAwarenessSystem_18() const { return ___spatialAwarenessSystem_18; }
	inline RuntimeObject** get_address_of_spatialAwarenessSystem_18() { return &___spatialAwarenessSystem_18; }
	inline void set_spatialAwarenessSystem_18(RuntimeObject* value)
	{
		___spatialAwarenessSystem_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystem_18), value);
	}

	inline static int32_t get_offset_of_logSpatialAwarenessSystem_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logSpatialAwarenessSystem_19)); }
	inline bool get_logSpatialAwarenessSystem_19() const { return ___logSpatialAwarenessSystem_19; }
	inline bool* get_address_of_logSpatialAwarenessSystem_19() { return &___logSpatialAwarenessSystem_19; }
	inline void set_logSpatialAwarenessSystem_19(bool value)
	{
		___logSpatialAwarenessSystem_19 = value;
	}

	inline static int32_t get_offset_of_teleportSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___teleportSystem_20)); }
	inline RuntimeObject* get_teleportSystem_20() const { return ___teleportSystem_20; }
	inline RuntimeObject** get_address_of_teleportSystem_20() { return &___teleportSystem_20; }
	inline void set_teleportSystem_20(RuntimeObject* value)
	{
		___teleportSystem_20 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystem_20), value);
	}

	inline static int32_t get_offset_of_logTeleportSystem_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logTeleportSystem_21)); }
	inline bool get_logTeleportSystem_21() const { return ___logTeleportSystem_21; }
	inline bool* get_address_of_logTeleportSystem_21() { return &___logTeleportSystem_21; }
	inline void set_logTeleportSystem_21(bool value)
	{
		___logTeleportSystem_21 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystem_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___diagnosticsSystem_22)); }
	inline RuntimeObject* get_diagnosticsSystem_22() const { return ___diagnosticsSystem_22; }
	inline RuntimeObject** get_address_of_diagnosticsSystem_22() { return &___diagnosticsSystem_22; }
	inline void set_diagnosticsSystem_22(RuntimeObject* value)
	{
		___diagnosticsSystem_22 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystem_22), value);
	}

	inline static int32_t get_offset_of_logDiagnosticsSystem_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logDiagnosticsSystem_23)); }
	inline bool get_logDiagnosticsSystem_23() const { return ___logDiagnosticsSystem_23; }
	inline bool* get_address_of_logDiagnosticsSystem_23() { return &___logDiagnosticsSystem_23; }
	inline void set_logDiagnosticsSystem_23(bool value)
	{
		___logDiagnosticsSystem_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#define EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H


// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_mE2FA6AB4527B9DFB32AA938279D064A01C2D669C_gshared (MixedRealitySpatialAwarenessEventData_1_t4AC32F95A850DDFC479BC8DCA78F87E33584ECF4 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m03A4F72E8CAA4412A6F9FC3949B2588C53EA9E8C_gshared (MixedRealitySpatialAwarenessEventData_1_t4AC32F95A850DDFC479BC8DCA78F87E33584ECF4 * __this, RuntimeObject* p0, int32_t p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Initialize()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Initialize_m3B085740FAACB15EF2184B21595BCC115C7545BA (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_mA9950DD9DBF729225D148DE68DCA94B703B17814 (MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD *, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_mE2FA6AB4527B9DFB32AA938279D064A01C2D669C_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Disable()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Disable_m91E9A5065D6463A080D7E169B7BFD600C0E604DC (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::Clear()
inline void List_1_Clear_m52CB2C79B8F1385BB43AD89AFB25ED2E64D18F60 (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Enable()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Enable_m0DB19A84FF2E47476885E08D57FD83324F6A6969 (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::get_Count()
inline int32_t List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::GetActiveServices(System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * MixedRealityToolkit_GetActiveServices_m721BFE10B432F3FD47CF1DC7A6DBB8E3E34CCBD5 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, Type_t * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m1C0DD00CB17B194D9916729977A21D839837BDA2 (List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::Add(!0)
inline void List_1_Add_mB36D286C313F787189171248D2FD0F27682419F5 (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>::get_Count()
inline int32_t List_1_get_Count_m53D87D05AF25992CE41A2C455AE8D92349CF226E (List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Reset()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Reset_mAC98CD5A301273CF341E02202B0790C18198614C (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m5E5392CE7D41FF2C9DF345BD7F3061F32B506C55 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mB67B5A2CB939893CEA7D3EC1813B91D8965F9E2A (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m76A502143ADD8C5876762E11DCDFBF12D0CBBA5B (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08 (MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * __this, RuntimeObject* p0, int32_t p1, SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * p2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD *, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m03A4F72E8CAA4412A6F9FC3949B2588C53EA9E8C_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver>::.ctor()
inline void List_1__ctor_m1F77CCCA918ED7324A5F085250CBD31C950E6139 (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421 (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083 (EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D8858A5657467BDA21871E49E0D329DEA8D6292 (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method)
{
	return ((  MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared)(p0, method);
}
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
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_m397241E764E57C39F91A2C8669065C48E432E036 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m3B085740FAACB15EF2184B21595BCC115C7545BA(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData = new MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = (MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_mA9950DD9DBF729225D148DE68DCA94B703B17814(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_mA9950DD9DBF729225D148DE68DCA94B703B17814_RuntimeMethod_var);
		__this->set_meshEventData_6(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::Disable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m6285A3611134F8F2DF7E50C37771CF20574B2B6F (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m6285A3611134F8F2DF7E50C37771CF20574B2B6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Disable();
		BaseService_Disable_m91E9A5065D6463A080D7E169B7BFD600C0E604DC(__this, /*hidden argument*/NULL);
		// observers.Clear();
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		NullCheck(L_0);
		List_1_Clear_m52CB2C79B8F1385BB43AD89AFB25ED2E64D18F60(L_0, /*hidden argument*/List_1_Clear_m52CB2C79B8F1385BB43AD89AFB25ED2E64D18F60_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::Enable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_mB62B430C95E315CE9A0083BAF1EA176B7541E1AE (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Enable_mB62B430C95E315CE9A0083BAF1EA176B7541E1AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// base.Enable();
		BaseService_Enable_m0DB19A84FF2E47476885E08D57FD83324F6A6969(__this, /*hidden argument*/NULL);
		// if (observers.Count != 0)
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE(L_0, /*hidden argument*/List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning("The spatial awareness system is already enabled.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEB05C129FC93EC7CAEA1FA910C3E3DC242F56111, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// List<Core.Interfaces.IMixedRealityService> services = MixedRealityToolkit.Instance.GetActiveServices(typeof(IMixedRealitySpatialAwarenessObserver));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_2 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * L_5 = MixedRealityToolkit_GetActiveServices_m721BFE10B432F3FD47CF1DC7A6DBB8E3E34CCBD5(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// for (int i = 0; i < services.Count; i++)
		V_1 = 0;
		goto IL_0052;
	}

IL_0037:
	{
		// observers.Add(services[i] as IMixedRealitySpatialAwarenessObserver);
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_6 = __this->get_observers_7();
		List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9 = List_1_get_Item_m1C0DD00CB17B194D9916729977A21D839837BDA2(L_7, L_8, /*hidden argument*/List_1_get_Item_m1C0DD00CB17B194D9916729977A21D839837BDA2_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_mB36D286C313F787189171248D2FD0F27682419F5(L_6, ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_mB36D286C313F787189171248D2FD0F27682419F5_RuntimeMethod_var);
		// for (int i = 0; i < services.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0052:
	{
		// for (int i = 0; i < services.Count; i++)
		int32_t L_11 = V_1;
		List_1_t1434013D3C4DE6A9543D6FE3EBE4FABFA4331116 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m53D87D05AF25992CE41A2C455AE8D92349CF226E(L_12, /*hidden argument*/List_1_get_Count_m53D87D05AF25992CE41A2C455AE8D92349CF226E_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_mA3CA4C46658A6A25BB32042B49CB9A632E822A51 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		BaseService_Reset_mAC98CD5A301273CF341E02202B0790C18198614C(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m816A8978F570A93A8B3309385BD1BEEB1B30D28F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_m21AABA42F0D7C0098253E0F74AFC2CECDAD1EEA2 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_m21AABA42F0D7C0098253E0F74AFC2CECDAD1EEA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_spatialAwarenessObjectParent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_spatialAwarenessObjectParent_8();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_4, /*hidden argument*/NULL);
		// if (Application.isEditor)
		bool L_5 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_spatialAwarenessObjectParent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_6, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	}

IL_0039:
	{
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mB67B5A2CB939893CEA7D3EC1813B91D8965F9E2A (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mB67B5A2CB939893CEA7D3EC1813B91D8965F9E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m5E5392CE7D41FF2C9DF345BD7F3061F32B506C55(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_8(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_8();
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m5E5392CE7D41FF2C9DF345BD7F3061F32B506C55 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m5E5392CE7D41FF2C9DF345BD7F3061F32B506C55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject CreateSpatialAwarenessParent => new GameObject("Spatial Awareness System");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObjectParent(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m490D1F97D0B8A5356490EE9253E12F72821DB97E (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m490D1F97D0B8A5356490EE9253E12F72821DB97E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		// objectParent.transform.parent = SpatialAwarenessObjectParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = L_1;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mB67B5A2CB939893CEA7D3EC1813B91D8965F9E2A(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_5, /*hidden argument*/NULL);
		// return objectParent;
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m0C9B1AB79FB17BB45B4BEC8149FE836A384ED928 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->get_nextSourceId_9();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_9(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::GetObservers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m78AF098E060BB747ACEFDE715A3F21D20C221CDD (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m78AF098E060BB747ACEFDE715A3F21D20C221CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<IMixedRealitySpatialAwarenessObserver>(observers) as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_1 = (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *)il2cpp_codegen_object_new(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20_il2cpp_TypeInfo_var);
		List_1__ctor_m76A502143ADD8C5876762E11DCDFBF12D0CBBA5B(L_1, L_0, /*hidden argument*/List_1__ctor_m76A502143ADD8C5876762E11DCDFBF12D0CBBA5B_RuntimeMethod_var);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m435371DCDCF88E93EF8884C04A59E3B163D17E8A (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m435371DCDCF88E93EF8884C04A59E3B163D17E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// if (observers[i].Name == name)
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A(L_0, L_1, /*hidden argument*/List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService::get_Name() */, IMixedRealityService_t0B8D0EC138B16B2FC1A9C359A57A74829F7F2563_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___name0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return observers[i];
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_6 = __this->get_observers_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_8 = List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A(L_6, L_7, /*hidden argument*/List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A_RuntimeMethod_var);
		return L_8;
	}

IL_002a:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_10 = V_0;
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_11 = __this->get_observers_7();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE(L_11, /*hidden argument*/List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::ResumeObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_mCD294EA6EB8C25867C712ADE48D5A56C00A74B30 (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_mCD294EA6EB8C25867C712ADE48D5A56C00A74B30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// observers[i].Resume();
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A(L_0, L_1, /*hidden argument*/List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_il2cpp_TypeInfo_var, L_2);
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_4 = V_0;
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_5 = __this->get_observers_7();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE(L_5, /*hidden argument*/List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::SuspendObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_m0C5EAF99582E1EAEFA5196DD7E5C57C5481AAAEE (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_m0C5EAF99582E1EAEFA5196DD7E5C57C5481AAAEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// observers[i].Suspend();
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = __this->get_observers_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A(L_0, L_1, /*hidden argument*/List_1_get_Item_m7964AE64421C316D452F5E9D085025F64CE7983A_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tA2B27F5A5C8BB54B69E6740A17A44B265AD6E748_il2cpp_TypeInfo_var, L_2);
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_4 = V_0;
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_5 = __this->get_observers_7();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE(L_5, /*hidden argument*/List_1_get_Count_m8302EE39D31A060CB068DF4728C6A7957C5480EE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::RaiseMeshAdded(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver,System.Int32,Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m552A47F43A169456D7562D5E504336ED02D4A2DB (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * ___meshObject2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m552A47F43A169456D7562D5E504336ED02D4A2DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, meshObject);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_0 = __this->get_meshEventData_6();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * L_3 = ___meshObject2;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08(L_0, L_1, L_2, L_3, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshAdded);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_4 = __this->get_meshEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var);
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_5 = ((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->get_OnMeshAdded_10();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_m30B0FD6BAA6850A1817871BB824D380D71C20958_RuntimeMethod_var, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::RaiseMeshUpdated(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver,System.Int32,Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mA49AF8D5E363EE550F0F1CC2AD142F721007337A (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * ___meshObject2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mA49AF8D5E363EE550F0F1CC2AD142F721007337A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, meshObject);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_0 = __this->get_meshEventData_6();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * L_3 = ___meshObject2;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08(L_0, L_1, L_2, L_3, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshUpdated);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_4 = __this->get_meshEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var);
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_5 = ((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->get_OnMeshUpdated_11();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_m30B0FD6BAA6850A1817871BB824D380D71C20958_RuntimeMethod_var, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::RaiseMeshRemoved(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Observers.IMixedRealitySpatialAwarenessObserver,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m458FFEA12C2EAAB1DCD3C1ECB736BFBB52358AFA (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m458FFEA12C2EAAB1DCD3C1ECB736BFBB52358AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, null);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_0 = __this->get_meshEventData_6();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08(L_0, L_1, L_2, (SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF *)NULL, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m1D4A3F39EE89280FD2CDB217C34ECE787969CE08_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshRemoved);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_3 = __this->get_meshEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var);
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_4 = ((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->get_OnMeshRemoved_12();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_m30B0FD6BAA6850A1817871BB824D380D71C20958_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m14BEC1FA00B6279CB8CA80AC4CE8ECF2A0A2643E (MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_m14BEC1FA00B6279CB8CA80AC4CE8ECF2A0A2643E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IMixedRealitySpatialAwarenessObserver> observers = new List<IMixedRealitySpatialAwarenessObserver>();
		List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 * L_0 = (List_1_t1F206C421814CCC64FC9C6B137762325D4724E20 *)il2cpp_codegen_object_new(List_1_t1F206C421814CCC64FC9C6B137762325D4724E20_il2cpp_TypeInfo_var);
		List_1__ctor_m1F77CCCA918ED7324A5F085250CBD31C950E6139(L_0, /*hidden argument*/List_1__ctor_m1F77CCCA918ED7324A5F085250CBD31C950E6139_RuntimeMethod_var);
		__this->set_observers_7(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var);
		BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_mA481284B75594A496B727F796B28CC43FD4B26DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__cctor_mA481284B75594A496B727F796B28CC43FD4B26DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshAdded =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationAdded(spatialEventData);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var);
		U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * L_0 = ((U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_1 = (EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 *)il2cpp_codegen_object_new(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_0_m1F6D0AB7AEA5B20DBAC31D97E15F647591F71258_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->set_OnMeshAdded_10(L_1);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshUpdated =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationUpdated(spatialEventData);
		//     };
		U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * L_2 = ((U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_3 = (EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 *)il2cpp_codegen_object_new(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_1_m76207DFB5034A119E5BF88D841714D94E962AD95_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->set_OnMeshUpdated_11(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshRemoved =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationRemoved(spatialEventData);
		//     };
		U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * L_4 = ((U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 * L_5 = (EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215 *)il2cpp_codegen_object_new(EventFunction_1_t3931F657A917125C196724A115BA45F7EFDE0215_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_2_mA6F40FF9FC939434C82CCA19DE29D60E4A42DFC3_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m234132CFC116B79BDEBB768670DAA638599CB083_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t0632CEACFC9324B88E2009DF77C82DA1E2510817_il2cpp_TypeInfo_var))->set_OnMeshRemoved_12(L_5);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF19935F43CA6023A6C719DD5E335290BDE05D100 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mF19935F43CA6023A6C719DD5E335290BDE05D100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * L_0 = (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 *)il2cpp_codegen_object_new(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5D8858A5657467BDA21871E49E0D329DEA8D6292(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D8858A5657467BDA21871E49E0D329DEA8D6292 (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_0(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_0_m1F6D0AB7AEA5B20DBAC31D97E15F647591F71258 (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_0_m1F6D0AB7AEA5B20DBAC31D97E15F647591F71258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationAdded(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>::OnObservationAdded(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_1(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_1_m76207DFB5034A119E5BF88D841714D94E962AD95 (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_1_m76207DFB5034A119E5BF88D841714D94E962AD95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationUpdated(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>::OnObservationUpdated(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.SpatialAwarenessSystem.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_2(Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_2_mA6F40FF9FC939434C82CCA19DE29D60E4A42DFC3 (U3CU3Ec_t89632F2BD3669CA5B0144CDA1FDF02198C87BBE2 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_2_mA6F40FF9FC939434C82CCA19DE29D60E4A42DFC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD_mE66C09A017138EDBFF97FD21DE0EF6BF0F31300A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationRemoved(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.Handlers.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>::OnObservationRemoved(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_t042EE0A26205515C83CA665469F4314F9D69E8F0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
