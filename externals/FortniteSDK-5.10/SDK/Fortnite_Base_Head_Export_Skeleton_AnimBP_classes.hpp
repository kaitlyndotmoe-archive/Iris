#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBF8 (0x1018 - 0x420)
// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x428(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x4D8(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE; // 0x518(0xA0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E; // 0x5B8(0xE8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1; // 0x6A0(0xD8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3971854A46E6B529767EA2AB708A8D46; // 0x778(0xF8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823; // 0x870(0xD8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19E6568A48732F90AD2036B56ECA0D46; // 0x948(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707; // 0x990(0x48)()
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_67AFEC6E4E43108E1E699081080B9448; // 0x9D8(0x58)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E8FB05504628ECA52ADD038CBD818957; // 0xA30(0xD8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_91F05C994C7B4758BA35D2B1F94A7663; // 0xB08(0xD8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_53F166F14732C8ECBEC8C0A540192456; // 0xBE0(0x48)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_BF175D4149F235AF8059B38CB3517406; // 0xC28(0xF8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3D1C5A1541A1147D684D99B42EDBAB8C; // 0xD20(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_59950130431F160E70FA618201DA0ED0; // 0xD68(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4B2D173F4261FBC709962B837E22DAA7; // 0xDD0(0xD8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C50053764A5016625E742C8401AAD202; // 0xEA8(0xD8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_540FAC8A423311B343A66CBDD1A68E4E; // 0xF80(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5C0CA1E44DCE78D6CEF568B89CA4B27B; // 0xFC8(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1010(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fortnite_Base_Head_Export_Skeleton_AnimBP_C");
		return Clss;
	}

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
