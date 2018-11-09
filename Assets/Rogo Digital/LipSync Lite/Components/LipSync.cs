using UnityEngine;
#if !UNITY_EDITOR && UNITY_WINRT_10_0
        using Windows.Storage;
#endif
namespace RogoDigital.Lipsync {
	[AddComponentMenu("Rogo Digital/LipSync Lite")]
	[DisallowMultipleComponent]
	[HelpURL("http://updates.rogodigital.com/lipsync-api/class_rogo_digital_1_1_lipsync_1_1_lip_sync.html")]
	public class LipSync : LipSyncBase {
	}
}