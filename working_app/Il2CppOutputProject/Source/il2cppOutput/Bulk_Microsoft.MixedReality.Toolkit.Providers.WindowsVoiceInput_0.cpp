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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB;
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t7AA6AADFF135F5FADDED47D840F8A70B6254F212;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tBB05E695676AFEEAD0949B3EC1159F6B1894D968;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_tE4379C8B0285C3CDA91E959C10CBF579AEEAF407;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t2757F7689D343A8C31D22811B30D70EADC3C4C43;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tC71814A9A7A30E0866DA767B5365640C24DF92F7;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t8995DE1BCF98C3896B28AF17C395B4DA181FD2C9;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[]
struct SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType
struct SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityDictationSystem
struct IMixedRealityDictationSystem_t38DA94EF9734498F9A97236F471614B3064BDE3E;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealitySpeechSystem
struct IMixedRealitySpeechSystem_t87DAE5E43AC8F22477B1097B8E44AB945B393AF4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_tF730E20FF70F623AE5C5A6EEE2B20A34A439C5A9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t811C59BBC6515F6C30820D3342E6385093ECAF19;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_tBDC277E48EB85AABE9C115382DF433C1FAC2D6F6;
// Microsoft.MixedReality.Toolkit.Core.Providers.BaseDeviceManager
struct BaseDeviceManager_tCA1AA0452BE52BB016E6D46078CD49279635567A;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC;
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398;
// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D;
// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<>c
struct U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4;
// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>>
struct List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>>
struct Func_2_t9142D625393521B287A80A741A754EC358C5C5DF;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;

extern RuntimeClass* AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9;
extern String_t* _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0;
extern String_t* _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69;
extern String_t* _stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6;
extern String_t* _stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3;
extern String_t* _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6;
extern String_t* _stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6;
extern String_t* _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77;
extern String_t* _stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311;
extern String_t* _stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E;
extern String_t* _stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mB027FFDC6A4B56C773104B9E9E62D5DEAB5B021E_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_mE9EE5308261DD57C513425C1D2EC01B2568C93C9_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_m57B4916B6E50FB738ECD19A5B892DC76B083A1DC_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_0_m13459EFDEEF75D9D51E4B8EE77672338E8E93E91_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_1_mC06B1AB569E07CA7F54938CE31B76B1DB0673C5E_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_2_m98F05A3A58C36EE6320CB239A9E276C0D2447EBD_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_3_mE302BF9E29116221398BE21C4B2A1AD0E5E933E3_RuntimeMethod_var;
extern const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A_RuntimeMethod_var;
extern const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630_RuntimeMethod_var;
extern const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540_RuntimeMethod_var;
extern const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B_RuntimeMethod_var;
extern const RuntimeMethod* WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m56E02C8576F35063C037B5E41F4211164FEEE88C_RuntimeMethod_var;
extern const uint32_t U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980_MetadataUsageId;
extern const uint32_t U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C_MetadataUsageId;
extern const uint32_t U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE_MetadataUsageId;
extern const uint32_t U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD_MetadataUsageId;
extern const uint32_t U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B_MetadataUsageId;
extern const uint32_t U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__0_2_m98F05A3A58C36EE6320CB239A9E276C0D2447EBD_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__0_3_mE302BF9E29116221398BE21C4B2A1AD0E5E933E3_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m8EB91CEF2DC9660F40D4D2EF877259D5697174A2_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_Destroy_mDC3588A4C413D8F853534C380913B1BA55BD6653_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_Disable_mF125D313FDD7D0C24159FCD32126FE3EEDD2BA94_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_Enable_mDFAC02B19F07D256487C384D51FAF6BF3C47B44A_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_StartRecordingAsync_m2AF9148943C7CB5E0C1C030D430A2A4B8F275E5E_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_StartRecording_m0D79DE400A4D82CD658FA4883A04988C591BD090_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_StopRecording_mBA304414234490736B7153B3AA5D829E06309071_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider_Update_m9F1B499566060BAE726BA96D9BD8600755572AE9_MetadataUsageId;
extern const uint32_t WindowsDictationInputProvider__ctor_m0DC0F73CA77FB7E602F1753F6574BAE6548BF20F_MetadataUsageId;
extern const uint32_t WindowsSpeechInputProvider_Disable_m84BAF2CA4E7743E0B8AF0ED0A7193B185CBF3B17_MetadataUsageId;
extern const uint32_t WindowsSpeechInputProvider_Enable_mB7AD437D352B89C6C638977F2EC7C2AB22D7865B_MetadataUsageId;
extern const uint32_t WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307_MetadataUsageId;
extern const uint32_t WindowsSpeechInputProvider_Update_m86E45325698DE1C055D1BFEEEC3EE4E6F33C4008_MetadataUsageId;
extern const uint32_t WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;

struct SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD;
struct IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T9ED18CF776DFFF88CB1985CC8A1308B19AB4EFCC_H
#define U3CMODULEU3E_T9ED18CF776DFFF88CB1985CC8A1308B19AB4EFCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9ED18CF776DFFF88CB1985CC8A1308B19AB4EFCC 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T9ED18CF776DFFF88CB1985CC8A1308B19AB4EFCC_H
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
#ifndef SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#define SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#ifndef U3CU3EC_T35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_H
#define U3CU3EC_T35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c
struct  U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<>9
	U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<>9__0_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<>9__0_1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<>9__0_2
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<>9__0_3
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields, ___U3CU3E9__0_3_4)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_3_4() const { return ___U3CU3E9__0_3_4; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_3_4() { return &___U3CU3E9__0_3_4; }
	inline void set_U3CU3E9__0_3_4(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_H
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef BASESERVICEWITHCONSTRUCTOR_T6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C_H
#define BASESERVICEWITHCONSTRUCTOR_T6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.BaseServiceWithConstructor
struct  BaseServiceWithConstructor_t6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C  : public BaseService_t49FA0CBEE4377921759C41E76FFB92942F6D96BA
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Services.BaseServiceWithConstructor::name
	String_t* ___name_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Services.BaseServiceWithConstructor::priority
	uint32_t ___priority_4;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(BaseServiceWithConstructor_t6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_priority_4() { return static_cast<int32_t>(offsetof(BaseServiceWithConstructor_t6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C, ___priority_4)); }
	inline uint32_t get_priority_4() const { return ___priority_4; }
	inline uint32_t* get_address_of_priority_4() { return &___priority_4; }
	inline void set_priority_4(uint32_t value)
	{
		___priority_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESERVICEWITHCONSTRUCTOR_T6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C_H
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
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
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#define ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifndef TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#define TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
#endif // TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#ifndef TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#define TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifndef TASKAWAITER_1_T1CBDF733362C45EC91B0E9317C766E5A2FA02B99_H
#define TASKAWAITER_1_T1CBDF733362C45EC91B0E9317C766E5A2FA02B99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99, ___m_task_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1CBDF733362C45EC91B0E9317C766E5A2FA02B99_H
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
#ifndef WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#define WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#ifndef AUTOSTARTBEHAVIOR_T163262D6B174EDBEED2E3ABAB678C4A3CFC51EE6_H
#define AUTOSTARTBEHAVIOR_T163262D6B174EDBEED2E3ABAB678C4A3CFC51EE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t163262D6B174EDBEED2E3ABAB678C4A3CFC51EE6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t163262D6B174EDBEED2E3ABAB678C4A3CFC51EE6, ___value___2)); }
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
#endif // AUTOSTARTBEHAVIOR_T163262D6B174EDBEED2E3ABAB678C4A3CFC51EE6_H
#ifndef AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
#define AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType
struct  AxisType_t2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F, ___value___2)); }
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
#endif // AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
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
#ifndef RECOGNITIONCONFIDENCELEVEL_T8273CB281494D38C6F3ABE9AECA73D0D2534D3F9_H
#define RECOGNITIONCONFIDENCELEVEL_T8273CB281494D38C6F3ABE9AECA73D0D2534D3F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t8273CB281494D38C6F3ABE9AECA73D0D2534D3F9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t8273CB281494D38C6F3ABE9AECA73D0D2534D3F9, ___value___2)); }
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
#endif // RECOGNITIONCONFIDENCELEVEL_T8273CB281494D38C6F3ABE9AECA73D0D2534D3F9_H
#ifndef BASEEXTENSIONSERVICE_T839B714FEC89A3932F26A4EE97D7E6D4521E0A8D_H
#define BASEEXTENSIONSERVICE_T839B714FEC89A3932F26A4EE97D7E6D4521E0A8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.BaseExtensionService
struct  BaseExtensionService_t839B714FEC89A3932F26A4EE97D7E6D4521E0A8D  : public BaseServiceWithConstructor_t6B415AEC2EB2C431915E39B1A8C208CC2D3BA96C
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.Core.Services.BaseExtensionService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * ___U3CConfigurationProfileU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseExtensionService_t839B714FEC89A3932F26A4EE97D7E6D4521E0A8D, ___U3CConfigurationProfileU3Ek__BackingField_5)); }
	inline BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * get_U3CConfigurationProfileU3Ek__BackingField_5() const { return ___U3CConfigurationProfileU3Ek__BackingField_5; }
	inline BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_5() { return &___U3CConfigurationProfileU3Ek__BackingField_5; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_5(BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConfigurationProfileU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEXTENSIONSERVICE_T839B714FEC89A3932F26A4EE97D7E6D4521E0A8D_H
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
#ifndef ASYNCTASKMETHODBUILDER_1_T2A9513A084F4B19851B91EF1F22BB57776D35663_H
#define ASYNCTASKMETHODBUILDER_1_T2A9513A084F4B19851B91EF1F22BB57776D35663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2A9513A084F4B19851B91EF1F22BB57776D35663_H
#ifndef ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#define ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifndef ASYNCTASKMETHODBUILDER_1_TD2F8773433ABAC7266323C8FBDFE204289FE17B6_H
#define ASYNCTASKMETHODBUILDER_1_TD2F8773433ABAC7266323C8FBDFE204289FE17B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_task_2)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_TD2F8773433ABAC7266323C8FBDFE204289FE17B6_H
#ifndef ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#define ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
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
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
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
#ifndef CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#define CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36, ___value___2)); }
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
#endif // CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#ifndef DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#define DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1, ___value___2)); }
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
#endif // DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#ifndef DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#define DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((&___DictationHypothesis_1), value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationResult_2)); }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((&___DictationResult_2), value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((&___DictationComplete_3), value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationError_4)); }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((&___DictationError_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#ifndef PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#define PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnPhraseRecognized_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#ifndef SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#define SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317, ___value___2)); }
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
#endif // SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#ifndef MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#define MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct  MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#ifndef BASEDEVICEMANAGER_TCA1AA0452BE52BB016E6D46078CD49279635567A_H
#define BASEDEVICEMANAGER_TCA1AA0452BE52BB016E6D46078CD49279635567A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Providers.BaseDeviceManager
struct  BaseDeviceManager_tCA1AA0452BE52BB016E6D46078CD49279635567A  : public BaseExtensionService_t839B714FEC89A3932F26A4EE97D7E6D4521E0A8D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDEVICEMANAGER_TCA1AA0452BE52BB016E6D46078CD49279635567A_H
#ifndef U3CDISABLEU3ED__21_T8812B93461D3021E04B9DB3A34961745C8F54DCA_H
#define U3CDISABLEU3ED__21_T8812B93461D3021E04B9DB3A34961745C8F54DCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21
struct  U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::<>4__this
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISABLEU3ED__21_T8812B93461D3021E04B9DB3A34961745C8F54DCA_H
#ifndef U3CSTARTRECORDINGU3ED__23_TE8D27714A4FB0A3498B271F841A27B710E17CE60_H
#define U3CSTARTRECORDINGU3ED__23_TE8D27714A4FB0A3498B271F841A27B710E17CE60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23
struct  U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::<>4__this
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_3;
	// System.Single Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::initialSilenceTimeout
	float ___initialSilenceTimeout_4;
	// System.Single Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::autoSilenceTimeout
	float ___autoSilenceTimeout_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::recordingTime
	int32_t ___recordingTime_6;
	// System.String Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::micDeviceName
	String_t* ___micDeviceName_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___listener_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_3() const { return ___listener_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((&___listener_3), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___initialSilenceTimeout_4)); }
	inline float get_initialSilenceTimeout_4() const { return ___initialSilenceTimeout_4; }
	inline float* get_address_of_initialSilenceTimeout_4() { return &___initialSilenceTimeout_4; }
	inline void set_initialSilenceTimeout_4(float value)
	{
		___initialSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___autoSilenceTimeout_5)); }
	inline float get_autoSilenceTimeout_5() const { return ___autoSilenceTimeout_5; }
	inline float* get_address_of_autoSilenceTimeout_5() { return &___autoSilenceTimeout_5; }
	inline void set_autoSilenceTimeout_5(float value)
	{
		___autoSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_recordingTime_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___recordingTime_6)); }
	inline int32_t get_recordingTime_6() const { return ___recordingTime_6; }
	inline int32_t* get_address_of_recordingTime_6() { return &___recordingTime_6; }
	inline void set_recordingTime_6(int32_t value)
	{
		___recordingTime_6 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___micDeviceName_7)); }
	inline String_t* get_micDeviceName_7() const { return ___micDeviceName_7; }
	inline String_t** get_address_of_micDeviceName_7() { return &___micDeviceName_7; }
	inline void set_micDeviceName_7(String_t* value)
	{
		___micDeviceName_7 = value;
		Il2CppCodeGenWriteBarrier((&___micDeviceName_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGU3ED__23_TE8D27714A4FB0A3498B271F841A27B710E17CE60_H
#ifndef U3CSTOPRECORDINGU3ED__25_T20430984B101197BB9B502B92D538D9F60E7B7DB_H
#define U3CSTOPRECORDINGU3ED__25_T20430984B101197BB9B502B92D538D9F60E7B7DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25
struct  U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::<>4__this
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPRECORDINGU3ED__25_T20430984B101197BB9B502B92D538D9F60E7B7DB_H
#ifndef U3CSTOPRECORDINGASYNCU3ED__26_T6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_H
#define U3CSTOPRECORDINGASYNCU3ED__26_T6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26
struct  U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>4__this
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPRECORDINGASYNCU3ED__26_T6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_H
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
#ifndef ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#define ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#ifndef TASK_1_T1FD9AF71747895AEE56DD875875ED8409EFAD2CC_H
#define TASK_1_T1FD9AF71747895AEE56DD875875ED8409EFAD2CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC, ___m_result_22)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_m_result_22() const { return ___m_result_22; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1FD9AF71747895AEE56DD875875ED8409EFAD2CC_H
#ifndef AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#define AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
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
#ifndef KEYWORDRECOGNIZER_T8F0A26BBF11FE0307328C06B4A9EB4268386578C_H
#define KEYWORDRECOGNIZER_T8F0A26BBF11FE0307328C06B4A9EB4268386578C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C  : public PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeywordsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYWORDRECOGNIZER_T8F0A26BBF11FE0307328C06B4A9EB4268386578C_H
#ifndef PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
#define PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((&___semanticMeanings_1), value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseStartTime_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseDuration_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___phraseDuration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
#endif // PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
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
#ifndef SPEECHCOMMANDS_T607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D_H
#define SPEECHCOMMANDS_T607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands
struct  SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::keyword
	String_t* ___keyword_0;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::keyCode
	int32_t ___keyCode_1;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::action
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  ___action_2;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyword_0), value);
	}

	inline static int32_t get_offset_of_keyCode_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D, ___keyCode_1)); }
	inline int32_t get_keyCode_1() const { return ___keyCode_1; }
	inline int32_t* get_address_of_keyCode_1() { return &___keyCode_1; }
	inline void set_keyCode_1(int32_t value)
	{
		___keyCode_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D, ___action_2)); }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands
struct SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D_marshaled_pinvoke
{
	char* ___keyword_0;
	int32_t ___keyCode_1;
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands
struct SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D_marshaled_com
{
	Il2CppChar* ___keyword_0;
	int32_t ___keyCode_1;
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_com ___action_2;
};
#endif // SPEECHCOMMANDS_T607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D_H
#ifndef WINDOWSDICTATIONINPUTPROVIDER_T242BD264C67E963BD35F15A37496B1C9C1F9E80D_H
#define WINDOWSDICTATIONINPUTPROVIDER_T242BD264C67E963BD35F15A37496B1C9C1F9E80D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider
struct  WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D  : public BaseDeviceManager_tCA1AA0452BE52BB016E6D46078CD49279635567A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::hasListener
	bool ___hasListener_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_9;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_10;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_11;
	// System.String Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_13;
	// System.String Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_14;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___dictationAudioClip_15;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStarted_17;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStopped_18;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStarted_19;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStopped_20;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___U3CIsListeningU3Ek__BackingField_6)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_6() const { return ___U3CIsListeningU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_6() { return &___U3CIsListeningU3Ek__BackingField_6; }
	inline void set_U3CIsListeningU3Ek__BackingField_6(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_hasFailed_7() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___hasFailed_7)); }
	inline bool get_hasFailed_7() const { return ___hasFailed_7; }
	inline bool* get_address_of_hasFailed_7() { return &___hasFailed_7; }
	inline void set_hasFailed_7(bool value)
	{
		___hasFailed_7 = value;
	}

	inline static int32_t get_offset_of_hasListener_8() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___hasListener_8)); }
	inline bool get_hasListener_8() const { return ___hasListener_8; }
	inline bool* get_address_of_hasListener_8() { return &___hasListener_8; }
	inline void set_hasListener_8(bool value)
	{
		___hasListener_8 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_9() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___isTransitioning_9)); }
	inline bool get_isTransitioning_9() const { return ___isTransitioning_9; }
	inline bool* get_address_of_isTransitioning_9() { return &___isTransitioning_9; }
	inline void set_isTransitioning_9(bool value)
	{
		___isTransitioning_9 = value;
	}

	inline static int32_t get_offset_of_inputSource_10() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___inputSource_10)); }
	inline RuntimeObject* get_inputSource_10() const { return ___inputSource_10; }
	inline RuntimeObject** get_address_of_inputSource_10() { return &___inputSource_10; }
	inline void set_inputSource_10(RuntimeObject* value)
	{
		___inputSource_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputSource_10), value);
	}

	inline static int32_t get_offset_of_textSoFar_11() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___textSoFar_11)); }
	inline StringBuilder_t * get_textSoFar_11() const { return ___textSoFar_11; }
	inline StringBuilder_t ** get_address_of_textSoFar_11() { return &___textSoFar_11; }
	inline void set_textSoFar_11(StringBuilder_t * value)
	{
		___textSoFar_11 = value;
		Il2CppCodeGenWriteBarrier((&___textSoFar_11), value);
	}

	inline static int32_t get_offset_of_deviceName_12() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___deviceName_12)); }
	inline String_t* get_deviceName_12() const { return ___deviceName_12; }
	inline String_t** get_address_of_deviceName_12() { return &___deviceName_12; }
	inline void set_deviceName_12(String_t* value)
	{
		___deviceName_12 = value;
		Il2CppCodeGenWriteBarrier((&___deviceName_12), value);
	}

	inline static int32_t get_offset_of_samplingRate_13() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___samplingRate_13)); }
	inline int32_t get_samplingRate_13() const { return ___samplingRate_13; }
	inline int32_t* get_address_of_samplingRate_13() { return &___samplingRate_13; }
	inline void set_samplingRate_13(int32_t value)
	{
		___samplingRate_13 = value;
	}

	inline static int32_t get_offset_of_dictationResult_14() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___dictationResult_14)); }
	inline String_t* get_dictationResult_14() const { return ___dictationResult_14; }
	inline String_t** get_address_of_dictationResult_14() { return &___dictationResult_14; }
	inline void set_dictationResult_14(String_t* value)
	{
		___dictationResult_14 = value;
		Il2CppCodeGenWriteBarrier((&___dictationResult_14), value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_15() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___dictationAudioClip_15)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_dictationAudioClip_15() const { return ___dictationAudioClip_15; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_dictationAudioClip_15() { return &___dictationAudioClip_15; }
	inline void set_dictationAudioClip_15(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___dictationAudioClip_15 = value;
		Il2CppCodeGenWriteBarrier((&___dictationAudioClip_15), value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_17() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___waitUntilPhraseRecognitionSystemHasStarted_17)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStarted_17() const { return ___waitUntilPhraseRecognitionSystemHasStarted_17; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_17() { return &___waitUntilPhraseRecognitionSystemHasStarted_17; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_17(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_17 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilPhraseRecognitionSystemHasStarted_17), value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_18() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___waitUntilPhraseRecognitionSystemHasStopped_18)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStopped_18() const { return ___waitUntilPhraseRecognitionSystemHasStopped_18; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_18() { return &___waitUntilPhraseRecognitionSystemHasStopped_18; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_18(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_18 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilPhraseRecognitionSystemHasStopped_18), value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_19() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___waitUntilDictationRecognizerHasStarted_19)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStarted_19() const { return ___waitUntilDictationRecognizerHasStarted_19; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStarted_19() { return &___waitUntilDictationRecognizerHasStarted_19; }
	inline void set_waitUntilDictationRecognizerHasStarted_19(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStarted_19 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilDictationRecognizerHasStarted_19), value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_20() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D, ___waitUntilDictationRecognizerHasStopped_20)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStopped_20() const { return ___waitUntilDictationRecognizerHasStopped_20; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStopped_20() { return &___waitUntilDictationRecognizerHasStopped_20; }
	inline void set_waitUntilDictationRecognizerHasStopped_20(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStopped_20 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilDictationRecognizerHasStopped_20), value);
	}
};

struct WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields
{
public:
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * ___dictationRecognizer_16;

public:
	inline static int32_t get_offset_of_dictationRecognizer_16() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields, ___dictationRecognizer_16)); }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * get_dictationRecognizer_16() const { return ___dictationRecognizer_16; }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 ** get_address_of_dictationRecognizer_16() { return &___dictationRecognizer_16; }
	inline void set_dictationRecognizer_16(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * value)
	{
		___dictationRecognizer_16 = value;
		Il2CppCodeGenWriteBarrier((&___dictationRecognizer_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSDICTATIONINPUTPROVIDER_T242BD264C67E963BD35F15A37496B1C9C1F9E80D_H
#ifndef U3CSTARTRECORDINGASYNCU3ED__24_T522E9B0B7F871C553635C8A36875D388D8B2E087_H
#define U3CSTARTRECORDINGASYNCU3ED__24_T522E9B0B7F871C553635C8A36875D388D8B2E087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24
struct  U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>4__this
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_3;
	// System.String Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::micDeviceName
	String_t* ___micDeviceName_4;
	// System.Single Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::initialSilenceTimeout
	float ___initialSilenceTimeout_5;
	// System.Single Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::autoSilenceTimeout
	float ___autoSilenceTimeout_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::recordingTime
	int32_t ___recordingTime_7;
	// System.Object Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>u__1
	RuntimeObject * ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___listener_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_3() const { return ___listener_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((&___listener_3), value);
	}

	inline static int32_t get_offset_of_micDeviceName_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___micDeviceName_4)); }
	inline String_t* get_micDeviceName_4() const { return ___micDeviceName_4; }
	inline String_t** get_address_of_micDeviceName_4() { return &___micDeviceName_4; }
	inline void set_micDeviceName_4(String_t* value)
	{
		___micDeviceName_4 = value;
		Il2CppCodeGenWriteBarrier((&___micDeviceName_4), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___initialSilenceTimeout_5)); }
	inline float get_initialSilenceTimeout_5() const { return ___initialSilenceTimeout_5; }
	inline float* get_address_of_initialSilenceTimeout_5() { return &___initialSilenceTimeout_5; }
	inline void set_initialSilenceTimeout_5(float value)
	{
		___initialSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___autoSilenceTimeout_6)); }
	inline float get_autoSilenceTimeout_6() const { return ___autoSilenceTimeout_6; }
	inline float* get_address_of_autoSilenceTimeout_6() { return &___autoSilenceTimeout_6; }
	inline void set_autoSilenceTimeout_6(float value)
	{
		___autoSilenceTimeout_6 = value;
	}

	inline static int32_t get_offset_of_recordingTime_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___recordingTime_7)); }
	inline int32_t get_recordingTime_7() const { return ___recordingTime_7; }
	inline int32_t* get_address_of_recordingTime_7() { return &___recordingTime_7; }
	inline void set_recordingTime_7(int32_t value)
	{
		___recordingTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087, ___U3CU3Eu__1_8)); }
	inline RuntimeObject * get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(RuntimeObject * value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGASYNCU3ED__24_T522E9B0B7F871C553635C8A36875D388D8B2E087_H
#ifndef WINDOWSSPEECHINPUTPROVIDER_TC695AFE633BFC082BB007521B7721BF1AC3FF9EB_H
#define WINDOWSSPEECHINPUTPROVIDER_TC695AFE633BFC082BB007521B7721BF1AC3FF9EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider
struct  WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB  : public BaseDeviceManager_tCA1AA0452BE52BB016E6D46078CD49279635567A
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::InputSource
	RuntimeObject* ___InputSource_6;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * ___keywordRecognizer_7;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_InputSource_6() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB, ___InputSource_6)); }
	inline RuntimeObject* get_InputSource_6() const { return ___InputSource_6; }
	inline RuntimeObject** get_address_of_InputSource_6() { return &___InputSource_6; }
	inline void set_InputSource_6(RuntimeObject* value)
	{
		___InputSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___InputSource_6), value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_7() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB, ___keywordRecognizer_7)); }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * get_keywordRecognizer_7() const { return ___keywordRecognizer_7; }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C ** get_address_of_keywordRecognizer_7() { return &___keywordRecognizer_7; }
	inline void set_keywordRecognizer_7(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * value)
	{
		___keywordRecognizer_7 = value;
		Il2CppCodeGenWriteBarrier((&___keywordRecognizer_7), value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_8; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_8(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSSPEECHINPUTPROVIDER_TC695AFE633BFC082BB007521B7721BF1AC3FF9EB_H
#ifndef FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#define FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
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
#ifndef DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#define DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate
struct  DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#ifndef DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#define DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler
struct  DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#ifndef DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#define DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#ifndef DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#define DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate
struct  DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#ifndef PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
#define PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
#ifndef MIXEDREALITYINPUTSYSTEMPROFILE_TA212A9C49D4B1609CD1841D77C24E8237E7C3A09_H
#define MIXEDREALITYINPUTSYSTEMPROFILE_TA212A9C49D4B1609CD1841D77C24E8237E7C3A09_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___focusProviderType_5;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tC71814A9A7A30E0866DA767B5365640C24DF92F7 * ___inputActionsProfile_6;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t2757F7689D343A8C31D22811B30D70EADC3C4C43 * ___inputActionRulesProfile_7;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t8995DE1BCF98C3896B28AF17C395B4DA181FD2C9 * ___pointerProfile_8;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_tE4379C8B0285C3CDA91E959C10CBF579AEEAF407 * ___gesturesProfile_9;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealitySpeechSystem Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::speechSystem
	RuntimeObject* ___speechSystem_10;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * ___speechCommandsProfile_11;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityDictationSystem Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::dictationSystem
	RuntimeObject* ___dictationSystem_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t7AA6AADFF135F5FADDED47D840F8A70B6254F212 * ___controllerMappingProfile_14;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tBB05E695676AFEEAD0949B3EC1159F6B1894D968 * ___controllerVisualizationProfile_15;

public:
	inline static int32_t get_offset_of_focusProviderType_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___focusProviderType_5)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_focusProviderType_5() const { return ___focusProviderType_5; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_focusProviderType_5() { return &___focusProviderType_5; }
	inline void set_focusProviderType_5(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___focusProviderType_5 = value;
		Il2CppCodeGenWriteBarrier((&___focusProviderType_5), value);
	}

	inline static int32_t get_offset_of_inputActionsProfile_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___inputActionsProfile_6)); }
	inline MixedRealityInputActionsProfile_tC71814A9A7A30E0866DA767B5365640C24DF92F7 * get_inputActionsProfile_6() const { return ___inputActionsProfile_6; }
	inline MixedRealityInputActionsProfile_tC71814A9A7A30E0866DA767B5365640C24DF92F7 ** get_address_of_inputActionsProfile_6() { return &___inputActionsProfile_6; }
	inline void set_inputActionsProfile_6(MixedRealityInputActionsProfile_tC71814A9A7A30E0866DA767B5365640C24DF92F7 * value)
	{
		___inputActionsProfile_6 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionsProfile_6), value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___inputActionRulesProfile_7)); }
	inline MixedRealityInputActionRulesProfile_t2757F7689D343A8C31D22811B30D70EADC3C4C43 * get_inputActionRulesProfile_7() const { return ___inputActionRulesProfile_7; }
	inline MixedRealityInputActionRulesProfile_t2757F7689D343A8C31D22811B30D70EADC3C4C43 ** get_address_of_inputActionRulesProfile_7() { return &___inputActionRulesProfile_7; }
	inline void set_inputActionRulesProfile_7(MixedRealityInputActionRulesProfile_t2757F7689D343A8C31D22811B30D70EADC3C4C43 * value)
	{
		___inputActionRulesProfile_7 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionRulesProfile_7), value);
	}

	inline static int32_t get_offset_of_pointerProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___pointerProfile_8)); }
	inline MixedRealityPointerProfile_t8995DE1BCF98C3896B28AF17C395B4DA181FD2C9 * get_pointerProfile_8() const { return ___pointerProfile_8; }
	inline MixedRealityPointerProfile_t8995DE1BCF98C3896B28AF17C395B4DA181FD2C9 ** get_address_of_pointerProfile_8() { return &___pointerProfile_8; }
	inline void set_pointerProfile_8(MixedRealityPointerProfile_t8995DE1BCF98C3896B28AF17C395B4DA181FD2C9 * value)
	{
		___pointerProfile_8 = value;
		Il2CppCodeGenWriteBarrier((&___pointerProfile_8), value);
	}

	inline static int32_t get_offset_of_gesturesProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___gesturesProfile_9)); }
	inline MixedRealityGesturesProfile_tE4379C8B0285C3CDA91E959C10CBF579AEEAF407 * get_gesturesProfile_9() const { return ___gesturesProfile_9; }
	inline MixedRealityGesturesProfile_tE4379C8B0285C3CDA91E959C10CBF579AEEAF407 ** get_address_of_gesturesProfile_9() { return &___gesturesProfile_9; }
	inline void set_gesturesProfile_9(MixedRealityGesturesProfile_tE4379C8B0285C3CDA91E959C10CBF579AEEAF407 * value)
	{
		___gesturesProfile_9 = value;
		Il2CppCodeGenWriteBarrier((&___gesturesProfile_9), value);
	}

	inline static int32_t get_offset_of_speechSystem_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___speechSystem_10)); }
	inline RuntimeObject* get_speechSystem_10() const { return ___speechSystem_10; }
	inline RuntimeObject** get_address_of_speechSystem_10() { return &___speechSystem_10; }
	inline void set_speechSystem_10(RuntimeObject* value)
	{
		___speechSystem_10 = value;
		Il2CppCodeGenWriteBarrier((&___speechSystem_10), value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___speechCommandsProfile_11)); }
	inline MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * get_speechCommandsProfile_11() const { return ___speechCommandsProfile_11; }
	inline MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 ** get_address_of_speechCommandsProfile_11() { return &___speechCommandsProfile_11; }
	inline void set_speechCommandsProfile_11(MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * value)
	{
		___speechCommandsProfile_11 = value;
		Il2CppCodeGenWriteBarrier((&___speechCommandsProfile_11), value);
	}

	inline static int32_t get_offset_of_dictationSystem_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___dictationSystem_12)); }
	inline RuntimeObject* get_dictationSystem_12() const { return ___dictationSystem_12; }
	inline RuntimeObject** get_address_of_dictationSystem_12() { return &___dictationSystem_12; }
	inline void set_dictationSystem_12(RuntimeObject* value)
	{
		___dictationSystem_12 = value;
		Il2CppCodeGenWriteBarrier((&___dictationSystem_12), value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___enableControllerMapping_13)); }
	inline bool get_enableControllerMapping_13() const { return ___enableControllerMapping_13; }
	inline bool* get_address_of_enableControllerMapping_13() { return &___enableControllerMapping_13; }
	inline void set_enableControllerMapping_13(bool value)
	{
		___enableControllerMapping_13 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___controllerMappingProfile_14)); }
	inline MixedRealityControllerMappingProfile_t7AA6AADFF135F5FADDED47D840F8A70B6254F212 * get_controllerMappingProfile_14() const { return ___controllerMappingProfile_14; }
	inline MixedRealityControllerMappingProfile_t7AA6AADFF135F5FADDED47D840F8A70B6254F212 ** get_address_of_controllerMappingProfile_14() { return &___controllerMappingProfile_14; }
	inline void set_controllerMappingProfile_14(MixedRealityControllerMappingProfile_t7AA6AADFF135F5FADDED47D840F8A70B6254F212 * value)
	{
		___controllerMappingProfile_14 = value;
		Il2CppCodeGenWriteBarrier((&___controllerMappingProfile_14), value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09, ___controllerVisualizationProfile_15)); }
	inline MixedRealityControllerVisualizationProfile_tBB05E695676AFEEAD0949B3EC1159F6B1894D968 * get_controllerVisualizationProfile_15() const { return ___controllerVisualizationProfile_15; }
	inline MixedRealityControllerVisualizationProfile_tBB05E695676AFEEAD0949B3EC1159F6B1894D968 ** get_address_of_controllerVisualizationProfile_15() { return &___controllerVisualizationProfile_15; }
	inline void set_controllerVisualizationProfile_15(MixedRealityControllerVisualizationProfile_tBB05E695676AFEEAD0949B3EC1159F6B1894D968 * value)
	{
		___controllerVisualizationProfile_15 = value;
		Il2CppCodeGenWriteBarrier((&___controllerVisualizationProfile_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTSYSTEMPROFILE_TA212A9C49D4B1609CD1841D77C24E8237E7C3A09_H
#ifndef MIXEDREALITYSPEECHCOMMANDSPROFILE_T287599A0A4D68376540CCB18CF77CD944F6ECA86_H
#define MIXEDREALITYSPEECHCOMMANDSPROFILE_T287599A0A4D68376540CCB18CF77CD944F6ECA86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile
struct  MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::startBehavior
	int32_t ___startBehavior_5;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_6;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::speechCommands
	SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* ___speechCommands_7;

public:
	inline static int32_t get_offset_of_startBehavior_5() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86, ___startBehavior_5)); }
	inline int32_t get_startBehavior_5() const { return ___startBehavior_5; }
	inline int32_t* get_address_of_startBehavior_5() { return &___startBehavior_5; }
	inline void set_startBehavior_5(int32_t value)
	{
		___startBehavior_5 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_6() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86, ___recognitionConfidenceLevel_6)); }
	inline int32_t get_recognitionConfidenceLevel_6() const { return ___recognitionConfidenceLevel_6; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_6() { return &___recognitionConfidenceLevel_6; }
	inline void set_recognitionConfidenceLevel_6(int32_t value)
	{
		___recognitionConfidenceLevel_6 = value;
	}

	inline static int32_t get_offset_of_speechCommands_7() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86, ___speechCommands_7)); }
	inline SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* get_speechCommands_7() const { return ___speechCommands_7; }
	inline SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD** get_address_of_speechCommands_7() { return &___speechCommands_7; }
	inline void set_speechCommands_7(SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* value)
	{
		___speechCommands_7 = value;
		Il2CppCodeGenWriteBarrier((&___speechCommands_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPEECHCOMMANDSPROFILE_T287599A0A4D68376540CCB18CF77CD944F6ECA86_H
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
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[]
struct SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D  m_Items[1];

public:
	inline SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D  value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mF4840CBEA02A7A92168A3D5FDC0388EF5F949F4A_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m8F15F9DE365B2BE29FB80040EE78B122DA5F38B5_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m22569951A0E26B8781141AD3B28C84AE54E68E7B_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject ** p0, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mC8DFE9892999295C7918997284285115C54A6B74_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mA56A2A5A1F9547B50D8AB137AAE22D3D81CABA27_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject ** p0, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Providers.BaseDeviceManager::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void BaseDeviceManager__ctor_mFEFF704D72D37767AEADCFFCF5F6810852C9D56B (BaseDeviceManager_tCA1AA0452BE52BB016E6D46078CD49279635567A * __this, String_t* p0, uint32_t p1, BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::get_IsListening()
extern "C" IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_mBA304414234490736B7153B3AA5D829E06309071 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mB027FFDC6A4B56C773104B9E9E62D5DEAB5B021E (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mF4840CBEA02A7A92168A3D5FDC0388EF5F949F4A_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
extern "C" IL2CPP_METHOD_ATTR void Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F (String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA18AA4F3371C2E89708A787CFBEB8E26FF467077 (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StopRecordingAsync()
extern "C" IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986 (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  (*) (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444 (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_mE9EE5308261DD57C513425C1D2EC01B2568C93C9 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * p0, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m8F15F9DE365B2BE29FB80040EE78B122DA5F38B5_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980 (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<Disable>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_SetStateMachine_m5E695935D3702C6D112999216907280DD280D3D1 (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_m2AF9148943C7CB5E0C1C030D430A2A4B8F275E5E (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecording>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_SetStateMachine_mD53901A136FFB9FCC1402BE01DA13BBE6C0686CC (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::set_IsListening(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m06F8DDB4C342B0A295C9D34FC2D3019855896585 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80 (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 ** p0, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **, U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m22569951A0E26B8781141AD3B28C84AE54E68E7B_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54 (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B (String_t* p0, int32_t* p1, int32_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047 (String_t* p0, bool p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StartRecordingAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_mAB13CA5855BB5403E987883EE82154D876F9B10B (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_m57B4916B6E50FB738ECD19A5B892DC76B083A1DC (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * p0, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mC8DFE9892999295C7918997284285115C54A6B74_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecording>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_SetStateMachine_mFF18F0BBC1724893A9E6CF808B96A47FCB1D05A0 (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 ** p0, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **, U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mA56A2A5A1F9547B50D8AB137AAE22D3D81CABA27_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider/<StopRecordingAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_InputSystemProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mF8B26BB7C783822E17D6558E43A17CF9509C9E75 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile::get_SpeechCommandsProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m04A0F01B90D7D93F41F1AA11C4BB9DCCD15CF336 (MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::get_SpeechCommands()
extern "C" IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* MixedRealitySpeechCommandsProfile_get_SpeechCommands_m06A85F20DA79BDCD0C4DF83E546CA8C926392A52 (MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
extern "C" IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::get_Commands()
extern "C" IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D (const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::get_Keyword()
extern "C" IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_m17CC90E3DDCBBAD31CC60B02C23AE3B7D72E9478 (SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::get_SpeechRecognitionConfidenceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m88A9FEB2B8166576A6E2A96A879BF4793B9147E1 (MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mAF2B27D3B437858A1AE82D1F31AD3C907761FBFE (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mBB2900040A1095B9AD860AFE333FDB61989B0A9F (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56 (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealitySpeechCommandsProfile::get_SpeechRecognizerStartBehavior()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mC2E66606C5C90289F2CEC6D2BDA45E84AD47FF2A (MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::StartRecognition()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_mFAA0EE7F4FD73986AE83D1EB639A3E3F2838D886 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::get_KeyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_mB397B64DC2B339F0303B820643BAB2820B3F8DC0 (SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::StopRecognition()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_m9F6FE42CA18F50FAA804F61DB59F119C3049EDEA (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands::get_Action()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  SpeechCommands_get_Action_m38E9571E8C09D42B2453D4CA45C12DC690523DB5 (SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared)(__this, method);
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
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m0DC0F73CA77FB7E602F1753F6574BAE6548BF20F (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider__ctor_m0DC0F73CA77FB7E602F1753F6574BAE6548BF20F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B2_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B2_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B1_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B1_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B4_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B4_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B3_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B3_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B6_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B6_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B5_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B5_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B8_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B8_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B7_0 = NULL;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * G_B7_1 = NULL;
	{
		// private string deviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_deviceName_12(L_0);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_1 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * L_3 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_0_m13459EFDEEF75D9D51E4B8EE77672338E8E93E91_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_5 = L_4;
		((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_6 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_6, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_waitUntilPhraseRecognitionSystemHasStarted_17(L_6);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_7 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * L_9 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_10 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_1_mC06B1AB569E07CA7F54938CE31B76B1DB0673C5E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_11 = L_10;
		((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0055:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_12 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_12, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		G_B4_1->set_waitUntilPhraseRecognitionSystemHasStopped_18(L_12);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_13 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_2_3();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = __this;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = __this;
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * L_15 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_16 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_2_m98F05A3A58C36EE6320CB239A9E276C0D2447EBD_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_17 = L_16;
		((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_2_3(L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_007f:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_18 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_18, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_1);
		G_B6_1->set_waitUntilDictationRecognizerHasStarted_19(L_18);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_19 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_3_4();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00a9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * L_21 = ((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_22 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_3_mE302BF9E29116221398BE21C4B2A1AD0E5E933E3_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_23 = L_22;
		((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_3_4(L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00a9:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_24 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_24, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_waitUntilDictationRecognizerHasStopped_20(L_24);
		// public WindowsDictationInputProvider(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile) { }
		String_t* L_25 = ___name0;
		uint32_t L_26 = ___priority1;
		BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * L_27 = ___profile2;
		BaseDeviceManager__ctor_mFEFF704D72D37767AEADCFFCF5F6810852C9D56B(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
		// public WindowsDictationInputProvider(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::get_IsListening()
extern "C" IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::set_IsListening(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m06F8DDB4C342B0A295C9D34FC2D3019855896585 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::Enable()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Enable_mDFAC02B19F07D256487C384D51FAF6BF3C47B44A (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Enable_mDFAC02B19F07D256487C384D51FAF6BF3C47B44A_MetadataUsageId);
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
		// if (MixedRealityToolkit.InputSystem == null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogError($"Unable to start {Name}. An Input System is required for this feature.");
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String Microsoft.MixedReality.Toolkit.Core.Services.BaseService::get_Name() */, __this);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B, L_2, _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002a:
	{
		// inputSource = MixedRealityToolkit.InputSystem.RequestNewGenericInputSource(Name);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String Microsoft.MixedReality.Toolkit.Core.Services.BaseService::get_Name() */, __this);
		NullCheck(L_4);
		RuntimeObject* L_6 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A* >::Invoke(19 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[]) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_4, L_5, (IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A*)(IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A*)NULL);
		__this->set_inputSource_10(L_6);
		// dictationResult = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_14(L_7);
		// if (dictationRecognizer == null)
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_8 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		// dictationRecognizer = new DictationRecognizer();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_9 = (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)il2cpp_codegen_object_new(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var);
		DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED(L_9, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->set_dictationRecognizer_16(L_9);
	}

IL_005d:
	{
		// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_10 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_11 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
		DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_11, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196(L_10, L_11, /*hidden argument*/NULL);
		// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_12 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_13 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
		DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_13, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E(L_12, L_13, /*hidden argument*/NULL);
		// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_14 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_15 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
		DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_15, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10(L_14, L_15, /*hidden argument*/NULL);
		// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_16 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_17 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
		DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_17, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::Update()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Update_m9F1B499566060BAE726BA96D9BD8600755572AE9 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Update_m9F1B499566060BAE726BA96D9BD8600755572AE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying || MixedRealityToolkit.InputSystem == null) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}

IL_000e:
	{
		// if (!Application.isPlaying || MixedRealityToolkit.InputSystem == null) { return; }
		return;
	}

IL_000f:
	{
		// if (!isTransitioning && IsListening && !Microphone.IsRecording(deviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
		bool L_2 = __this->get_isTransitioning_9();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		bool L_3 = WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = __this->get_deviceName_12();
		bool L_5 = Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_6 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		NullCheck(L_6);
		int32_t L_7 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// StopRecording();
		WindowsDictationInputProvider_StopRecording_mBA304414234490736B7153B3AA5D829E06309071(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
		bool L_8 = __this->get_hasFailed_7();
		if (L_8)
		{
			goto IL_0071;
		}
	}
	{
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_9 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		NullCheck(L_9);
		int32_t L_10 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		// hasFailed = true;
		__this->set_hasFailed_7((bool)1);
		// MixedRealityToolkit.InputSystem.RaiseDictationError(inputSource, "Dictation recognizer has failed!");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_12 = __this->get_inputSource_10();
		NullCheck(L_11);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(69 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_11, L_12, _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::Disable()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Disable_mF125D313FDD7D0C24159FCD32126FE3EEDD2BA94 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Disable_mF125D313FDD7D0C24159FCD32126FE3EEDD2BA94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_m92262CD5E4F1B9EB42D789821222F98AB1498063_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::Destroy()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Destroy_mDC3588A4C413D8F853534C380913B1BA55BD6653 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Destroy_mDC3588A4C413D8F853534C380913B1BA55BD6653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B3_0 = NULL;
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B2_0 = NULL;
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// dictationRecognizer?.Dispose();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_1 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7(G_B3_0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StartRecording_m0D79DE400A4D82CD658FA4883A04988C591BD090 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecording_m0D79DE400A4D82CD658FA4883A04988C591BD090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_4(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_5(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_6(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_7(L_4);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_5 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60  L_6 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m183C9BBB722BCA765211708FEC1B557184A53601_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_m2AF9148943C7CB5E0C1C030D430A2A4B8F275E5E (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecordingAsync_m2AF9148943C7CB5E0C1C030D430A2A4B8F275E5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_5(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_6(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_7(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_4(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_5 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087  L_6 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m6BE94C5B0913DF6711FF4BA79666A5CA70095233_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_8 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_9 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_mBA304414234490736B7153B3AA5D829E06309071 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecording_mBA304414234490736B7153B3AA5D829E06309071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_mBAD37646A55EE5669F059DFC09E51044702BDA88_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::StopRecordingAsync()
extern "C" IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_0 = AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mB027FFDC6A4B56C773104B9E9E62D5DEAB5B021E((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)(&V_1), (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_mB027FFDC6A4B56C773104B9E9E62D5DEAB5B021E_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_4 = AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::DictationRecognizer_DictationHypothesis(System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dictationResult = $"{textSoFar} {text}...";
		StringBuilder_t * L_0 = __this->get_textSoFar_11();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6, L_0, L_1, /*hidden argument*/NULL);
		__this->set_dictationResult_14(L_2);
		// MixedRealityToolkit.InputSystem.RaiseDictationHypothesis(inputSource, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_4 = __this->get_inputSource_10();
		String_t* L_5 = __this->get_dictationResult_14();
		NullCheck(L_3);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(66 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_3, L_4, L_5, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textSoFar.Append($"{text}. ");
		StringBuilder_t * L_0 = __this->get_textSoFar_11();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_0, L_2, /*hidden argument*/NULL);
		// dictationResult = textSoFar.ToString();
		StringBuilder_t * L_3 = __this->get_textSoFar_11();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->set_dictationResult_14(L_4);
		// MixedRealityToolkit.InputSystem.RaiseDictationResult(inputSource, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_6 = __this->get_inputSource_10();
		String_t* L_7 = __this->get_dictationResult_14();
		NullCheck(L_5);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(67 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_5, L_6, L_7, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cause == DictationCompletionCause.TimeoutExceeded)
		int32_t L_0 = ___cause0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}
	{
		// Microphone.End(deviceName);
		String_t* L_1 = __this->get_deviceName_12();
		Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_1, /*hidden argument*/NULL);
		// dictationResult = "Dictation has timed out. Please try again.";
		__this->set_dictationResult_14(_stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311);
	}

IL_001a:
	{
		// MixedRealityToolkit.InputSystem.RaiseDictationComplete(inputSource, dictationResult, dictationAudioClip);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_inputSource_10();
		String_t* L_4 = __this->get_dictationResult_14();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_dictationAudioClip_15();
		NullCheck(L_2);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(68 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// textSoFar = null;
		__this->set_textSoFar_11((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_14(L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider::DictationRecognizer_DictationError(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630 (WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dictationResult = $"{error}\nHRESULT: {hresult}";
		String_t* L_0 = ___error0;
		int32_t L_1 = ___hresult1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3, L_0, L_3, /*hidden argument*/NULL);
		__this->set_dictationResult_14(L_4);
		// MixedRealityToolkit.InputSystem.RaiseDictationError(inputSource, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_6 = __this->get_inputSource_10();
		String_t* L_7 = __this->get_dictationResult_14();
		NullCheck(L_5);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(69 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_5, L_6, L_7, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// textSoFar = null;
		__this->set_textSoFar_11((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_14(L_8);
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
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8EB91CEF2DC9660F40D4D2EF877259D5697174A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m8EB91CEF2DC9660F40D4D2EF877259D5697174A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * L_0 = (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 *)il2cpp_codegen_object_new(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA18AA4F3371C2E89708A787CFBEB8E26FF467077(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA18AA4F3371C2E89708A787CFBEB8E26FF467077 (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<.ctor>b__0_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_0_m13459EFDEEF75D9D51E4B8EE77672338E8E93E91 (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<.ctor>b__0_1()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_1_mC06B1AB569E07CA7F54938CE31B76B1DB0673C5E (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<.ctor>b__0_2()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_2_m98F05A3A58C36EE6320CB239A9E276C0D2447EBD (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__0_2_m98F05A3A58C36EE6320CB239A9E276C0D2447EBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<>c::<.ctor>b__0_3()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_3_mE302BF9E29116221398BE21C4B2A1AD0E5E933E3 (U3CU3Ec_t35EB3FDE209E847FE371028E5AA6ECC2DB5B1FC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__0_3_mE302BF9E29116221398BE21C4B2A1AD0E5E933E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980 (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * V_1 = NULL;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d;
			}
		}

IL_0011:
		{
			// if (Application.isPlaying && dictationRecognizer != null)
			bool L_3 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_00e9;
			}
		}

IL_001b:
		{
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_4 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			if (!L_4)
			{
				goto IL_00e9;
			}
		}

IL_0025:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->get_isTransitioning_9();
			if (L_6)
			{
				goto IL_0091;
			}
		}

IL_002d:
		{
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0091;
			}
		}

IL_0035:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_9 = V_1;
			NullCheck(L_9);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_10 = WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_11 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_10, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0089;
			}
		}

IL_004a:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_mE9EE5308261DD57C513425C1D2EC01B2568C93C9((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA_mE9EE5308261DD57C513425C1D2EC01B2568C93C9_RuntimeMethod_var);
			goto IL_0115;
		}

IL_006d:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = L_16;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0089:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
		}

IL_0091:
		{
			// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_19 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_20 = V_1;
			DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_21 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_21, L_20, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_m64041F47D98FF813E6FB2B37A7DFDC808924C540_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_19);
			DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816(L_19, L_21, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_22 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_23 = V_1;
			DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_24 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_24, L_23, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m63A7B3EA38E7D1167B546284F00C1B0C600A245B_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_22);
			DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6(L_22, L_24, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_25 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_26 = V_1;
			DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_27 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_27, L_26, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_m7A8FB39D6B47DFE8D7B118850F33C3B2510B671A_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_25);
			DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F(L_25, L_27, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_28 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_29 = V_1;
			DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_30 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_30, L_29, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m76FF82CAF464011ACF68575D3EFF3FEE32359630_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_28);
			DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3(L_28, L_30, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			goto IL_0102;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00eb;
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_32 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_31, L_32, /*hidden argument*/NULL);
		goto IL_0115;
	} // end catch (depth: 1)

IL_0102:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_33, /*hidden argument*/NULL);
	}

IL_0115:
	{
		return;
	}
}
extern "C"  void U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *>(__this + 1);
	U3CDisableU3Ed__21_MoveNext_mD26BB6B683F2CE8BB7C41342FB82A29B0D8B5980(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<Disable>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_SetStateMachine_m5E695935D3702C6D112999216907280DD280D3D1 (U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CDisableU3Ed__21_SetStateMachine_m5E695935D3702C6D112999216907280DD280D3D1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__21_t8812B93461D3021E04B9DB3A34961745C8F54DCA *>(__this + 1);
	U3CDisableU3Ed__21_SetStateMachine_m5E695935D3702C6D112999216907280DD280D3D1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0064;
			}
		}

IL_0011:
		{
			// await StartRecordingAsync(listener, initialSilenceTimeout, autoSilenceTimeout, recordingTime, micDeviceName);
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_3 = V_1;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_listener_3();
			float L_5 = __this->get_initialSilenceTimeout_4();
			float L_6 = __this->get_autoSilenceTimeout_5();
			int32_t L_7 = __this->get_recordingTime_6();
			String_t* L_8 = __this->get_micDeviceName_7();
			NullCheck(L_3);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_9 = WindowsDictationInputProvider_StartRecordingAsync_m2AF9148943C7CB5E0C1C030D430A2A4B8F275E5E(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0080;
			}
		}

IL_0044:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = V_2;
			__this->set_U3CU3Eu__1_8(L_13);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60_m0F29FB5BB1B9F7B94E5535EA152197BBAC316FA8_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0064:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_15 = __this->get_U3CU3Eu__1_8();
			V_2 = L_15;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_16 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0080:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b3;
	} // end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_20, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
extern "C"  void U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *>(__this + 1);
	U3CStartRecordingU3Ed__23_MoveNext_m6C65B1C9B1A844855D20DA3661AB6F5733D477FE(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecording>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_SetStateMachine_mD53901A136FFB9FCC1402BE01DA13BBE6C0686CC (U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStartRecordingU3Ed__23_SetStateMachine_mD53901A136FFB9FCC1402BE01DA13BBE6C0686CC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__23_tE8D27714A4FB0A3498B271F841A27B710E17CE60 *>(__this + 1);
	U3CStartRecordingU3Ed__23_SetStateMachine_mD53901A136FFB9FCC1402BE01DA13BBE6C0686CC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * V_1 = NULL;
	int32_t V_2 = 0;
	SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c6;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0168;
			}
		}

IL_001b:
		{
			// if (IsListening || isTransitioning || MixedRealityToolkit.InputSystem == null || !Application.isPlaying)
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0039;
			}
		}

IL_0023:
		{
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_isTransitioning_9();
			if (L_7)
			{
				goto IL_0039;
			}
		}

IL_002b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_8 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0039;
			}
		}

IL_0032:
		{
			bool L_9 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0048;
			}
		}

IL_0039:
		{
			// Debug.LogWarning("Unable to start recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E, /*hidden argument*/NULL);
			// return;
			goto IL_01fa;
		}

IL_0048:
		{
			// hasFailed = false;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_10 = V_1;
			NullCheck(L_10);
			L_10->set_hasFailed_7((bool)0);
			// IsListening = true;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_11 = V_1;
			NullCheck(L_11);
			WindowsDictationInputProvider_set_IsListening_m06F8DDB4C342B0A295C9D34FC2D3019855896585(L_11, (bool)1, /*hidden argument*/NULL);
			// isTransitioning = true;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_12 = V_1;
			NullCheck(L_12);
			L_12->set_isTransitioning_9((bool)1);
			// if (listener != null)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_listener_3();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0082;
			}
		}

IL_006b:
		{
			// hasListener = true;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_15 = V_1;
			NullCheck(L_15);
			L_15->set_hasListener_8((bool)1);
			// MixedRealityToolkit.InputSystem.PushModalInputHandler(listener);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_16 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_listener_3();
			NullCheck(L_16);
			InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_16, L_17);
		}

IL_0082:
		{
			// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
			int32_t L_18 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)1))))
			{
				goto IL_008f;
			}
		}

IL_008a:
		{
			// PhraseRecognitionSystem.Shutdown();
			PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC(/*hidden argument*/NULL);
		}

IL_008f:
		{
			// await waitUntilPhraseRecognitionSystemHasStopped;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_19 = V_1;
			NullCheck(L_19);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_20 = L_19->get_waitUntilPhraseRecognitionSystemHasStopped_18();
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_21 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_20, /*hidden argument*/NULL);
			V_3 = L_21;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_22 = V_3;
			NullCheck(L_22);
			bool L_23 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_22, /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_00e2;
			}
		}

IL_00a3:
		{
			int32_t L_24 = 0;
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_25 = V_3;
			__this->set_U3CU3Eu__1_8(L_25);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_26, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_3), (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB_RuntimeMethod_var);
			goto IL_020d;
		}

IL_00c6:
		{
			RuntimeObject * L_27 = __this->get_U3CU3Eu__1_8();
			V_3 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_27, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_8(NULL);
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
		}

IL_00e2:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_29 = V_3;
			NullCheck(L_29);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_29, /*hidden argument*/NULL);
			// deviceName = micDeviceName;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_30 = V_1;
			String_t* L_31 = __this->get_micDeviceName_4();
			NullCheck(L_30);
			L_30->set_deviceName_12(L_31);
			// Microphone.GetDeviceCaps(deviceName, out minSamplingRate, out samplingRate);
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_32 = V_1;
			NullCheck(L_32);
			String_t* L_33 = L_32->get_deviceName_12();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_34 = V_1;
			NullCheck(L_34);
			int32_t* L_35 = L_34->get_address_of_samplingRate_13();
			Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B(L_33, (int32_t*)(&V_2), (int32_t*)L_35, /*hidden argument*/NULL);
			// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_36 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			float L_37 = __this->get_initialSilenceTimeout_5();
			NullCheck(L_36);
			DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06(L_36, L_37, /*hidden argument*/NULL);
			// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_38 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			float L_39 = __this->get_autoSilenceTimeout_6();
			NullCheck(L_38);
			DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9(L_38, L_39, /*hidden argument*/NULL);
			// dictationRecognizer.Start();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_40 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			NullCheck(L_40);
			DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536(L_40, /*hidden argument*/NULL);
			// await waitUntilDictationRecognizerHasStarted;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_41 = V_1;
			NullCheck(L_41);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_42 = L_41->get_waitUntilDictationRecognizerHasStarted_19();
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_43 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_42, /*hidden argument*/NULL);
			V_3 = L_43;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_44 = V_3;
			NullCheck(L_44);
			bool L_45 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_44, /*hidden argument*/NULL);
			if (L_45)
			{
				goto IL_0184;
			}
		}

IL_0145:
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->set_U3CU3E1__state_0(L_46);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_47 = V_3;
			__this->set_U3CU3Eu__1_8(L_47);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_48 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_48, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_3), (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087_m50E3CB56453FBD0180820C09CCD587A8153329BB_RuntimeMethod_var);
			goto IL_020d;
		}

IL_0168:
		{
			RuntimeObject * L_49 = __this->get_U3CU3Eu__1_8();
			V_3 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_49, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_8(NULL);
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->set_U3CU3E1__state_0(L_50);
		}

IL_0184:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_51 = V_3;
			NullCheck(L_51);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_51, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_52 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			NullCheck(L_52);
			int32_t L_53 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_52, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_53) == ((uint32_t)2))))
			{
				goto IL_01af;
			}
		}

IL_0197:
		{
			// MixedRealityToolkit.InputSystem.RaiseDictationError(inputSource, "Dictation recognizer failed to start!");
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_54 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_55 = V_1;
			NullCheck(L_55);
			RuntimeObject* L_56 = L_55->get_inputSource_10();
			NullCheck(L_54);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(69 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_54, L_56, _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
			// return;
			goto IL_01fa;
		}

IL_01af:
		{
			// dictationAudioClip = Microphone.Start(deviceName, false, recordingTime, samplingRate);
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_57 = V_1;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_58 = V_1;
			NullCheck(L_58);
			String_t* L_59 = L_58->get_deviceName_12();
			int32_t L_60 = __this->get_recordingTime_7();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_61 = V_1;
			NullCheck(L_61);
			int32_t L_62 = L_61->get_samplingRate_13();
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_63 = Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047(L_59, (bool)0, L_60, L_62, /*hidden argument*/NULL);
			NullCheck(L_57);
			L_57->set_dictationAudioClip_15(L_63);
			// textSoFar = new StringBuilder();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_64 = V_1;
			StringBuilder_t * L_65 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_65, /*hidden argument*/NULL);
			NullCheck(L_64);
			L_64->set_textSoFar_11(L_65);
			// isTransitioning = false;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_66 = V_1;
			NullCheck(L_66);
			L_66->set_isTransitioning_9((bool)0);
			goto IL_01fa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01e1;
		throw e;
	}

CATCH_01e1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_67 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_68 = V_4;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_67, L_68, /*hidden argument*/NULL);
		goto IL_020d;
	} // end catch (depth: 1)

IL_01fa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_69, /*hidden argument*/NULL);
	}

IL_020d:
	{
		return;
	}
}
extern "C"  void U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__24_MoveNext_mAFDD73D175F70532C68F343E61F52219329D053C(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StartRecordingAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_mAB13CA5855BB5403E987883EE82154D876F9B10B (U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_mAB13CA5855BB5403E987883EE82154D876F9B10B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__24_t522E9B0B7F871C553635C8A36875D388D8B2E087 *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__24_SetStateMachine_mAB13CA5855BB5403E987883EE82154D876F9B10B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * V_1 = NULL;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046;
			}
		}

IL_0011:
		{
			// await StopRecordingAsync();
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_3 = V_1;
			NullCheck(L_3);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_4 = WindowsDictationInputProvider_StopRecordingAsync_m83F5DFB7D426A3C3D718B88A3EE6FE805D843AD1(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_5 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_4, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0062;
			}
		}

IL_0026:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_m57B4916B6E50FB738ECD19A5B892DC76B083A1DC((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_9, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB_m57B4916B6E50FB738ECD19A5B892DC76B083A1DC_RuntimeMethod_var);
			goto IL_0096;
		}

IL_0046:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0062:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
			goto IL_0083;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006c;
		throw e;
	}

CATCH_006c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, L_14, /*hidden argument*/NULL);
		goto IL_0096;
	} // end catch (depth: 1)

IL_0083:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, /*hidden argument*/NULL);
	}

IL_0096:
	{
		return;
	}
}
extern "C"  void U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *>(__this + 1);
	U3CStopRecordingU3Ed__25_MoveNext_mF2DA7A5AB7B03690DC089B2F59CC74892A243B9B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecording>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_SetStateMachine_mFF18F0BBC1724893A9E6CF808B96A47FCB1D05A0 (U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStopRecordingU3Ed__25_SetStateMachine_mFF18F0BBC1724893A9E6CF808B96A47FCB1D05A0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__25_t20430984B101197BB9B502B92D538D9F60E7B7DB *>(__this + 1);
	U3CStopRecordingU3Ed__25_SetStateMachine_mFF18F0BBC1724893A9E6CF808B96A47FCB1D05A0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * V_1 = NULL;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_2 = NULL;
	SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c3;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_011e;
			}
		}

IL_001b:
		{
			// if (!IsListening || isTransitioning || !Application.isPlaying)
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = WindowsDictationInputProvider_get_IsListening_mC8DDC275FEA9E603133DDBF3245C2AB4731C5485(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_0023:
		{
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_isTransitioning_9();
			if (L_7)
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			bool L_8 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_0032:
		{
			// Debug.LogWarning("Unable to stop recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6, /*hidden argument*/NULL);
			// return null;
			V_2 = (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL;
			goto IL_0169;
		}

IL_0043:
		{
			// IsListening = false;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_9 = V_1;
			NullCheck(L_9);
			WindowsDictationInputProvider_set_IsListening_m06F8DDB4C342B0A295C9D34FC2D3019855896585(L_9, (bool)0, /*hidden argument*/NULL);
			// isTransitioning = true;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_10 = V_1;
			NullCheck(L_10);
			L_10->set_isTransitioning_9((bool)1);
			// if (hasListener)
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = L_11->get_hasListener_8();
			if (!L_12)
			{
				goto IL_006a;
			}
		}

IL_0059:
		{
			// MixedRealityToolkit.InputSystem.PopModalInputHandler();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_13 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_13);
			// hasListener = false;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_14 = V_1;
			NullCheck(L_14);
			L_14->set_hasListener_8((bool)0);
		}

IL_006a:
		{
			// Microphone.End(deviceName);
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = L_15->get_deviceName_12();
			Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_16, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_17 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			NullCheck(L_17);
			int32_t L_18 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)1))))
			{
				goto IL_008c;
			}
		}

IL_0082:
		{
			// dictationRecognizer.Stop();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_19 = ((WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D_il2cpp_TypeInfo_var))->get_dictationRecognizer_16();
			NullCheck(L_19);
			DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E(L_19, /*hidden argument*/NULL);
		}

IL_008c:
		{
			// await waitUntilDictationRecognizerHasStopped;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_20 = V_1;
			NullCheck(L_20);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_21 = L_20->get_waitUntilDictationRecognizerHasStopped_20();
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_22 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_21, /*hidden argument*/NULL);
			V_3 = L_22;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_23 = V_3;
			NullCheck(L_23);
			bool L_24 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_23, /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_00df;
			}
		}

IL_00a0:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_26 = V_3;
			__this->set_U3CU3Eu__1_3(L_26);
			AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_27, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_3), (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357_RuntimeMethod_var);
			goto IL_017d;
		}

IL_00c3:
		{
			RuntimeObject * L_28 = __this->get_U3CU3Eu__1_3();
			V_3 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_28, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->set_U3CU3E1__state_0(L_29);
		}

IL_00df:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_30 = V_3;
			NullCheck(L_30);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_30, /*hidden argument*/NULL);
			// PhraseRecognitionSystem.Restart();
			PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F(/*hidden argument*/NULL);
			// await waitUntilPhraseRecognitionSystemHasStarted;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_31 = V_1;
			NullCheck(L_31);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_32 = L_31->get_waitUntilPhraseRecognitionSystemHasStarted_17();
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_33 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_32, /*hidden argument*/NULL);
			V_3 = L_33;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_34 = V_3;
			NullCheck(L_34);
			bool L_35 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_013a;
			}
		}

IL_00fe:
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			__this->set_U3CU3E1__state_0(L_36);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_37 = V_3;
			__this->set_U3CU3Eu__1_3(L_37);
			AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_38, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_3), (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3_m11F1FCD432C2AB6BC158478C15B3A84A672D7357_RuntimeMethod_var);
			goto IL_017d;
		}

IL_011e:
		{
			RuntimeObject * L_39 = __this->get_U3CU3Eu__1_3();
			V_3 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_39, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->set_U3CU3E1__state_0(L_40);
		}

IL_013a:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_41 = V_3;
			NullCheck(L_41);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_41, /*hidden argument*/NULL);
			// isTransitioning = false;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_42 = V_1;
			NullCheck(L_42);
			L_42->set_isTransitioning_9((bool)0);
			// return dictationAudioClip;
			WindowsDictationInputProvider_t242BD264C67E963BD35F15A37496B1C9C1F9E80D * L_43 = V_1;
			NullCheck(L_43);
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_44 = L_43->get_dictationAudioClip_15();
			V_2 = L_44;
			goto IL_0169;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0150;
		throw e;
	}

CATCH_0150:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_45, L_46, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var);
		goto IL_017d;
	} // end catch (depth: 1)

IL_0169:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_48 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_47, L_48, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var);
	}

IL_017d:
	{
		return;
	}
}
extern "C"  void U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__26_MoveNext_m9DB3EB29A4993DE06E55206EDE9E981A16E735FD(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsDictationInputProvider_<StopRecordingAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B (U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__26_t6F5AFC52AA890F15E7B4346C45B0A911B613F1B3 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__26_SetStateMachine_mF6653BF63C44C58DA31EB7747602B4058216FE5B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m6579661042383ECD537169AD9FEF07C5525EB7B3 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * ___profile2, const RuntimeMethod* method)
{
	{
		// public WindowsSpeechInputProvider(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile) { }
		String_t* L_0 = ___name0;
		uint32_t L_1 = ___priority1;
		BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB * L_2 = ___profile2;
		BaseDeviceManager__ctor_mFEFF704D72D37767AEADCFFCF5F6810852C9D56B(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// public WindowsSpeechInputProvider(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::get_Commands()
extern "C" IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static SpeechCommands[] Commands => MixedRealityToolkit.Instance.ActiveProfile.InputSystemProfile.SpeechCommandsProfile.SpeechCommands;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_0 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_1 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * L_2 = MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mF8B26BB7C783822E17D6558E43A17CF9509C9E75(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * L_3 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m04A0F01B90D7D93F41F1AA11C4BB9DCCD15CF336(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_4 = MixedRealitySpeechCommandsProfile_get_SpeechCommands_m06A85F20DA79BDCD0C4DF83E546CA8C926392A52(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::get_IsRecognitionActive()
extern "C" IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_get_IsRecognitionActive_m84B72E8BDD3AD970C0A7F6FE9866A2110A42BCF2 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	{
		// get { return keywordRecognizer != null && keywordRecognizer.IsRunning; }
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mBB2900040A1095B9AD860AFE333FDB61989B0A9F (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mAF2B27D3B437858A1AE82D1F31AD3C907761FBFE (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::Enable()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Enable_mB7AD437D352B89C6C638977F2EC7C2AB22D7865B (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Enable_mB7AD437D352B89C6C638977F2EC7C2AB22D7865B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* G_B5_0 = NULL;
	WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * G_B4_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * G_B6_1 = NULL;
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_1 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		return;
	}

IL_0010:
	{
		// InputSource = MixedRealityToolkit.InputSystem?.RequestNewGenericInputSource("Windows Speech Input Source");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		G_B4_1 = __this;
		if (L_3)
		{
			G_B5_0 = L_3;
			G_B5_1 = __this;
			goto IL_001d;
		}
	}
	{
		G_B6_0 = ((RuntimeObject*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0028;
	}

IL_001d:
	{
		NullCheck(G_B5_0);
		RuntimeObject* L_4 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A* >::Invoke(19 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[]) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, G_B5_0, _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0, (IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A*)(IMixedRealityPointerU5BU5D_tE306EA01D3578E6655F1D107FA698CCF3966150A*)NULL);
		G_B6_0 = L_4;
		G_B6_1 = G_B5_1;
	}

IL_0028:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_InputSource_6(G_B6_0);
		// var newKeywords = new string[Commands.Length];
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_5 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		NullCheck(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_0 = L_6;
		// for (int i = 0; i < Commands.Length; i++)
		V_1 = 0;
		goto IL_0055;
	}

IL_003e:
	{
		// newKeywords[i] = Commands[i].Keyword;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = V_0;
		int32_t L_8 = V_1;
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_9 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11 = SpeechCommands_get_Keyword_m17CC90E3DDCBBAD31CC60B02C23AE3B7D72E9478((SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)L_11);
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_13 = V_1;
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_14 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_003e;
		}
	}
	{
		// RecognitionConfidenceLevel = MixedRealityToolkit.Instance.ActiveProfile.InputSystemProfile.SpeechCommandsProfile.SpeechRecognitionConfidenceLevel;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_15 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_15);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_16 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * L_17 = MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mF8B26BB7C783822E17D6558E43A17CF9509C9E75(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * L_18 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m04A0F01B90D7D93F41F1AA11C4BB9DCCD15CF336(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m88A9FEB2B8166576A6E2A96A879BF4793B9147E1(L_18, /*hidden argument*/NULL);
		WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mAF2B27D3B437858A1AE82D1F31AD3C907761FBFE(__this, L_19, /*hidden argument*/NULL);
		// keywordRecognizer = new KeywordRecognizer(newKeywords, (ConfidenceLevel) RecognitionConfidenceLevel);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_0;
		int32_t L_21 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mBB2900040A1095B9AD860AFE333FDB61989B0A9F(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_22 = (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)il2cpp_codegen_object_new(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56(L_22, L_20, L_21, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_7(L_22);
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_23 = __this->get_keywordRecognizer_7();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_24 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_24, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m56E02C8576F35063C037B5E41F4211164FEEE88C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223(L_23, L_24, /*hidden argument*/NULL);
		// if (MixedRealityToolkit.Instance.ActiveProfile.InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_25 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_25);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_26 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * L_27 = MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mF8B26BB7C783822E17D6558E43A17CF9509C9E75(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		MixedRealitySpeechCommandsProfile_t287599A0A4D68376540CCB18CF77CD944F6ECA86 * L_28 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m04A0F01B90D7D93F41F1AA11C4BB9DCCD15CF336(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mC2E66606C5C90289F2CEC6D2BDA45E84AD47FF2A(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// StartRecognition();
		WindowsSpeechInputProvider_StartRecognition_mFAA0EE7F4FD73986AE83D1EB639A3E3F2838D886(__this, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::Update()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Update_m86E45325698DE1C055D1BFEEEC3EE4E6F33C4008 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Update_m86E45325698DE1C055D1BFEEEC3EE4E6F33C4008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// for (int i = 0; i < Commands.Length; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0019:
	{
		// if (Input.GetKeyDown(Commands[i].KeyCode))
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_3 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = SpeechCommands_get_KeyCode_mB397B64DC2B339F0303B820643BAB2820B3F8DC0((SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), /*hidden argument*/NULL);
		bool L_6 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// OnPhraseRecognized((ConfidenceLevel) RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.Now, Commands[i].Keyword);
		int32_t L_7 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mBB2900040A1095B9AD860AFE333FDB61989B0A9F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_8 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_9 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_10 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12 = SpeechCommands_get_Keyword_m17CC90E3DDCBBAD31CC60B02C23AE3B7D72E9478((SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307(__this, L_7, L_8, L_9, L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005a:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_14 = V_0;
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_15 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0019;
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::Disable()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Disable_m84BAF2CA4E7743E0B8AF0ED0A7193B185CBF3B17 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Disable_m84BAF2CA4E7743E0B8AF0ED0A7193B185CBF3B17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (keywordRecognizer != null)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// StopRecognition();
		WindowsSpeechInputProvider_StopRecognition_m9F6FE42CA18F50FAA804F61DB59F119C3049EDEA(__this, /*hidden argument*/NULL);
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_7();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_2 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_2, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m56E02C8576F35063C037B5E41F4211164FEEE88C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69(L_1, L_2, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A(L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::StartRecognition()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_mFAA0EE7F4FD73986AE83D1EB639A3E3F2838D886 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::StopRecognition()
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_m9F6FE42CA18F50FAA804F61DB59F119C3049EDEA (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m56E02C8576F35063C037B5E41F4211164FEEE88C (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.text);
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_2 = ___args0;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_4 = ___args0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_6 = ___args0;
		String_t* L_7 = L_6.get_text_2();
		WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Providers.WindowsVoiceInput.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307 (WindowsSpeechInputProvider_tC695AFE633BFC082BB007521B7721BF1AC3FF9EB * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_OnPhraseRecognized_mE4EB248408F8E6B923F3CAF77D97776EA36FA307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	{
		// for (int i = 0; i < Commands?.Length; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0004:
	{
		// if (Commands[i].Keyword == text)
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_0 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = SpeechCommands_get_Keyword_m17CC90E3DDCBBAD31CC60B02C23AE3B7D72E9478((SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), /*hidden argument*/NULL);
		String_t* L_3 = ___text3;
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// MixedRealityToolkit.InputSystem.RaiseSpeechCommandRecognized(InputSource, Commands[i].Action, (RecognitionConfidenceLevel)confidence, phraseDuration, phraseStartTime, text);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = MixedRealityToolkit_get_InputSystem_mE96F00B523458F1A332D02C9EC3A3DEC2E3616FC(/*hidden argument*/NULL);
		RuntimeObject* L_6 = __this->get_InputSource_6();
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_7 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  L_9 = SpeechCommands_get_Action_m38E9571E8C09D42B2453D4CA45C12DC690523DB5((SpeechCommands_t607D1D1F8CB98D5168CF4CBC8BDF22899549EB9D *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		int32_t L_10 = ___confidence0;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_11 = ___phraseDuration1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_12 = ___phraseStartTime2;
		String_t* L_13 = ___text3;
		NullCheck(L_5);
		InterfaceActionInvoker6< RuntimeObject*, MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 , int32_t, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , String_t* >::Invoke(65 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,System.String) */, IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0_il2cpp_TypeInfo_var, L_5, L_6, L_9, L_10, L_11, L_12, L_13);
		// break;
		return;
	}

IL_0043:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_15 = V_0;
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_16 = WindowsSpeechInputProvider_get_Commands_m2CFB03E2B211CF0B4D560DEF77171FEFA1E1F20D(/*hidden argument*/NULL);
		SpeechCommandsU5BU5D_tD23885A9792C2CDBBCBCA69524EC004DF2261BFD* L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = L_15;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = L_15;
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_18 = V_2;
		G_B7_0 = L_18;
		G_B7_1 = G_B5_1;
		goto IL_0063;
	}

IL_005c:
	{
		NullCheck(G_B6_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_19), (((int32_t)((int32_t)(((RuntimeArray *)G_B6_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_1;
	}

IL_0063:
	{
		V_1 = G_B7_0;
		int32_t L_20 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_21 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B7_1) < ((int32_t)L_20))? 1 : 0)&(int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
