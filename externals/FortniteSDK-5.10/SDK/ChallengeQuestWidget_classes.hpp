#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x2D0 - 0x210)
// WidgetBlueprintGeneratedClass ChallengeQuestWidget.ChallengeQuestWidget_C
class UChallengeQuestWidget_C : public UCommonUserWidget
{
public:
	class UOverlay*                              BattleStars;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ChallengeContent;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestProgressWidget_C*           DailyQuestProgressWidget;                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*               DailyQuestRewardInfo;                              // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HardTag;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LeftImage;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MidContentSwitcher;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidProgressVB;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidUnknownVB;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ProgressBar;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ProgressText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RewardSwitcher;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TaskName;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        Quest;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFortPersistentResourceItemDefinition> StarsItemDefinition;                               // 0x2A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeQuestWidget_C");
		return Clss;
	}

	void StyleAsLocked(class FText LockedText);
	void StyleAsInvalid();
	void UpdateName(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue);
	void GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount, int32 ReturnCount, TArray<struct FFortMcpQuestObjectiveInfo>& CallFunc_GetObjectives_BP_ReturnValue, int32 CallFunc_GetObjectiveNeededToComplete_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, bool CallFunc_IsValid_ReturnValue);
	enum class EFortQuestState GetQuestState(bool CallFunc_IsValid_ReturnValue);
	void UpdateProgress(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, enum class EQuestVisualStyle CallFunc_GetVisualStyle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, enum class EQuestVisualStyle Temp_byte_Variable4, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
	void StyleAsIncomplete();
	void StyleAsComplete();
	void SetQuestItem(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition, class UFortChallengeBundleInfo* Bundle, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ContainsReward_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
