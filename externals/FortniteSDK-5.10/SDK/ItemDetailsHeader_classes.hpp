#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x3C9 - 0x278)
// WidgetBlueprintGeneratedClass ItemDetailsHeader.ItemDetailsHeader_C
class UItemDetailsHeader_C : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AmmoLoadedText;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*            CategoryIndicator;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*            CategoryIndicatorTertiary;                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortEvolveIndicator*                  EvolveIndicator;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ExtraIndicatorSlot;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortFavoriteIndicator*                FavoriteIndicator;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacer;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacerTertiary;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderItemDisplayText_C*   ItemDetailsHeaderItemDisplayText;                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderRarityTypeText_C*    ItemDetailsHeaderRarityTypeText;                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderTagListText_C*       ItemDetailsHeaderTagListText;                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsStackCounter_C*            ItemDetailsStackCounter;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemRatingIndicator_C*                ItemRatingIndicator;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LevelBar;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLevelIndicator*                   LevelIndicator;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInventoryOverflowIndicator*       OverflowIndicator;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RarityBorder;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RatingSwitcher;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TertiaryRow;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTierIndicator*                    TierIndicator;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUpgradeIndicator*                 UpgradeIndicator;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RarityBorderMID;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   RarityData;                                        // 0x330(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              Level_Bar_MID;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LockItemColor;                                     // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Ammo_Header;                                  // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDetailsHeader_C");
		return Clss;
	}

	void SetStyles();
	void UpdateItemsForWidgets(TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array1, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<enum class EFortItemType>& K2Node_MakeArray_Array2, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class EFortItemType K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDroppedItem_ReturnValue, bool CallFunc_HasUniqueAmmo_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue2, bool CallFunc_Array_Contains_ReturnValue2, enum class EFortItemTier CallFunc_GetTier_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Construct();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void ExecuteUbergraph_ItemDetailsHeader(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
