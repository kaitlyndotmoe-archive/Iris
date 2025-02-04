#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x289 - 0x239)
// WidgetBlueprintGeneratedClass ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C
class UItemReceivedChallengeCompleteHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	uint8                                        Pad_31C4[0x7];                                     
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      BattlepassTier;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlepassUpgraded;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_Icon;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_Title;                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBattlePassIconGold;                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBattlePassIconSilver;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemReceivedAccountWidget_C*          ItemReceivedAccountWidget;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Is_BattlePass;                                     // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedChallengeCompleteHeader_C");
		return Clss;
	}

	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedChallengeCompleteHeader(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, class UFortItemDefinition* CallFunc_RetrieveItemDefintionFromParam_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, class UFortChallengeBundleItemDefinition* K2Node_DynamicCast_AsFort_Challenge_Bundle_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, class FText CallFunc_GetShortNameNumber_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UImage* K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
