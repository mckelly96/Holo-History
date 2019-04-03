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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[]
struct EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C;
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle
struct InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87;
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType
struct SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler
struct IMixedRealityBoundaryHandler_tF1AD117DBCF2700B19C5E166AE2CFB6DC7D388D0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t8F333E1BB0BBE25581EEC55DB0B74307E01E9E94;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t811C59BBC6515F6C30820D3342E6385093ECAF19;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_tBDC277E48EB85AABE9C115382DF433C1FAC2D6F6;
// Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem
struct BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC;
// Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem
struct MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D;
// Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem/<>c
struct U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>
struct List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>>
struct List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
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
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler>
struct EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.LineRenderer
struct LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

extern RuntimeClass* BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var;
extern RuntimeClass* BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C_il2cpp_TypeInfo_var;
extern RuntimeClass* EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var;
extern RuntimeClass* EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityBoundaryHandler_tF1AD117DBCF2700B19C5E166AE2CFB6DC7D388D0_il2cpp_TypeInfo_var;
extern RuntimeClass* InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral08F4C85E3C7B3015A1D6AE49E918EEF4724AA3A2;
extern String_t* _stringLiteral0F2870EE42AB42B214B04B6E021F9E37E4876948;
extern String_t* _stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11;
extern String_t* _stringLiteral3D03E038C14AF03724AFC2F297DEDBF0191D35C0;
extern String_t* _stringLiteral7383576ECCAB0349555823F261126B8965950B1D;
extern String_t* _stringLiteral7C4826711A870DDC870DF57BDC7A2709822EA3D4;
extern String_t* _stringLiteral7FB5E88B95F6DD67982580DA8160B05C3AE91AE3;
extern String_t* _stringLiteral89F18224F9872BC3FEDC818D630C509C663DA4E6;
extern String_t* _stringLiteral8B86287AB9462502DBA9CAE10FBC19B0FFECCF0A;
extern String_t* _stringLiteral8B9DE5633EA0FF1587D63358C4EEB4B549D20B42;
extern String_t* _stringLiteralE29DB923E25B51AC8B5CE56FF91A58B6A8D895B4;
extern const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityBoundaryHandler_tF1AD117DBCF2700B19C5E166AE2CFB6DC7D388D0_mE23BBE2B18B4C824E93685004C36E88FEEEF24A8_RuntimeMethod_var;
extern const RuntimeMethod* EventFunction_1__ctor_m8208EDA2200A5D88B14A1A7338EC8670BC1935D0_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisBoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_m7CE8A0300C7EA09CEC051E04CB4E46051136B616_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__95_0_mB197D348DE836F308B80DED596815E53A137B7D2_RuntimeMethod_var;
extern const uint32_t MixedRealityBoundarySystem_CalculateBoundaryBounds_mDAFDE39712E38BB07793315CE98FC0B10D050153_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_Contains_mCF1E29DE66504CEEBF973B42F3632399E8ACBB55_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_CreateInscribedBounds_mF48B3CDDA345A034BF96608D402447E9DAE65EF8_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_Destroy_m4215155BBD50B2E59BF92B6A6CE625B63E0C8AEB_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetHashCode_mECF0F7D1BF2200BE875DD8D2F56AEFEBCCA2B4A0_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_Initialize_m14353E3F2A8E22273E416FFD22A11DAB2EAD7C1D_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_SetTrackingSpace_m572B0319BC725E75F5C7F1BF7FD4A339707A7062_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mA0D703CF85DAF9CB20040BC1B75B0D460EED500E_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem__cctor_m364FB1A30BA66AC1C526F4F571E5783F04A69BEA_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem__ctor_m8EA6DFB5D8C1C018B0013E1F96DF0DF21E48920D_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_mD9A493E6F886618D03646968C6C42B8FE52D745D_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_m57BBEB9819F4533B05DF3ADCD6C537638C836E33_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_mE84D5A0236A51045E2B75BC5A5C109E49D553446_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_m1123D9108B7C7EFBB150ADE8E44B9AEAAB82EB61_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_mDC82916C9DC7A6338F0A9827F0A7BCFABAC2D687_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_mC89CDD398DB38C0E261A69F41F4BE8347988AE56_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m8685A7E14033858B2C9AB86FEB4FC181FC83F30D_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_FloorPhysicsLayer_m9766C51DD3520E8602E600D77543C936BA4CFF0C_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mCF0C539EAC57B4AD6A276E6A6C2C5F412BDD187F_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_ShowBoundaryCeiling_m1E0A5E0855B6498559A86D1A8F3A16145028C0A9_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_ShowBoundaryWalls_m5046100B07B9EDC8BA33F74A8A2132B76A51E8EB_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_ShowFloor_m3F99110A345F7882B01701C5FFEE8822A44208A8_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_ShowPlayArea_m9EA90562010C608DA289750175188BA8937411C6_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_ShowTrackedArea_mD2916474FF77CD6D7CCDBCAED6457DEC5D171FE7_MetadataUsageId;
extern const uint32_t MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_mD7BCDF87872C3CCCFD21BC52B72BE739607DF192_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__95_0_mB197D348DE836F308B80DED596815E53A137B7D2_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m55F9B5ED5DDAFD3A1A4FA2DBCCD85F5E80D455B6_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef U3CMODULEU3E_T641756DAEB4C73250E09DD79225E0492E0EC93AF_H
#define U3CMODULEU3E_T641756DAEB4C73250E09DD79225E0492E0EC93AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t641756DAEB4C73250E09DD79225E0492E0EC93AF 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T641756DAEB4C73250E09DD79225E0492E0EC93AF_H
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
#ifndef U3CU3EC_TC2A0680726AB484F8E0E2E222EC3522A3128AEBB_H
#define U3CU3EC_TC2A0680726AB484F8E0E2E222EC3522A3128AEBB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c
struct  U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c::<>9
	U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TC2A0680726AB484F8E0E2E222EC3522A3128AEBB_H
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
#ifndef LIST_1_T5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_H
#define LIST_1_T5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>
struct  List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B, ____items_1)); }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* get__items_1() const { return ____items_1; }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_StaticFields, ____emptyArray_5)); }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_H
#ifndef LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#define LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
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
#ifndef NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#define NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
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
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef EDGE_TE5727EB1727CCE66ACE6F3B42992025A56DEB3C7_H
#define EDGE_TE5727EB1727CCE66ACE6F3B42992025A56DEB3C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge
struct  Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7 
{
public:
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge::PointA
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PointA_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge::PointB
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PointB_1;

public:
	inline static int32_t get_offset_of_PointA_0() { return static_cast<int32_t>(offsetof(Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7, ___PointA_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PointA_0() const { return ___PointA_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PointA_0() { return &___PointA_0; }
	inline void set_PointA_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PointA_0 = value;
	}

	inline static int32_t get_offset_of_PointB_1() { return static_cast<int32_t>(offsetof(Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7, ___PointB_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PointB_1() const { return ___PointB_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PointB_1() { return &___PointB_1; }
	inline void set_PointB_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PointB_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGE_TE5727EB1727CCE66ACE6F3B42992025A56DEB3C7_H
#ifndef INSCRIBEDRECTANGLE_T9E33DA766BEACCC7486156F0F060ED24847AEE87_H
#define INSCRIBEDRECTANGLE_T9E33DA766BEACCC7486156F0F060ED24847AEE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle
struct  InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::<Center>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_4;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::<Angle>k__BackingField
	float ___U3CAngleU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87, ___U3CCenterU3Ek__BackingField_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CCenterU3Ek__BackingField_4() const { return ___U3CCenterU3Ek__BackingField_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CCenterU3Ek__BackingField_4() { return &___U3CCenterU3Ek__BackingField_4; }
	inline void set_U3CCenterU3Ek__BackingField_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CCenterU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87, ___U3CWidthU3Ek__BackingField_5)); }
	inline float get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(float value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87, ___U3CHeightU3Ek__BackingField_6)); }
	inline float get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(float value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAngleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87, ___U3CAngleU3Ek__BackingField_7)); }
	inline float get_U3CAngleU3Ek__BackingField_7() const { return ___U3CAngleU3Ek__BackingField_7; }
	inline float* get_address_of_U3CAngleU3Ek__BackingField_7() { return &___U3CAngleU3Ek__BackingField_7; }
	inline void set_U3CAngleU3Ek__BackingField_7(float value)
	{
		___U3CAngleU3Ek__BackingField_7 = value;
	}
};

struct InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87_StaticFields
{
public:
	// System.Single[] Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::fitAngles
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___fitAngles_2;
	// System.Single[] Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::aspectRatios
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___aspectRatios_3;

public:
	inline static int32_t get_offset_of_fitAngles_2() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87_StaticFields, ___fitAngles_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_fitAngles_2() const { return ___fitAngles_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_fitAngles_2() { return &___fitAngles_2; }
	inline void set_fitAngles_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___fitAngles_2 = value;
		Il2CppCodeGenWriteBarrier((&___fitAngles_2), value);
	}

	inline static int32_t get_offset_of_aspectRatios_3() { return static_cast<int32_t>(offsetof(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87_StaticFields, ___aspectRatios_3)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_aspectRatios_3() const { return ___aspectRatios_3; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_aspectRatios_3() { return &___aspectRatios_3; }
	inline void set_aspectRatios_3(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___aspectRatios_3 = value;
		Il2CppCodeGenWriteBarrier((&___aspectRatios_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSCRIBEDRECTANGLE_T9E33DA766BEACCC7486156F0F060ED24847AEE87_H
#ifndef EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
#define EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale
struct  ExperienceScale_tAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_tAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A, ___value___2)); }
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
#endif // EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
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
#ifndef EDGEUTILITIES_T44BC1FB9207D07C973B2C6437541E5256557BBD4_H
#define EDGEUTILITIES_T44BC1FB9207D07C973B2C6437541E5256557BBD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities
struct  EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4  : public RuntimeObject
{
public:

public:
};

struct EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_StaticFields
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities::maxWidth
	float ___maxWidth_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities::InvalidPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___InvalidPoint_1;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities::intersectionPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___intersectionPoint_2;

public:
	inline static int32_t get_offset_of_maxWidth_0() { return static_cast<int32_t>(offsetof(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_StaticFields, ___maxWidth_0)); }
	inline float get_maxWidth_0() const { return ___maxWidth_0; }
	inline float* get_address_of_maxWidth_0() { return &___maxWidth_0; }
	inline void set_maxWidth_0(float value)
	{
		___maxWidth_0 = value;
	}

	inline static int32_t get_offset_of_InvalidPoint_1() { return static_cast<int32_t>(offsetof(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_StaticFields, ___InvalidPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_InvalidPoint_1() const { return ___InvalidPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_InvalidPoint_1() { return &___InvalidPoint_1; }
	inline void set_InvalidPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___InvalidPoint_1 = value;
	}

	inline static int32_t get_offset_of_intersectionPoint_2() { return static_cast<int32_t>(offsetof(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_StaticFields, ___intersectionPoint_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_intersectionPoint_2() const { return ___intersectionPoint_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_intersectionPoint_2() { return &___intersectionPoint_2; }
	inline void set_intersectionPoint_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___intersectionPoint_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGEUTILITIES_T44BC1FB9207D07C973B2C6437541E5256557BBD4_H
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
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
#define TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Boundary_Type
struct  Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288, ___value___2)); }
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
#endif // TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
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
#ifndef PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#define PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
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
#endif // PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifndef TRACKINGSPACETYPE_TDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_H
#define TRACKINGSPACETYPE_TDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
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
#endif // TRACKINGSPACETYPE_TDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_H
#ifndef BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#define BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct  BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsFloorVisualized>k__BackingField
	bool ___U3CIsFloorVisualizedU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsPlayAreaVisualized>k__BackingField
	bool ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsTrackedAreaVisualized>k__BackingField
	bool ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<AreBoundaryWallsVisualized>k__BackingField
	bool ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsCeilingVisualized>k__BackingField
	bool ___U3CIsCeilingVisualizedU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsFloorVisualizedU3Ek__BackingField_4)); }
	inline bool get_U3CIsFloorVisualizedU3Ek__BackingField_4() const { return ___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return &___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline void set_U3CIsFloorVisualizedU3Ek__BackingField_4(bool value)
	{
		___U3CIsFloorVisualizedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5)); }
	inline bool get_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() const { return ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return &___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline void set_U3CIsPlayAreaVisualizedU3Ek__BackingField_5(bool value)
	{
		___U3CIsPlayAreaVisualizedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6)); }
	inline bool get_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() const { return ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return &___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline void set_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6(bool value)
	{
		___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7)); }
	inline bool get_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() const { return ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return &___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline void set_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7(bool value)
	{
		___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsCeilingVisualizedU3Ek__BackingField_8)); }
	inline bool get_U3CIsCeilingVisualizedU3Ek__BackingField_8() const { return ___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return &___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline void set_U3CIsCeilingVisualizedU3Ek__BackingField_8(bool value)
	{
		___U3CIsCeilingVisualizedU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#ifndef MIXEDREALITYBOUNDARYSYSTEM_TABC4B4CC95DD9BB32B8D9A94BC0163672395850D_H
#define MIXEDREALITYBOUNDARYSYSTEM_TABC4B4CC95DD9BB32B8D9A94BC0163672395850D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem
struct  MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D  : public BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB
{
public:
	// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::boundaryEventData
	BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * ___boundaryEventData_6;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_8;
	// System.String Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::boundaryVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boundaryVisualizationParent_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::showFloor
	bool ___showFloor_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::showPlayArea
	bool ___showPlayArea_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::showTrackedArea
	bool ___showTrackedArea_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_21;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::showCeiling
	bool ___showCeiling_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_25;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[] Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* ___U3CBoundsU3Ek__BackingField_26;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___U3CFloorHeightU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::rectangularBounds
	InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * ___rectangularBounds_28;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::currentFloorObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentFloorObject_29;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::currentPlayAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentPlayAreaObject_30;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::currentTrackedAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentTrackedAreaObject_31;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::currentBoundaryWallObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentBoundaryWallObject_32;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::currentCeilingObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentCeilingObject_33;

public:
	inline static int32_t get_offset_of_boundaryEventData_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___boundaryEventData_6)); }
	inline BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * get_boundaryEventData_6() const { return ___boundaryEventData_6; }
	inline BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 ** get_address_of_boundaryEventData_6() { return &___boundaryEventData_6; }
	inline void set_boundaryEventData_6(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * value)
	{
		___boundaryEventData_6 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryEventData_6), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CSourceIdU3Ek__BackingField_8)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_8() const { return ___U3CSourceIdU3Ek__BackingField_8; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_8() { return &___U3CSourceIdU3Ek__BackingField_8; }
	inline void set_U3CSourceIdU3Ek__BackingField_8(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CSourceNameU3Ek__BackingField_9)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_9() const { return ___U3CSourceNameU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_9() { return &___U3CSourceNameU3Ek__BackingField_9; }
	inline void set_U3CSourceNameU3Ek__BackingField_9(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceNameU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___boundaryVisualizationParent_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boundaryVisualizationParent_12() const { return ___boundaryVisualizationParent_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boundaryVisualizationParent_12() { return &___boundaryVisualizationParent_12; }
	inline void set_boundaryVisualizationParent_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boundaryVisualizationParent_12 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVisualizationParent_12), value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___ignoreRaycastLayerValue_13)); }
	inline int32_t get_ignoreRaycastLayerValue_13() const { return ___ignoreRaycastLayerValue_13; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_13() { return &___ignoreRaycastLayerValue_13; }
	inline void set_ignoreRaycastLayerValue_13(int32_t value)
	{
		___ignoreRaycastLayerValue_13 = value;
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CScaleU3Ek__BackingField_14)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_14() const { return ___U3CScaleU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_14() { return &___U3CScaleU3Ek__BackingField_14; }
	inline void set_U3CScaleU3Ek__BackingField_14(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CBoundaryHeightU3Ek__BackingField_15)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_15() const { return ___U3CBoundaryHeightU3Ek__BackingField_15; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_15() { return &___U3CBoundaryHeightU3Ek__BackingField_15; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_15(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_showFloor_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___showFloor_16)); }
	inline bool get_showFloor_16() const { return ___showFloor_16; }
	inline bool* get_address_of_showFloor_16() { return &___showFloor_16; }
	inline void set_showFloor_16(bool value)
	{
		___showFloor_16 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___showPlayArea_17)); }
	inline bool get_showPlayArea_17() const { return ___showPlayArea_17; }
	inline bool* get_address_of_showPlayArea_17() { return &___showPlayArea_17; }
	inline void set_showPlayArea_17(bool value)
	{
		___showPlayArea_17 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___floorPhysicsLayer_18)); }
	inline int32_t get_floorPhysicsLayer_18() const { return ___floorPhysicsLayer_18; }
	inline int32_t* get_address_of_floorPhysicsLayer_18() { return &___floorPhysicsLayer_18; }
	inline void set_floorPhysicsLayer_18(int32_t value)
	{
		___floorPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___showTrackedArea_19)); }
	inline bool get_showTrackedArea_19() const { return ___showTrackedArea_19; }
	inline bool* get_address_of_showTrackedArea_19() { return &___showTrackedArea_19; }
	inline void set_showTrackedArea_19(bool value)
	{
		___showTrackedArea_19 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___playAreaPhysicsLayer_20)); }
	inline int32_t get_playAreaPhysicsLayer_20() const { return ___playAreaPhysicsLayer_20; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_20() { return &___playAreaPhysicsLayer_20; }
	inline void set_playAreaPhysicsLayer_20(int32_t value)
	{
		___playAreaPhysicsLayer_20 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___showBoundaryWalls_21)); }
	inline bool get_showBoundaryWalls_21() const { return ___showBoundaryWalls_21; }
	inline bool* get_address_of_showBoundaryWalls_21() { return &___showBoundaryWalls_21; }
	inline void set_showBoundaryWalls_21(bool value)
	{
		___showBoundaryWalls_21 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_22() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___trackedAreaPhysicsLayer_22)); }
	inline int32_t get_trackedAreaPhysicsLayer_22() const { return ___trackedAreaPhysicsLayer_22; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_22() { return &___trackedAreaPhysicsLayer_22; }
	inline void set_trackedAreaPhysicsLayer_22(int32_t value)
	{
		___trackedAreaPhysicsLayer_22 = value;
	}

	inline static int32_t get_offset_of_showCeiling_23() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___showCeiling_23)); }
	inline bool get_showCeiling_23() const { return ___showCeiling_23; }
	inline bool* get_address_of_showCeiling_23() { return &___showCeiling_23; }
	inline void set_showCeiling_23(bool value)
	{
		___showCeiling_23 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_24() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___boundaryWallsPhysicsLayer_24)); }
	inline int32_t get_boundaryWallsPhysicsLayer_24() const { return ___boundaryWallsPhysicsLayer_24; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_24() { return &___boundaryWallsPhysicsLayer_24; }
	inline void set_boundaryWallsPhysicsLayer_24(int32_t value)
	{
		___boundaryWallsPhysicsLayer_24 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_25() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___ceilingPhysicsLayer_25)); }
	inline int32_t get_ceilingPhysicsLayer_25() const { return ___ceilingPhysicsLayer_25; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_25() { return &___ceilingPhysicsLayer_25; }
	inline void set_ceilingPhysicsLayer_25(int32_t value)
	{
		___ceilingPhysicsLayer_25 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CBoundsU3Ek__BackingField_26)); }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* get_U3CBoundsU3Ek__BackingField_26() const { return ___U3CBoundsU3Ek__BackingField_26; }
	inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C** get_address_of_U3CBoundsU3Ek__BackingField_26() { return &___U3CBoundsU3Ek__BackingField_26; }
	inline void set_U3CBoundsU3Ek__BackingField_26(EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* value)
	{
		___U3CBoundsU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBoundsU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___U3CFloorHeightU3Ek__BackingField_27)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_U3CFloorHeightU3Ek__BackingField_27() const { return ___U3CFloorHeightU3Ek__BackingField_27; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_U3CFloorHeightU3Ek__BackingField_27() { return &___U3CFloorHeightU3Ek__BackingField_27; }
	inline void set_U3CFloorHeightU3Ek__BackingField_27(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___U3CFloorHeightU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_rectangularBounds_28() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___rectangularBounds_28)); }
	inline InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * get_rectangularBounds_28() const { return ___rectangularBounds_28; }
	inline InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 ** get_address_of_rectangularBounds_28() { return &___rectangularBounds_28; }
	inline void set_rectangularBounds_28(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * value)
	{
		___rectangularBounds_28 = value;
		Il2CppCodeGenWriteBarrier((&___rectangularBounds_28), value);
	}

	inline static int32_t get_offset_of_currentFloorObject_29() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___currentFloorObject_29)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentFloorObject_29() const { return ___currentFloorObject_29; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentFloorObject_29() { return &___currentFloorObject_29; }
	inline void set_currentFloorObject_29(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentFloorObject_29 = value;
		Il2CppCodeGenWriteBarrier((&___currentFloorObject_29), value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_30() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___currentPlayAreaObject_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentPlayAreaObject_30() const { return ___currentPlayAreaObject_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentPlayAreaObject_30() { return &___currentPlayAreaObject_30; }
	inline void set_currentPlayAreaObject_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentPlayAreaObject_30 = value;
		Il2CppCodeGenWriteBarrier((&___currentPlayAreaObject_30), value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_31() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___currentTrackedAreaObject_31)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentTrackedAreaObject_31() const { return ___currentTrackedAreaObject_31; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentTrackedAreaObject_31() { return &___currentTrackedAreaObject_31; }
	inline void set_currentTrackedAreaObject_31(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentTrackedAreaObject_31 = value;
		Il2CppCodeGenWriteBarrier((&___currentTrackedAreaObject_31), value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_32() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___currentBoundaryWallObject_32)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentBoundaryWallObject_32() const { return ___currentBoundaryWallObject_32; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentBoundaryWallObject_32() { return &___currentBoundaryWallObject_32; }
	inline void set_currentBoundaryWallObject_32(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentBoundaryWallObject_32 = value;
		Il2CppCodeGenWriteBarrier((&___currentBoundaryWallObject_32), value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_33() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D, ___currentCeilingObject_33)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentCeilingObject_33() const { return ___currentCeilingObject_33; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentCeilingObject_33() { return &___currentCeilingObject_33; }
	inline void set_currentCeilingObject_33(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentCeilingObject_33 = value;
		Il2CppCodeGenWriteBarrier((&___currentCeilingObject_33), value);
	}
};

struct MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::OnVisualizationChanged
	EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * ___OnVisualizationChanged_7;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_StaticFields, ___OnVisualizationChanged_7)); }
	inline EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * get_OnVisualizationChanged_7() const { return ___OnVisualizationChanged_7; }
	inline EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD ** get_address_of_OnVisualizationChanged_7() { return &___OnVisualizationChanged_7; }
	inline void set_OnVisualizationChanged_7(EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * value)
	{
		___OnVisualizationChanged_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnVisualizationChanged_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYBOUNDARYSYSTEM_TABC4B4CC95DD9BB32B8D9A94BC0163672395850D_H
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
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
#define BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
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
#ifndef EVENTFUNCTION_1_TC567429285EEE5042DCE401FA0973242427537DD_H
#define EVENTFUNCTION_1_TC567429285EEE5042DCE401FA0973242427537DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler>
struct  EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_TC567429285EEE5042DCE401FA0973242427537DD_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
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
#ifndef MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#define MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___floorMaterial_7), value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorScale_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___playAreaMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((&___playAreaMaterial_11), value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___trackedAreaMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___trackedAreaMaterial_14), value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryWallMaterial_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryWallMaterial_17), value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryCeilingMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryCeilingMaterial_20), value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#ifndef MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#define MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct  MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::<ActiveServices>k__BackingField
	Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * ___U3CActiveServicesU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableCameraProfile
	bool ___enableCameraProfile_7;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * ___cameraProfile_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_9;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * ___inputSystemProfile_10;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::inputSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___inputSystemType_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_12;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::boundarySystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___boundarySystemType_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * ___boundaryVisualizationProfile_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_15;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::teleportSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___teleportSystemType_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableSpatialAwarenessSystem
	bool ___enableSpatialAwarenessSystem_17;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___spatialAwarenessSystemType_18;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * ___diagnosticsSystemProfile_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_20;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::diagnosticsSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___diagnosticsSystemType_21;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * ___registeredServiceProvidersProfile_22;

public:
	inline static int32_t get_offset_of_U3CActiveServicesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___U3CActiveServicesU3Ek__BackingField_5)); }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * get_U3CActiveServicesU3Ek__BackingField_5() const { return ___U3CActiveServicesU3Ek__BackingField_5; }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F ** get_address_of_U3CActiveServicesU3Ek__BackingField_5() { return &___U3CActiveServicesU3Ek__BackingField_5; }
	inline void set_U3CActiveServicesU3Ek__BackingField_5(Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * value)
	{
		___U3CActiveServicesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActiveServicesU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_targetExperienceScale_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___targetExperienceScale_6)); }
	inline int32_t get_targetExperienceScale_6() const { return ___targetExperienceScale_6; }
	inline int32_t* get_address_of_targetExperienceScale_6() { return &___targetExperienceScale_6; }
	inline void set_targetExperienceScale_6(int32_t value)
	{
		___targetExperienceScale_6 = value;
	}

	inline static int32_t get_offset_of_enableCameraProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableCameraProfile_7)); }
	inline bool get_enableCameraProfile_7() const { return ___enableCameraProfile_7; }
	inline bool* get_address_of_enableCameraProfile_7() { return &___enableCameraProfile_7; }
	inline void set_enableCameraProfile_7(bool value)
	{
		___enableCameraProfile_7 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___cameraProfile_8)); }
	inline MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * get_cameraProfile_8() const { return ___cameraProfile_8; }
	inline MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 ** get_address_of_cameraProfile_8() { return &___cameraProfile_8; }
	inline void set_cameraProfile_8(MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * value)
	{
		___cameraProfile_8 = value;
		Il2CppCodeGenWriteBarrier((&___cameraProfile_8), value);
	}

	inline static int32_t get_offset_of_enableInputSystem_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableInputSystem_9)); }
	inline bool get_enableInputSystem_9() const { return ___enableInputSystem_9; }
	inline bool* get_address_of_enableInputSystem_9() { return &___enableInputSystem_9; }
	inline void set_enableInputSystem_9(bool value)
	{
		___enableInputSystem_9 = value;
	}

	inline static int32_t get_offset_of_inputSystemProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___inputSystemProfile_10)); }
	inline MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * get_inputSystemProfile_10() const { return ___inputSystemProfile_10; }
	inline MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 ** get_address_of_inputSystemProfile_10() { return &___inputSystemProfile_10; }
	inline void set_inputSystemProfile_10(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * value)
	{
		___inputSystemProfile_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemProfile_10), value);
	}

	inline static int32_t get_offset_of_inputSystemType_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___inputSystemType_11)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_inputSystemType_11() const { return ___inputSystemType_11; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_inputSystemType_11() { return &___inputSystemType_11; }
	inline void set_inputSystemType_11(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___inputSystemType_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemType_11), value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableBoundarySystem_12)); }
	inline bool get_enableBoundarySystem_12() const { return ___enableBoundarySystem_12; }
	inline bool* get_address_of_enableBoundarySystem_12() { return &___enableBoundarySystem_12; }
	inline void set_enableBoundarySystem_12(bool value)
	{
		___enableBoundarySystem_12 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___boundarySystemType_13)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_boundarySystemType_13() const { return ___boundarySystemType_13; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_boundarySystemType_13() { return &___boundarySystemType_13; }
	inline void set_boundarySystemType_13(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___boundarySystemType_13 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystemType_13), value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___boundaryVisualizationProfile_14)); }
	inline MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * get_boundaryVisualizationProfile_14() const { return ___boundaryVisualizationProfile_14; }
	inline MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 ** get_address_of_boundaryVisualizationProfile_14() { return &___boundaryVisualizationProfile_14; }
	inline void set_boundaryVisualizationProfile_14(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * value)
	{
		___boundaryVisualizationProfile_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVisualizationProfile_14), value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableTeleportSystem_15)); }
	inline bool get_enableTeleportSystem_15() const { return ___enableTeleportSystem_15; }
	inline bool* get_address_of_enableTeleportSystem_15() { return &___enableTeleportSystem_15; }
	inline void set_enableTeleportSystem_15(bool value)
	{
		___enableTeleportSystem_15 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___teleportSystemType_16)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_teleportSystemType_16() const { return ___teleportSystemType_16; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_teleportSystemType_16() { return &___teleportSystemType_16; }
	inline void set_teleportSystemType_16(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___teleportSystemType_16 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystemType_16), value);
	}

	inline static int32_t get_offset_of_enableSpatialAwarenessSystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableSpatialAwarenessSystem_17)); }
	inline bool get_enableSpatialAwarenessSystem_17() const { return ___enableSpatialAwarenessSystem_17; }
	inline bool* get_address_of_enableSpatialAwarenessSystem_17() { return &___enableSpatialAwarenessSystem_17; }
	inline void set_enableSpatialAwarenessSystem_17(bool value)
	{
		___enableSpatialAwarenessSystem_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemType_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___spatialAwarenessSystemType_18)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_spatialAwarenessSystemType_18() const { return ___spatialAwarenessSystemType_18; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_spatialAwarenessSystemType_18() { return &___spatialAwarenessSystemType_18; }
	inline void set_spatialAwarenessSystemType_18(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___spatialAwarenessSystemType_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystemType_18), value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___diagnosticsSystemProfile_19)); }
	inline MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * get_diagnosticsSystemProfile_19() const { return ___diagnosticsSystemProfile_19; }
	inline MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 ** get_address_of_diagnosticsSystemProfile_19() { return &___diagnosticsSystemProfile_19; }
	inline void set_diagnosticsSystemProfile_19(MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * value)
	{
		___diagnosticsSystemProfile_19 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemProfile_19), value);
	}

	inline static int32_t get_offset_of_enableDiagnosticsSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableDiagnosticsSystem_20)); }
	inline bool get_enableDiagnosticsSystem_20() const { return ___enableDiagnosticsSystem_20; }
	inline bool* get_address_of_enableDiagnosticsSystem_20() { return &___enableDiagnosticsSystem_20; }
	inline void set_enableDiagnosticsSystem_20(bool value)
	{
		___enableDiagnosticsSystem_20 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystemType_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___diagnosticsSystemType_21)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_diagnosticsSystemType_21() const { return ___diagnosticsSystemType_21; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_diagnosticsSystemType_21() { return &___diagnosticsSystemType_21; }
	inline void set_diagnosticsSystemType_21(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___diagnosticsSystemType_21 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemType_21), value);
	}

	inline static int32_t get_offset_of_registeredServiceProvidersProfile_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___registeredServiceProvidersProfile_22)); }
	inline MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * get_registeredServiceProvidersProfile_22() const { return ___registeredServiceProvidersProfile_22; }
	inline MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 ** get_address_of_registeredServiceProvidersProfile_22() { return &___registeredServiceProvidersProfile_22; }
	inline void set_registeredServiceProvidersProfile_22(MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * value)
	{
		___registeredServiceProvidersProfile_22 = value;
		Il2CppCodeGenWriteBarrier((&___registeredServiceProvidersProfile_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#ifndef LINERENDERER_TD225C480F28F28A4D737866474F21001B803B7C3_H
#define LINERENDERER_TD225C480F28F28A4D737866474F21001B803B7C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_TD225C480F28F28A4D737866474F21001B803B7C3_H
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
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[]
struct EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  m_Items[1];

public:
	inline Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F_gshared (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776_gshared (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::ToArray()
extern "C" IL2CPP_METHOD_ATTR EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59_gshared (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void BoundaryEventData__ctor_m7C24312CA802C375C50A8B64A93980531D06F522 (BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_TargetExperienceScale()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitConfigurationProfile_get_TargetExperienceScale_m6B3549E985958F8583D5BFBCD0A7A6EA61304422 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_Scale(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Scale_m02CBC74583E2110C2B9D98A3C3695CD29407D5BE (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_BoundaryVisualizationProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_BoundaryHeight()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityBoundaryVisualizationProfile_get_BoundaryHeight_m578BB16AE311380A508A0FF82A12B177B117773D (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_BoundaryHeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryHeight_m073CBCFE4A818A7231506E5706013A9B1AD76FCD (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::SetTrackingSpace()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_SetTrackingSpace_m572B0319BC725E75F5C7F1BF7FD4A339707A7062 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::CalculateBoundaryBounds()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CalculateBoundaryBounds_mDAFDE39712E38BB07793315CE98FC0B10D050153 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.XR.Boundary::set_visible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50 (bool p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_ShowFloor()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowFloor_m6C3D5AB7D340D09A19ADB3830B025D58132E77D8 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowFloor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowFloor_m3F99110A345F7882B01701C5FFEE8822A44208A8 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_FloorPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_FloorPhysicsLayer_mAC87B88C235199B05B6C38EAF542C87138DF984A (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_FloorPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorPhysicsLayer_m9766C51DD3520E8602E600D77543C936BA4CFF0C (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_ShowPlayArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowPlayArea_m87BE406E798D6FADFC99995161463EE77264CAC9 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowPlayArea_m9EA90562010C608DA289750175188BA8937411C6 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_PlayAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_PlayAreaPhysicsLayer_mA2F59CBAB356193CEB5BE91A14AAC915F135023C (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_PlayAreaPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mCF0C539EAC57B4AD6A276E6A6C2C5F412BDD187F (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_ShowTrackedArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowTrackedArea_m615E0A0B414305A1DFC6F60F823B9F3AD633F0F2 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowTrackedArea_mD2916474FF77CD6D7CCDBCAED6457DEC5D171FE7 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_TrackedAreaPhysicsLayer_m0B06D06078E1F945990C6828D22DFA56A963E28B (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_TrackedAreaPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_mD7BCDF87872C3CCCFD21BC52B72BE739607DF192 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_ShowBoundaryWalls()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryWalls_mBCCA47FA455686CA10C9013641CAE17A1BE10B5F (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryWalls_m5046100B07B9EDC8BA33F74A8A2132B76A51E8EB (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_BoundaryWallsPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_BoundaryWallsPhysicsLayer_m05C1834C63C37913F77F6B30F3250287DB37638A (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_BoundaryWallsPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_mC89CDD398DB38C0E261A69F41F4BE8347988AE56 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_ShowBoundaryCeiling()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryCeiling_mBC78BA26C2421346AE16999E2902F07E2428C1AA (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryCeiling_m1E0A5E0855B6498559A86D1A8F3A16145028C0A9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_CeilingPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_CeilingPhysicsLayer_m302BBEA139DACCA3C90C2E00D86DFD13DFC71CFC (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_CeilingPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m8685A7E14033858B2C9AB86FEB4FC181FC83F30D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowFloor()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowFloor_m52CC48643F9DEA94A1D4D80AE4368ACCD2503CE2 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetFloorVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowPlayArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowPlayArea_mFC1A372E84862049EA1EF9E876E0CC5FD3BD7EBC (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetPlayAreaVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowTrackedArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowTrackedArea_m8123156BDDAEBB4DF4C7BD66792FD6A7383666DA (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetTrackedAreaVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowBoundaryWalls()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryWalls_mA89D8B3E47D44D312A625CF3E01F9E56210B4C59 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetBoundaryWallVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetBoundaryCeilingVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::RaiseBoundaryVisualizationChanged()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowBoundaryCeiling()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryCeiling_mBC46964E2F4BEBEB9E6452EFB51717975BA31214 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::Initialize(Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BoundaryEventData_Initialize_mEBD4613A75BAB5660AA4806754683183C1E06F94 (BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * __this, RuntimeObject* p0, bool p1, bool p2, bool p3, bool p4, bool p5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::Register(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m297842533079D27F1EFE3A917E914DB57BBDF59A (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::Unregister(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mCEB94C27AD40564ED04AC380935386C1C338F2CE (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_SourceName_m48998F61222F87ED91BB5054D64EFA310B8308F0 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_MixedRealityPlayspace()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities::IsValidPoint(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool EdgeUtilities_IsValidPoint_m3A3713FB637678BEB947D2BA7F35C2C2B49BD849 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_FloorHeight()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryHeight()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::IsInsideBoundary(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool InscribedRectangle_IsInsideBoundary_m85978B4FEEB0BF59BCD1DC25B3462FD4E073D23E (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[] Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_Bounds()
extern "C" IL2CPP_METHOD_ATTR EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.EdgeUtilities::IsInsideBoundary(Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[],UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool EdgeUtilities_IsInsideBoundary_m7E3EFA713705D2030ED0D01B9E1732F3E20D49DB (EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool InscribedRectangle_get_IsValid_m841B7599C4CCBA49830F234B714DD165A831639D (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::get_Center()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InscribedRectangle_get_Center_m696DD4516B14D7704623137B04017778985F6E71 (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::get_Angle()
extern "C" IL2CPP_METHOD_ATTR float InscribedRectangle_get_Angle_mE438C540D7E308BB240153941CA4CD7C1809D88E (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::get_Width()
extern "C" IL2CPP_METHOD_ATTR float InscribedRectangle_get_Width_m7C4C6AAF4981A3D4E0869E733C39E9FF48DB2CCF (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::get_Height()
extern "C" IL2CPP_METHOD_ATTR float InscribedRectangle_get_Height_mFD29DC8D2356CD1FCAD9AC9464AB5F3FCE18F4BD (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_FloorScale()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityBoundaryVisualizationProfile_get_FloorScale_m3A88BC2D9C5A8D96520965C5BDFDF1B99DEDCF73 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_FloorPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_mE84D5A0236A51045E2B75BC5A5C109E49D553446 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_FloorMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_FloorMaterial_m7726033FA8290E0706A87086D17AB59AE2E9E2D6 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mA0D703CF85DAF9CB20040BC1B75B0D460EED500E (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___center0, float* ___angle1, float* ___width2, float* ___height3, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_PlayAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_m1123D9108B7C7EFBB150ADE8E44B9AEAAB82EB61 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_PlayAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m2D98DB049ABBC91C88F0DEF51812567BCFD2F6F6 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryVisualizationParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared)(__this, p0, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_TrackedAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_mDC82916C9DC7A6338F0A9827F0A7BCFABAC2D687 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_mCFAFE67B22A23444B53CA7B8EA9C56DA4F1353C7 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m9D28E9592B6FD74DB5E0C605488732C0E678A69D (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD680DED793DDE30025DD85C9058E8AC2E5E50ED6 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mFB8DD50957A4A3767F571D47403298E2AE257A48 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, float p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mFE47D750AF310FE3073C3F7A46FF116354EDA49F (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m069643046EDA4A1B749155B5C8A9C94C4EFC27C2 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* p0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryWallsPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_mD9A493E6F886618D03646968C6C42B8FE52D745D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_BoundaryWallMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryWallMaterial_mE785024AEB9342840D8A15F8A2FD695424FF685C (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Core.Utilities.MathUtilities::GetAngleBetween(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float MathUtilities_GetAngleBetween_m73A444028D4AFCCF226B5ED0EC4CFB609E3AD9D1 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_Encapsulate_mD1F1DAC416D7147E07BF54D87CA7FF84C1088D8D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_BoundaryCeilingMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryCeilingMaterial_m2748E04E2A40DCAB05BBE9C429E6B104DE37A370 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_CeilingPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_m57BBEB9819F4533B05DF3ADCD6C537638C836E33 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_Bounds(Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[])
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Bounds_m1BC372B702BB9A70AAE716623324F5410B3E92C9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_FloorHeight(System.Nullable`1<System.Single>)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorHeight_mC2C22960EEDEF32E2FC185C2EB038E213425DDD2 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
extern "C" IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::.ctor(System.Int32)
inline void List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B *, int32_t, const RuntimeMethod*))List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Experimental.XR.Boundary::TryGetGeometry(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary/Type)
extern "C" IL2CPP_METHOD_ATTR bool Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Edge__ctor_m9C1DC673B3BF4D7E2538D14ABF7C09EC06F4D346 (Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::Add(!0)
inline void List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776 (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B *, Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7 , const RuntimeMethod*))List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776_gshared)(__this, p0, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float p0, float p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, float, const RuntimeMethod*))Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge>::ToArray()
inline EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59 (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * __this, const RuntimeMethod* method)
{
	return ((  EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* (*) (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B *, const RuntimeMethod*))List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::CreateInscribedBounds()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CreateInscribedBounds_mF48B3CDDA345A034BF96608D402447E9DAE65EF8 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.InscribedRectangle::.ctor(Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InscribedRectangle__ctor_m7FDE064DDE4B18B9FE151E22829B9D3DAE65ABC8 (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * __this, EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* p0, int32_t p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_Scale()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_Scale_mF6E1592A8CF0E2F401E7BA66B760DDE28A44E9E9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
extern "C" IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421 (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m8208EDA2200A5D88B14A1A7338EC8670BC1935D0 (EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5A96AFD9DE3DB8721DACA551E92C2DDE72884AF (U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData>(UnityEngine.EventSystems.BaseEventData)
inline BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * ExecuteEvents_ValidateEventData_TisBoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_m7CE8A0300C7EA09CEC051E04CB4E46051136B616 (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method)
{
	return ((  BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared)(p0, method);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Initialize_m14353E3F2A8E22273E416FFD22A11DAB2EAD7C1D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Initialize_m14353E3F2A8E22273E416FFD22A11DAB2EAD7C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// boundaryEventData = new BoundaryEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * L_2 = (BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 *)il2cpp_codegen_object_new(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_il2cpp_TypeInfo_var);
		BoundaryEventData__ctor_m7C24312CA802C375C50A8B64A93980531D06F522(L_2, L_1, /*hidden argument*/NULL);
		__this->set_boundaryEventData_6(L_2);
		// Scale = MixedRealityToolkit.Instance.ActiveProfile.TargetExperienceScale;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_3 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_3);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_4 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = MixedRealityToolkitConfigurationProfile_get_TargetExperienceScale_m6B3549E985958F8583D5BFBCD0A7A6EA61304422(L_4, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_Scale_m02CBC74583E2110C2B9D98A3C3695CD29407D5BE(__this, L_5, /*hidden argument*/NULL);
		// BoundaryHeight = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.BoundaryHeight;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_6 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_6);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_7 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_8 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = MixedRealityBoundaryVisualizationProfile_get_BoundaryHeight_m578BB16AE311380A508A0FF82A12B177B117773D(L_8, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_BoundaryHeight_m073CBCFE4A818A7231506E5706013A9B1AD76FCD(__this, L_9, /*hidden argument*/NULL);
		// SetTrackingSpace();
		MixedRealityBoundarySystem_SetTrackingSpace_m572B0319BC725E75F5C7F1BF7FD4A339707A7062(__this, /*hidden argument*/NULL);
		// CalculateBoundaryBounds();
		MixedRealityBoundarySystem_CalculateBoundaryBounds_mDAFDE39712E38BB07793315CE98FC0B10D050153(__this, /*hidden argument*/NULL);
		// Boundary.visible = true;
		Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50((bool)1, /*hidden argument*/NULL);
		// ShowFloor = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.ShowFloor;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_10 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_10);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_11 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_12 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = MixedRealityBoundaryVisualizationProfile_get_ShowFloor_m6C3D5AB7D340D09A19ADB3830B025D58132E77D8(L_12, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowFloor_m3F99110A345F7882B01701C5FFEE8822A44208A8(__this, L_13, /*hidden argument*/NULL);
		// FloorPhysicsLayer = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.FloorPhysicsLayer;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_14 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_14);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_15 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_16 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = MixedRealityBoundaryVisualizationProfile_get_FloorPhysicsLayer_mAC87B88C235199B05B6C38EAF542C87138DF984A(L_16, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_FloorPhysicsLayer_m9766C51DD3520E8602E600D77543C936BA4CFF0C(__this, L_17, /*hidden argument*/NULL);
		// ShowPlayArea = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.ShowPlayArea;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_18 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_18);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_19 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_20 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21 = MixedRealityBoundaryVisualizationProfile_get_ShowPlayArea_m87BE406E798D6FADFC99995161463EE77264CAC9(L_20, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowPlayArea_m9EA90562010C608DA289750175188BA8937411C6(__this, L_21, /*hidden argument*/NULL);
		// PlayAreaPhysicsLayer = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.PlayAreaPhysicsLayer;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_22 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_22);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_23 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_24 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaPhysicsLayer_mA2F59CBAB356193CEB5BE91A14AAC915F135023C(L_24, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mCF0C539EAC57B4AD6A276E6A6C2C5F412BDD187F(__this, L_25, /*hidden argument*/NULL);
		// ShowTrackedArea = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.ShowTrackedArea;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_26 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_26);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_27 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_28 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29 = MixedRealityBoundaryVisualizationProfile_get_ShowTrackedArea_m615E0A0B414305A1DFC6F60F823B9F3AD633F0F2(L_28, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowTrackedArea_mD2916474FF77CD6D7CCDBCAED6457DEC5D171FE7(__this, L_29, /*hidden argument*/NULL);
		// TrackedAreaPhysicsLayer = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.TrackedAreaPhysicsLayer;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_30 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_30);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_31 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_32 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaPhysicsLayer_m0B06D06078E1F945990C6828D22DFA56A963E28B(L_32, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_mD7BCDF87872C3CCCFD21BC52B72BE739607DF192(__this, L_33, /*hidden argument*/NULL);
		// ShowBoundaryWalls = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.ShowBoundaryWalls;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_34 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_34);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_35 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_36 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_37 = MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryWalls_mBCCA47FA455686CA10C9013641CAE17A1BE10B5F(L_36, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowBoundaryWalls_m5046100B07B9EDC8BA33F74A8A2132B76A51E8EB(__this, L_37, /*hidden argument*/NULL);
		// BoundaryWallsPhysicsLayer = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.BoundaryWallsPhysicsLayer;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_38 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_38);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_39 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_40 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = MixedRealityBoundaryVisualizationProfile_get_BoundaryWallsPhysicsLayer_m05C1834C63C37913F77F6B30F3250287DB37638A(L_40, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_mC89CDD398DB38C0E261A69F41F4BE8347988AE56(__this, L_41, /*hidden argument*/NULL);
		// ShowBoundaryCeiling = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.ShowBoundaryCeiling;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_42 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_42);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_43 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_44 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45 = MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryCeiling_mBC78BA26C2421346AE16999E2902F07E2428C1AA(L_44, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowBoundaryCeiling_m1E0A5E0855B6498559A86D1A8F3A16145028C0A9(__this, L_45, /*hidden argument*/NULL);
		// CeilingPhysicsLayer = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.CeilingPhysicsLayer;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_46 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_46);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_47 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_48 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		int32_t L_49 = MixedRealityBoundaryVisualizationProfile_get_CeilingPhysicsLayer_m302BBEA139DACCA3C90C2E00D86DFD13DFC71CFC(L_48, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m8685A7E14033858B2C9AB86FEB4FC181FC83F30D(__this, L_49, /*hidden argument*/NULL);
		// if (ShowFloor)
		bool L_50 = MixedRealityBoundarySystem_get_ShowFloor_m52CC48643F9DEA94A1D4D80AE4368ACCD2503CE2(__this, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		// GetFloorVisualization();
		MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92(__this, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// if (ShowPlayArea)
		bool L_51 = MixedRealityBoundarySystem_get_ShowPlayArea_mFC1A372E84862049EA1EF9E876E0CC5FD3BD7EBC(__this, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_017b;
		}
	}
	{
		// GetPlayAreaVisualization();
		MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF(__this, /*hidden argument*/NULL);
	}

IL_017b:
	{
		// if (ShowTrackedArea)
		bool L_52 = MixedRealityBoundarySystem_get_ShowTrackedArea_m8123156BDDAEBB4DF4C7BD66792FD6A7383666DA(__this, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_018a;
		}
	}
	{
		// GetTrackedAreaVisualization();
		MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87(__this, /*hidden argument*/NULL);
	}

IL_018a:
	{
		// if (ShowBoundaryWalls)
		bool L_53 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_mA89D8B3E47D44D312A625CF3E01F9E56210B4C59(__this, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0199;
		}
	}
	{
		// GetBoundaryWallVisualization();
		MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6(__this, /*hidden argument*/NULL);
	}

IL_0199:
	{
		// if (ShowBoundaryWalls)
		bool L_54 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_mA89D8B3E47D44D312A625CF3E01F9E56210B4C59(__this, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01a8;
		}
	}
	{
		// GetBoundaryCeilingVisualization();
		MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471(__this, /*hidden argument*/NULL);
	}

IL_01a8:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Destroy_m4215155BBD50B2E59BF92B6A6CE625B63E0C8AEB (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Destroy_m4215155BBD50B2E59BF92B6A6CE625B63E0C8AEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (boundaryVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_boundaryVisualizationParent_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// boundaryVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_boundaryVisualizationParent_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_3, /*hidden argument*/NULL);
		// if (Application.isEditor)
		bool L_4 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Object.DestroyImmediate(boundaryVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_boundaryVisualizationParent_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_5, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0032:
	{
		// Object.Destroy(boundaryVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_boundaryVisualizationParent_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// boundaryVisualizationParent = null;
		__this->set_boundaryVisualizationParent_12((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0044:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// if (Application.isEditor)
		bool L_9 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// Object.DestroyImmediate(currentFloorObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_10, /*hidden argument*/NULL);
		// }
		goto IL_0071;
	}

IL_0066:
	{
		// Object.Destroy(currentFloorObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_11, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// currentFloorObject = null;
		__this->set_currentFloorObject_29((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0078:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ac;
		}
	}
	{
		// if (Application.isEditor)
		bool L_14 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		// Object.DestroyImmediate(currentPlayAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_15, /*hidden argument*/NULL);
		// }
		goto IL_00a5;
	}

IL_009a:
	{
		// Object.Destroy(currentPlayAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// currentPlayAreaObject = null;
		__this->set_currentPlayAreaObject_30((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_00ac:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e0;
		}
	}
	{
		// if (Application.isEditor)
		bool L_19 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ce;
		}
	}
	{
		// Object.DestroyImmediate(currentTrackedAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_20, /*hidden argument*/NULL);
		// }
		goto IL_00d9;
	}

IL_00ce:
	{
		// Object.Destroy(currentTrackedAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_21, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// currentTrackedAreaObject = null;
		__this->set_currentTrackedAreaObject_31((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_00e0:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0114;
		}
	}
	{
		// if (Application.isEditor)
		bool L_24 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0102;
		}
	}
	{
		// Object.DestroyImmediate(currentBoundaryWallObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_25, /*hidden argument*/NULL);
		// }
		goto IL_010d;
	}

IL_0102:
	{
		// Object.Destroy(currentBoundaryWallObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_26, /*hidden argument*/NULL);
	}

IL_010d:
	{
		// currentBoundaryWallObject = null;
		__this->set_currentBoundaryWallObject_32((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0114:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_27, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0148;
		}
	}
	{
		// if (Application.isEditor)
		bool L_29 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0136;
		}
	}
	{
		// Object.DestroyImmediate(currentCeilingObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_30, /*hidden argument*/NULL);
		// }
		goto IL_0141;
	}

IL_0136:
	{
		// Object.Destroy(currentCeilingObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_31, /*hidden argument*/NULL);
	}

IL_0141:
	{
		// currentCeilingObject = null;
		__this->set_currentCeilingObject_33((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0148:
	{
		// showFloor = false;
		__this->set_showFloor_16((bool)0);
		// showPlayArea = false;
		__this->set_showPlayArea_17((bool)0);
		// showTrackedArea = false;
		__this->set_showTrackedArea_19((bool)0);
		// showBoundaryWalls = false;
		__this->set_showBoundaryWalls_21((bool)0);
		// showCeiling = false;
		__this->set_showCeiling_23((bool)0);
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::RaiseBoundaryVisualizationChanged()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// boundaryEventData.Initialize(this, ShowFloor, ShowPlayArea, ShowTrackedArea, ShowBoundaryWalls, ShowBoundaryCeiling);
		BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * L_1 = __this->get_boundaryEventData_6();
		bool L_2 = MixedRealityBoundarySystem_get_ShowFloor_m52CC48643F9DEA94A1D4D80AE4368ACCD2503CE2(__this, /*hidden argument*/NULL);
		bool L_3 = MixedRealityBoundarySystem_get_ShowPlayArea_mFC1A372E84862049EA1EF9E876E0CC5FD3BD7EBC(__this, /*hidden argument*/NULL);
		bool L_4 = MixedRealityBoundarySystem_get_ShowTrackedArea_m8123156BDDAEBB4DF4C7BD66792FD6A7383666DA(__this, /*hidden argument*/NULL);
		bool L_5 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_mA89D8B3E47D44D312A625CF3E01F9E56210B4C59(__this, /*hidden argument*/NULL);
		bool L_6 = MixedRealityBoundarySystem_get_ShowBoundaryCeiling_mBC46964E2F4BEBEB9E6452EFB51717975BA31214(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoundaryEventData_Initialize_mEBD4613A75BAB5660AA4806754683183C1E06F94(L_1, __this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// HandleEvent(boundaryEventData, OnVisualizationChanged);
		BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * L_7 = __this->get_boundaryEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_il2cpp_TypeInfo_var);
		EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * L_8 = ((MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_il2cpp_TypeInfo_var))->get_OnVisualizationChanged_7();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityBoundaryHandler_tF1AD117DBCF2700B19C5E166AE2CFB6DC7D388D0_mE23BBE2B18B4C824E93685004C36E88FEEEF24A8_RuntimeMethod_var, __this, L_7, L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::Register(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Register_m374654B32D129F2C573DD7564D0A4360DA902CA4 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Register(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Register_m297842533079D27F1EFE3A917E914DB57BBDF59A(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::Unregister(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Unregister_mE5274D1695112B908A620402BF2EC4197C89BAFF (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Unregister(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Unregister_mCEB94C27AD40564ED04AC380935386C1C338F2CE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_System_Collections_IEqualityComparer_Equals_mA1147525EEEC0A6EAE5B51E089E266668F7D85EE (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_GetHashCode_mECF0F7D1BF2200BE875DD8D2F56AEFEBCCA2B4A0 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetHashCode_mECF0F7D1BF2200BE875DD8D2F56AEFEBCCA2B4A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityBoundarySystem_get_SourceName_m48998F61222F87ED91BB5054D64EFA310B8308F0(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealityBoundarySystem_get_SourceId_mD43F678C0F159F1DACDCD1B11D23A7BFEBB91130 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_SourceName_m48998F61222F87ED91BB5054D64EFA310B8308F0 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Boundary System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_9();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryVisualizationParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		// if (boundaryVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_boundaryVisualizationParent_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return boundaryVisualizationParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_boundaryVisualizationParent_12();
		return L_2;
	}

IL_0015:
	{
		// var visualizationParent = new GameObject("Boundary System Visualizations");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_3, _stringLiteral8B86287AB9462502DBA9CAE10FBC19B0FFECCF0A, /*hidden argument*/NULL);
		V_0 = L_3;
		// visualizationParent.transform.parent = MixedRealityToolkit.Instance.MixedRealityPlayspace;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_6 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_5, L_7, /*hidden argument*/NULL);
		// return boundaryVisualizationParent = visualizationParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = L_8;
		V_1 = L_9;
		__this->set_boundaryVisualizationParent_12(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_Scale()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_Scale_mF6E1592A8CF0E2F401E7BA66B760DDE28A44E9E9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_Scale(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Scale_m02CBC74583E2110C2B9D98A3C3695CD29407D5BE (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScaleU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryHeight()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = __this->get_U3CBoundaryHeightU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_BoundaryHeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryHeight_m073CBCFE4A818A7231506E5706013A9B1AD76FCD (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = ___value0;
		__this->set_U3CBoundaryHeightU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowFloor()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowFloor_m52CC48643F9DEA94A1D4D80AE4368ACCD2503CE2 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// get { return showFloor; }
		bool L_0 = __this->get_showFloor_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowFloor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowFloor_m3F99110A345F7882B01701C5FFEE8822A44208A8 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowFloor_m3F99110A345F7882B01701C5FFEE8822A44208A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showFloor != value)
		bool L_0 = __this->get_showFloor_16();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// showFloor = value;
		bool L_2 = ___value0;
		__this->set_showFloor_16(L_2);
		// if (value && (currentFloorObject == null))
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// GetFloorVisualization();
		MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// currentFloorObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentFloorObject_29();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_FloorPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_mE84D5A0236A51045E2B75BC5A5C109E49D553446 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_FloorPhysicsLayer_mE84D5A0236A51045E2B75BC5A5C109E49D553446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// floorPhysicsLayer = currentFloorObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentFloorObject_29();
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		__this->set_floorPhysicsLayer_18(L_3);
	}

IL_001f:
	{
		// return floorPhysicsLayer;
		int32_t L_4 = __this->get_floorPhysicsLayer_18();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_FloorPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorPhysicsLayer_m9766C51DD3520E8602E600D77543C936BA4CFF0C (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_FloorPhysicsLayer_m9766C51DD3520E8602E600D77543C936BA4CFF0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// floorPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_floorPhysicsLayer_18(L_0);
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// currentFloorObject.layer = floorPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentFloorObject_29();
		int32_t L_4 = __this->get_floorPhysicsLayer_18();
		NullCheck(L_3);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowPlayArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowPlayArea_mFC1A372E84862049EA1EF9E876E0CC5FD3BD7EBC (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// get { return showPlayArea; }
		bool L_0 = __this->get_showPlayArea_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowPlayArea_m9EA90562010C608DA289750175188BA8937411C6 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowPlayArea_m9EA90562010C608DA289750175188BA8937411C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showPlayArea != value)
		bool L_0 = __this->get_showPlayArea_17();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// showPlayArea = value;
		bool L_2 = ___value0;
		__this->set_showPlayArea_17(L_2);
		// if (value && (currentPlayAreaObject == null))
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// GetPlayAreaVisualization();
		MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// currentPlayAreaObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentPlayAreaObject_30();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_PlayAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_m1123D9108B7C7EFBB150ADE8E44B9AEAAB82EB61 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_m1123D9108B7C7EFBB150ADE8E44B9AEAAB82EB61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// playAreaPhysicsLayer = currentPlayAreaObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		__this->set_playAreaPhysicsLayer_20(L_3);
	}

IL_001f:
	{
		// return playAreaPhysicsLayer;
		int32_t L_4 = __this->get_playAreaPhysicsLayer_20();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_PlayAreaPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mCF0C539EAC57B4AD6A276E6A6C2C5F412BDD187F (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mCF0C539EAC57B4AD6A276E6A6C2C5F412BDD187F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playAreaPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_playAreaPhysicsLayer_20(L_0);
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// currentPlayAreaObject.layer = playAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentPlayAreaObject_30();
		int32_t L_4 = __this->get_playAreaPhysicsLayer_20();
		NullCheck(L_3);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowTrackedArea()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowTrackedArea_m8123156BDDAEBB4DF4C7BD66792FD6A7383666DA (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// get { return showTrackedArea; }
		bool L_0 = __this->get_showTrackedArea_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowTrackedArea_mD2916474FF77CD6D7CCDBCAED6457DEC5D171FE7 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowTrackedArea_mD2916474FF77CD6D7CCDBCAED6457DEC5D171FE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showTrackedArea != value)
		bool L_0 = __this->get_showTrackedArea_19();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// showTrackedArea = value;
		bool L_2 = ___value0;
		__this->set_showTrackedArea_19(L_2);
		// if (value && (currentTrackedAreaObject == null))
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// GetTrackedAreaVisualization();
		MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// currentTrackedAreaObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentTrackedAreaObject_31();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_TrackedAreaPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_mDC82916C9DC7A6338F0A9827F0A7BCFABAC2D687 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_mDC82916C9DC7A6338F0A9827F0A7BCFABAC2D687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// trackedAreaPhysicsLayer = currentTrackedAreaObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentTrackedAreaObject_31();
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		__this->set_trackedAreaPhysicsLayer_22(L_3);
	}

IL_001f:
	{
		// return trackedAreaPhysicsLayer;
		int32_t L_4 = __this->get_trackedAreaPhysicsLayer_22();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_TrackedAreaPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_mD7BCDF87872C3CCCFD21BC52B72BE739607DF192 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_mD7BCDF87872C3CCCFD21BC52B72BE739607DF192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedAreaPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_trackedAreaPhysicsLayer_22(L_0);
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// currentTrackedAreaObject.layer = trackedAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentTrackedAreaObject_31();
		int32_t L_4 = __this->get_trackedAreaPhysicsLayer_22();
		NullCheck(L_3);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowBoundaryWalls()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryWalls_mA89D8B3E47D44D312A625CF3E01F9E56210B4C59 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// get { return showBoundaryWalls; }
		bool L_0 = __this->get_showBoundaryWalls_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryWalls_m5046100B07B9EDC8BA33F74A8A2132B76A51E8EB (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowBoundaryWalls_m5046100B07B9EDC8BA33F74A8A2132B76A51E8EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showBoundaryWalls != value)
		bool L_0 = __this->get_showBoundaryWalls_21();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// showBoundaryWalls = value;
		bool L_2 = ___value0;
		__this->set_showBoundaryWalls_21(L_2);
		// if (value && (currentBoundaryWallObject == null))
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// GetBoundaryWallVisualization();
		MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// currentBoundaryWallObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentBoundaryWallObject_32();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_BoundaryWallsPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_mD9A493E6F886618D03646968C6C42B8FE52D745D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_mD9A493E6F886618D03646968C6C42B8FE52D745D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// boundaryWallsPhysicsLayer = currentBoundaryWallObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentBoundaryWallObject_32();
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		__this->set_boundaryWallsPhysicsLayer_24(L_3);
	}

IL_001f:
	{
		// return boundaryWallsPhysicsLayer;
		int32_t L_4 = __this->get_boundaryWallsPhysicsLayer_24();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_BoundaryWallsPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_mC89CDD398DB38C0E261A69F41F4BE8347988AE56 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_mC89CDD398DB38C0E261A69F41F4BE8347988AE56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boundaryWallsPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_boundaryWallsPhysicsLayer_24(L_0);
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// currentBoundaryWallObject.layer = boundaryWallsPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentBoundaryWallObject_32();
		int32_t L_4 = __this->get_boundaryWallsPhysicsLayer_24();
		NullCheck(L_3);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_ShowBoundaryCeiling()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryCeiling_mBC46964E2F4BEBEB9E6452EFB51717975BA31214 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// get { return showCeiling; }
		bool L_0 = __this->get_showCeiling_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryCeiling_m1E0A5E0855B6498559A86D1A8F3A16145028C0A9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowBoundaryCeiling_m1E0A5E0855B6498559A86D1A8F3A16145028C0A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showCeiling != value)
		bool L_0 = __this->get_showCeiling_23();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// showCeiling = value;
		bool L_2 = ___value0;
		__this->set_showCeiling_23(L_2);
		// if (value && (currentCeilingObject == null))
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// GetBoundaryCeilingVisualization();
		MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// currentCeilingObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentCeilingObject_33();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_m7C584806CBB56E25762D0AD72EC070850C4E09F4(__this, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_CeilingPhysicsLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_m57BBEB9819F4533B05DF3ADCD6C537638C836E33 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_CeilingPhysicsLayer_m57BBEB9819F4533B05DF3ADCD6C537638C836E33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// ceilingPhysicsLayer = currentCeilingObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentCeilingObject_33();
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		__this->set_ceilingPhysicsLayer_25(L_3);
	}

IL_001f:
	{
		// return ceilingPhysicsLayer;
		int32_t L_4 = __this->get_ceilingPhysicsLayer_25();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_CeilingPhysicsLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m8685A7E14033858B2C9AB86FEB4FC181FC83F30D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m8685A7E14033858B2C9AB86FEB4FC181FC83F30D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ceilingPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_ceilingPhysicsLayer_25(L_0);
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// currentFloorObject.layer = ceilingPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentFloorObject_29();
		int32_t L_4 = __this->get_ceilingPhysicsLayer_25();
		NullCheck(L_3);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[] Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_Bounds()
extern "C" IL2CPP_METHOD_ATTR EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = new Edge[0];
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_0 = __this->get_U3CBoundsU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_Bounds(Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.Edge[])
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Bounds_m1BC372B702BB9A70AAE716623324F5410B3E92C9 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* ___value0, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = new Edge[0];
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_0 = ___value0;
		__this->set_U3CBoundsU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::get_FloorHeight()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = __this->get_U3CFloorHeightU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::set_FloorHeight(System.Nullable`1<System.Single>)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorHeight_mC2C22960EEDEF32E2FC185C2EB038E213425DDD2 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___value0, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = ___value0;
		__this->set_U3CFloorHeightU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary_Type)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_Contains_mCF1E29DE66504CEEBF973B42F3632399E8ACBB55 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___location0, int32_t ___boundaryType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Contains_mCF1E29DE66504CEEBF973B42F3632399E8ACBB55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (!EdgeUtilities.IsValidPoint(location))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___location0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var);
		bool L_2 = EdgeUtilities_IsValidPoint_m3A3713FB637678BEB947D2BA7F35C2C2B49BD849(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_3 = MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		// location = MixedRealityToolkit.Instance.MixedRealityPlayspace.InverseTransformPoint(location);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_5 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___location0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_6, L_7, /*hidden argument*/NULL);
		___location0 = L_8;
		// if (FloorHeight.Value > location.y ||
		//     BoundaryHeight < location.y)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_9 = MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_1), /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___location0;
		float L_12 = L_11.get_y_3();
		if ((((float)L_10) > ((float)L_12)))
		{
			goto IL_0057;
		}
	}
	{
		float L_13 = MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___location0;
		float L_15 = L_14.get_y_3();
		if ((!(((float)L_13) < ((float)L_15))))
		{
			goto IL_0059;
		}
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// Vector2 point = new Vector2(location.x, location.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___location0;
		float L_17 = L_16.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = ___location0;
		float L_19 = L_18.get_z_4();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_17, L_19, /*hidden argument*/NULL);
		// if (boundaryType == Boundary.Type.PlayArea)
		int32_t L_20 = ___boundaryType1;
		if (L_20)
		{
			goto IL_0084;
		}
	}
	{
		// if (rectangularBounds != null)
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_21 = __this->get_rectangularBounds_28();
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		// return rectangularBounds.IsInsideBoundary(point);
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_22 = __this->get_rectangularBounds_28();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_0;
		NullCheck(L_22);
		bool L_24 = InscribedRectangle_IsInsideBoundary_m85978B4FEEB0BF59BCD1DC25B3462FD4E073D23E(L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0084:
	{
		// else if (boundaryType == Boundary.Type.TrackedArea)
		int32_t L_25 = ___boundaryType1;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		// return EdgeUtilities.IsInsideBoundary(Bounds, point);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_26 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var);
		bool L_28 = EdgeUtilities_IsInsideBoundary_m7E3EFA713705D2030ED0D01B9E1732F3E20D49DB(L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_0095:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2U26,System.SingleU26,System.SingleU26,System.SingleU26)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mA0D703CF85DAF9CB20040BC1B75B0D460EED500E (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___center0, float* ___angle1, float* ___width2, float* ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mA0D703CF85DAF9CB20040BC1B75B0D460EED500E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (rectangularBounds == null || !rectangularBounds.IsValid)
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_0 = __this->get_rectangularBounds_28();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_1 = __this->get_rectangularBounds_28();
		NullCheck(L_1);
		bool L_2 = InscribedRectangle_get_IsValid_m841B7599C4CCBA49830F234B714DD165A831639D(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}

IL_0015:
	{
		// center = EdgeUtilities.InvalidPoint;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = ___center0;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ((EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_StaticFields*)il2cpp_codegen_static_fields_for(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var))->get_InvalidPoint_1();
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_3 = L_4;
		// angle = 0f;
		float* L_5 = ___angle1;
		*((float*)L_5) = (float)(0.0f);
		// width = 0f;
		float* L_6 = ___width2;
		*((float*)L_6) = (float)(0.0f);
		// height = 0f;
		float* L_7 = ___height3;
		*((float*)L_7) = (float)(0.0f);
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// Vector3 transformedCenter = MixedRealityToolkit.Instance.MixedRealityPlayspace.TransformPoint(
		//     new Vector3(rectangularBounds.Center.x, 0f, rectangularBounds.Center.y));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_8 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_8, /*hidden argument*/NULL);
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_10 = __this->get_rectangularBounds_28();
		NullCheck(L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = InscribedRectangle_get_Center_m696DD4516B14D7704623137B04017778985F6E71(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_0();
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_13 = __this->get_rectangularBounds_28();
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = InscribedRectangle_get_Center_m696DD4516B14D7704623137B04017778985F6E71(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_12, (0.0f), L_15, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_9, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// center = new Vector2(transformedCenter.x, transformedCenter.z);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_18 = ___center0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = L_19.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		float L_22 = L_21.get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_23), L_20, L_22, /*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_18 = L_23;
		// angle = rectangularBounds.Angle;
		float* L_24 = ___angle1;
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_25 = __this->get_rectangularBounds_28();
		NullCheck(L_25);
		float L_26 = InscribedRectangle_get_Angle_mE438C540D7E308BB240153941CA4CD7C1809D88E(L_25, /*hidden argument*/NULL);
		*((float*)L_24) = (float)L_26;
		// width = rectangularBounds.Width;
		float* L_27 = ___width2;
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_28 = __this->get_rectangularBounds_28();
		NullCheck(L_28);
		float L_29 = InscribedRectangle_get_Width_m7C4C6AAF4981A3D4E0869E733C39E9FF48DB2CCF(L_28, /*hidden argument*/NULL);
		*((float*)L_27) = (float)L_29;
		// height = rectangularBounds.Height;
		float* L_30 = ___height3;
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_31 = __this->get_rectangularBounds_28();
		NullCheck(L_31);
		float L_32 = InscribedRectangle_get_Height_mFD29DC8D2356CD1FCAD9AC9464AB5F3FCE18F4BD(L_31, /*hidden argument*/NULL);
		*((float*)L_30) = (float)L_32;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetFloorVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetFloorVisualization_mE6A23A54569D8EC7E4A7450A0EC14F5A361BCE92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0009:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentFloorObject_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return currentFloorObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentFloorObject_29();
		return L_3;
	}

IL_001e:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_4 = MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0030:
	{
		// Vector2 floorScale = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.FloorScale;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_6 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_6);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_7 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_8 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = MixedRealityBoundaryVisualizationProfile_get_FloorScale_m3A88BC2D9C5A8D96520965C5BDFDF1B99DEDCF73(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// currentFloorObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		__this->set_currentFloorObject_29(L_10);
		// currentFloorObject.name = "Boundary System Floor";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentFloorObject_29();
		NullCheck(L_11);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_11, _stringLiteral7FB5E88B95F6DD67982580DA8160B05C3AE91AE3, /*hidden argument*/NULL);
		// currentFloorObject.transform.localScale = new Vector3(floorScale.x, boundaryObjectThickness, floorScale.y);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_currentFloorObject_29();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_0;
		float L_15 = L_14.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_0;
		float L_17 = L_16.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_15, (0.005f), L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_13, L_18, /*hidden argument*/NULL);
		// currentFloorObject.transform.Translate(new Vector3(
		//     MixedRealityToolkit.Instance.MixedRealityPlayspace.position.x,
		//     FloorHeight.Value - (currentFloorObject.transform.localScale.y * 0.5f),
		//     MixedRealityToolkit.Instance.MixedRealityPlayspace.position.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_currentFloorObject_29();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_21 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_25 = MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D(__this, /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_1), /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_currentFloorObject_29();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_31 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_35), L_24, ((float)il2cpp_codegen_subtract((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_30, (float)(0.5f))))), L_34, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_20, L_35, /*hidden argument*/NULL);
		// currentFloorObject.layer = FloorPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_currentFloorObject_29();
		int32_t L_37 = MixedRealityBoundarySystem_get_FloorPhysicsLayer_mE84D5A0236A51045E2B75BC5A5C109E49D553446(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_36, L_37, /*hidden argument*/NULL);
		// currentFloorObject.GetComponent<Renderer>().sharedMaterial = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.FloorMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = __this->get_currentFloorObject_29();
		NullCheck(L_38);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_39 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_38, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_40 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_40);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_41 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_42 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_43 = MixedRealityBoundaryVisualizationProfile_get_FloorMaterial_m7726033FA8290E0706A87086D17AB59AE2E9E2D6(L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_39, L_43, /*hidden argument*/NULL);
		// return currentFloorObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = __this->get_currentFloorObject_29();
		return L_44;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetPlayAreaVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetPlayAreaVisualization_mB278834D2E1E39D2B2B8429042D0FEF51AD2B1CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0009:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentPlayAreaObject_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return currentPlayAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentPlayAreaObject_30();
		return L_3;
	}

IL_001e:
	{
		// if (!TryGetRectangularBoundsParams(out center, out angle, out width, out height))
		bool L_4 = MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mA0D703CF85DAF9CB20040BC1B75B0D460EED500E(__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (float*)(&V_1), (float*)(&V_2), (float*)(&V_3), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0030:
	{
		// if (!EdgeUtilities.IsValidPoint(center))
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t44BC1FB9207D07C973B2C6437541E5256557BBD4_il2cpp_TypeInfo_var);
		bool L_6 = EdgeUtilities_IsValidPoint_m3A3713FB637678BEB947D2BA7F35C2C2B49BD849(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_003a:
	{
		// currentPlayAreaObject = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		__this->set_currentPlayAreaObject_30(L_7);
		// currentPlayAreaObject.name = "Play Area";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_8);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_8, _stringLiteral0F2870EE42AB42B214B04B6E021F9E37E4876948, /*hidden argument*/NULL);
		// currentPlayAreaObject.layer = PlayAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_currentPlayAreaObject_30();
		int32_t L_10 = MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_m1123D9108B7C7EFBB150ADE8E44B9AEAAB82EB61(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_9, L_10, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.Translate(new Vector3(center.x, boundaryObjectRenderOffset, center.y));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_0;
		float L_16 = L_15.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_17), L_14, (0.001f), L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_12, L_17, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.Rotate(new Vector3(90, -angle, 0));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		float L_20 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (90.0f), ((-L_20)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_19, L_21, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.localScale = new Vector3(width, height, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		float L_24 = V_2;
		float L_25 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_24, L_25, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_23, L_26, /*hidden argument*/NULL);
		// currentPlayAreaObject.GetComponent<Renderer>().sharedMaterial = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.PlayAreaMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_27);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_28 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_27, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_29 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_29);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_30 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_31 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_32 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m2D98DB049ABBC91C88F0DEF51812567BCFD2F6F6(L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_28, L_32, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_currentPlayAreaObject_30();
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_33, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_34, L_36, /*hidden argument*/NULL);
		// return currentPlayAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_currentPlayAreaObject_30();
		return L_37;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetTrackedAreaVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetTrackedAreaVisualization_m775D4A3AB485E285FB99E7C90D07F8C0FDB60F87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0009:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentTrackedAreaObject_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return currentTrackedAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentTrackedAreaObject_31();
		return L_3;
	}

IL_001e:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_4 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0029;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0029:
	{
		// List<Vector3> lineVertices = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_5 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_5, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		V_0 = L_5;
		// for (int i = 0; i < Bounds.Length; i++)
		V_2 = 0;
		goto IL_0073;
	}

IL_0033:
	{
		// lineVertices.Add(new Vector3(Bounds[i].PointA.x, 0f, Bounds[i].PointA.y));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = V_0;
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_7 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_address_of_PointA_0();
		float L_10 = L_9->get_x_0();
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_11 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_address_of_PointA_0();
		float L_14 = L_13->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), L_10, (0.0f), L_14, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76(L_6, L_15, /*hidden argument*/List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_17 = V_2;
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_18 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		// lineVertices.Add(lineVertices[0]);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_19 = V_0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_20 = V_0;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_20, 0, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76(L_19, L_21, /*hidden argument*/List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var);
		// currentTrackedAreaObject = new GameObject("Tracked Area");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_22, _stringLiteral3D03E038C14AF03724AFC2F297DEDBF0191D35C0, /*hidden argument*/NULL);
		__this->set_currentTrackedAreaObject_31(L_22);
		// currentTrackedAreaObject.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_currentTrackedAreaObject_31();
		int32_t L_24 = __this->get_ignoreRaycastLayerValue_13();
		NullCheck(L_23);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_23, L_24, /*hidden argument*/NULL);
		// currentTrackedAreaObject.AddComponent<LineRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_currentTrackedAreaObject_31();
		NullCheck(L_25);
		GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA(L_25, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA_RuntimeMethod_var);
		// currentTrackedAreaObject.transform.Translate(new Vector3(
		//     MixedRealityToolkit.Instance.MixedRealityPlayspace.position.x,
		//     boundaryObjectRenderOffset,
		//     MixedRealityToolkit.Instance.MixedRealityPlayspace.position.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = __this->get_currentTrackedAreaObject_31();
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_28 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_32 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), L_31, (0.001f), L_35, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_27, L_36, /*hidden argument*/NULL);
		// currentPlayAreaObject.layer = TrackedAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_currentPlayAreaObject_30();
		int32_t L_38 = MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_mDC82916C9DC7A6338F0A9827F0A7BCFABAC2D687(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_37, L_38, /*hidden argument*/NULL);
		// float lineWidth = 0.01f;
		V_1 = (0.01f);
		// LineRenderer lineRenderer = currentTrackedAreaObject.GetComponent<LineRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_currentTrackedAreaObject_31();
		NullCheck(L_39);
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_40 = GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA(L_39, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA_RuntimeMethod_var);
		// lineRenderer.sharedMaterial = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.TrackedAreaMaterial;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_41 = L_40;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_42 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_42);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_43 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_44 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_45 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_mCFAFE67B22A23444B53CA7B8EA9C56DA4F1353C7(L_44, /*hidden argument*/NULL);
		NullCheck(L_41);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_41, L_45, /*hidden argument*/NULL);
		// lineRenderer.useWorldSpace = false;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_46 = L_41;
		NullCheck(L_46);
		LineRenderer_set_useWorldSpace_m9D28E9592B6FD74DB5E0C605488732C0E678A69D(L_46, (bool)0, /*hidden argument*/NULL);
		// lineRenderer.startWidth = lineWidth;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_47 = L_46;
		float L_48 = V_1;
		NullCheck(L_47);
		LineRenderer_set_startWidth_mD680DED793DDE30025DD85C9058E8AC2E5E50ED6(L_47, L_48, /*hidden argument*/NULL);
		// lineRenderer.endWidth = lineWidth;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_49 = L_47;
		float L_50 = V_1;
		NullCheck(L_49);
		LineRenderer_set_endWidth_mFB8DD50957A4A3767F571D47403298E2AE257A48(L_49, L_50, /*hidden argument*/NULL);
		// lineRenderer.positionCount = lineVertices.Count;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_51 = L_49;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3(L_52, /*hidden argument*/List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var);
		NullCheck(L_51);
		LineRenderer_set_positionCount_mFE47D750AF310FE3073C3F7A46FF116354EDA49F(L_51, L_53, /*hidden argument*/NULL);
		// lineRenderer.SetPositions(lineVertices.ToArray());
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_54 = V_0;
		NullCheck(L_54);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_55 = List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386(L_54, /*hidden argument*/List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var);
		NullCheck(L_51);
		LineRenderer_SetPositions_m069643046EDA4A1B749155B5C8A9C94C4EFC27C2(L_51, L_55, /*hidden argument*/NULL);
		// currentTrackedAreaObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get_currentTrackedAreaObject_31();
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_56, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_58 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_57, L_59, /*hidden argument*/NULL);
		// return currentTrackedAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = __this->get_currentTrackedAreaObject_31();
		return L_60;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetBoundaryWallVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetBoundaryWallVisualization_mF3A44F7A6AA1D1EF1E87D5907621896BD49E8EE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0009:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentBoundaryWallObject_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return currentBoundaryWallObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentBoundaryWallObject_32();
		return L_3;
	}

IL_001e:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_4 = MixedRealityBoundarySystem_get_FloorHeight_mD393E6CB44783A9852DDDBD438AD622EC561C95D(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0030:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_6 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		if ((((RuntimeArray *)L_6)->max_length))
		{
			goto IL_003b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_003b:
	{
		// currentBoundaryWallObject = new GameObject("Tracked Area Walls");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_7, _stringLiteral7383576ECCAB0349555823F261126B8965950B1D, /*hidden argument*/NULL);
		__this->set_currentBoundaryWallObject_32(L_7);
		// currentBoundaryWallObject.layer = BoundaryWallsPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentBoundaryWallObject_32();
		int32_t L_9 = MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_mD9A493E6F886618D03646968C6C42B8FE52D745D(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_8, L_9, /*hidden argument*/NULL);
		// float wallDepth = boundaryObjectThickness;
		V_0 = (0.005f);
		// for (int i = 0; i < Bounds.Length; i++)
		V_2 = 0;
		goto IL_01ab;
	}

IL_0069:
	{
		// GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		// wall.name = $"Wall {i}";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_10;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7C4826711A870DDC870DF57BDC7A2709822EA3D4, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_11, L_15, /*hidden argument*/NULL);
		// wall.GetComponent<Renderer>().sharedMaterial = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.BoundaryWallMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = L_11;
		NullCheck(L_16);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_17 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_16, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_18 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_18);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_19 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_20 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_21 = MixedRealityBoundaryVisualizationProfile_get_BoundaryWallMaterial_mE785024AEB9342840D8A15F8A2FD695424FF685C(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_17, L_21, /*hidden argument*/NULL);
		// wall.transform.localScale = new Vector3((Bounds[i].PointB - Bounds[i].PointA).magnitude, BoundaryHeight, wallDepth);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = L_16;
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_24 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_PointB_1();
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_27 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		NullCheck(L_27);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_PointA_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_26, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		float L_31 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		float L_32 = MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D(__this, /*hidden argument*/NULL);
		float L_33 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_23, L_34, /*hidden argument*/NULL);
		// wall.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = L_22;
		int32_t L_36 = __this->get_ignoreRaycastLayerValue_13();
		NullCheck(L_35);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_35, L_36, /*hidden argument*/NULL);
		// Vector2 mid = Vector2.Lerp(Bounds[i].PointA, Bounds[i].PointB, 0.5f);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_37 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_PointA_0();
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_40 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_PointB_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_39, L_42, (0.5f), /*hidden argument*/NULL);
		V_3 = L_43;
		// wall.transform.position = new Vector3(mid.x, (BoundaryHeight * 0.5f), mid.y);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = L_35;
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_44, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = V_3;
		float L_47 = L_46.get_x_0();
		float L_48 = MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = V_3;
		float L_50 = L_49.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51;
		memset(&L_51, 0, sizeof(L_51));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_51), L_47, ((float)il2cpp_codegen_multiply((float)L_48, (float)(0.5f))), L_50, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_45, L_51, /*hidden argument*/NULL);
		// float rotationAngle = MathUtilities.GetAngleBetween(Bounds[i].PointB, Bounds[i].PointA);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_52 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_53 = V_2;
		NullCheck(L_52);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->get_PointB_1();
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_55 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_56 = V_2;
		NullCheck(L_55);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->get_PointA_0();
		float L_58 = MathUtilities_GetAngleBetween_m73A444028D4AFCCF226B5ED0EC4CFB609E3AD9D1(L_54, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		// wall.transform.rotation = Quaternion.Euler(0.0f, -rotationAngle, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_59 = L_44;
		NullCheck(L_59);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_60 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_59, /*hidden argument*/NULL);
		float L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), ((-L_61)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_60, L_62, /*hidden argument*/NULL);
		// wall.transform.parent = currentBoundaryWallObject.transform;
		NullCheck(L_59);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_63 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_59, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = __this->get_currentBoundaryWallObject_32();
		NullCheck(L_64);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_63, L_65, /*hidden argument*/NULL);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_66 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01ab:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_67 = V_2;
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_68 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_68)->max_length)))))))
		{
			goto IL_0069;
		}
	}
	{
		// currentBoundaryWallObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_69 = __this->get_currentBoundaryWallObject_32();
		NullCheck(L_69);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_69, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_70, L_72, /*hidden argument*/NULL);
		// return currentBoundaryWallObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_73 = __this->get_currentBoundaryWallObject_32();
		return L_73;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::GetBoundaryCeilingVisualization()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m40481D76A890062DEF9E13D7EF5E635EF7ADA471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0009:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentCeilingObject_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return currentCeilingObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentCeilingObject_33();
		return L_3;
	}

IL_001e:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_4 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0029;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0029:
	{
		// Bounds boundaryBoundingBox = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 ));
		// for (int i = 0; i < Bounds.Length; i++)
		V_2 = 0;
		goto IL_007d;
	}

IL_0035:
	{
		// boundaryBoundingBox.Encapsulate(new Vector3(Bounds[i].PointA.x, BoundaryHeight * 0.5f, Bounds[i].PointA.y));
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_5 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_address_of_PointA_0();
		float L_8 = L_7->get_x_0();
		float L_9 = MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D(__this, /*hidden argument*/NULL);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_10 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_address_of_PointA_0();
		float L_13 = L_12->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)(0.5f))), L_13, /*hidden argument*/NULL);
		Bounds_Encapsulate_mD1F1DAC416D7147E07BF54D87CA7FF84C1088D8D((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_16 = V_2;
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_17 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0035;
		}
	}
	{
		// float ceilingDepth = boundaryObjectThickness;
		V_1 = (0.005f);
		// currentCeilingObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		__this->set_currentCeilingObject_33(L_18);
		// currentCeilingObject.name = "Ceiling";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_currentCeilingObject_33();
		NullCheck(L_19);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_19, _stringLiteralE29DB923E25B51AC8B5CE56FF91A58B6A8D895B4, /*hidden argument*/NULL);
		// currentCeilingObject.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_currentCeilingObject_33();
		int32_t L_21 = __this->get_ignoreRaycastLayerValue_13();
		NullCheck(L_20);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_20, L_21, /*hidden argument*/NULL);
		// currentCeilingObject.transform.localScale = new Vector3(boundaryBoundingBox.size.x, ceilingDepth, boundaryBoundingBox.size.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_currentCeilingObject_33();
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_25 = L_24.get_x_2();
		float L_26 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_28 = L_27.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_29), L_25, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_23, L_29, /*hidden argument*/NULL);
		// currentCeilingObject.transform.Translate(new Vector3(
		//     boundaryBoundingBox.center.x,
		//     BoundaryHeight + (currentCeilingObject.transform.localScale.y * 0.5f),
		//     boundaryBoundingBox.center.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentCeilingObject_33();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_33 = L_32.get_x_2();
		float L_34 = MixedRealityBoundarySystem_get_BoundaryHeight_mB1664FC8FAEFD327BD96F7AC896EAC5E51BA0A3D(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_currentCeilingObject_33();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_41), L_33, ((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_38, (float)(0.5f))))), L_40, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_31, L_41, /*hidden argument*/NULL);
		// currentCeilingObject.GetComponent<Renderer>().sharedMaterial = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile.BoundaryCeilingMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = __this->get_currentCeilingObject_33();
		NullCheck(L_42);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_43 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_42, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_44 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_44);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_45 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_46 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_47 = MixedRealityBoundaryVisualizationProfile_get_BoundaryCeilingMaterial_m2748E04E2A40DCAB05BBE9C429E6B104DE37A370(L_46, /*hidden argument*/NULL);
		NullCheck(L_43);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_43, L_47, /*hidden argument*/NULL);
		// currentCeilingObject.layer = CeilingPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = __this->get_currentCeilingObject_33();
		int32_t L_49 = MixedRealityBoundarySystem_get_CeilingPhysicsLayer_m57BBEB9819F4533B05DF3ADCD6C537638C836E33(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_48, L_49, /*hidden argument*/NULL);
		// currentCeilingObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = __this->get_currentCeilingObject_33();
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_50, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_52 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m1F54DB4B8C50F7ACFD3F62D7BAE2EFF136224FE0(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_51, L_53, /*hidden argument*/NULL);
		// return currentCeilingObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = __this->get_currentCeilingObject_33();
		return L_54;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::CalculateBoundaryBounds()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CalculateBoundaryBounds_mDAFDE39712E38BB07793315CE98FC0B10D050153 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_CalculateBoundaryBounds_mDAFDE39712E38BB07793315CE98FC0B10D050153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * V_1 = NULL;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		// Bounds = new Edge[0];
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_0 = (EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C*)SZArrayNew(EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C_il2cpp_TypeInfo_var, (uint32_t)0);
		MixedRealityBoundarySystem_set_Bounds_m1BC372B702BB9A70AAE716623324F5410B3E92C9(__this, L_0, /*hidden argument*/NULL);
		// FloorHeight = null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_1 = V_2;
		MixedRealityBoundarySystem_set_FloorHeight_mC2C22960EEDEF32E2FC185C2EB038E213425DDD2(__this, L_1, /*hidden argument*/NULL);
		// rectangularBounds = null;
		__this->set_rectangularBounds_28((InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 *)NULL);
		// if (XRDevice.GetTrackingSpaceType() != TrackingSpaceType.RoomScale)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		int32_t L_2 = XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		// return;
		return;
	}

IL_002b:
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2(L_3, 0, /*hidden argument*/List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var);
		V_0 = L_3;
		// var boundaryEdges = new List<Edge>(0);
		List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * L_4 = (List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B *)il2cpp_codegen_object_new(List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B_il2cpp_TypeInfo_var);
		List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F(L_4, 0, /*hidden argument*/List_1__ctor_mDA664E8C0C491FA433B377914D43CCBC5B10F03F_RuntimeMethod_var);
		V_1 = L_4;
		// if (Boundary.TryGetGeometry(boundaryGeometry, Boundary.Type.TrackedArea))
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_5 = V_0;
		bool L_6 = Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F(L_5, 1, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00bc;
		}
	}
	{
		// float floorHeight = float.MaxValue;
		V_3 = (std::numeric_limits<float>::max());
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		V_4 = 0;
		goto IL_0093;
	}

IL_004d:
	{
		// Vector3 pointA = boundaryGeometry[i];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_7, L_8, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		V_5 = L_9;
		// Vector3 pointB = boundaryGeometry[(i + 1) % boundaryGeometry.Count];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = V_0;
		int32_t L_11 = V_4;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3(L_12, /*hidden argument*/List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_10, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))%(int32_t)L_13)), /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		V_6 = L_14;
		// boundaryEdges.Add(new Edge(pointA, pointB));
		List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * L_15 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_6;
		Edge_tE5727EB1727CCE66ACE6F3B42992025A56DEB3C7  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Edge__ctor_m9C1DC673B3BF4D7E2538D14ABF7C09EC06F4D346((&L_18), L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776(L_15, L_18, /*hidden argument*/List_1_Add_m5784F176351BC41C97FBFCE5CE64FC3572E19776_RuntimeMethod_var);
		// floorHeight = Mathf.Min(floorHeight, boundaryGeometry[i].y);
		float L_19 = V_3;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_20, L_21, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		float L_23 = L_22.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_19, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		int32_t L_26 = V_4;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3(L_27, /*hidden argument*/List_1_get_Count_m69F7903337857AF491827CF48D18C3CD7DF49CA3_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_004d;
		}
	}
	{
		// FloorHeight = floorHeight;
		float L_29 = V_3;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_30), L_29, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		MixedRealityBoundarySystem_set_FloorHeight_mC2C22960EEDEF32E2FC185C2EB038E213425DDD2(__this, L_30, /*hidden argument*/NULL);
		// Bounds = boundaryEdges.ToArray();
		List_1_t5C673F9E80F6F8259BA689FCD82EB3CCBDE6833B * L_31 = V_1;
		NullCheck(L_31);
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_32 = List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59(L_31, /*hidden argument*/List_1_ToArray_mDD286C723F9B2AA27084530C88A37013386A1B59_RuntimeMethod_var);
		MixedRealityBoundarySystem_set_Bounds_m1BC372B702BB9A70AAE716623324F5410B3E92C9(__this, L_32, /*hidden argument*/NULL);
		// CreateInscribedBounds();
		MixedRealityBoundarySystem_CreateInscribedBounds_mF48B3CDDA345A034BF96608D402447E9DAE65EF8(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00bc:
	{
		// Debug.LogWarning("Failed to calculate boundary bounds.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral89F18224F9872BC3FEDC818D630C509C663DA4E6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::CreateInscribedBounds()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CreateInscribedBounds_mF48B3CDDA345A034BF96608D402447E9DAE65EF8 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_CreateInscribedBounds_mF48B3CDDA345A034BF96608D402447E9DAE65EF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectangularBounds = new InscribedRectangle(Bounds, Mathf.Abs("Mixed Reality Toolkit".GetHashCode()));
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_0 = MixedRealityBoundarySystem_get_Bounds_m08A670A53E8CFA0DC37EA9A8699C5C8EEE50AF22(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 * L_3 = (InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87 *)il2cpp_codegen_object_new(InscribedRectangle_t9E33DA766BEACCC7486156F0F060ED24847AEE87_il2cpp_TypeInfo_var);
		InscribedRectangle__ctor_m7FDE064DDE4B18B9FE151E22829B9D3DAE65ABC8(L_3, L_0, L_2, /*hidden argument*/NULL);
		__this->set_rectangularBounds_28(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::SetTrackingSpace()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_SetTrackingSpace_m572B0319BC725E75F5C7F1BF7FD4A339707A7062 (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_SetTrackingSpace_m572B0319BC725E75F5C7F1BF7FD4A339707A7062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (Scale)
		int32_t L_0 = MixedRealityBoundarySystem_get_Scale_mF6E1592A8CF0E2F401E7BA66B760DDE28A44E9E9(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// trackingSpace = TrackingSpaceType.RoomScale;
		V_0 = 1;
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// trackingSpace = TrackingSpaceType.Stationary;
		V_0 = 0;
		// break;
		goto IL_0037;
	}

IL_002b:
	{
		// trackingSpace = TrackingSpaceType.Stationary;
		V_0 = 0;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Stationary tracking space.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral08F4C85E3C7B3015A1D6AE49E918EEF4724AA3A2, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// bool trackingSpaceSet = XRDevice.SetTrackingSpaceType(trackingSpace);
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88(L_2, /*hidden argument*/NULL);
		// if (!trackingSpaceSet)
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__ctor_m8EA6DFB5D8C1C018B0013E1F96DF0DF21E48920D (MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem__ctor_m8EA6DFB5D8C1C018B0013E1F96DF0DF21E48920D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName { get; } = "Mixed Reality Boundary System";
		__this->set_U3CSourceNameU3Ek__BackingField_9(_stringLiteral8B9DE5633EA0FF1587D63358C4EEB4B549D20B42);
		// private int ignoreRaycastLayerValue = 2;
		__this->set_ignoreRaycastLayerValue_13(2);
		// public float BoundaryHeight { get; set; } = 3f;
		__this->set_U3CBoundaryHeightU3Ek__BackingField_15((3.0f));
		// public Edge[] Bounds { get; private set; } = new Edge[0];
		EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C* L_0 = (EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C*)SZArrayNew(EdgeU5BU5D_t926B9B1CB308427D72DA5A551F5BE052E99E0F5C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CBoundsU3Ek__BackingField_26(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var);
		BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__cctor_m364FB1A30BA66AC1C526F4F571E5783F04A69BEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem__cctor_m364FB1A30BA66AC1C526F4F571E5783F04A69BEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityBoundaryHandler> OnVisualizationChanged =
		//     delegate (IMixedRealityBoundaryHandler handler, BaseEventData eventData)
		// {
		//     var boundaryEventData = ExecuteEvents.ValidateEventData<BoundaryEventData>(eventData);
		//     handler.OnBoundaryVisualizationChanged(boundaryEventData);
		// };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_il2cpp_TypeInfo_var);
		U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * L_0 = ((U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD * L_1 = (EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD *)il2cpp_codegen_object_new(EventFunction_1_tC567429285EEE5042DCE401FA0973242427537DD_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m8208EDA2200A5D88B14A1A7338EC8670BC1935D0(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__95_0_mB197D348DE836F308B80DED596815E53A137B7D2_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m8208EDA2200A5D88B14A1A7338EC8670BC1935D0_RuntimeMethod_var);
		((MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityBoundarySystem_tABC4B4CC95DD9BB32B8D9A94BC0163672395850D_il2cpp_TypeInfo_var))->set_OnVisualizationChanged_7(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m55F9B5ED5DDAFD3A1A4FA2DBCCD85F5E80D455B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m55F9B5ED5DDAFD3A1A4FA2DBCCD85F5E80D455B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * L_0 = (U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB *)il2cpp_codegen_object_new(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB5A96AFD9DE3DB8721DACA551E92C2DDE72884AF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5A96AFD9DE3DB8721DACA551E92C2DDE72884AF (U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.BoundarySystem.MixedRealityBoundarySystem_<>c::<.cctor>b__95_0(Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__95_0_mB197D348DE836F308B80DED596815E53A137B7D2 (U3CU3Ec_tC2A0680726AB484F8E0E2E222EC3522A3128AEBB * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__95_0_mB197D348DE836F308B80DED596815E53A137B7D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * V_0 = NULL;
	{
		// var boundaryEventData = ExecuteEvents.ValidateEventData<BoundaryEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * L_1 = ExecuteEvents_ValidateEventData_TisBoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_m7CE8A0300C7EA09CEC051E04CB4E46051136B616(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisBoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_m7CE8A0300C7EA09CEC051E04CB4E46051136B616_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBoundaryVisualizationChanged(boundaryEventData);
		RuntimeObject* L_2 = ___handler0;
		BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundaryHandler::OnBoundaryVisualizationChanged(Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData) */, IMixedRealityBoundaryHandler_tF1AD117DBCF2700B19C5E166AE2CFB6DC7D388D0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
