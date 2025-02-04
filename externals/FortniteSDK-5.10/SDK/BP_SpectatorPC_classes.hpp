#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1F08 - 0x1F00)
// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F00(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SpectatorPC_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_AmbientAudioController_C* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
