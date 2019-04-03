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
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_t3E364A7BC302631913266C5AA6FAF37902D310C0;
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
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498;
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1;
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3;
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler/FrameInfo
struct FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415;
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler/FrameInfo[]
struct FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F;
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
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

extern RuntimeClass* BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var;
extern RuntimeClass* DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388_il2cpp_TypeInfo_var;
extern RuntimeClass* FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDiagnosticsHandler_t3E364A7BC302631913266C5AA6FAF37902D310C0_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE;
extern String_t* _stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05;
extern String_t* _stringLiteral1ABB10C10AA55AA4C4A7BB01ED7937666E24EECF;
extern String_t* _stringLiteral2222C589E464F2FF70A6B598858A8461CD94DF00;
extern String_t* _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
extern String_t* _stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491;
extern String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
extern String_t* _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9;
extern String_t* _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A;
extern String_t* _stringLiteral5D98D65F0273A364ECC21522C1957B47E93E5F2D;
extern String_t* _stringLiteral747531815CBEB7F7FEA8B5E7093B320E5557C339;
extern String_t* _stringLiteral91B0658329EFA06D4DA89C23A162B41DFCEE5202;
extern String_t* _stringLiteral9315667F99D5901C8E062AAC730B9254258670B5;
extern String_t* _stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6;
extern String_t* _stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4;
extern String_t* _stringLiteralB68BA27C42E6FA7B3EE354612CBD81970A25BAAE;
extern String_t* _stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD;
extern String_t* _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8;
extern String_t* _stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301;
extern String_t* _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3;
extern String_t* _stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5;
extern String_t* _stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3;
extern const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t3E364A7BC302631913266C5AA6FAF37902D310C0_m58F41B693FC01530D5A07CA709E447D8E6D3CF09_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
extern const RuntimeMethod* EventFunction_1__ctor_mEB3D974574A06A214C9670FB4E5AFBEE406E4B54_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_m080744DE7364C6556B8CE0EBC0102190BD2CA85C_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_mCB64BD57839575F2A2B80D25A90C702F22124632_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__23_0_mDA4C75FD455F396FE97169989EF62031B61ED27A_RuntimeMethod_var;
extern const uint32_t MixedRealityDiagnosticsSystem_CreateDiagnosticVisualizationParent_m57FE851D798EA6FC0061DAEE12575660D4F648E4_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem_Destroy_mDA4E24F61BEC8CD2DC1C7B2F80331E2A884FF6B2_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem_Initialize_mD8B5AC6981420E8BEFFBCD7ACA84CA5F4CA71CAF_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_mFAB0779F8BEB515127FD6617ABA67EACB7D5795B_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem__cctor_m66970965BC0AAF15AFD0F88343963D2410240AB7_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem__ctor_m3587488EC8510C5322B694C4C2381F19A9752249_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035_MetadataUsageId;
extern const uint32_t MixedRealityDiagnosticsSystem_set_ShowProfiler_mB29865A0C662F24BD744DD498A75BA00D5230643_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mC0A998E44FE3FA426E7B08586349D374BAC428D6_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_BuildWindow_mF338D58A1795ACCCCE61301B0EE92255750F4C5F_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_LateUpdate_m73F2FE3400D3B03A03C1D02482E465821D518BDB_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_OnDestroy_m22169D1ADA551080EAD803BC0B24B2AD6B9E4BFE_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_Reset_m75D06F08E827C8D16732A4AE64B6ADF866677DC3_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler__ctor_m27ADF441C52B269C083331A5E930D3C6D97CFCFB_MetadataUsageId;
extern const uint32_t MixedRealityToolkitVisualProfiler_get_AppFrameRate_mC78F886D3C1552528163BC9D389575902AFD806E_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__23_0_mDA4C75FD455F396FE97169989EF62031B61ED27A_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m5934D2F1D3E0DE170F1B8E497E7738FB26C9BE5B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T4128AA319B877B9CF69AB4915499E9717D75242E_H
#define U3CMODULEU3E_T4128AA319B877B9CF69AB4915499E9717D75242E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4128AA319B877B9CF69AB4915499E9717D75242E 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T4128AA319B877B9CF69AB4915499E9717D75242E_H
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
#ifndef U3CU3EC_T56A6C1C54E44706A8731E14742AA59C242385EF1_H
#define U3CU3EC_T56A6C1C54E44706A8731E14742AA59C242385EF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c
struct  U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c::<>9
	U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T56A6C1C54E44706A8731E14742AA59C242385EF1_H
#ifndef FRAMEINFO_TDA687E9AE45815C57726BD3E1F24A81C70D2D415_H
#define FRAMEINFO_TDA687E9AE45815C57726BD3E1F24A81C70D2D415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo
struct  FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415  : public RuntimeObject
{
public:
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo::PropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___PropertyBlock_0;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo::Renderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___Renderer_1;

public:
	inline static int32_t get_offset_of_PropertyBlock_0() { return static_cast<int32_t>(offsetof(FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415, ___PropertyBlock_0)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_PropertyBlock_0() const { return ___PropertyBlock_0; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_PropertyBlock_0() { return &___PropertyBlock_0; }
	inline void set_PropertyBlock_0(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___PropertyBlock_0 = value;
		Il2CppCodeGenWriteBarrier((&___PropertyBlock_0), value);
	}

	inline static int32_t get_offset_of_Renderer_1() { return static_cast<int32_t>(offsetof(FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415, ___Renderer_1)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_Renderer_1() const { return ___Renderer_1; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_Renderer_1() { return &___Renderer_1; }
	inline void set_Renderer_1(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___Renderer_1 = value;
		Il2CppCodeGenWriteBarrier((&___Renderer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEINFO_TDA687E9AE45815C57726BD3E1F24A81C70D2D415_H
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
#ifndef STOPWATCH_T0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_H
#define STOPWATCH_T0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
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
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
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
#ifndef MIXEDREALITYDIAGNOSTICSSYSTEM_T2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_H
#define MIXEDREALITYDIAGNOSTICSSYSTEM_T2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem
struct  MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498  : public BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___diagnosticVisualizationParent_6;
	// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * ___visualProfiler_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_9;
	// Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * ___eventData_10;

public:
	inline static int32_t get_offset_of_diagnosticVisualizationParent_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498, ___diagnosticVisualizationParent_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_diagnosticVisualizationParent_6() const { return ___diagnosticVisualizationParent_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_diagnosticVisualizationParent_6() { return &___diagnosticVisualizationParent_6; }
	inline void set_diagnosticVisualizationParent_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___diagnosticVisualizationParent_6 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticVisualizationParent_6), value);
	}

	inline static int32_t get_offset_of_visualProfiler_7() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498, ___visualProfiler_7)); }
	inline MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * get_visualProfiler_7() const { return ___visualProfiler_7; }
	inline MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 ** get_address_of_visualProfiler_7() { return &___visualProfiler_7; }
	inline void set_visualProfiler_7(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * value)
	{
		___visualProfiler_7 = value;
		Il2CppCodeGenWriteBarrier((&___visualProfiler_7), value);
	}

	inline static int32_t get_offset_of_showDiagnostics_8() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498, ___showDiagnostics_8)); }
	inline bool get_showDiagnostics_8() const { return ___showDiagnostics_8; }
	inline bool* get_address_of_showDiagnostics_8() { return &___showDiagnostics_8; }
	inline void set_showDiagnostics_8(bool value)
	{
		___showDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_showProfiler_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498, ___showProfiler_9)); }
	inline bool get_showProfiler_9() const { return ___showProfiler_9; }
	inline bool* get_address_of_showProfiler_9() { return &___showProfiler_9; }
	inline void set_showProfiler_9(bool value)
	{
		___showProfiler_9 = value;
	}

	inline static int32_t get_offset_of_eventData_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498, ___eventData_10)); }
	inline DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * get_eventData_10() const { return ___eventData_10; }
	inline DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A ** get_address_of_eventData_10() { return &___eventData_10; }
	inline void set_eventData_10(DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * value)
	{
		___eventData_10 = value;
		Il2CppCodeGenWriteBarrier((&___eventData_10), value);
	}
};

struct MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * ___OnDiagnosticsChanged_11;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChanged_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_StaticFields, ___OnDiagnosticsChanged_11)); }
	inline EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * get_OnDiagnosticsChanged_11() const { return ___OnDiagnosticsChanged_11; }
	inline EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 ** get_address_of_OnDiagnosticsChanged_11() { return &___OnDiagnosticsChanged_11; }
	inline void set_OnDiagnosticsChanged_11(EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * value)
	{
		___OnDiagnosticsChanged_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnDiagnosticsChanged_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYDIAGNOSTICSSYSTEM_T2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_H
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
#ifndef MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#define MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#ifndef MOTIONVECTORGENERATIONMODE_TB3408BD37D803441061663F0BAD2EE29B32D2B63_H
#define MOTIONVECTORGENERATIONMODE_TB3408BD37D803441061663F0BAD2EE29B32D2B63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MotionVectorGenerationMode
struct  MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63 
{
public:
	// System.Int32 UnityEngine.MotionVectorGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63, ___value___2)); }
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
#endif // MOTIONVECTORGENERATIONMODE_TB3408BD37D803441061663F0BAD2EE29B32D2B63_H
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
#ifndef LIGHTPROBEUSAGE_TC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8_H
#define LIGHTPROBEUSAGE_TC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.LightProbeUsage
struct  LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8, ___value___2)); }
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
#endif // LIGHTPROBEUSAGE_TC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8_H
#ifndef REFLECTIONPROBEUSAGE_TAFF366D7F5E43B871C7302C4D7D0F48859E7B31A_H
#define REFLECTIONPROBEUSAGE_TAFF366D7F5E43B871C7302C4D7D0F48859E7B31A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ReflectionProbeUsage
struct  ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A, ___value___2)); }
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
#endif // REFLECTIONPROBEUSAGE_TAFF366D7F5E43B871C7302C4D7D0F48859E7B31A_H
#ifndef SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#define SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
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
#endif // SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#ifndef TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#define TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
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
#endif // TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifndef DIAGNOSTICSEVENTDATA_T920F8C9B6732B3D907BEEBCF57C0A844B126B44A_H
#define DIAGNOSTICSEVENTDATA_T920F8C9B6732B3D907BEEBCF57C0A844B126B44A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData
struct  DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSEVENTDATA_T920F8C9B6732B3D907BEEBCF57C0A844B126B44A_H
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
#ifndef SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
#define SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_TE2731FF351B74AB4186897484FB01E000C1160CA_H
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
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef EVENTFUNCTION_1_T4EBC4E8A25334AA6129CFCAD679807FCB26CCC12_H
#define EVENTFUNCTION_1_T4EBC4E8A25334AA6129CFCAD679807FCB26CCC12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler>
struct  EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T4EBC4E8A25334AA6129CFCAD679807FCB26CCC12_H
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
#ifndef TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#define TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
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
#ifndef MIXEDREALITYDIAGNOSTICSPROFILE_T093357B7B457411776568A856093ECA44D550536_H
#define MIXEDREALITYDIAGNOSTICSPROFILE_T093357B7B457411776568A856093ECA44D550536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile
struct  MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;

public:
	inline static int32_t get_offset_of_showDiagnostics_5() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536, ___showDiagnostics_5)); }
	inline bool get_showDiagnostics_5() const { return ___showDiagnostics_5; }
	inline bool* get_address_of_showDiagnostics_5() { return &___showDiagnostics_5; }
	inline void set_showDiagnostics_5(bool value)
	{
		___showDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_showProfiler_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536, ___showProfiler_6)); }
	inline bool get_showProfiler_6() const { return ___showProfiler_6; }
	inline bool* get_address_of_showProfiler_6() { return &___showProfiler_6; }
	inline void set_showProfiler_6(bool value)
	{
		___showProfiler_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYDIAGNOSTICSPROFILE_T093357B7B457411776568A856093ECA44D550536_H
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
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
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
#ifndef MIXEDREALITYTOOLKITVISUALPROFILER_T91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_H
#define MIXEDREALITYTOOLKITVISUALPROFILER_T91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler
struct  MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CWindowParentU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_8;
	// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_9;
	// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::windowYawRotation
	float ___windowYawRotation_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_11;
	// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_12;
	// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_13;
	// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_14;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::baseColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___baseColor_15;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::targetFrameRateColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___targetFrameRateColor_16;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::missedFrameRateColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___missedFrameRateColor_17;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryUsedColor_18;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryPeakColor_19;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryLimitColor_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::window
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___window_21;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___frameRateText_22;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___usedMemoryText_23;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___peakMemoryText_24;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___limitMemoryText_25;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___usedAnchor_26;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___peakAnchor_27;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::windowRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowRotation_28;
	// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo[] Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameInfo
	FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* ___frameInfo_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameOffset
	int32_t ___frameOffset_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_31;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_32;
	// System.String[] Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::frameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___frameRateStrings_33;
	// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::displayedDecimalFormat
	String_t* ___displayedDecimalFormat_34;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_35;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_36;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_37;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::propertyBlockFrameTarget
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___propertyBlockFrameTarget_38;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::propertyBlockFrameMissed
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___propertyBlockFrameMissed_39;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::stringBuilder
	StringBuilder_t * ___stringBuilder_40;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultMaterial_41;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___backgroundMaterial_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___foregroundMaterial_43;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::textMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___textMaterial_44;

public:
	inline static int32_t get_offset_of_U3CWindowParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___U3CWindowParentU3Ek__BackingField_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CWindowParentU3Ek__BackingField_5() const { return ___U3CWindowParentU3Ek__BackingField_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CWindowParentU3Ek__BackingField_5() { return &___U3CWindowParentU3Ek__BackingField_5; }
	inline void set_U3CWindowParentU3Ek__BackingField_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CWindowParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWindowParentU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_isVisible_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___isVisible_6)); }
	inline bool get_isVisible_6() const { return ___isVisible_6; }
	inline bool* get_address_of_isVisible_6() { return &___isVisible_6; }
	inline void set_isVisible_6(bool value)
	{
		___isVisible_6 = value;
	}

	inline static int32_t get_offset_of_frameRange_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameRange_7)); }
	inline int32_t get_frameRange_7() const { return ___frameRange_7; }
	inline int32_t* get_address_of_frameRange_7() { return &___frameRange_7; }
	inline void set_frameRange_7(int32_t value)
	{
		___frameRange_7 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameSampleRate_8)); }
	inline float get_frameSampleRate_8() const { return ___frameSampleRate_8; }
	inline float* get_address_of_frameSampleRate_8() { return &___frameSampleRate_8; }
	inline void set_frameSampleRate_8(float value)
	{
		___frameSampleRate_8 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___windowFollowSpeed_9)); }
	inline float get_windowFollowSpeed_9() const { return ___windowFollowSpeed_9; }
	inline float* get_address_of_windowFollowSpeed_9() { return &___windowFollowSpeed_9; }
	inline void set_windowFollowSpeed_9(float value)
	{
		___windowFollowSpeed_9 = value;
	}

	inline static int32_t get_offset_of_windowYawRotation_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___windowYawRotation_10)); }
	inline float get_windowYawRotation_10() const { return ___windowYawRotation_10; }
	inline float* get_address_of_windowYawRotation_10() { return &___windowYawRotation_10; }
	inline void set_windowYawRotation_10(float value)
	{
		___windowYawRotation_10 = value;
	}

	inline static int32_t get_offset_of_displayedDecimalDigits_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___displayedDecimalDigits_11)); }
	inline int32_t get_displayedDecimalDigits_11() const { return ___displayedDecimalDigits_11; }
	inline int32_t* get_address_of_displayedDecimalDigits_11() { return &___displayedDecimalDigits_11; }
	inline void set_displayedDecimalDigits_11(int32_t value)
	{
		___displayedDecimalDigits_11 = value;
	}

	inline static int32_t get_offset_of_usedMemoryString_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___usedMemoryString_12)); }
	inline String_t* get_usedMemoryString_12() const { return ___usedMemoryString_12; }
	inline String_t** get_address_of_usedMemoryString_12() { return &___usedMemoryString_12; }
	inline void set_usedMemoryString_12(String_t* value)
	{
		___usedMemoryString_12 = value;
		Il2CppCodeGenWriteBarrier((&___usedMemoryString_12), value);
	}

	inline static int32_t get_offset_of_peakMemoryString_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___peakMemoryString_13)); }
	inline String_t* get_peakMemoryString_13() const { return ___peakMemoryString_13; }
	inline String_t** get_address_of_peakMemoryString_13() { return &___peakMemoryString_13; }
	inline void set_peakMemoryString_13(String_t* value)
	{
		___peakMemoryString_13 = value;
		Il2CppCodeGenWriteBarrier((&___peakMemoryString_13), value);
	}

	inline static int32_t get_offset_of_limitMemoryString_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___limitMemoryString_14)); }
	inline String_t* get_limitMemoryString_14() const { return ___limitMemoryString_14; }
	inline String_t** get_address_of_limitMemoryString_14() { return &___limitMemoryString_14; }
	inline void set_limitMemoryString_14(String_t* value)
	{
		___limitMemoryString_14 = value;
		Il2CppCodeGenWriteBarrier((&___limitMemoryString_14), value);
	}

	inline static int32_t get_offset_of_baseColor_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___baseColor_15)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_baseColor_15() const { return ___baseColor_15; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_baseColor_15() { return &___baseColor_15; }
	inline void set_baseColor_15(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___baseColor_15 = value;
	}

	inline static int32_t get_offset_of_targetFrameRateColor_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___targetFrameRateColor_16)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_targetFrameRateColor_16() const { return ___targetFrameRateColor_16; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_targetFrameRateColor_16() { return &___targetFrameRateColor_16; }
	inline void set_targetFrameRateColor_16(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___targetFrameRateColor_16 = value;
	}

	inline static int32_t get_offset_of_missedFrameRateColor_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___missedFrameRateColor_17)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_missedFrameRateColor_17() const { return ___missedFrameRateColor_17; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_missedFrameRateColor_17() { return &___missedFrameRateColor_17; }
	inline void set_missedFrameRateColor_17(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___missedFrameRateColor_17 = value;
	}

	inline static int32_t get_offset_of_memoryUsedColor_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___memoryUsedColor_18)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryUsedColor_18() const { return ___memoryUsedColor_18; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryUsedColor_18() { return &___memoryUsedColor_18; }
	inline void set_memoryUsedColor_18(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryUsedColor_18 = value;
	}

	inline static int32_t get_offset_of_memoryPeakColor_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___memoryPeakColor_19)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryPeakColor_19() const { return ___memoryPeakColor_19; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryPeakColor_19() { return &___memoryPeakColor_19; }
	inline void set_memoryPeakColor_19(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryPeakColor_19 = value;
	}

	inline static int32_t get_offset_of_memoryLimitColor_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___memoryLimitColor_20)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryLimitColor_20() const { return ___memoryLimitColor_20; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryLimitColor_20() { return &___memoryLimitColor_20; }
	inline void set_memoryLimitColor_20(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryLimitColor_20 = value;
	}

	inline static int32_t get_offset_of_window_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___window_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_window_21() const { return ___window_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_window_21() { return &___window_21; }
	inline void set_window_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___window_21 = value;
		Il2CppCodeGenWriteBarrier((&___window_21), value);
	}

	inline static int32_t get_offset_of_frameRateText_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameRateText_22)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_frameRateText_22() const { return ___frameRateText_22; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_frameRateText_22() { return &___frameRateText_22; }
	inline void set_frameRateText_22(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___frameRateText_22 = value;
		Il2CppCodeGenWriteBarrier((&___frameRateText_22), value);
	}

	inline static int32_t get_offset_of_usedMemoryText_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___usedMemoryText_23)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_usedMemoryText_23() const { return ___usedMemoryText_23; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_usedMemoryText_23() { return &___usedMemoryText_23; }
	inline void set_usedMemoryText_23(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___usedMemoryText_23 = value;
		Il2CppCodeGenWriteBarrier((&___usedMemoryText_23), value);
	}

	inline static int32_t get_offset_of_peakMemoryText_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___peakMemoryText_24)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_peakMemoryText_24() const { return ___peakMemoryText_24; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_peakMemoryText_24() { return &___peakMemoryText_24; }
	inline void set_peakMemoryText_24(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___peakMemoryText_24 = value;
		Il2CppCodeGenWriteBarrier((&___peakMemoryText_24), value);
	}

	inline static int32_t get_offset_of_limitMemoryText_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___limitMemoryText_25)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_limitMemoryText_25() const { return ___limitMemoryText_25; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_limitMemoryText_25() { return &___limitMemoryText_25; }
	inline void set_limitMemoryText_25(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___limitMemoryText_25 = value;
		Il2CppCodeGenWriteBarrier((&___limitMemoryText_25), value);
	}

	inline static int32_t get_offset_of_usedAnchor_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___usedAnchor_26)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_usedAnchor_26() const { return ___usedAnchor_26; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_usedAnchor_26() { return &___usedAnchor_26; }
	inline void set_usedAnchor_26(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___usedAnchor_26 = value;
		Il2CppCodeGenWriteBarrier((&___usedAnchor_26), value);
	}

	inline static int32_t get_offset_of_peakAnchor_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___peakAnchor_27)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_peakAnchor_27() const { return ___peakAnchor_27; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_peakAnchor_27() { return &___peakAnchor_27; }
	inline void set_peakAnchor_27(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___peakAnchor_27 = value;
		Il2CppCodeGenWriteBarrier((&___peakAnchor_27), value);
	}

	inline static int32_t get_offset_of_windowRotation_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___windowRotation_28)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowRotation_28() const { return ___windowRotation_28; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowRotation_28() { return &___windowRotation_28; }
	inline void set_windowRotation_28(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowRotation_28 = value;
	}

	inline static int32_t get_offset_of_frameInfo_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameInfo_29)); }
	inline FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* get_frameInfo_29() const { return ___frameInfo_29; }
	inline FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388** get_address_of_frameInfo_29() { return &___frameInfo_29; }
	inline void set_frameInfo_29(FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* value)
	{
		___frameInfo_29 = value;
		Il2CppCodeGenWriteBarrier((&___frameInfo_29), value);
	}

	inline static int32_t get_offset_of_frameOffset_30() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameOffset_30)); }
	inline int32_t get_frameOffset_30() const { return ___frameOffset_30; }
	inline int32_t* get_address_of_frameOffset_30() { return &___frameOffset_30; }
	inline void set_frameOffset_30(int32_t value)
	{
		___frameOffset_30 = value;
	}

	inline static int32_t get_offset_of_frameCount_31() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameCount_31)); }
	inline int32_t get_frameCount_31() const { return ___frameCount_31; }
	inline int32_t* get_address_of_frameCount_31() { return &___frameCount_31; }
	inline void set_frameCount_31(int32_t value)
	{
		___frameCount_31 = value;
	}

	inline static int32_t get_offset_of_stopwatch_32() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___stopwatch_32)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_32() const { return ___stopwatch_32; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_32() { return &___stopwatch_32; }
	inline void set_stopwatch_32(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_32 = value;
		Il2CppCodeGenWriteBarrier((&___stopwatch_32), value);
	}

	inline static int32_t get_offset_of_frameRateStrings_33() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___frameRateStrings_33)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_frameRateStrings_33() const { return ___frameRateStrings_33; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_frameRateStrings_33() { return &___frameRateStrings_33; }
	inline void set_frameRateStrings_33(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___frameRateStrings_33 = value;
		Il2CppCodeGenWriteBarrier((&___frameRateStrings_33), value);
	}

	inline static int32_t get_offset_of_displayedDecimalFormat_34() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___displayedDecimalFormat_34)); }
	inline String_t* get_displayedDecimalFormat_34() const { return ___displayedDecimalFormat_34; }
	inline String_t** get_address_of_displayedDecimalFormat_34() { return &___displayedDecimalFormat_34; }
	inline void set_displayedDecimalFormat_34(String_t* value)
	{
		___displayedDecimalFormat_34 = value;
		Il2CppCodeGenWriteBarrier((&___displayedDecimalFormat_34), value);
	}

	inline static int32_t get_offset_of_memoryUsage_35() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___memoryUsage_35)); }
	inline uint64_t get_memoryUsage_35() const { return ___memoryUsage_35; }
	inline uint64_t* get_address_of_memoryUsage_35() { return &___memoryUsage_35; }
	inline void set_memoryUsage_35(uint64_t value)
	{
		___memoryUsage_35 = value;
	}

	inline static int32_t get_offset_of_peakMemoryUsage_36() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___peakMemoryUsage_36)); }
	inline uint64_t get_peakMemoryUsage_36() const { return ___peakMemoryUsage_36; }
	inline uint64_t* get_address_of_peakMemoryUsage_36() { return &___peakMemoryUsage_36; }
	inline void set_peakMemoryUsage_36(uint64_t value)
	{
		___peakMemoryUsage_36 = value;
	}

	inline static int32_t get_offset_of_limitMemoryUsage_37() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___limitMemoryUsage_37)); }
	inline uint64_t get_limitMemoryUsage_37() const { return ___limitMemoryUsage_37; }
	inline uint64_t* get_address_of_limitMemoryUsage_37() { return &___limitMemoryUsage_37; }
	inline void set_limitMemoryUsage_37(uint64_t value)
	{
		___limitMemoryUsage_37 = value;
	}

	inline static int32_t get_offset_of_propertyBlockFrameTarget_38() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___propertyBlockFrameTarget_38)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_propertyBlockFrameTarget_38() const { return ___propertyBlockFrameTarget_38; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_propertyBlockFrameTarget_38() { return &___propertyBlockFrameTarget_38; }
	inline void set_propertyBlockFrameTarget_38(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___propertyBlockFrameTarget_38 = value;
		Il2CppCodeGenWriteBarrier((&___propertyBlockFrameTarget_38), value);
	}

	inline static int32_t get_offset_of_propertyBlockFrameMissed_39() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___propertyBlockFrameMissed_39)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_propertyBlockFrameMissed_39() const { return ___propertyBlockFrameMissed_39; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_propertyBlockFrameMissed_39() { return &___propertyBlockFrameMissed_39; }
	inline void set_propertyBlockFrameMissed_39(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___propertyBlockFrameMissed_39 = value;
		Il2CppCodeGenWriteBarrier((&___propertyBlockFrameMissed_39), value);
	}

	inline static int32_t get_offset_of_stringBuilder_40() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___stringBuilder_40)); }
	inline StringBuilder_t * get_stringBuilder_40() const { return ___stringBuilder_40; }
	inline StringBuilder_t ** get_address_of_stringBuilder_40() { return &___stringBuilder_40; }
	inline void set_stringBuilder_40(StringBuilder_t * value)
	{
		___stringBuilder_40 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuilder_40), value);
	}

	inline static int32_t get_offset_of_defaultMaterial_41() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___defaultMaterial_41)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultMaterial_41() const { return ___defaultMaterial_41; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultMaterial_41() { return &___defaultMaterial_41; }
	inline void set_defaultMaterial_41(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_41), value);
	}

	inline static int32_t get_offset_of_backgroundMaterial_42() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___backgroundMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_backgroundMaterial_42() const { return ___backgroundMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_backgroundMaterial_42() { return &___backgroundMaterial_42; }
	inline void set_backgroundMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___backgroundMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((&___backgroundMaterial_42), value);
	}

	inline static int32_t get_offset_of_foregroundMaterial_43() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___foregroundMaterial_43)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_foregroundMaterial_43() const { return ___foregroundMaterial_43; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_foregroundMaterial_43() { return &___foregroundMaterial_43; }
	inline void set_foregroundMaterial_43(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___foregroundMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((&___foregroundMaterial_43), value);
	}

	inline static int32_t get_offset_of_textMaterial_44() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3, ___textMaterial_44)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_textMaterial_44() const { return ___textMaterial_44; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_textMaterial_44() { return &___textMaterial_44; }
	inline void set_textMaterial_44(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___textMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((&___textMaterial_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKITVISUALPROFILER_T91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_H
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo[]
struct FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * m_Items[1];

public:
	inline FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_MixedRealityPlayspace()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_DiagnosticsSystemProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * MixedRealityToolkitConfigurationProfile_get_DiagnosticsSystemProfile_mD3C2A8DE2A2C2D242B99DF682C0786B0A0CAEB62 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mB99ADE781F0B23E551103288FDAB87F33486247D (MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_mCB64BD57839575F2A2B80D25A90C702F22124632 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_mA6EB7F1E0B7A616EFD5096068C2AC5A992E3AD2A (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m98EF5425C4E7B09FBC9B7EB8A8D006523F511B59 (MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m0326131E4F0598B68842757559DB4E36E1AC4975 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_m7B032C8DE3DFF2D3473EEE2B9792840B7CE81350 (DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m08636C3A2565E7738F2545C7F7E9A10FAD096032 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mB29865A0C662F24BD744DD498A75BA00D5230643 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::CreateDiagnosticVisualizationParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityDiagnosticsSystem_CreateDiagnosticVisualizationParent_m57FE851D798EA6FC0061DAEE12575660D4F648E4 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem)
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_m5462DC3C0E3AF36DB3E2FEBB01D08D24A466FD6B (DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421 (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mEB3D974574A06A214C9670FB4E5AFBEE406E4B54 (EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA8132357DC94286404AFD6B665C7CEB7E1A0512 (U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_m080744DE7364C6556B8CE0EBC0102190BD2CA85C (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared)(p0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
extern "C" IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::Reset()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m75D06F08E827C8D16732A4AE64B6ADF866677DC3 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::BuildWindow()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mF338D58A1795ACCCCE61301B0EE92255750F4C5F (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mC0A998E44FE3FA426E7B08586349D374BAC428D6 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C" IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::FrameRateToPropertyBlock(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * MixedRealityToolkitVisualProfiler_FrameRateToPropertyBlock_m521B2D9F4BB02C06487627244AD385998644F06D (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, int32_t ___frameRate0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C" IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * p0, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
extern "C" IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mF3869A04A8479B8CF457048F2856430B8B202AF1 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m11E735BAC7198D9194EAFC76406676EC9D4A0B69 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___memoryUsageDecimalDigits2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Text.StringBuilder,System.String,UnityEngine.TextMesh,System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69 (StringBuilder_t * ___stringBuilder0, String_t* ___displayedDecimalFormat1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___memoryString3, uint64_t ___memoryUsage4, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
extern "C" IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mE80B14F33A73E7C2E00A1CD66350E5FF5EAEE76A (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t p0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_WindowParent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m710170547A36E149F742C73369F991E28534CBD2 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method);
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
extern "C" IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8 (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler/FrameInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FrameInfo__ctor_mA8F6A90774EEBD464770C04AAC34C5350578F6B3 (FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppFrameRate()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppFrameRate_mC78F886D3C1552528163BC9D389575902AFD806E (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m9353C27347A6ED934B83929CEB52FFBEFDE3C870 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C" IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_mD771901559E12BF173D4FAEB34C310764F7FF3AF (uint64_t ___bytes0, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
extern "C" IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8 (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
extern "C" IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
extern "C" IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::CreateDiagnosticVisualizationParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityDiagnosticsSystem_CreateDiagnosticVisualizationParent_m57FE851D798EA6FC0061DAEE12575660D4F648E4 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_CreateDiagnosticVisualizationParent_m57FE851D798EA6FC0061DAEE12575660D4F648E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_6(L_0);
		// diagnosticVisualizationParent.transform.parent = MixedRealityToolkit.Instance.MixedRealityPlayspace.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_diagnosticVisualizationParent_6();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_3 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_2, L_5, /*hidden argument*/NULL);
		// diagnosticVisualizationParent.SetActive(MixedRealityToolkit.Instance.ActiveProfile.DiagnosticsSystemProfile.ShowDiagnostics);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_6();
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_7 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_7);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_8 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * L_9 = MixedRealityToolkitConfigurationProfile_get_DiagnosticsSystemProfile_mD3C2A8DE2A2C2D242B99DF682C0786B0A0CAEB62(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mB99ADE781F0B23E551103288FDAB87F33486247D(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, L_10, /*hidden argument*/NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_diagnosticVisualizationParent_6();
		NullCheck(L_11);
		MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * L_12 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_mCB64BD57839575F2A2B80D25A90C702F22124632(L_11, /*hidden argument*/GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3_mCB64BD57839575F2A2B80D25A90C702F22124632_RuntimeMethod_var);
		__this->set_visualProfiler_7(L_12);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * L_13 = __this->get_visualProfiler_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_diagnosticVisualizationParent_6();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		MixedRealityToolkitVisualProfiler_set_WindowParent_mA6EB7F1E0B7A616EFD5096068C2AC5A992E3AD2A(L_13, L_15, /*hidden argument*/NULL);
		// visualProfiler.IsVisible = MixedRealityToolkit.Instance.ActiveProfile.DiagnosticsSystemProfile.ShowProfiler;
		MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * L_16 = __this->get_visualProfiler_7();
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_17 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_17);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_18 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * L_19 = MixedRealityToolkitConfigurationProfile_get_DiagnosticsSystemProfile_mD3C2A8DE2A2C2D242B99DF682C0786B0A0CAEB62(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m98EF5425C4E7B09FBC9B7EB8A8D006523F511B59(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m0326131E4F0598B68842757559DB4E36E1AC4975(L_16, L_20, /*hidden argument*/NULL);
		// return diagnosticVisualizationParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_diagnosticVisualizationParent_6();
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_mD8B5AC6981420E8BEFFBCD7ACA84CA5F4CA71CAF (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Initialize_mD8B5AC6981420E8BEFFBCD7ACA84CA5F4CA71CAF_MetadataUsageId);
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
		// eventData = new DiagnosticsEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * L_2 = (DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A *)il2cpp_codegen_object_new(DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_il2cpp_TypeInfo_var);
		DiagnosticsEventData__ctor_m7B032C8DE3DFF2D3473EEE2B9792840B7CE81350(L_2, L_1, /*hidden argument*/NULL);
		__this->set_eventData_10(L_2);
		// ShowDiagnostics = MixedRealityToolkit.Instance.ActiveProfile.DiagnosticsSystemProfile.ShowDiagnostics;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_3 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_3);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_4 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * L_5 = MixedRealityToolkitConfigurationProfile_get_DiagnosticsSystemProfile_mD3C2A8DE2A2C2D242B99DF682C0786B0A0CAEB62(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mB99ADE781F0B23E551103288FDAB87F33486247D(L_5, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m08636C3A2565E7738F2545C7F7E9A10FAD096032(__this, L_6, /*hidden argument*/NULL);
		// ShowProfiler = MixedRealityToolkit.Instance.ActiveProfile.DiagnosticsSystemProfile.ShowProfiler;
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_7 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_7);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_8 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * L_9 = MixedRealityToolkitConfigurationProfile_get_DiagnosticsSystemProfile_mD3C2A8DE2A2C2D242B99DF682C0786B0A0CAEB62(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m98EF5425C4E7B09FBC9B7EB8A8D006523F511B59(L_9, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_mB29865A0C662F24BD744DD498A75BA00D5230643(__this, L_10, /*hidden argument*/NULL);
		// diagnosticVisualizationParent = CreateDiagnosticVisualizationParent();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = MixedRealityDiagnosticsSystem_CreateDiagnosticVisualizationParent_m57FE851D798EA6FC0061DAEE12575660D4F648E4(__this, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_6(L_11);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_mDA4E24F61BEC8CD2DC1C7B2F80331E2A884FF6B2 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Destroy_mDA4E24F61BEC8CD2DC1C7B2F80331E2A884FF6B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_diagnosticVisualizationParent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_diagnosticVisualizationParent_6();
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
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_diagnosticVisualizationParent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_5, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0032:
	{
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->set_diagnosticVisualizationParent_6((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_m661ED8BD9FAC5976C082833FDF86480F7F98B441 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m08636C3A2565E7738F2545C7F7E9A10FAD096032 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, bool ___value0, const RuntimeMethod* method)
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B3_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B2_0 = NULL;
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showDiagnostics_8();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->set_showDiagnostics_8(L_2);
		// diagnosticVisualizationParent?.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_diagnosticVisualizationParent_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		bool L_5 = ___value0;
		NullCheck(G_B3_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(G_B3_0, L_5, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::get_ShowProfiler()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_mFE5282459A97D308894BDE37C6304C8C7AC9C2D2 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mB29865A0C662F24BD744DD498A75BA00D5230643 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowProfiler_mB29865A0C662F24BD744DD498A75BA00D5230643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfiler_9();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->set_showProfiler_9(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * L_3 = __this->get_visualProfiler_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * L_5 = __this->get_visualProfiler_7();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m0326131E4F0598B68842757559DB4E36E1AC4975(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_m0BE8C3B62FBC6A96A4437F992C0D2220A8B682E6 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_mEC63B1D0A2936DF92DF465F08FAEB0E67C4BAE5D (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_m286A88881275FC04DF055157BED5B095B8EEAEA4 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_mD4B92B0A2C049DB0D7A1993CF1FEF56715549035(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_mFAB0779F8BEB515127FD6617ABA67EACB7D5795B (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_mFAB0779F8BEB515127FD6617ABA67EACB7D5795B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * L_0 = __this->get_eventData_10();
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_m5462DC3C0E3AF36DB3E2FEBB01D08D24A466FD6B(L_0, __this, /*hidden argument*/NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * L_1 = __this->get_eventData_10();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_il2cpp_TypeInfo_var);
		EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * L_2 = ((MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_il2cpp_TypeInfo_var))->get_OnDiagnosticsChanged_11();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t3E364A7BC302631913266C5AA6FAF37902D310C0_m58F41B693FC01530D5A07CA709E447D8E6D3CF09_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m3587488EC8510C5322B694C4C2381F19A9752249 (MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__ctor_m3587488EC8510C5322B694C4C2381F19A9752249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var);
		BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_m66970965BC0AAF15AFD0F88343963D2410240AB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__cctor_m66970965BC0AAF15AFD0F88343963D2410240AB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//         handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_il2cpp_TypeInfo_var);
		U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * L_0 = ((U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 * L_1 = (EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12 *)il2cpp_codegen_object_new(EventFunction_1_t4EBC4E8A25334AA6129CFCAD679807FCB26CCC12_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_mEB3D974574A06A214C9670FB4E5AFBEE406E4B54(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__23_0_mDA4C75FD455F396FE97169989EF62031B61ED27A_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_mEB3D974574A06A214C9670FB4E5AFBEE406E4B54_RuntimeMethod_var);
		((MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t2F0FC550DE4D02F88AD3772F8F715CA0C6CDC498_il2cpp_TypeInfo_var))->set_OnDiagnosticsChanged_11(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5934D2F1D3E0DE170F1B8E497E7738FB26C9BE5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m5934D2F1D3E0DE170F1B8E497E7738FB26C9BE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * L_0 = (U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 *)il2cpp_codegen_object_new(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBA8132357DC94286404AFD6B665C7CEB7E1A0512(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA8132357DC94286404AFD6B665C7CEB7E1A0512 (U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityDiagnosticsSystem_<>c::<.cctor>b__23_0(Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__23_0_mDA4C75FD455F396FE97169989EF62031B61ED27A (U3CU3Ec_t56A6C1C54E44706A8731E14742AA59C242385EF1 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__23_0_mDA4C75FD455F396FE97169989EF62031B61ED27A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * V_0 = NULL;
	{
		// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * L_1 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_m080744DE7364C6556B8CE0EBC0102190BD2CA85C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A_m080744DE7364C6556B8CE0EBC0102190BD2CA85C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		RuntimeObject* L_2 = ___handler0;
		DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DiagnosticsEventData_t920F8C9B6732B3D907BEEBCF57C0A844B126B44A * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_t3E364A7BC302631913266C5AA6FAF37902D310C0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_WindowParent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m710170547A36E149F742C73369F991E28534CBD2 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_mA6EB7F1E0B7A616EFD5096068C2AC5A992E3AD2A (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_IsVisible()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_m38373CF8BC6F5F88C0971195972269C619EE758F (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	{
		// get { return isVisible; }
		bool L_0 = __this->get_isVisible_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m0326131E4F0598B68842757559DB4E36E1AC4975 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_6(L_0);
		// set { isVisible = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::Reset()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m75D06F08E827C8D16732A4AE64B6ADF866677DC3 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_Reset_m75D06F08E827C8D16732A4AE64B6ADF866677DC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_0 = NULL;
	{
		// if (!defaultMaterial)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_defaultMaterial_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_005c;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_2 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_3, L_2, /*hidden argument*/NULL);
		__this->set_defaultMaterial_41(L_3);
		// defaultMaterial.SetFloat("_ZWrite", 0.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_defaultMaterial_41();
		NullCheck(L_4);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_4, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.SetFloat("_ZTest", 0.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_defaultMaterial_41();
		NullCheck(L_5);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_5, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_defaultMaterial_41();
		NullCheck(L_6);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_6, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_005c:
	{
		// if (Application.isPlaying)
		bool L_7 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00fa;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = __this->get_defaultMaterial_41();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_9, L_8, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_42(L_9);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = __this->get_defaultMaterial_41();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_11, L_10, /*hidden argument*/NULL);
		__this->set_foregroundMaterial_43(L_11);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_12 = __this->get_defaultMaterial_41();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = __this->get_foregroundMaterial_43();
		NullCheck(L_13);
		int32_t L_14 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_backgroundMaterial_42();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get_defaultMaterial_41();
		NullCheck(L_16);
		int32_t L_17 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_18, /*hidden argument*/NULL);
		NullCheck(L_18);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_19 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_18, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		NullCheck(L_19);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_20 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(L_19, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		V_0 = L_20;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_21 = V_0;
		NullCheck(L_21);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_21, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_23, L_22, /*hidden argument*/NULL);
		__this->set_textMaterial_44(L_23);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get_textMaterial_44();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_25 = __this->get_defaultMaterial_41();
		NullCheck(L_25);
		int32_t L_26 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_24, L_26, /*hidden argument*/NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_27 = V_0;
		NullCheck(L_27);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_28, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_29 = __this->get_stopwatch_32();
		NullCheck(L_29);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_29, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_30 = __this->get_stopwatch_32();
		NullCheck(L_30);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::Start()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_mCF9B37F0DAC3DD43FFA5A2B40F8C30191F4B762B (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_m75D06F08E827C8D16732A4AE64B6ADF866677DC3(__this, /*hidden argument*/NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_mF338D58A1795ACCCCE61301B0EE92255750F4C5F(__this, /*hidden argument*/NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mC0A998E44FE3FA426E7B08586349D374BAC428D6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_m22169D1ADA551080EAD803BC0B24B2AD6B9E4BFE (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_OnDestroy_m22169D1ADA551080EAD803BC0B24B2AD6B9E4BFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(window);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_window_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_m73F2FE3400D3B03A03C1D02482E465821D518BDB (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_LateUpdate_m73F2FE3400D3B03A03C1D02482E465821D518BDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	float V_1 = 0.0f;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		// if (window == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_window_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Transform cameraTransform = Camera.main ? Camera.main.transform : null;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0028;
	}

IL_001e:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B5_0;
		// if (window.activeSelf && cameraTransform != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_window_21();
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0112;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0112;
		}
	}
	{
		// float windowDistance = Mathf.Max(16.0f / Camera.main.fieldOfView, Camera.main.nearClipPlane + 0.2f);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_10, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)((float)(16.0f)/(float)L_11)), ((float)il2cpp_codegen_add((float)L_13, (float)(0.2f))), /*hidden argument*/NULL);
		V_4 = L_14;
		// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = V_0;
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = V_0;
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_17, /*hidden argument*/NULL);
		float L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_16, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		// position -= cameraTransform.up * 0.1f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_0;
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_22, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		// Quaternion rotation = cameraTransform.rotation * windowRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = V_0;
		NullCheck(L_27);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_27, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = __this->get_windowRotation_28();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_28, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		// float t = Time.deltaTime * windowFollowSpeed;
		float L_31 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_32 = __this->get_windowFollowSpeed_9();
		V_7 = ((float)il2cpp_codegen_multiply((float)L_31, (float)L_32));
		// window.transform.position = Vector3.Lerp(window.transform.position, position, t);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_window_21();
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_33, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_window_21();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_5;
		float L_39 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_37, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_34, L_40, /*hidden argument*/NULL);
		// window.transform.rotation = Quaternion.Slerp(window.transform.rotation, rotation, t);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = __this->get_window_21();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_41, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_window_21();
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_44, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = V_6;
		float L_47 = V_7;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_45, L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_42, L_48, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// ++frameCount;
		int32_t L_49 = __this->get_frameCount_31();
		__this->set_frameCount_31(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)));
		// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_50 = __this->get_stopwatch_32();
		NullCheck(L_50);
		int64_t L_51 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_50, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_51))), (float)(0.001f)));
		// if (elapsedSeconds >= frameSampleRate)
		float L_52 = V_1;
		float L_53 = __this->get_frameSampleRate_8();
		if ((!(((float)L_52) >= ((float)L_53))))
		{
			goto IL_0208;
		}
	}
	{
		// int frameRate = (int)(1.0f / (elapsedSeconds / frameCount));
		float L_54 = V_1;
		int32_t L_55 = __this->get_frameCount_31();
		V_8 = (((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_54/(float)(((float)((float)L_55))))))))));
		// frameRateText.text = frameRateStrings[Mathf.Clamp(frameRate, 0, maxTargetFrameRate)];
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_56 = __this->get_frameRateText_22();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = __this->get_frameRateStrings_33();
		int32_t L_58 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_59 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_58, 0, ((int32_t)120), /*hidden argument*/NULL);
		NullCheck(L_57);
		int32_t L_60 = L_59;
		String_t* L_61 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_56);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_56, L_61, /*hidden argument*/NULL);
		// frameInfo[frameOffset].PropertyBlock = FrameRateToPropertyBlock(frameRate);
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_62 = __this->get_frameInfo_29();
		int32_t L_63 = __this->get_frameOffset_30();
		NullCheck(L_62);
		int32_t L_64 = L_63;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = V_8;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_67 = MixedRealityToolkitVisualProfiler_FrameRateToPropertyBlock_m521B2D9F4BB02C06487627244AD385998644F06D(__this, L_66, /*hidden argument*/NULL);
		NullCheck(L_65);
		L_65->set_PropertyBlock_0(L_67);
		// for (int i = 0; i < frameRange; ++i)
		V_9 = 0;
		goto IL_01cc;
	}

IL_018c:
	{
		// int index = (frameOffset + frameRange - i) % frameRange;
		int32_t L_68 = __this->get_frameOffset_30();
		int32_t L_69 = __this->get_frameRange_7();
		int32_t L_70 = V_9;
		int32_t L_71 = __this->get_frameRange_7();
		V_10 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)), (int32_t)L_70))%(int32_t)L_71));
		// frameInfo[i].Renderer.SetPropertyBlock(frameInfo[index].PropertyBlock);
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_72 = __this->get_frameInfo_29();
		int32_t L_73 = V_9;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_76 = L_75->get_Renderer_1();
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_77 = __this->get_frameInfo_29();
		int32_t L_78 = V_10;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_81 = L_80->get_PropertyBlock_0();
		NullCheck(L_76);
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_76, L_81, /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_82 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_01cc:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_83 = V_9;
		int32_t L_84 = __this->get_frameRange_7();
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_018c;
		}
	}
	{
		// frameOffset = (frameOffset + 1) % frameRange;
		int32_t L_85 = __this->get_frameOffset_30();
		int32_t L_86 = __this->get_frameRange_7();
		__this->set_frameOffset_30(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1))%(int32_t)L_86)));
		// frameCount = 0;
		__this->set_frameCount_31(0);
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_87 = __this->get_stopwatch_32();
		NullCheck(L_87);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_87, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_88 = __this->get_stopwatch_32();
		NullCheck(L_88);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_88, /*hidden argument*/NULL);
	}

IL_0208:
	{
		// ulong limit = AppMemoryUsageLimit;
		uint64_t L_89 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mF3869A04A8479B8CF457048F2856430B8B202AF1(/*hidden argument*/NULL);
		V_2 = L_89;
		// if (limit != limitMemoryUsage)
		uint64_t L_90 = V_2;
		uint64_t L_91 = __this->get_limitMemoryUsage_37();
		if ((((int64_t)L_90) == ((int64_t)L_91)))
		{
			goto IL_025d;
		}
	}
	{
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_92 = __this->get_window_21();
		NullCheck(L_92);
		bool L_93 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0256;
		}
	}
	{
		uint64_t L_94 = __this->get_limitMemoryUsage_37();
		uint64_t L_95 = V_2;
		int32_t L_96 = __this->get_displayedDecimalDigits_11();
		bool L_97 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m11E735BAC7198D9194EAFC76406676EC9D4A0B69(L_94, L_95, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_0256;
		}
	}
	{
		// MemoryUsageToString(stringBuilder, displayedDecimalFormat, limitMemoryText, limitMemoryString, limit);
		StringBuilder_t * L_98 = __this->get_stringBuilder_40();
		String_t* L_99 = __this->get_displayedDecimalFormat_34();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_100 = __this->get_limitMemoryText_25();
		String_t* L_101 = __this->get_limitMemoryString_14();
		uint64_t L_102 = V_2;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69(L_98, L_99, L_100, L_101, L_102, /*hidden argument*/NULL);
	}

IL_0256:
	{
		// limitMemoryUsage = limit;
		uint64_t L_103 = V_2;
		__this->set_limitMemoryUsage_37(L_103);
	}

IL_025d:
	{
		// ulong usage = AppMemoryUsage;
		uint64_t L_104 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mE80B14F33A73E7C2E00A1CD66350E5FF5EAEE76A(/*hidden argument*/NULL);
		V_3 = L_104;
		// if (usage != memoryUsage)
		uint64_t L_105 = V_3;
		uint64_t L_106 = __this->get_memoryUsage_35();
		if ((((int64_t)L_105) == ((int64_t)L_106)))
		{
			goto IL_02f1;
		}
	}
	{
		// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = __this->get_usedAnchor_26();
		uint64_t L_108 = V_3;
		uint64_t L_109 = __this->get_limitMemoryUsage_37();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_110 = __this->get_usedAnchor_26();
		NullCheck(L_110);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_110, /*hidden argument*/NULL);
		float L_112 = L_111.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_113 = __this->get_usedAnchor_26();
		NullCheck(L_113);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_114 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_113, /*hidden argument*/NULL);
		float L_115 = L_114.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116;
		memset(&L_116, 0, sizeof(L_116));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_116), ((float)((float)(((float)((float)(((double)((uint64_t)L_108))))))/(float)(((float)((float)(((double)((uint64_t)L_109)))))))), L_112, L_115, /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_107, L_116, /*hidden argument*/NULL);
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_117 = __this->get_window_21();
		NullCheck(L_117);
		bool L_118 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_117, /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_02ea;
		}
	}
	{
		uint64_t L_119 = __this->get_memoryUsage_35();
		uint64_t L_120 = V_3;
		int32_t L_121 = __this->get_displayedDecimalDigits_11();
		bool L_122 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m11E735BAC7198D9194EAFC76406676EC9D4A0B69(L_119, L_120, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_02ea;
		}
	}
	{
		// MemoryUsageToString(stringBuilder, displayedDecimalFormat, usedMemoryText, usedMemoryString, usage);
		StringBuilder_t * L_123 = __this->get_stringBuilder_40();
		String_t* L_124 = __this->get_displayedDecimalFormat_34();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_125 = __this->get_usedMemoryText_23();
		String_t* L_126 = __this->get_usedMemoryString_12();
		uint64_t L_127 = V_3;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69(L_123, L_124, L_125, L_126, L_127, /*hidden argument*/NULL);
	}

IL_02ea:
	{
		// memoryUsage = usage;
		uint64_t L_128 = V_3;
		__this->set_memoryUsage_35(L_128);
	}

IL_02f1:
	{
		// if (memoryUsage > peakMemoryUsage)
		uint64_t L_129 = __this->get_memoryUsage_35();
		uint64_t L_130 = __this->get_peakMemoryUsage_36();
		if ((!(((uint64_t)L_129) > ((uint64_t)L_130))))
		{
			goto IL_0398;
		}
	}
	{
		// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_131 = __this->get_peakAnchor_27();
		uint64_t L_132 = __this->get_memoryUsage_35();
		uint64_t L_133 = __this->get_limitMemoryUsage_37();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_134 = __this->get_peakAnchor_27();
		NullCheck(L_134);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_134, /*hidden argument*/NULL);
		float L_136 = L_135.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_137 = __this->get_peakAnchor_27();
		NullCheck(L_137);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_137, /*hidden argument*/NULL);
		float L_139 = L_138.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_140;
		memset(&L_140, 0, sizeof(L_140));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_140), ((float)((float)(((float)((float)(((double)((uint64_t)L_132))))))/(float)(((float)((float)(((double)((uint64_t)L_133)))))))), L_136, L_139, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_131, L_140, /*hidden argument*/NULL);
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_141 = __this->get_window_21();
		NullCheck(L_141);
		bool L_142 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_141, /*hidden argument*/NULL);
		if (!L_142)
		{
			goto IL_038c;
		}
	}
	{
		uint64_t L_143 = __this->get_peakMemoryUsage_36();
		uint64_t L_144 = __this->get_memoryUsage_35();
		int32_t L_145 = __this->get_displayedDecimalDigits_11();
		bool L_146 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m11E735BAC7198D9194EAFC76406676EC9D4A0B69(L_143, L_144, L_145, /*hidden argument*/NULL);
		if (!L_146)
		{
			goto IL_038c;
		}
	}
	{
		// MemoryUsageToString(stringBuilder, displayedDecimalFormat, peakMemoryText, peakMemoryString, memoryUsage);
		StringBuilder_t * L_147 = __this->get_stringBuilder_40();
		String_t* L_148 = __this->get_displayedDecimalFormat_34();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_149 = __this->get_peakMemoryText_24();
		String_t* L_150 = __this->get_peakMemoryString_13();
		uint64_t L_151 = __this->get_memoryUsage_35();
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69(L_147, L_148, L_149, L_150, L_151, /*hidden argument*/NULL);
	}

IL_038c:
	{
		// peakMemoryUsage = memoryUsage;
		uint64_t L_152 = __this->get_memoryUsage_35();
		__this->set_peakMemoryUsage_36(L_152);
	}

IL_0398:
	{
		// window.SetActive(isVisible);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_153 = __this->get_window_21();
		bool L_154 = __this->get_isVisible_6();
		NullCheck(L_153);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_153, L_154, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::BuildWindow()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mF338D58A1795ACCCCE61301B0EE92255750F4C5F (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildWindow_mF338D58A1795ACCCCE61301B0EE92255750F4C5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_6 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_7 = NULL;
	{
		// int colorID = Shader.PropertyToID("_Color");
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, /*hidden argument*/NULL);
		V_0 = L_0;
		// propertyBlockFrameTarget = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_1 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_1, /*hidden argument*/NULL);
		__this->set_propertyBlockFrameTarget_38(L_1);
		// propertyBlockFrameTarget.SetColor(colorID, targetFrameRateColor);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_2 = __this->get_propertyBlockFrameTarget_38();
		int32_t L_3 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = __this->get_targetFrameRateColor_16();
		NullCheck(L_2);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_2, L_3, L_4, /*hidden argument*/NULL);
		// propertyBlockFrameMissed = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_5 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_5, /*hidden argument*/NULL);
		__this->set_propertyBlockFrameMissed_39(L_5);
		// propertyBlockFrameMissed.SetColor(colorID, missedFrameRateColor);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_6 = __this->get_propertyBlockFrameMissed_39();
		int32_t L_7 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = __this->get_missedFrameRateColor_17();
		NullCheck(L_6);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_6, L_7, L_8, /*hidden argument*/NULL);
		// window = CreateQuad("VisualProfiler", null);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652(_stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
		__this->set_window_21(L_9);
		// window.transform.parent = WindowParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_window_21();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = MixedRealityToolkitVisualProfiler_get_WindowParent_m710170547A36E149F742C73369F991E28534CBD2(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_11, L_12, /*hidden argument*/NULL);
		// InitializeRenderer(window, backgroundMaterial, colorID, baseColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_window_21();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_backgroundMaterial_42();
		int32_t L_15 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = __this->get_baseColor_15();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90(L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// window.transform.localScale = new Vector3(0.2f, 0.04f, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_window_21();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), (0.2f), (0.04f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_18, L_19, /*hidden argument*/NULL);
		// windowRotation = Quaternion.AngleAxis(windowYawRotation, Vector3.right);
		float L_20 = __this->get_windowYawRotation_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_20, L_21, /*hidden argument*/NULL);
		__this->set_windowRotation_28(L_22);
		// frameRateText = CreateText("FrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window.transform, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), (-0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_window_21();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get_textMaterial_44();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_27 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_29 = MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8(_stringLiteral5D98D65F0273A364ECC21522C1957B47E93E5F2D, L_23, L_25, 0, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->set_frameRateText_22(L_29);
		// frameInfo = new FrameInfo[frameRange];
		int32_t L_30 = __this->get_frameRange_7();
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_31 = (FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388*)SZArrayNew(FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388_il2cpp_TypeInfo_var, (uint32_t)L_30);
		__this->set_frameInfo_29(L_31);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_32 = __this->get_frameRange_7();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)((float)(1.0f)/(float)(((float)((float)L_32))))), (0.2f), (1.0f), /*hidden argument*/NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_1;
		float L_34 = L_33.get_x_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)(0.5f))))), (0.15f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_3 = 0;
		goto IL_01ff;
	}

IL_0158:
	{
		// frameInfo[i] = new FrameInfo();
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_35 = __this->get_frameInfo_29();
		int32_t L_36 = V_3;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_37 = (FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 *)il2cpp_codegen_object_new(FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415_il2cpp_TypeInfo_var);
		FrameInfo__ctor_mA8F6A90774EEBD464770C04AAC34C5350578F6B3(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 *)L_37);
		// frameInfo[i].PropertyBlock = propertyBlockFrameTarget;
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_38 = __this->get_frameInfo_29();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_42 = __this->get_propertyBlockFrameTarget_38();
		NullCheck(L_41);
		L_41->set_PropertyBlock_0(L_42);
		// GameObject quad = CreateQuad("Frame", window.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_window_21();
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_43, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_45 = MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652(_stringLiteral91B0658329EFA06D4DA89C23A162B41DFCEE5202, L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		// frameInfo[i].Renderer = InitializeRenderer(quad, defaultMaterial, colorID, missedFrameRateColor);
		FrameInfoU5BU5D_t4BE28470D96498433B78E418E40F10CE82E6C388* L_46 = __this->get_frameInfo_29();
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = V_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_51 = __this->get_defaultMaterial_41();
		int32_t L_52 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_53 = __this->get_missedFrameRateColor_17();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_54 = MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90(L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_Renderer_1(L_54);
		// quad.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = V_4;
		NullCheck(L_55);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_55, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_2;
		NullCheck(L_56);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_56, L_57, /*hidden argument*/NULL);
		// Vector3 bufferedScale = new Vector3(scale.x * 0.8f, scale.y, scale.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_1;
		float L_59 = L_58.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = V_1;
		float L_61 = L_60.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_1;
		float L_63 = L_62.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), ((float)il2cpp_codegen_multiply((float)L_59, (float)(0.8f))), L_61, L_63, /*hidden argument*/NULL);
		// quad.transform.localScale = bufferedScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = V_4;
		NullCheck(L_64);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_5;
		NullCheck(L_65);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_65, L_66, /*hidden argument*/NULL);
		// position.x -= scale.x;
		float* L_67 = (&V_2)->get_address_of_x_2();
		float* L_68 = L_67;
		float L_69 = *((float*)L_68);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = V_1;
		float L_71 = L_70.get_x_2();
		*((float*)L_68) = (float)((float)il2cpp_codegen_subtract((float)L_69, (float)L_71));
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_01ff:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_73 = V_3;
		int32_t L_74 = __this->get_frameRange_7();
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0158;
		}
	}
	{
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), window.transform, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75;
		memset(&L_75, 0, sizeof(L_75));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_75), (-0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_76 = __this->get_window_21();
		NullCheck(L_76);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_76, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_78 = __this->get_textMaterial_44();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_79 = __this->get_memoryUsedColor_18();
		String_t* L_80 = __this->get_usedMemoryString_12();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_81 = MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8(_stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05, L_75, L_77, 0, L_78, L_79, L_80, /*hidden argument*/NULL);
		__this->set_usedMemoryText_23(L_81);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), window.transform, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82;
		memset(&L_82, 0, sizeof(L_82));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_82), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_83 = __this->get_window_21();
		NullCheck(L_83);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_83, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_85 = __this->get_textMaterial_44();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_86 = __this->get_memoryPeakColor_19();
		String_t* L_87 = __this->get_peakMemoryString_13();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_88 = MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8(_stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491, L_82, L_84, 1, L_85, L_86, L_87, /*hidden argument*/NULL);
		__this->set_peakMemoryText_24(L_88);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), window.transform, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89;
		memset(&L_89, 0, sizeof(L_89));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_89), (0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_90 = __this->get_window_21();
		NullCheck(L_90);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_91 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_90, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_92 = __this->get_textMaterial_44();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_93 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_94 = __this->get_limitMemoryString_14();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_95 = MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8(_stringLiteral9315667F99D5901C8E062AAC730B9254258670B5, L_89, L_91, 2, L_92, L_93, L_94, /*hidden argument*/NULL);
		__this->set_limitMemoryText_25(L_95);
		// GameObject limitBar = CreateQuad("LimitBar", window.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_96 = __this->get_window_21();
		NullCheck(L_96);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_96, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_98 = MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652(_stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD, L_97, /*hidden argument*/NULL);
		V_6 = L_98;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_99 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_100 = __this->get_defaultMaterial_41();
		int32_t L_101 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_102 = __this->get_memoryLimitColor_20();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90(L_99, L_100, L_101, L_102, /*hidden argument*/NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_103 = V_6;
		NullCheck(L_103);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_104 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_103, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_105;
		memset(&L_105, 0, sizeof(L_105));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_105), (0.99f), (0.2f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_104);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_104, L_105, /*hidden argument*/NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_106 = V_6;
		NullCheck(L_106);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_106, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108;
		memset(&L_108, 0, sizeof(L_108));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_108), (0.0f), (-0.37f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_107, L_108, /*hidden argument*/NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_109 = V_6;
		NullCheck(L_109);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_110 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_109, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_111 = MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE(_stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301, L_110, /*hidden argument*/NULL);
		__this->set_usedAnchor_26(L_111);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_112 = __this->get_usedAnchor_26();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_113 = MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652(_stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6, L_112, /*hidden argument*/NULL);
		// Material material = new Material(foregroundMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_114 = __this->get_foregroundMaterial_43();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_115 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_115, L_114, /*hidden argument*/NULL);
		V_7 = L_115;
		// material.renderQueue = material.renderQueue + 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_116 = V_7;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_117 = V_7;
		NullCheck(L_117);
		int32_t L_118 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_117, /*hidden argument*/NULL);
		NullCheck(L_116);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_116, ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1)), /*hidden argument*/NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_119 = L_113;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_120 = V_7;
		int32_t L_121 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_122 = __this->get_memoryUsedColor_18();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90(L_119, L_120, L_121, L_122, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_123 = L_119;
		NullCheck(L_123);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_124 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_123, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_124);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_124, L_125, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_123);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_126 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_123, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127;
		memset(&L_127, 0, sizeof(L_127));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_127), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_126);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_126, L_127, /*hidden argument*/NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_128 = V_6;
		NullCheck(L_128);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_129 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_128, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_130 = MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE(_stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3, L_129, /*hidden argument*/NULL);
		__this->set_peakAnchor_27(L_130);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_131 = __this->get_peakAnchor_27();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_132 = MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652(_stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4, L_131, /*hidden argument*/NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_133 = L_132;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_134 = __this->get_foregroundMaterial_43();
		int32_t L_135 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_136 = __this->get_memoryPeakColor_19();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90(L_133, L_134, L_135, L_136, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_137 = L_133;
		NullCheck(L_137);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_138 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_137, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_138);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_138, L_139, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_137);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_140 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_137, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_141;
		memset(&L_141, 0, sizeof(L_141));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_141), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_140);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_140, L_141, /*hidden argument*/NULL);
		// window.SetActive(isVisible);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_142 = __this->get_window_21();
		bool L_143 = __this->get_isVisible_6();
		NullCheck(L_142);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_142, L_143, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mC0A998E44FE3FA426E7B08586349D374BAC428D6 (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mC0A998E44FE3FA426E7B08586349D374BAC428D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// frameRateStrings = new string[maxTargetFrameRate + 1];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)121));
		__this->set_frameRateStrings_33(L_0);
		// displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_1 = __this->get_displayedDecimalDigits_11();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE, L_3, /*hidden argument*/NULL);
		__this->set_displayedDecimalFormat_34(L_4);
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_5, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_5;
		// stringBuilder.Length = 0;
		StringBuilder_t * L_6 = __this->get_stringBuilder_40();
		NullCheck(L_6);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_6, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < frameRateStrings.Length; ++i)
		V_1 = 0;
		goto IL_00b4;
	}

IL_0040:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)L_8))))), (float)(1000.0f)));
		goto IL_0058;
	}

IL_0053:
	{
		G_B4_0 = (0.0f);
	}

IL_0058:
	{
		V_2 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t * L_9 = V_0;
		String_t* L_10 = __this->get_displayedDecimalFormat_34();
		float L_11 = V_2;
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_9, L_10, L_13, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("{0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_14 = __this->get_stringBuilder_40();
		String_t* L_15 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		NullCheck(L_14);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_14, _stringLiteral2222C589E464F2FF70A6B598858A8461CD94DF00, L_15, L_17, /*hidden argument*/NULL);
		// frameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = __this->get_frameRateStrings_33();
		int32_t L_19 = V_1;
		StringBuilder_t * L_20 = __this->get_stringBuilder_40();
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (String_t*)L_21);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_22, 0, /*hidden argument*/NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_23 = __this->get_stringBuilder_40();
		NullCheck(L_23);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_23, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < frameRateStrings.Length; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00b4:
	{
		// for (int i = 0; i < frameRateStrings.Length; ++i)
		int32_t L_25 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = __this->get_frameRateStrings_33();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::FrameRateToPropertyBlock(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * MixedRealityToolkitVisualProfiler_FrameRateToPropertyBlock_m521B2D9F4BB02C06487627244AD385998644F06D (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, int32_t ___frameRate0, const RuntimeMethod* method)
{
	{
		// return (frameRate >= ((int)(AppFrameRate) - 1)) ? propertyBlockFrameTarget : propertyBlockFrameMissed;
		int32_t L_0 = ___frameRate0;
		float L_1 = MixedRealityToolkitVisualProfiler_get_AppFrameRate_mC78F886D3C1552528163BC9D389575902AFD806E(/*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_1))), (int32_t)1)))))
		{
			goto IL_0012;
		}
	}
	{
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_2 = __this->get_propertyBlockFrameMissed_39();
		return L_2;
	}

IL_0012:
	{
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_3 = __this->get_propertyBlockFrameTarget_38();
		return L_3;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateAnchor_mFBCA9D83724AB3B174EC5B0C381E86F46AB431CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		// anchor.parent = parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_4, /*hidden argument*/NULL);
		// anchor.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_6, /*hidden argument*/NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_8, /*hidden argument*/NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateQuad_m1CA512583BE499F53249D9BE09C3775B24770652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_1, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// quad.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_3, L_4, /*hidden argument*/NULL);
		// quad.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_3;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
extern "C" IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8 (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateText_m196ECD7AF4C9AF8A00E941EA474D6D66F83756F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (0.0016f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// obj.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_7, L_8, /*hidden argument*/NULL);
		// obj.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_13 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_12, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_14, ((int32_t)48), /*hidden argument*/NULL);
		// textMesh.anchor = anchor;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15(L_15, L_16, /*hidden argument*/NULL);
		// textMesh.color = color;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_17 = L_15;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0(L_17, L_18, /*hidden argument*/NULL);
		// textMesh.text = text;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_19, L_20, /*hidden argument*/NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = V_0;
		NullCheck(L_21);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_22 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_21, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_23 = L_22;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = ___material4;
		NullCheck(L_23);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_23, L_24, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m9353C27347A6ED934B83929CEB52FFBEFDE3C870(L_23, /*hidden argument*/NULL);
		// return textMesh;
		return L_19;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_InitializeRenderer_mF229ACAA596CB2C0C6C9BFDCA6179B38D9557B90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_2, L_3, /*hidden argument*/NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_4 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = L_2;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C(L_5, L_6, /*hidden argument*/NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_7, L_8, L_9, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = L_5;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_10, L_11, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_12 = L_10;
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m9353C27347A6ED934B83929CEB52FFBEFDE3C870(L_12, /*hidden argument*/NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m9353C27347A6ED934B83929CEB52FFBEFDE3C870 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method)
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_0, 0, /*hidden argument*/NULL);
		// renderer.receiveShadows = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_1, (bool)0, /*hidden argument*/NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B(L_2, 2, /*hidden argument*/NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D(L_3, 0, /*hidden argument*/NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08(L_4, 0, /*hidden argument*/NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Text.StringBuilder,System.String,UnityEngine.TextMesh,System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69 (StringBuilder_t * ___stringBuilder0, String_t* ___displayedDecimalFormat1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___memoryString3, uint64_t ___memoryUsage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_MemoryUsageToString_mD233F065E2DE6D394B016192ECB43A2D152F9F69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// stringBuilder.Length = 0;
		StringBuilder_t * L_0 = ___stringBuilder0;
		NullCheck(L_0);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_0, 0, /*hidden argument*/NULL);
		// string megabytes = stringBuilder.AppendFormat(displayedDecimalFormat, ConvertBytesToMegabytes(memoryUsage)).ToString();
		StringBuilder_t * L_1 = ___stringBuilder0;
		String_t* L_2 = ___displayedDecimalFormat1;
		uint64_t L_3 = ___memoryUsage4;
		float L_4 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_mD771901559E12BF173D4FAEB34C310764F7FF3AF(L_3, /*hidden argument*/NULL);
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		StringBuilder_t * L_7 = StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_1, L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_0 = L_8;
		// stringBuilder.Length = 0;
		StringBuilder_t * L_9 = ___stringBuilder0;
		NullCheck(L_9);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_9, 0, /*hidden argument*/NULL);
		// textMesh.text = stringBuilder.AppendFormat(memoryString, megabytes).ToString();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_10 = ___textMesh2;
		StringBuilder_t * L_11 = ___stringBuilder0;
		String_t* L_12 = ___memoryString3;
		String_t* L_13 = V_0;
		NullCheck(L_11);
		StringBuilder_t * L_14 = StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_10);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_10, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppFrameRate()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppFrameRate_mC78F886D3C1552528163BC9D389575902AFD806E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_get_AppFrameRate_mC78F886D3C1552528163BC9D389575902AFD806E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		float L_0 = XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8(/*hidden argument*/NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!(((int32_t)((int32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
extern "C" IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mE80B14F33A73E7C2E00A1CD66350E5FF5EAEE76A (const RuntimeMethod* method)
{
	{
		// return Windows.System.MemoryManager.AppMemoryUsage;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
extern "C" IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mF3869A04A8479B8CF457048F2856430B8B202AF1 (const RuntimeMethod* method)
{
	{
		// return Windows.System.MemoryManager.AppMemoryUsageLimit;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m11E735BAC7198D9194EAFC76406676EC9D4A0B69 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___memoryUsageDecimalDigits2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
		uint64_t L_0 = ___oldUsage0;
		float L_1 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_mD771901559E12BF173D4FAEB34C310764F7FF3AF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
		uint64_t L_2 = ___newUsage1;
		float L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_mD771901559E12BF173D4FAEB34C310764F7FF3AF(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// for (int i = 0; i < memoryUsageDecimalDigits; ++i)
		V_2 = 0;
		goto IL_0026;
	}

IL_0012:
	{
		// oldUsageMBs *= 10.0f;
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f)));
		// newUsageMBs *= 10.0f;
		float L_5 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)(10.0f)));
		// for (int i = 0; i < memoryUsageDecimalDigits; ++i)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0; i < memoryUsageDecimalDigits; ++i)
		int32_t L_7 = V_2;
		int32_t L_8 = ___memoryUsageDecimalDigits2;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		// return (int)oldUsageMBs != (int)newUsageMBs;
		float L_9 = V_0;
		float L_10 = V_1;
		return (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)L_9)))) == ((int32_t)(((int32_t)((int32_t)L_10)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m3F2D3D930C686200BA32C1EA4D35AFE406489870 (int32_t ___megabytes0, const RuntimeMethod* method)
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)((int32_t)1024)))))), (int64_t)(((int64_t)((int64_t)((int32_t)1024))))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_mD771901559E12BF173D4FAEB34C310764F7FF3AF (uint64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)((float)((float)((float)(((float)((float)(((double)((uint64_t)L_0))))))/(float)(1024.0f)))/(float)(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_m27ADF441C52B269C083331A5E930D3C6D97CFCFB (MixedRealityToolkitVisualProfiler_t91A38407B7D8F3B7FE57F1B3CF034A3532DC76B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__ctor_m27ADF441C52B269C083331A5E930D3C6D97CFCFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int frameRange = 30;
		__this->set_frameRange_7(((int32_t)30));
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_8((0.1f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_9((5.0f));
		// private float windowYawRotation = 20.0f;
		__this->set_windowYawRotation_10((20.0f));
		// private int displayedDecimalDigits = 1;
		__this->set_displayedDecimalDigits_11(1);
		// private string usedMemoryString = "Used: {0}MB";
		__this->set_usedMemoryString_12(_stringLiteralB68BA27C42E6FA7B3EE354612CBD81970A25BAAE);
		// private string peakMemoryString = "Peak: {0}MB";
		__this->set_peakMemoryString_13(_stringLiteral747531815CBEB7F7FEA8B5E7093B320E5557C339);
		// private string limitMemoryString = "Limit: {0}MB";
		__this->set_limitMemoryString_14(_stringLiteral1ABB10C10AA55AA4C4A7BB01ED7937666E24EECF);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_0), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->set_baseColor_15(L_0);
		// private Color targetFrameRateColor = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_1), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_targetFrameRateColor_16(L_1);
		// private Color missedFrameRateColor = new Color(242 / 256.0f, 80 / 256.0f, 34 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_2), (0.9453125f), (0.3125f), (0.1328125f), (1.0f), /*hidden argument*/NULL);
		__this->set_missedFrameRateColor_17(L_2);
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_3), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryUsedColor_18(L_3);
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_4), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryPeakColor_19(L_4);
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_5), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryLimitColor_20(L_5);
		// private Stopwatch stopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_6 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_6, /*hidden argument*/NULL);
		__this->set_stopwatch_32(L_6);
		// private StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_7, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_stringBuilder_40(L_7);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.DiagnosticsSystem.MixedRealityToolkitVisualProfiler_FrameInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FrameInfo__ctor_mA8F6A90774EEBD464770C04AAC34C5350578F6B3 (FrameInfo_tDA687E9AE45815C57726BD3E1F24A81C70D2D415 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
