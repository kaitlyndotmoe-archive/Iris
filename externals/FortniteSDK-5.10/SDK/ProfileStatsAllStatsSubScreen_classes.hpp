#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x338 - 0x2F8)
// WidgetBlueprintGeneratedClass ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C
class UProfileStatsAllStatsSubScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UWrapBox*                              StatWrapBox;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 StatsToDisplay;                                    // 0x318(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProfileStatsAllStatsSubScreen_C");
		return Clss;
	}

	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void ExecuteUbergraph_ProfileStatsAllStatsSubScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class ULargeStatWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
