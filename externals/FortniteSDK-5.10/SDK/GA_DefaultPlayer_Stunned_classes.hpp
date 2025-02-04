#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x920 - 0x900)
// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x900(0x8)(Transient, DuplicateTransient)
	struct FFortFeedbackHandle                   StunFeedbackEvent;                                 // 0x908(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_Stunned_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
