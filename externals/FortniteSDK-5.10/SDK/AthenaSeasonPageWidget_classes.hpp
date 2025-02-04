#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x2D8 - 0x228)
// WidgetBlueprintGeneratedClass AthenaSeasonPageWidget.AthenaSeasonPageWidget_C
class UAthenaSeasonPageWidget_C : public USeasonPassPageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      BGActiveSeasonNumberText;                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderGradFree;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderGradPurchasable;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderPurchaseDarkenCB;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Lock;                                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            MainGridPanel;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ColumnsForFull;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColumnsForInsert;                                  // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinLevel;                                          // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevel;                                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PageLeft;                                          // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  PageRight;                                         // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MAX_COLUMNS;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B73[0x4];                                     
	class UWidget*                               FirstFree;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastFree;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               FirstPaid;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastPaid;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeasonPassMaxLevel;                                // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Full;                                              // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B74[0x3];                                     
	TArray<int32>                                DummyArray;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                            SoundOnBeginReveal;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonPageWidget_C");
		return Clss;
	}

	void UpdateDynamicData(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_OwnsSeasonPass_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	void GetFirstLevel(int32* FirstLevel);
	class UAthenaSeasonLevelFreeRewardsWidget_C* AddFreeRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelFreeRewardsWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
	void AddPaidRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo, class UAthenaSeasonLevelPaidRewardsWidget_C** OutputPin, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelPaidRewardsWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
	void PagePopulationComplete(class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot1, bool K2Node_DynamicCast_bSuccess1, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot2, bool K2Node_DynamicCast_bSuccess2);
	bool ContainsLevel(int32 Level, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsFull(bool* Full);
	void AddLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, TArray<class USeasonPassLevelWidget*>* LevelWidgets, bool CallFunc_ContainsChaseReward_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetSeasonPassMaxLevel_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelHeaderWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAthenaSeasonLevelPaidRewardsWidget_C* CallFunc_AddPaidRewards_OutputPin, class UAthenaSeasonLevelFreeRewardsWidget_C* CallFunc_AddFreeRewards_ReturnValue, TArray<class USeasonPassLevelWidget*>& K2Node_MakeArray_Array);
	void Construct();
	void Destruct();
	void NavigatePageRight();
	void NavigatePageLeft();
	void OnBattlePassChanged();
	void ScreenShown();
	void ExecuteUbergraph_AthenaSeasonPageWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_ShouldPlayInto_ReturnValue, class USeasonPassLevelWidget* K2Node_DynamicCast_AsSeason_Pass_Level_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PageRight__DelegateSignature();
	void PageLeft__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
