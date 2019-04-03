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
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData
struct TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t8F333E1BB0BBE25581EEC55DB0B74307E01E9E94;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t811C59BBC6515F6C30820D3342E6385093ECAF19;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler
struct IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t76C4041094CEFFE0E6D91933A140A384059F04FD;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_tBDC277E48EB85AABE9C115382DF433C1FAC2D6F6;
// Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem
struct BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB;
// Microsoft.MixedReality.Toolkit.Core.Services.BaseService
struct BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC;
// Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45;
// Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
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
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler>
struct EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

extern RuntimeClass* BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityTeleportHotSpot_t76C4041094CEFFE0E6D91933A140A384059F04FD_il2cpp_TypeInfo_var;
extern RuntimeClass* IPointerResult_t4EC08A74BD782FE66A10F3D628607AEC466C55DD_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4D1D987217C94047D95253BDAA70342271726366;
extern String_t* _stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F;
extern String_t* _stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789;
extern const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_m3294DE502BA9A79DF345899F94808E83ACC331B7_RuntimeMethod_var;
extern const RuntimeMethod* EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__26_0_m9F11CA94CE4DC9ECB247BD1565319B53A2C8794A_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__26_1_mB5D27B88944B4AF4452883B579B38B92F8ABA21F_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__26_2_m56CAA23F31CF2A851389D66A9EF91534561B74B6_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__26_3_mE49BFDDEC20A7547023AB41A098F9762FB0AF41F_RuntimeMethod_var;
extern const uint32_t MixedRealityTeleportSystem_Destroy_m1DA16F99BAB85011DA18AC59970115818586091E_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_InitializeInternal_mC0128F62AECD8D686E7E66E1071FB7722AAA2BF8_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_ProcessTeleportationRequest_m47E083E26CBA18AD2AED9A6FE7983573D51D9909_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_RaiseTeleportCanceled_m212C5D521E3FD9565582E03591B62ED58ACAD8B8_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_RaiseTeleportComplete_m193BEAA22782CF188E9E987421EE294D0743960E_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_RaiseTeleportRequest_mAFF67273DE245A313CBE7118FDD0304BB2B1C25C_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_RaiseTeleportStarted_mEE19B61ECF9EA4AAB5AE72191D0A80E461260B4B_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem__cctor_m2B1A2E40513E2498A9AAD57A9A23AEE4620CFD0E_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem__ctor_m49ED4D1F9E639740CDC615503FB88B949D495410_MetadataUsageId;
extern const uint32_t MixedRealityTeleportSystem_set_TeleportDuration_m05062131416E60A95E7B5B5781B62E9AEB16B8B8_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__26_0_m9F11CA94CE4DC9ECB247BD1565319B53A2C8794A_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__26_1_mB5D27B88944B4AF4452883B579B38B92F8ABA21F_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__26_2_m56CAA23F31CF2A851389D66A9EF91534561B74B6_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_cctorU3Eb__26_3_mE49BFDDEC20A7547023AB41A098F9762FB0AF41F_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m444FFEE638C00D23FFAE809FB29BDD46A74534B9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T48E804B4B798B43CA0CD55ED001EDCBA95A63993_H
#define U3CMODULEU3E_T48E804B4B798B43CA0CD55ED001EDCBA95A63993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t48E804B4B798B43CA0CD55ED001EDCBA95A63993 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T48E804B4B798B43CA0CD55ED001EDCBA95A63993_H
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
#ifndef U3CU3EC_TF9FD7B520B11545666D737208F41F60BFCE250ED_H
#define U3CU3EC_TF9FD7B520B11545666D737208F41F60BFCE250ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c
struct  U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::<>9
	U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TF9FD7B520B11545666D737208F41F60BFCE250ED_H
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
#ifndef MIXEDREALITYTELEPORTSYSTEM_T9B2F257709879A71B288739037886D92FF57FE45_H
#define MIXEDREALITYTELEPORTSYSTEM_T9B2F257709879A71B288739037886D92FF57FE45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem
struct  MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45  : public BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB
{
public:
	// Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * ___teleportEventData_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::targetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::targetRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetRotation_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___eventSystemReference_11;
	// System.Single Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_12;

public:
	inline static int32_t get_offset_of_teleportEventData_6() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___teleportEventData_6)); }
	inline TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * get_teleportEventData_6() const { return ___teleportEventData_6; }
	inline TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F ** get_address_of_teleportEventData_6() { return &___teleportEventData_6; }
	inline void set_teleportEventData_6(TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * value)
	{
		___teleportEventData_6 = value;
		Il2CppCodeGenWriteBarrier((&___teleportEventData_6), value);
	}

	inline static int32_t get_offset_of_isTeleporting_7() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___isTeleporting_7)); }
	inline bool get_isTeleporting_7() const { return ___isTeleporting_7; }
	inline bool* get_address_of_isTeleporting_7() { return &___isTeleporting_7; }
	inline void set_isTeleporting_7(bool value)
	{
		___isTeleporting_7 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_8() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___isProcessingTeleportRequest_8)); }
	inline bool get_isProcessingTeleportRequest_8() const { return ___isProcessingTeleportRequest_8; }
	inline bool* get_address_of_isProcessingTeleportRequest_8() { return &___isProcessingTeleportRequest_8; }
	inline void set_isProcessingTeleportRequest_8(bool value)
	{
		___isProcessingTeleportRequest_8 = value;
	}

	inline static int32_t get_offset_of_targetPosition_9() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___targetPosition_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetPosition_9() const { return ___targetPosition_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetPosition_9() { return &___targetPosition_9; }
	inline void set_targetPosition_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetPosition_9 = value;
	}

	inline static int32_t get_offset_of_targetRotation_10() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___targetRotation_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetRotation_10() const { return ___targetRotation_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetRotation_10() { return &___targetRotation_10; }
	inline void set_targetRotation_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetRotation_10 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_11() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___eventSystemReference_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_eventSystemReference_11() const { return ___eventSystemReference_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_eventSystemReference_11() { return &___eventSystemReference_11; }
	inline void set_eventSystemReference_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___eventSystemReference_11 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystemReference_11), value);
	}

	inline static int32_t get_offset_of_teleportDuration_12() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45, ___teleportDuration_12)); }
	inline float get_teleportDuration_12() const { return ___teleportDuration_12; }
	inline float* get_address_of_teleportDuration_12() { return &___teleportDuration_12; }
	inline void set_teleportDuration_12(float value)
	{
		___teleportDuration_12 = value;
	}
};

struct MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * ___OnTeleportRequestHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * ___OnTeleportStartedHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * ___OnTeleportCompletedHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * ___OnTeleportCanceledHandler_16;

public:
	inline static int32_t get_offset_of_OnTeleportRequestHandler_13() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields, ___OnTeleportRequestHandler_13)); }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * get_OnTeleportRequestHandler_13() const { return ___OnTeleportRequestHandler_13; }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 ** get_address_of_OnTeleportRequestHandler_13() { return &___OnTeleportRequestHandler_13; }
	inline void set_OnTeleportRequestHandler_13(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * value)
	{
		___OnTeleportRequestHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnTeleportRequestHandler_13), value);
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_14() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields, ___OnTeleportStartedHandler_14)); }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * get_OnTeleportStartedHandler_14() const { return ___OnTeleportStartedHandler_14; }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 ** get_address_of_OnTeleportStartedHandler_14() { return &___OnTeleportStartedHandler_14; }
	inline void set_OnTeleportStartedHandler_14(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * value)
	{
		___OnTeleportStartedHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnTeleportStartedHandler_14), value);
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_15() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields, ___OnTeleportCompletedHandler_15)); }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * get_OnTeleportCompletedHandler_15() const { return ___OnTeleportCompletedHandler_15; }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 ** get_address_of_OnTeleportCompletedHandler_15() { return &___OnTeleportCompletedHandler_15; }
	inline void set_OnTeleportCompletedHandler_15(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * value)
	{
		___OnTeleportCompletedHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnTeleportCompletedHandler_15), value);
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_16() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields, ___OnTeleportCanceledHandler_16)); }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * get_OnTeleportCanceledHandler_16() const { return ___OnTeleportCanceledHandler_16; }
	inline EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 ** get_address_of_OnTeleportCanceledHandler_16() { return &___OnTeleportCanceledHandler_16; }
	inline void set_OnTeleportCanceledHandler_16(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * value)
	{
		___OnTeleportCanceledHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnTeleportCanceledHandler_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTELEPORTSYSTEM_T9B2F257709879A71B288739037886D92FF57FE45_H
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
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifndef FOCUSDETAILS_T14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2_H
#define FOCUSDETAILS_T14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails
struct  FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails::<Point>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_2;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2, ___U3CPointU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPointU3Ek__BackingField_0() const { return ___U3CPointU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPointU3Ek__BackingField_0() { return &___U3CPointU3Ek__BackingField_0; }
	inline void set_U3CPointU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2, ___U3CNormalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalU3Ek__BackingField_1() const { return ___U3CNormalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalU3Ek__BackingField_1() { return &___U3CNormalU3Ek__BackingField_1; }
	inline void set_U3CNormalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2, ___U3CObjectU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CObjectU3Ek__BackingField_2() const { return ___U3CObjectU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CObjectU3Ek__BackingField_2() { return &___U3CObjectU3Ek__BackingField_2; }
	inline void set_U3CObjectU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2, ___U3CLastRaycastHitU3Ek__BackingField_3)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_U3CLastRaycastHitU3Ek__BackingField_3() const { return ___U3CLastRaycastHitU3Ek__BackingField_3; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_3() { return &___U3CLastRaycastHitU3Ek__BackingField_3; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_3(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails
struct FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_1;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_2;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails
struct FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_1;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_2;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_3;
};
#endif // FOCUSDETAILS_T14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2_H
#ifndef TELEPORTEVENTDATA_TAB1B8ADADC558222D2F79A89696B595A5C03812F_H
#define TELEPORTEVENTDATA_TAB1B8ADADC558222D2F79A89696B595A5C03812F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData
struct  TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::<HotSpot>k__BackingField
	RuntimeObject* ___U3CHotSpotU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F, ___U3CPointerU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_4() const { return ___U3CPointerU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_4() { return &___U3CPointerU3Ek__BackingField_4; }
	inline void set_U3CPointerU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CHotSpotU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F, ___U3CHotSpotU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CHotSpotU3Ek__BackingField_5() const { return ___U3CHotSpotU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CHotSpotU3Ek__BackingField_5() { return &___U3CHotSpotU3Ek__BackingField_5; }
	inline void set_U3CHotSpotU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CHotSpotU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHotSpotU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELEPORTEVENTDATA_TAB1B8ADADC558222D2F79A89696B595A5C03812F_H
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
#ifndef EVENTFUNCTION_1_T74504BA9D3648CECA0AFDB470DAF23E74D144B18_H
#define EVENTFUNCTION_1_T74504BA9D3648CECA0AFDB470DAF23E74D144B18_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler>
struct  EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T74504BA9D3648CECA0AFDB470DAF23E74D144B18_H
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


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Initialize()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Initialize_m3B085740FAACB15EF2184B21595BCC115C7545BA (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_mC0128F62AECD8D686E7E66E1071FB7722AAA2BF8 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void TeleportEventData__ctor_m3D6FD445B6C3F2A04D9A19549C5F19208D7EA105 (TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseService::Destroy()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Destroy_m78D69F709FF28B19D897B93E7465CA3B81C0A6E1 (BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::Register(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m297842533079D27F1EFE3A917E914DB57BBDF59A (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::Unregister(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mCEB94C27AD40564ED04AC380935386C1C338F2CE (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::Initialize(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void TeleportEventData_Initialize_m2FB02BE43ECF77CA67B4440C1A2706A59C9B41B6 (TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * __this, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m47E083E26CBA18AD2AED9A6FE7983573D51D9909 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * ___eventData0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_MixedRealityPlayspace()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::get_Pointer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_m43BF370FA7D72C3DEDD0D59398A894694699E7D7 (TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails::get_Point()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FocusDetails_get_Point_m2449E080FAB9FF141FE0197F8AEE71028550956D (FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::get_HotSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0 (TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Core.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m728B998D7092B3FCCDD28236DDDD6D644D1DB1B6 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m193BEAA22782CF188E9E987421EE294D0743960E (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Services.BaseEventSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421 (BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4 (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m50A84F1EDD8AE108DA862EC77A4D081EC3B7E576 (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData>(UnityEngine.EventSystems.BaseEventData)
inline TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method)
{
	return ((  TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared)(p0, method);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Initialize_m6B945B9C2C88CE02D783F6B1E2CC85C58AC3E42F (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m3B085740FAACB15EF2184B21595BCC115C7545BA(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealityTeleportSystem_InitializeInternal_mC0128F62AECD8D686E7E66E1071FB7722AAA2BF8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_mC0128F62AECD8D686E7E66E1071FB7722AAA2BF8 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_InitializeInternal_mC0128F62AECD8D686E7E66E1071FB7722AAA2BF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData = new TeleportEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = (TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F *)il2cpp_codegen_object_new(TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_il2cpp_TypeInfo_var);
		TeleportEventData__ctor_m3D6FD445B6C3F2A04D9A19549C5F19208D7EA105(L_1, L_0, /*hidden argument*/NULL);
		__this->set_teleportEventData_6(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Destroy_m1DA16F99BAB85011DA18AC59970115818586091E (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_Destroy_m1DA16F99BAB85011DA18AC59970115818586091E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Destroy();
		BaseService_Destroy_m78D69F709FF28B19D897B93E7465CA3B81C0A6E1(__this, /*hidden argument*/NULL);
		// if (eventSystemReference != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_eventSystemReference_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Object.DestroyImmediate(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_eventSystemReference_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// Object.Destroy(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_eventSystemReference_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::Register(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Register_mA05CFFC09207B0AAE83D6D3E14FC6C34BDAEE953 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Register(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Register_m297842533079D27F1EFE3A917E914DB57BBDF59A(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::Unregister(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Unregister_m5460842E85F19C312051DBAF45652E302390BD8B (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Unregister(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Unregister_mCEB94C27AD40564ED04AC380935386C1C338F2CE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::get_TeleportDuration()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityTeleportSystem_get_TeleportDuration_m84915F8BB7C8E9D8FEC0A5EFDD1B2D79B321FE0A (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method)
{
	{
		// get { return teleportDuration; }
		float L_0 = __this->get_teleportDuration_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::set_TeleportDuration(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_TeleportDuration_m05062131416E60A95E7B5B5781B62E9AEB16B8B8 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_set_TeleportDuration_m05062131416E60A95E7B5B5781B62E9AEB16B8B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isProcessingTeleportRequest)
		bool L_0 = __this->get_isProcessingTeleportRequest_8();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Couldn't change teleport duration. Teleport in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportDuration = value;
		float L_1 = ___value0;
		__this->set_teleportDuration_12(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportRequest_mAFF67273DE245A313CBE7118FDD0304BB2B1C25C (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportRequest_mAFF67273DE245A313CBE7118FDD0304BB2B1C25C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_0 = __this->get_teleportEventData_6();
		RuntimeObject* L_1 = ___pointer0;
		RuntimeObject* L_2 = ___hotSpot1;
		NullCheck(L_0);
		TeleportEventData_Initialize_m2FB02BE43ECF77CA67B4440C1A2706A59C9B41B6(L_0, L_1, L_2, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportRequestHandler);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = __this->get_teleportEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var);
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_4 = ((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->get_OnTeleportRequestHandler_13();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_m3294DE502BA9A79DF345899F94808E83ACC331B7_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportStarted_mEE19B61ECF9EA4AAB5AE72191D0A80E461260B4B (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportStarted_mEE19B61ECF9EA4AAB5AE72191D0A80E461260B4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isTeleporting)
		bool L_0 = __this->get_isTeleporting_7();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Teleportation already in progress");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// isTeleporting = true;
		__this->set_isTeleporting_7((bool)1);
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = __this->get_teleportEventData_6();
		RuntimeObject* L_2 = ___pointer0;
		RuntimeObject* L_3 = ___hotSpot1;
		NullCheck(L_1);
		TeleportEventData_Initialize_m2FB02BE43ECF77CA67B4440C1A2706A59C9B41B6(L_1, L_2, L_3, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportStartedHandler);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_4 = __this->get_teleportEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var);
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_5 = ((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->get_OnTeleportStartedHandler_14();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_m3294DE502BA9A79DF345899F94808E83ACC331B7_RuntimeMethod_var, __this, L_4, L_5);
		// ProcessTeleportationRequest(teleportEventData);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_6 = __this->get_teleportEventData_6();
		MixedRealityTeleportSystem_ProcessTeleportationRequest_m47E083E26CBA18AD2AED9A6FE7983573D51D9909(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m193BEAA22782CF188E9E987421EE294D0743960E (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportComplete_m193BEAA22782CF188E9E987421EE294D0743960E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isTeleporting)
		bool L_0 = __this->get_isTeleporting_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("No Active Teleportation in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4D1D987217C94047D95253BDAA70342271726366, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = __this->get_teleportEventData_6();
		RuntimeObject* L_2 = ___pointer0;
		RuntimeObject* L_3 = ___hotSpot1;
		NullCheck(L_1);
		TeleportEventData_Initialize_m2FB02BE43ECF77CA67B4440C1A2706A59C9B41B6(L_1, L_2, L_3, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCompletedHandler);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_4 = __this->get_teleportEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var);
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_5 = ((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->get_OnTeleportCompletedHandler_15();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_m3294DE502BA9A79DF345899F94808E83ACC331B7_RuntimeMethod_var, __this, L_4, L_5);
		// isTeleporting = false;
		__this->set_isTeleporting_7((bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportCanceled_m212C5D521E3FD9565582E03591B62ED58ACAD8B8 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportCanceled_m212C5D521E3FD9565582E03591B62ED58ACAD8B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_0 = __this->get_teleportEventData_6();
		RuntimeObject* L_1 = ___pointer0;
		RuntimeObject* L_2 = ___hotSpot1;
		NullCheck(L_0);
		TeleportEventData_Initialize_m2FB02BE43ECF77CA67B4440C1A2706A59C9B41B6(L_0, L_1, L_2, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCanceledHandler);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = __this->get_teleportEventData_6();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var);
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_4 = ((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->get_OnTeleportCanceledHandler_16();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_m3294DE502BA9A79DF345899F94808E83ACC331B7_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m47E083E26CBA18AD2AED9A6FE7983573D51D9909 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_ProcessTeleportationRequest_m47E083E26CBA18AD2AED9A6FE7983573D51D9909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	float V_1 = 0.0f;
	FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// isProcessingTeleportRequest = true;
		__this->set_isProcessingTeleportRequest_8((bool)1);
		// var cameraParent = MixedRealityToolkit.Instance.MixedRealityPlayspace;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_0 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// targetRotation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_10(L_2);
		// targetRotation.y = eventData.Pointer.PointerOrientation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_targetRotation_10();
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_4 = ___eventData0;
		NullCheck(L_4);
		RuntimeObject* L_5 = TeleportEventData_get_Pointer_m43BF370FA7D72C3DEDD0D59398A894694699E7D7(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = InterfaceFuncInvoker0< float >::Invoke(30 /* System.Single Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer::get_PointerOrientation() */, IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A_il2cpp_TypeInfo_var, L_5);
		L_3->set_y_3(L_6);
		// targetPosition = eventData.Pointer.Result.Details.Point;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_7 = ___eventData0;
		NullCheck(L_7);
		RuntimeObject* L_8 = TeleportEventData_get_Pointer_m43BF370FA7D72C3DEDD0D59398A894694699E7D7(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2  L_10 = InterfaceFuncInvoker0< FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult::get_Details() */, IPointerResult_t4EC08A74BD782FE66A10F3D628607AEC466C55DD_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = FocusDetails_get_Point_m2449E080FAB9FF141FE0197F8AEE71028550956D((FocusDetails_t14A26FCA0A48903D5CC938F2BB09B07FC4C24CB2 *)(&V_2), /*hidden argument*/NULL);
		__this->set_targetPosition_9(L_11);
		// if (eventData.HotSpot != null)
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_12 = ___eventData0;
		NullCheck(L_12);
		RuntimeObject* L_13 = TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// targetPosition = eventData.HotSpot.Position;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_14 = ___eventData0;
		NullCheck(L_14);
		RuntimeObject* L_15 = TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_Position() */, IMixedRealityTeleportHotSpot_t76C4041094CEFFE0E6D91933A140A384059F04FD_il2cpp_TypeInfo_var, L_15);
		__this->set_targetPosition_9(L_16);
		// if (eventData.HotSpot.OverrideTargetOrientation)
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_17 = ___eventData0;
		NullCheck(L_17);
		RuntimeObject* L_18 = TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_OverrideTargetOrientation() */, IMixedRealityTeleportHotSpot_t76C4041094CEFFE0E6D91933A140A384059F04FD_il2cpp_TypeInfo_var, L_18);
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		// targetRotation.y = eventData.HotSpot.TargetOrientation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_20 = __this->get_address_of_targetRotation_10();
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_21 = ___eventData0;
		NullCheck(L_21);
		RuntimeObject* L_22 = TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_TargetOrientation() */, IMixedRealityTeleportHotSpot_t76C4041094CEFFE0E6D91933A140A384059F04FD_il2cpp_TypeInfo_var, L_22);
		L_20->set_y_3(L_23);
	}

IL_008d:
	{
		// float height = targetPosition.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_24 = __this->get_address_of_targetPosition_9();
		float L_25 = L_24->get_y_3();
		V_1 = L_25;
		// targetPosition -= CameraCache.Main.transform.position - cameraParent.position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get_targetPosition_9();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_27 = CameraCache_get_Main_m728B998D7092B3FCCDD28236DDDD6D644D1DB1B6(/*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = V_0;
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_29, L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_32, /*hidden argument*/NULL);
		__this->set_targetPosition_9(L_33);
		// targetPosition.y = height;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_34 = __this->get_address_of_targetPosition_9();
		float L_35 = V_1;
		L_34->set_y_3(L_35);
		// cameraParent.position = targetPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = __this->get_targetPosition_9();
		NullCheck(L_36);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_36, L_37, /*hidden argument*/NULL);
		// cameraParent.RotateAround(CameraCache.Main.transform.position, Vector3.up, targetRotation.y - CameraCache.Main.transform.eulerAngles.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = V_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_39 = CameraCache_get_Main_m728B998D7092B3FCCDD28236DDDD6D644D1DB1B6(/*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_43 = __this->get_address_of_targetRotation_10();
		float L_44 = L_43->get_y_3();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_45 = CameraCache_get_Main_m728B998D7092B3FCCDD28236DDDD6D644D1DB1B6(/*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_3();
		NullCheck(L_38);
		Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD(L_38, L_41, L_42, ((float)il2cpp_codegen_subtract((float)L_44, (float)L_48)), /*hidden argument*/NULL);
		// isProcessingTeleportRequest = false;
		__this->set_isProcessingTeleportRequest_8((bool)0);
		// RaiseTeleportComplete(eventData.Pointer, eventData.HotSpot);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_49 = ___eventData0;
		NullCheck(L_49);
		RuntimeObject* L_50 = TeleportEventData_get_Pointer_m43BF370FA7D72C3DEDD0D59398A894694699E7D7(L_49, /*hidden argument*/NULL);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_51 = ___eventData0;
		NullCheck(L_51);
		RuntimeObject* L_52 = TeleportEventData_get_HotSpot_m0A20262F457FAAE98ADCDFC16231EE22605716C0(L_51, /*hidden argument*/NULL);
		MixedRealityTeleportSystem_RaiseTeleportComplete_m193BEAA22782CF188E9E987421EE294D0743960E(__this, L_50, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m49ED4D1F9E639740CDC615503FB88B949D495410 (MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__ctor_m49ED4D1F9E639740CDC615503FB88B949D495410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetPosition_9(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_10(L_1);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_12((0.25f));
		IL2CPP_RUNTIME_CLASS_INIT(BaseEventSystem_t6619DD7F44699242EDC2CC914B0C7AC071B75CEB_il2cpp_TypeInfo_var);
		BaseEventSystem__ctor_m819A2C86EB31BD923DAE14807736EF4215FD2421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__cctor_m2B1A2E40513E2498A9AAD57A9A23AEE4620CFD0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__cctor_m2B1A2E40513E2498A9AAD57A9A23AEE4620CFD0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportRequestHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportRequest(casted);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var);
		U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * L_0 = ((U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_1 = (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 *)il2cpp_codegen_object_new(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__26_0_m9F11CA94CE4DC9ECB247BD1565319B53A2C8794A_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->set_OnTeleportRequestHandler_13(L_1);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportStartedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportStarted(casted);
		//     };
		U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * L_2 = ((U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_3 = (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 *)il2cpp_codegen_object_new(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__26_1_mB5D27B88944B4AF4452883B579B38B92F8ABA21F_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->set_OnTeleportStartedHandler_14(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCompletedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCompleted(casted);
		//     };
		U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * L_4 = ((U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_5 = (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 *)il2cpp_codegen_object_new(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__26_2_m56CAA23F31CF2A851389D66A9EF91534561B74B6_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->set_OnTeleportCompletedHandler_15(L_5);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCanceledHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCanceled(casted);
		//     };
		U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * L_6 = ((U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 * L_7 = (EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18 *)il2cpp_codegen_object_new(EventFunction_1_t74504BA9D3648CECA0AFDB470DAF23E74D144B18_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__26_3_mE49BFDDEC20A7547023AB41A098F9762FB0AF41F_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m5AE398B9409BD2D054A7869ACC745DD06C0FF9D4_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t9B2F257709879A71B288739037886D92FF57FE45_il2cpp_TypeInfo_var))->set_OnTeleportCanceledHandler_16(L_7);
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
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m444FFEE638C00D23FFAE809FB29BDD46A74534B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m444FFEE638C00D23FFAE809FB29BDD46A74534B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * L_0 = (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED *)il2cpp_codegen_object_new(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m50A84F1EDD8AE108DA862EC77A4D081EC3B7E576(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m50A84F1EDD8AE108DA862EC77A4D081EC3B7E576 (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::<.cctor>b__26_0(Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__26_0_m9F11CA94CE4DC9ECB247BD1565319B53A2C8794A (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__26_0_m9F11CA94CE4DC9ECB247BD1565319B53A2C8794A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportRequest(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::<.cctor>b__26_1(Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__26_1_mB5D27B88944B4AF4452883B579B38B92F8ABA21F (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__26_1_mB5D27B88944B4AF4452883B579B38B92F8ABA21F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::<.cctor>b__26_2(Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__26_2_m56CAA23F31CF2A851389D66A9EF91534561B74B6 (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__26_2_m56CAA23F31CF2A851389D66A9EF91534561B74B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Services.Teleportation.MixedRealityTeleportSystem_<>c::<.cctor>b__26_3(Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__26_3_mE49BFDDEC20A7547023AB41A098F9762FB0AF41F (U3CU3Ec_tF9FD7B520B11545666D737208F41F60BFCE250ED * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__26_3_mE49BFDDEC20A7547023AB41A098F9762FB0AF41F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F_m709B83F4EE239A019B4A54E4B2C0F3328FD625FF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tAB1B8ADADC558222D2F79A89696B595A5C03812F * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHandler::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t055E77BF455EE47861A60FC5A431A000F8BC8AF2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
