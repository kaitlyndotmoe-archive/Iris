#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaAccountContext
class UAthenaAccountContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaAccountContext");
		return Clss;
	}

	void SimulateBattleBookPurchase(int32 NumLevelsToPurchase, int32* BonusLevelsGranted, bool* bOverLimit);
	bool ShouldReplaceBattleStarsWithAlternateReward();
	bool IsAtMaxBattlePassTier();
	int32 GetCurrentSeasonNumber();
	class FText GetCurrentSeasonName();
	class UAthenaSeasonItemDefinition* GetCurrentSeasonDefinition();
	void GetBattleBookPurchaseLimit(int32* MaxNumLevelsPossibleToPurchase, int32* BonusLevelsGranted);
};

// 0x8 (0x210 - 0x208)
// Class FortniteUI.AthenaAwardAlertBase
class UAthenaAwardAlertBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaAwardAlertBase");
		return Clss;
	}

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void OnAwardGranted(class UFortAwardItemDefinition* AwardDefinition);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortChallengeBundleCategoryInfo
class UFortChallengeBundleCategoryInfo : public UObject
{
public:
	TArray<class UFortChallengeBundleScheduleDefinition*> BundleScheduleDefinitions;                         // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortChallengeBundleInfo*>      BundleInfos;                                       // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class AFortPlayerController*                 FortPC;                                            // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChallengeBundleCategoryInfo");
		return Clss;
	}

	int32 GetNumberOfBundles();
	class UFortChallengeBundleScheduleDefinition* GetFirstScheduleDefinition();
	bool GetExpirationDate(struct FDateTime* ExpirationDate);
	TArray<class UFortChallengeBundleInfo*> GetChallengeBundleInfos();
};

// 0x30 (0x58 - 0x28)
// Class FortniteUI.FortChallengeBundleInfo
class UFortChallengeBundleInfo : public UObject
{
public:
	class UFortChallengeBundleItem*              BundleItem;                                        // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleItemDefinition*    BundleDefinition;                                  // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleCategoryInfo*      BundleCategoryInfo;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleScheduleDefinition* BundleScheduleDefinition;                          // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EChallengeScheduleUnlockType      BundleUnlockType;                                  // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FDF[0x3];                                      
	int32                                        BundleUnlockValue;                                 // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerController*                 FortPC;                                            // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChallengeBundleInfo");
		return Clss;
	}

	bool OwnsBattlePass();
	bool IsUnlocked(class FText* LockedReason);
	bool IsRewardThresholdAchieved();
	bool IsCompleted();
	bool HasQuestReward(class UFortItemDefinition* ItemDef, int32* OutRecievedCount, int32* OutTotalCount);
	class UFortItem* GetRewardItem();
	void GetQuests(class UFortQuestManager* QuestManager, enum class EChallengeBundleQuestVisualStyle QuestStyle, TArray<class UFortQuestItem*>* OwnedQuests, TArray<class UFortQuestItemDefinition*>* UnownedQuests);
	class UFortChallengeBundleCategoryInfo* GetOwningBundleCategoryInfo();
	class UFortChallengeBundleItemDefinition* GetBundleDefinition();
	void GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount, float* OutAchievedPercent, float* OutThresholdPercent);
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortChallengeBundleTreeItemWidget
class UFortChallengeBundleTreeItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_FE0[0x8];                                      
	TWeakObjectPtr<class UObject>                ScheduleOrBundle;                                  // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChallengeBundleTreeItemWidget");
		return Clss;
	}

	void SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo* Schedule);
	void SetupAsChallengeBundle(class UFortChallengeBundleInfo* Bundle);
	void OnBundleUpdated();
	void HandleBundleUpdated();
	class UFortChallengeBundleInfo* GetChallengeBundleInfo();
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortChallengeBundleWidget
class UFortChallengeBundleWidget : public UCommonActivatablePanel
{
public:
	class UFortChallengeBundleInfo*              ChallengeBundleInfo;                               // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChallengeBundleWidget");
		return Clss;
	}

	void Setup(class UFortChallengeBundleInfo* Info);
	void OnSetup();
	void OnBundleUpdated();
	void MoveToPrevBundle();
	void MoveToNextBundle();
	bool HasSiblingBundles();
	void HandleBundleUpdated();
	class UFortChallengeBundleInfo* GetChallengeBundleInfo();
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortActivatablePanel
class UFortActivatablePanel : public UCommonActivatablePanel
{
public:
	bool                                         bIsPushedOnToContentPanelStack;                    // 0x2F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlreadyOnContentPanelStack;                     // 0x2F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputPriority                    InputPriority;                                     // 0x2FA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE1[0x5];                                      
	TSubclassOf<class UCommonPopupMenu>          MoreInfoPopupMenuClass;                            // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE2[0x20];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivatablePanel");
		return Clss;
	}

	void RestoreScrollWidget(class UWidget* FallbackWidget);
	void RestoreCenterWidget(class UWidget* FallbackWidget);
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.AthenaChallengeBundleScheduleScreenBase
class UAthenaChallengeBundleScheduleScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_FE3[0x10];                                     
	TMap<class FName, class UFortChallengeBundleCategoryInfo*> ScheduleCategoryCache;                             // 0x338(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE4[0x8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChallengeBundleScheduleScreenBase");
		return Clss;
	}

	void RequestRefreshNavigation();
	void OnRefreshNavigation();
	void OnChallengesChanged();
	void GetChallengeCategoryInfos(TArray<class UFortChallengeBundleCategoryInfo*>* OutCategoryInfos);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortHUDElementWidget
class UFortHUDElementWidget : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                 HUDElementTag;                                     // 0x210(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE5[0x8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDElementWidget");
		return Clss;
	}

	void OnVisibilitySetEvent(enum class ESlateVisibility InVisibility);
	void HandleOnHUDResetToDefaults();
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
};

// 0x1B0 (0x3E8 - 0x238)
// Class FortniteUI.AthenaCompassBase
class UAthenaCompassBase : public UFortHUDElementWidget
{
public:
	class UMaterialInstanceDynamic*              CompassMaterial;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSlateBrush>                   MarkerBrushes;                                     // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           HeadingIndicatorBrush;                             // 0x250(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           StormIndicatorBrush;                               // 0x2D8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        MarkerVerticalOffset;                              // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE6[0x4];                                      
	class UAthenaPlayerViewModel*                VM;                                                // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                        HeadingFont;                                       // 0x370(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE7[0x20];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCompassBase");
		return Clss;
	}

	void BindToModel(class UAthenaPlayerViewModel* ViewModel);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaCountdownWidgetBase
class UAthenaCountdownWidgetBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCountdownWidgetBase");
		return Clss;
	}

	void OnDisplayWarningMessage(class FText& FirstLineText, class FText& SecondLineText);
	void OnCountdownUpdate(int32 TimeRemaining, class FText& CountdownUpdateText);
	void OnCountdownStarted(int32 TimeRemaining, class FText& CountdownIntroText);
	void OnCountdownFinished();
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void HandleCountdownUpdate(int32 TimeRemaining);
	void HandleCountdownStarted(int32 TimeRemaining);
	void HandleCountdownFinished();
};

// 0xB8 (0x2C8 - 0x210)
// Class FortniteUI.FortItemPickerBase
class UFortItemPickerBase : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnSelectionChangedEvent;                           // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionCommittedEvent;                         // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemClicked;                                     // 0x230(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemClickedDoubleClicked;                        // 0x240(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemHoveredEvent;                                // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemUnhovered;                                   // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortItemTileView*                     PickerTileView;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfirmSelectionIfAlreadySelectedAfterOneClick;   // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FED[0x7];                                      
	class UObject*                               NewlySelectedItem;                                 // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x288(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FEE[0x30];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemPickerBase");
		return Clss;
	}

	bool TryCommitSelectedItem();
	void SetSelectedItem(class UFortItem* ItemToSelect);
	bool SetSelectedIndex(int32 Index);
	void OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	class UFortItem* GetSelectedItem();
	int32 GetIndexForItem(class UFortItem* Item);
	void ClearSelection();
	void CenterSelectedItemTileWidget();
	bool CanItemBeComitted(class UFortItem* ItemToCommit);
};

// 0x48 (0x310 - 0x2C8)
// Class FortniteUI.AthenaCustomizationPicker
class UAthenaCustomizationPicker : public UFortItemPickerBase
{
public:
	UMulticastDelegateProperty_                  OnCosmeticSelectionSaving;                         // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCosmeticSelectionSaved;                          // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EAthenaCustomizationCategory      CustomizeCategory;                                 // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF0[0x3];                                      
	int32                                        SubslotIndex;                                      // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowCommits;                                     // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF1[0x1F];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPicker");
		return Clss;
	}

	void OnCosmeticChangeSaveEvent__DelegateSignature();
	void HandleSelectedItemHasChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void EndCustomizationCategory();
	void BeginCustomizationCategory(enum class EAthenaCustomizationCategory Category, int32 SubslotToEdit);
};

// 0x30 (0x8C0 - 0x890)
// Class FortniteUI.FortItemTileButton
class UFortItemTileButton : public UCommonButton
{
public:
	uint8                                        Pad_FF2[0x8];                                      
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x8A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x8A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsRewardCard;                                      // 0x8A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF3[0x6];                                      
	UInterfaceProperty_                          ItemViewContext;                                   // 0x8B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemTileButton");
		return Clss;
	}

};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortItemPickerButton
class UFortItemPickerButton : public UFortItemTileButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemPickerButton");
		return Clss;
	}

};

// 0x8 (0x8C8 - 0x8C0)
// Class FortniteUI.AthenaCustomizationPickerTileButton
class UAthenaCustomizationPickerTileButton : public UFortItemPickerButton
{
public:
	uint8                                        Pad_FF4[0x8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPickerTileButton");
		return Clss;
	}

};

// 0x98 (0x3C0 - 0x328)
// Class FortniteUI.FortActivatablePanelWithItemPreview
class UFortActivatablePanelWithItemPreview : public UFortActivatablePanel
{
public:
	uint8                                        Pad_FF5[0x8];                                      
	class UFortItemView*                         ItemViewObject;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewUnifiedZoomInputAction;                    // 0x338(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewZoomOutInputAction;                        // 0x348(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewZoomInInputAction;                         // 0x358(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewRotateInputAction;                         // 0x368(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ActiveCosmeticPreviewActions;                      // 0x378(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF6[0x28];                                     
	bool                                         AllowItemRotation;                                 // 0x3B0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowItemZooming;                                  // 0x3B1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF7[0x6];                                      
	class UDataTable*                            ActionDataTable;                                   // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivatablePanelWithItemPreview");
		return Clss;
	}

	void OnVaultItemsViewed(TArray<class UFortItem*>& Items);
	void OnItemPreviewChanged(class AActor* NewPrefab, class UFortItem* NewItem);
	void OnCosmeticSpecialActionPressed(bool* bPassThrough);
	class UWidget* GetWidgetForFramingViewedItem();
};

// 0x20 (0x3E0 - 0x3C0)
// Class FortniteUI.AthenaCustomizationScreenBase
class UAthenaCustomizationScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	class UAthenaCustomizationPicker*            SelectionPicker;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFA[0x10];                                     
	int64                                        LastProfileRev;                                    // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationScreenBase");
		return Clss;
	}

	void ShiftItemsVariantOption(class UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex);
	void ProcessLoadoutChanged();
	void HandleLoadoutChanged();
	void HandleInventoryUpdated(TSet<class FString>& ItemChangeFlags, int64 ProfileRevision);
	class UFortItem* GetFavoriteItemForCategory(enum class EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex);
};

// 0x20 (0x8B0 - 0x890)
// Class FortniteUI.AthenaCustomizationSlotSelectorButton
class UAthenaCustomizationSlotSelectorButton : public UCommonButton
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x890(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFC[0x3];                                      
	int32                                        SubslotIndex;                                      // 0x894(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFD[0x10];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationSlotSelectorButton");
		return Clss;
	}

	void SetCustomizationType(enum class EAthenaCustomizationCategory NewType, int32 InSubslotIndex);
};

// 0x0 (0x208 - 0x208)
// Class FortniteUI.AthenaEliminationOverlayBase
class UAthenaEliminationOverlayBase : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEliminationOverlayBase");
		return Clss;
	}

};

// 0x118 (0x350 - 0x238)
// Class FortniteUI.BacchusHUDElement
class UBacchusHUDElement : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_FFE[0x8];                                      
	bool                                         bIsInLayoutMode;                                   // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFF[0x7];                                      
	struct FGameplayTag                          VisualType;                                        // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  WidgetName;                                        // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bAlwaysShow;                                       // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInBuildMode;                                     // 0x269(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInCombatMode;                                    // 0x26A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInEditMode;                                      // 0x26B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              IsFreeFalling;                                     // 0x26C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              IsGliding;                                         // 0x26D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              CanOpenChute;                                      // 0x26E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              InLockedBus;                                       // 0x26F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              InUnlockedBus;                                     // 0x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnTargeting;                                       // 0x271(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnUsingScopeTargeting;                             // 0x272(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanTarget;                                       // 0x273(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanUseScopeTargeting;                            // 0x274(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCrouching;                                       // 0x275(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanUseSecondaryAbility;                          // 0x276(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnDBNO;                                            // 0x277(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnControllingRCPawn;                               // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInVehicle;                                       // 0x279(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnDrivingVehicle;                                  // 0x27A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1000[0x5];                                     
	struct FHUDLayoutDataEntry                   DefaultEntry;                                      // 0x280(0xD0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusHUDElement");
		return Clss;
	}

	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	struct FGameplayTag BP_GetMobileVisualType();
};

// 0x18 (0x368 - 0x350)
// Class FortniteUI.AthenaEquippedItemBase
class UAthenaEquippedItemBase : public UBacchusHUDElement
{
public:
	enum class EEquippedWeaponDisplay            CurrentMode;                                       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1002[0x7];                                     
	class UAthenaPlayerViewModel*                VM;                                                // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1003[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEquippedItemBase");
		return Clss;
	}

	void WeaponTypeChanged(enum class EEquippedWeaponDisplay Mode);
	void UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item);
	void UtilityItemCountChanged(int32 Remaining);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	void ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount);
	void ResourceCountChanged(int32 ResourceCount);
	void OnWorldItemsChanged();
	void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnViewTargetChanged();
	void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
	void OnBuildingMaterialChanged();
	void HasAmmoChanged(bool bHasAmmo);
	void AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item);
	void AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.AthenaEventGamesBase
class UAthenaEventGamesBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventGamesBase");
		return Clss;
	}

};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.AthenaGadgetFuelWidget
class UAthenaGadgetFuelWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UAthenaGadgetItemDefinition> AthenaGadgetItemDefinition;                        // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                FuelGaugeProgressImage;                            // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1004[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGadgetFuelWidget");
		return Clss;
	}

	void SetItem(class UFortWorldItem* Item);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.AthenaGameOverScreenBase
class UAthenaGameOverScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1005[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGameOverScreenBase");
		return Clss;
	}

	void RequestRefreshInput();
	void GoToBoss();
	bool CanShowGoToBoss();
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaGamePhaseWidgetBase
class UAthenaGamePhaseWidgetBase : public UFortHUDElementWidget
{
public:
	class UMaterialInterface*                    StormComingFontMaterial;                           // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StormComingWarningTime;                            // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1006[0x4];                                     
	class UTextBlock*                            TimeText;                                          // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1007[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGamePhaseWidgetBase");
		return Clss;
	}

	void OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void HandleCountdownUpdate(int32 TimeRemaining);
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortUIStateWidget_NUI
class UFortUIStateWidget_NUI : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_100B[0x8];                                     
	TArray<struct FContentPushState>             StackStates;                                       // 0x300(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateWidget_NUI");
		return Clss;
	}

	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void RequestOpenSocialMenu();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	class UWidget* PopContentWidget();
	void PopAllContentWidgets();
	void OnLoadingScreenVisibilityChanged(bool IsVisible);
	void OnHUDScaleChanged(float HUDScale);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void OnExitState(enum class EFortUIState NextUIState);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
};

// 0x18 (0x328 - 0x310)
// Class FortniteUI.AthenaHUDBase
class UAthenaHUDBase : public UFortUIStateWidget_NUI
{
public:
	class UAthenaPlayerViewModel*                PlayerViewModel;                                   // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_100D[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDBase");
		return Clss;
	}

	void ViewModelChanged(class UAthenaPlayerViewModel* ViewModel);
	void SetFullScreenMapVisibility(bool bIsVisible);
	void OnPlaylistExtensionWidgetCreated(enum class EPlaylistUIExtensionSlot ExtensionSlot, class UUserWidget* Widget);
};

// 0x1F0 (0x218 - 0x28)
// Class FortniteUI.AthenaHUDContext
class UAthenaHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1013[0x8];                                     
	UMulticastDelegateProperty_                  OnLocalPlayerWon;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalTeamWon;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerLost;                                 // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKilledPlayer;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDBNOStateChanged;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUIGameplayCue;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerBeginSkydiving;                       // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadMembersChanged;                             // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadMemberKillsChanged;                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaAutoFireChanged;                           // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnClientSettingsShowViewersChanged;                // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaGamePhaseChanged;                          // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerFiredWeapon;                               // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLowPerformanceMode;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPTTStateChange;                                  // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCanPTTChange;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ShowMobilePickerDelegate;                          // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaylistUIExtensionChanged;                      // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerNameChangeDelegate;                        // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAnyPlayerChangedTeamsDelegate;                   // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllWinnersAnnouncedDelegate;                     // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1014[0x10];                                    
	UMulticastDelegateProperty_                  OnInventoryItemSelected;                           // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventorySwapStarted;                            // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventorySwapComplete;                           // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                MoveButtonWidgetPtr;                               // 0x1C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAthenaWinnerInfo                     WinnerInfo;                                        // 0x1C8(0x20)(NativeAccessSpecifierPrivate)
	bool                                         bMoveButtonMode;                                   // 0x1E8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingAttachToHUD;                               // 0x1E9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1015[0x6];                                     
	class UFortGameUIExtenderAthena*             PlaylistUIExtender;                                // 0x1F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortItem>              LastSelectedInventoryItem;                         // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1016[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDContext");
		return Clss;
	}

	bool UseTapToShoot();
	void UseOrRleoadFromHUDStop();
	void UseOrRleoadFromHUDStart();
	void UpdateSelectedWidgetMoveOffsetVector(struct FVector2D& VectorOffset, float FMoveScale);
	void TakeMovementInputFromHUD(const struct FVector& MoveVector, bool bTrySprint);
	void TakeLookInputFromHUD(const struct FRotator& LookRotator);
	void TakeItemSelectionInputFromHUD(int32 SlotIdx, bool bReloadOrUseIfAlreadySelected, enum class EFortQuickBars InQuickBar);
	void SwapQuickBarFocusFromHUD(enum class EFortQuickBars InQuickBar, int32 SlotOverride);
	void StopTargettingFromHUD();
	void StartOrFinishSwap(int32 SlotIndex);
	void ShowMobilePicker();
	bool ShouldDisplayScoreUI();
	void SetTargetingToggleable(bool bNewValue);
	void SetSelectWidgetToMoveMode(bool bSet);
	void SetSelectedInventoryItem(class UFortItem* Item);
	void SetResourceMaterial(enum class EFortResourceType NewMaterial);
	void SetPTTState(enum class EPTTState NewPushToTalkState);
	void SetLockOnStickCoords(struct FVector2D& LockOnCoords);
	void SelectWidgetToMove(class UWidget* Widget);
	void ReloadFromHUD();
	void OnClientSettingUpdatedShowViewers();
	void OnAllWinnersAnnounced();
	void JumpFromHudStart(int32 TouchIndex);
	void JumpFromHudEnd();
	bool IsUsingScope();
	bool IsTargeting();
	bool IsSwapping();
	bool IsShowViewerCountEnabled();
	bool IsMovingSelectedWidget();
	bool IsInSelectWidgetToMoveMode();
	bool IsInBuildMode();
	bool IsCurrentWeaponFiring();
	bool IsCrouching();
	bool IsAutoRunEnabled();
	bool HasWifi();
	bool HasLockOnTarget();
	bool HasAutofireTarget();
	void HandleUIGameplayCue(class FName CueName, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void HandleLocalPlayerDBNOStateChanged(bool bIsDBNO);
	void HandleLocalPlayerBeginSkydiving();
	void HandleGamePhaseChange(enum class EAthenaGamePhaseStep NewGamePhase);
	class UFortItem* GetSelectedInventoryItem();
	enum class EPTTState GetPTTState();
	class UFortGameUIExtenderAthena* GetPlaylistUIExtender();
	class FString GetPlayerName();
	void GetLocalTime(int32* Hours, int32* Minutes);
	int32 GetJumpPressedTouchIndex();
	int32 GetInteractPressedTouchIndex();
	bool GetInLowPerformanceMode();
	class UAthenaPlayerViewModel* GetCurrentViewModel();
	bool GetCanPTT();
	float GetBatteryLevel();
	void FireFromHUDStop();
	void FireFromHUDStart();
	void ExecuteActionNameFromHUDWithEventType(class FName ActionName, enum class EInputEvent KeyEvent);
	void ExecuteActionNameFromHUD(class FName ActionName);
	void EndUseFromHUD();
	void EnableAutoRunFromHUD(bool bEnable);
	void CycleQuickbar();
	bool CanCurrentWeaponAutoFireFromReticle();
	void CancelSwap();
	bool CanAutoRun();
	void BeginUseFromHUD();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.AthenaHUDGamePhaseChangingBase
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1018[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDGamePhaseChangingBase");
		return Clss;
	}

	void UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText);
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaHUDInputWidget
class UAthenaHUDInputWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDInputWidget");
		return Clss;
	}

};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaHUDPlayerActionAlertBase
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerPawnAthena*                 LastPlayerPawn;                                    // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReadyForNextAlert;                                // 0x240(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_101A[0x17];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDPlayerActionAlertBase");
		return Clss;
	}

	void RequestNextAlert();
	void AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText);
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaIndicatorLayerBase
class UAthenaIndicatorLayerBase : public UFortHUDElementWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USlateVectorArtData*                   TeamIndicatorMesh;                                 // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_101B[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaIndicatorLayerBase");
		return Clss;
	}

	void SquadIndicatorsChanged(TArray<class AFortPlayerStateAthena*>& PlayerStates);
	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	TArray<class AFortPlayerStateAthena*> GetSquadMembers();
	class UAthenaPlayerViewModel* GetPlayerViewModel();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.AthenaInventoryEquipButtonBase
class UAthenaInventoryEquipButtonBase : public UCommonButton
{
public:
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               EmptyImage;                                        // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101C[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryEquipButtonBase");
		return Clss;
	}

};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.AthenaInventoryFortItemTileButtonBase
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryFortItemTileButtonBase");
		return Clss;
	}

};

// 0x50 (0x378 - 0x328)
// Class FortniteUI.AthenaInventoryPanelBase
class UAthenaInventoryPanelBase : public UFortActivatablePanel
{
public:
	class UFortItemTileView*                     ResourceView;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     AmmoView;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    EquipButtonGroup;                                  // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101F[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryPanelBase");
		return Clss;
	}

	void RequestEquip(class UFortItem* Item);
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleInventoryItemSelected(class UFortItem* Item);
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	class UFortItemTileView* GetTileViewForItem(class UFortItem* Item);
	void FocusTileView(class UFortItemTileView* TileView);
	void AttemptToUpdateFocus();
	void AdvanceSelection(class UFortItemTileView* TileView);
};

// 0x158 (0x518 - 0x3C0)
// Class FortniteUI.AthenaItemSelectorScreenBase
class UAthenaItemSelectorScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EAthenaCustomizationCategory, struct FFortTabButtonLabelInfo> ItemCategoryButtonLabelInfo;                       // 0x3C8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFortTabButtonLabelInfo               VariantButtonLabelInfo;                            // 0x418(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             CurrentPreviewItem;                                // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaCosmeticItemDefinition*         CurrentPreviewItemDef;                             // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMcpVariantChannelInfo>        CurrentPreviewVariantChannels;                     // 0x4C8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TabList_EditSelector;                              // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_ItemEditor;                         // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaCustomizationPicker*            Picker_ItemSelector;                               // 0x4E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ConfirmSelection;                           // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemBaseWidget*                   Item_HeaderInfo;                                   // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantPicker*                    Picker_VariantSelector;                            // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1021[0x8];                                     
	enum class EAthenaCustomizationCategory      CustomizeCategory;                                 // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1022[0x3];                                     
	int32                                        SubslotIndex;                                      // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaItemSelectorScreenBase");
		return Clss;
	}

	void StartItemCustomization(enum class EAthenaCustomizationCategory InCategory, int32 InSubslotIndex, class FText& CategoryDisplayName);
	void SaveAndExit();
	void OnVariantSelectionChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& NewActiveVariant);
	void OnTabSelectionChanged(bool bShowingVariants);
	void OnSavingItemStarted();
	void OnItemSelectionCommited(class UFortItem* SelectedItem);
	void OnItemSelectedChanged(class UFortItem* SelectedItem);
	void OnFinsihedItemSetup();
	void OnFinsihedItemSave();
	void HandleSelectedTabChanged(class FName SelectedTabID);
	class UFortItem* GetCurrentItem();
};

// 0x100 (0x428 - 0x328)
// Class FortniteUI.AthenaLeaderboardScreenBase
class UAthenaLeaderboardScreenBase : public UFortActivatablePanel
{
public:
	class UFortTabListWidgetBase*                LeaderboardTabList;                                // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        MatchRotator;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        LeaderboardTypeRotator;                            // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ResetTimeText;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      RefreshTimeText;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         BorderLocalUserFocus;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LeaderboardDisplayData;                            // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UCommonButton*>      ActiveTabButtons;                                  // 0x360(0x50)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxies;                                        // 0x3B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxiesFreeList;                                // 0x3C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortLeaderboardRowProxyInstance*      LocalUserRowProxy;                                 // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLeaderboardFilter                    CurrentLeaderboardFilter;                          // 0x3D8(0x18)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1024[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLeaderboardScreenBase");
		return Clss;
	}

	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr);
	void OnQueryStarted();
	void OnQueryFinished();
	void OnMatchTypeChanged(int32 MatchTypeIndex);
	void OnFriendsFilterChanged(int32 FriendsFilterIndex);
	void OnActiveLeaderboardTabChanged(int32 ActiveWidgetIndex);
	bool CanShowFriendsOnlyLeaderboard();
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortActorIndicatorWidget
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1025[0x8];                                     
	class AActor*                                IndicatedActor;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   IndicatedActorComponent;                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RelativeLocation;                                  // 0x250(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistance;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClampOnScreen;                                    // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowClampToScreenArrow;                           // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseScreenSpacePosition;                           // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1026[0x1];                                     
	struct FVector2D                             ScreenSpaceRelativeOffset;                         // 0x264(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1027[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActorIndicatorWidget");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.AthenaLevelBarBase
class UAthenaLevelBarBase : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLevelBarBase");
		return Clss;
	}

};

// 0x40 (0x368 - 0x328)
// Class FortniteUI.AthenaLobbyBase
class UAthenaLobbyBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1028[0x10];                                    
	class UOverlay*                              OverlayMain;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1029[0x20];                                    
	class UFriendCodeShareButtonBase*            FriendCodeFrontEndShareButton;                     // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyBase");
		return Clss;
	}

	void ShowMobileAutoFireScreen();
	void ShowHighlightSummary();
	void ShowDailyNews();
	void ShowAthenaStoreToast();
	void ShouldShowHeadlessReminder(bool bShouldShow);
	void OnUpdateSocialImportButtonText(class FText& NewText);
	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortViewModel
class UFortViewModel : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortViewModel");
		return Clss;
	}

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortPlayerViewModel
class UFortPlayerViewModel : public UFortViewModel
{
public:
	uint8                                        Pad_102A[0xB0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerViewModel");
		return Clss;
	}

};

// 0x50 (0x128 - 0xD8)
// Class FortniteUI.AthenaPlayerViewModel
class UAthenaPlayerViewModel : public UFortPlayerViewModel
{
public:
	uint8                                        Pad_102B[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerViewModel");
		return Clss;
	}

};

// 0x8 (0x130 - 0x128)
// Class FortniteUI.AthenaLocalPlayerViewModel
class UAthenaLocalPlayerViewModel : public UAthenaPlayerViewModel
{
public:
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLocalPlayerViewModel");
		return Clss;
	}

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.AthenaLootStoreScreenBase
class UAthenaLootStoreScreenBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLootStoreScreenBase");
		return Clss;
	}

};

// 0x18 (0x118 - 0x100)
// Class FortniteUI.AthenaMapLayer
class UAthenaMapLayer : public UWidget
{
public:
	uint8                                        Pad_102C[0x10];                                    
	class ULocalPlayer*                          LocalPlayer;                                       // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMapLayer");
		return Clss;
	}

	void SetLocalPlayer(class ULocalPlayer* LocalPlayer);
	void FlashPlayerIcon();
	void ClearTouches();
};

// 0x18 (0x220 - 0x208)
// Class FortniteUI.AthenaMatchReadyDesktopPopup
class UAthenaMatchReadyDesktopPopup : public UUserWidget
{
public:
	uint8                                        Pad_102D[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchReadyDesktopPopup");
		return Clss;
	}

	void UserDismissedDialog(bool bBringToFront);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.AthenaPartyBar
class UAthenaPartyBar : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnHelperTextChanged;                               // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDynamicEntryBox*                      EntryBox_PartyMembers;                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPartyBar");
		return Clss;
	}

};

// 0x110 (0x9A0 - 0x890)
// Class FortniteUI.AthenaPartyMemberBase
class UAthenaPartyMemberBase : public UCommonButton
{
public:
	uint8                                        Pad_102E[0x8];                                     
	class UTexture2D*                            MutedBrush;                                        // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            TalkingBrush;                                      // 0x8A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            NotTalkingBrush;                                   // 0x8A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortPlayerStateAthena*                AthenaPS;                                          // 0x8B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_102F[0x8];                                     
	struct FUniqueNetIdRepl                      MemberUniqueId;                                    // 0x8C0(0x28)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUniqueNetIdRepl                      ConsoleUniqueId;                                   // 0x8E8(0x28)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Platform;                                          // 0x910(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1030[0x20];                                    
	class UImage*                                Image_LeaderIcon;                                  // 0x940(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Speaker;                                     // 0x948(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x950(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_KillCount;                                    // 0x958(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VBox_PartyManagement;                              // 0x960(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_PromoteToLeader;                            // 0x968(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_RemoveFromParty;                            // 0x970(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_AddFriend;                                  // 0x978(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              Box_ButtonsContainer;                              // 0x980(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_KillCount;                                    // 0x988(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_MemberState;                              // 0x990(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Platform;                                    // 0x998(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPartyMemberBase");
		return Clss;
	}

	void SetBannerIconAndColor(const class FString& IconId, const class FString& ColorId);
	void OpenPartyFinder();
	void OnFriendshipStatusDetermined(enum class EFortFriendRequestStatus RequestStatus);
	void OnFriendRequestSent();
	void OnFriendRequestAccepted();
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaPickingLayer
class UAthenaPickingLayer : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPickingLayer");
		return Clss;
	}

};

// 0x20 (0x228 - 0x208)
// Class FortniteUI.AthenaPlayerHitPointBarBase
class UAthenaPlayerHitPointBarBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHealthBarType                    BarType;                                           // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1032[0x3];                                     
	float                                        ValueCurrent;                                      // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueLast;                                         // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueMax;                                          // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastToCurrentUpdateRate;                           // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1033[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerHitPointBarBase");
		return Clss;
	}

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void OnValueChangedWithReason(float Value, enum class EFortHitPointModificationReason Reason);
	void OnMaxValueChanged(float Value);
	void OnDeltaChanged();
	void OnDBNOStateChanged(bool IsDBNO);
	float GetLastValuePercentage();
	float GetCurrentValuePercentage();
};

// 0x10 (0x280 - 0x270)
// Class FortniteUI.AthenaPlayerIndicatorBase
class UAthenaPlayerIndicatorBase : public UFortActorIndicatorWidget
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerIndicatorBase");
		return Clss;
	}

	void TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking);
	void ShowCallout(enum class ETeamMemberState Callout);
	void SetViewModel(class UAthenaPlayerViewModel* InPlayerVM);
	void RefreshCurrentPawn();
	void PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName);
	void MapIndicatorPositionChanged(class AFortPlayerStateAthena* PS);
	void DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO);
	void BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.AthenaPlayerInfoBase
class UAthenaPlayerInfoBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadMemberIndex;                                  // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103D[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerInfoBase");
		return Clss;
	}

	void TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking);
	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void SendEpicFriendInvite();
	void PlayerPlatformChanged(class AFortPlayerStateAthena* PS, const class FString& CurrentPlatform);
	void PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName);
	void OnDisplayAddFriend(bool bShowAnimation);
	void MutedStateChanged(class AFortPlayerStateAthena* PS, bool Muted);
	void MapIndicatorPositionChanged(class AFortPlayerStateAthena* PS);
	bool IsPlayerOnPC();
	void HitPointsChanged(class AFortPlayerStateAthena* PS, float HealthPercent, float ShieldPercent);
	void HandleSpectatingChanged(class AFortPlayerStateAthena* NewSpectatingTarget);
	void DisconnectedStateChanged(class AFortPlayerStateAthena* PS, bool Disconnected);
	void DeadStateChanged(class AFortPlayerStateAthena* PS, bool DeadStateChanged);
	void DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO);
	void BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaPlayerKillsBase
class UAthenaPlayerKillsBase : public UFortHUDElementWidget
{
public:
	class UTextBlock*                            KillsText;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               KillsSource;                                       // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCustomKillSource;                                 // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_103E[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerKillsBase");
		return Clss;
	}

	void SetKillsSourcePlayerState(class AFortPlayerStateAthena* InPlayerState);
	void SetKillsSourcePlayerController(class AFortPlayerControllerAthena* InPlayerController);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaPlayersLeftBase
class UAthenaPlayersLeftBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_103F[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayersLeftBase");
		return Clss;
	}

	void SetPlayersLeftText(class FText& PlayersText);
};

// 0x8 (0x210 - 0x208)
// Class FortniteUI.AthenaPlayerVitalityBarBase
class UAthenaPlayerVitalityBarBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerVitalityBarBase");
		return Clss;
	}

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.AthenaPostMatchScreenBase
class UAthenaPostMatchScreenBase : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPostMatchScreenBase");
		return Clss;
	}

};

// 0x28 (0x170 - 0x148)
// Class FortniteUI.AthenaProfileStatBox
class UAthenaProfileStatBox : public USizeBox
{
public:
	UMulticastDelegateProperty_                  OnStatViewChanged;                                 // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bRespectParentStatView;                            // 0x158(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1041[0x7];                                     
	class UAthenaBaseStatView*                   StatView;                                          // 0x160(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1042[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatBox");
		return Clss;
	}

	void SetStatView(class UAthenaBaseStatView* InStatView, bool RespectParentStatView);
	void OnStatViewChanged__DelegateSignature(class UAthenaBaseStatView* StatView);
	struct FFortUIStatStyle& GetStatStyle(struct FGameplayTag& InStat);
	class UAthenaBaseStatView* GetBaseStatView();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaBaseStatView
class UAthenaBaseStatView : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBaseStatView");
		return Clss;
	}

	float GetStat(struct FGameplayTag& InStat);
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.AthenaWeaponStatView
class UAthenaWeaponStatView : public UAthenaBaseStatView
{
public:
	uint8                                        Pad_1044[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaWeaponStatView");
		return Clss;
	}

	class UFortWeaponItemDefinition* GetWeaponDefinition();
};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.AthenaMatchStatView
class UAthenaMatchStatView : public UAthenaBaseStatView
{
public:
	uint8                                        Pad_1045[0xA0];                                    
	TArray<class UAthenaWeaponStatView*>         WeaponStatViews;                                   // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchStatView");
		return Clss;
	}

	TArray<class UAthenaWeaponStatView*> GetWeaponViews();
	class UAthenaWeaponStatView* GetWeaponViewHighestStat(struct FGameplayTag& InStat);
	TArray<class UAthenaWeaponStatView*> GetSortedWeaponViews(struct FGameplayTag& InStat);
	class FString GetMatchID();
	struct FDateTime GetMatchEndTime();
};

// 0x20 (0xF8 - 0xD8)
// Class FortniteUI.AthenaMatchSetStatView
class UAthenaMatchSetStatView : public UAthenaMatchStatView
{
public:
	class UAthenaSeasonStats*                    OwningSeason;                                      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PlaylistId;                                        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAthenaMatchStatView*>          BestMatches;                                       // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchSetStatView");
		return Clss;
	}

	class UAthenaSeasonStats* GetOwningSeason();
	TArray<class UAthenaMatchStatView*> GetBestMatchViews();
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.AthenaProfileStatContext
class UAthenaProfileStatContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnStatsProfileLoaded;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1046[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatContext");
		return Clss;
	}

	void OnAthenaStatsProfileLoaded__DelegateSignature(class UFortMcpProfileAthenaStats* StatProfile);
	TArray<class UAthenaMatchStatView*> CreateMatchViews(TArray<struct FAthenaMatchStats>& InRecentMatches);
	class UAthenaMatchSetStatView* CreateMatchStatView(class UAthenaSeasonStats* StatSet, class FName Bucket);
	class UAthenaMatchStatView* CreateCurrentMatchStatView();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.AthenaProfileStatListWidgetBase
class UAthenaProfileStatListWidgetBase : public UCommonButton
{
public:
	uint8                                        Pad_1047[0x8];                                     
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatListWidgetBase");
		return Clss;
	}

	void OnStatChanged();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
};

// 0x58 (0x350 - 0x2F8)
// Class FortniteUI.AthenaProfileStatsBase
class UAthenaProfileStatsBase : public UCommonActivatablePanel
{
public:
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAthenaSeasonStats*>            StatSets;                                          // 0x300(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UAthenaSeasonStats*                    CurrentViewedStatSet;                              // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaMatchStatView*                  CurrentStatView;                                   // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CurrentPlaylist;                                   // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1048[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatsBase");
		return Clss;
	}

	void Setup(struct FUniqueNetIdRepl& InUniqueId);
	void PrevStatSet();
	void OnStatSetChanged();
	void OnStartFetchingData();
	void OnProfileLoaded(class UFortMcpProfileAthenaStats* ProfileAthenaStats);
	void OnNoData();
	void OnDataRecieved();
	int32 NumStatSets();
	void NextStatSet();
	void NextPlaylist();
	struct FUniqueNetIdRepl GetUniqueID();
	class UAthenaSeasonStats* GetCurrentStatSet();
	class FText GetCurrentPlaylistName();
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.AthenaProfileStatsRecentMatchesBase
class UAthenaProfileStatsRecentMatchesBase : public UCommonActivatablePanel
{
public:
	TArray<class UAthenaMatchStatView*>          RecentMatches;                                     // 0x2F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1049[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatsRecentMatchesBase");
		return Clss;
	}

	void Setup(struct FUniqueNetIdRepl& InUniqueId);
	void OnStartFetchingData();
	void OnRecentMatcheChanged();
	void OnProfileLoaded(class UFortMcpProfileAthenaStats* ProfileAthenaStats);
	void OnNoData();
	void OnDataRecieved();
	struct FUniqueNetIdRepl GetUniqueID();
	TArray<class UAthenaMatchStatView*> GetRecentMatches();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.AthenaProfileStatWidgetBase
class UAthenaProfileStatWidgetBase : public UCommonUserWidget
{
public:
	struct FGameplayTag                          Stat;                                              // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaProfileStatWidgetBase");
		return Clss;
	}

	void SetStatView(class UAthenaBaseStatView* InStatView, bool RespectParentStatView);
	void SetAsStat(struct FGameplayTag& InStat);
	void OnStatChanged();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	TArray<struct FStatGroupData> CreateWeaponGroupData(int32 MaxToReturn, bool bIncludeOtherCategory, bool bPercentages);
};

// 0x8 (0x130 - 0x128)
// Class FortniteUI.AthenaRemotePlayerViewModel
class UAthenaRemotePlayerViewModel : public UAthenaPlayerViewModel
{
public:
	class AFortPlayerControllerSpectating*       PlayerController;                                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaRemotePlayerViewModel");
		return Clss;
	}

};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.AthenaReplayBrowserEntryWidget
class UAthenaReplayBrowserEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_104C[0x8];                                     
	class UObject*                               ReplayBrowserEntryObject;                          // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserEntryWidget");
		return Clss;
	}

	void OnReplayBrowserEntryDataSet();
	class FText GetDateTimeText(const struct FDateTime& DateTime);
};

// 0x90 (0xB8 - 0x28)
// Class FortniteUI.AthenaReplayBrowserRowProxyInstance
class UAthenaReplayBrowserRowProxyInstance : public UObject
{
public:
	struct FAthenaReplayBrowserRowData           RowData;                                           // 0x28(0x90)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserRowProxyInstance");
		return Clss;
	}

};

// 0x28 (0x350 - 0x328)
// Class FortniteUI.AthenaReplayBrowserScreenBase
class UAthenaReplayBrowserScreenBase : public UFortActivatablePanel
{
public:
	TArray<class UAthenaReplayBrowserRowProxyInstance*> RowProxies;                                        // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_104D[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserScreenBase");
		return Clss;
	}

	void ShowDeleteInvalidDialog(class FText& Title, class FText& MESSAGE);
	void SaveAndRenameReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy, const class FString& NewReplayName);
	void RenameReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy, const class FString& NewReplayName);
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnSaveFailed(class FText& Reason);
	void OnRowsUpdated();
	void OnRenameFailed(class FText& Reason);
	void OnPlayFailed(class FText& Reason);
	void OnDeleteFailed(class FText& Reason);
	void OnActionStarted();
	void OnActionFinished();
	bool IsHandlingAction();
	bool DoesReplayFolderExist();
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void DeleteInvalidReplays();
	void BrowseToReplayFolder();
	bool AreExternalActionsOutstanding();
	bool AreAnyActionsOutstanding();
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaResourcesBase
class UAthenaResourcesBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaResourcesBase");
		return Clss;
	}

};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaScorePopWidgetBase
class UAthenaScorePopWidgetBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaScorePopWidgetBase");
		return Clss;
	}

	void OnNewScoreEarned(int32 NewScoreValue, class FText& NewScoreTypeText, int32 BigScoreThreshold);
	void HandleNewScoreEarned(int32 NewPoints, enum class EAthenaScoringEvent ScoreType);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaSeasonStatusWidget
class UAthenaSeasonStatusWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonStatusWidget");
		return Clss;
	}

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.AthenaSpectatorHitPointBarBase
class UAthenaSpectatorHitPointBarBase : public UCommonUserWidget
{
public:
	enum class EAthenaSpectatorHitPointBarType   BarType;                                           // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1051[0x3];                                     
	float                                        ValueCurrent;                                      // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueLast;                                         // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastToCurrentUpdateRate;                           // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDBNO;                                           // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1052[0x7];                                     
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorHitPointBarBase");
		return Clss;
	}

	void UpdateBars_BP();
	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void OnDBNOChanged_BP();
};

// 0x28 (0x298 - 0x270)
// Class FortniteUI.AthenaSpectatorNameplateBase
class UAthenaSpectatorNameplateBase : public UFortActorIndicatorWidget
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceToCameraOffsetScale;                       // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinZOffset;                                        // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxZOffset;                                        // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FarFromCameraThreshold;                            // 0x284(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                WeaponIcon;                                        // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                WeaponBackground;                                  // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorNameplateBase");
		return Clss;
	}

	void UpdateStateFromDistance(float DistanceToCamera);
	void TickDistanceToCamera();
	void SetTeamNumber(int32 TeamNumber);
	void SetTeamColor(const struct FLinearColor& TeamColor);
	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void RefreshCurrentPawn();
	void PlayerStateChanged();
	void PlayerNameChanged(class AFortPlayerStateAthena* InPlayerState, const class FString& InPlayerName);
	void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
};

// 0x60 (0x298 - 0x238)
// Class FortniteUI.AthenaSpectatorNameplateLayerBase
class UAthenaSpectatorNameplateLayerBase : public UFortHUDElementWidget
{
public:
	TSubclassOf<class UAthenaSpectatorNameplateBase> NameplateWidgetClass;                              // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1053[0x58];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorNameplateLayerBase");
		return Clss;
	}

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void RemoveNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget);
	void OnPlayerBecameRelevant(class AFortPlayerState* PlayerState);
	void OnPlayerBecameIrrelevant(class AFortPlayerState* PlayerState);
	void AddNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget);
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.AthenaSpectatorPlayerListEntryWidget
class UAthenaSpectatorPlayerListEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_1054[0x8];                                     
	class UAthenaSpectatorPlayerListRowData*     PlayerListRowData;                                 // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorPlayerListEntryWidget");
		return Clss;
	}

	void OnEntryDataSet();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.AthenaSpectatorPlayerListScreenBase
class UAthenaSpectatorPlayerListScreenBase : public UCommonUserWidget
{
public:
	TArray<class UAthenaSpectatorPlayerListRowData*> RowDataArray;                                      // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorPlayerListScreenBase");
		return Clss;
	}

	void UpdateListUI();
	void OnPlayerDied(class AFortPlayerState* NewlyDeadPlayer);
	void OnPlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void OnPlayerBecameIrrelevant(class AFortPlayerState* NewlyIrrelevantPlayer);
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void ClearPlayers();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.AthenaSpectatorScoreboardEntryWidget
class UAthenaSpectatorScoreboardEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_1055[0x8];                                     
	class UAthenaSpectatorScoreboardRowData*     ScoreboardRowData;                                 // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorScoreboardEntryWidget");
		return Clss;
	}

	void OnEntryDataSet();
};

// 0x80 (0x290 - 0x210)
// Class FortniteUI.AthenaSpectatorScoreboardScreenBase
class UAthenaSpectatorScoreboardScreenBase : public UCommonUserWidget
{
public:
	TArray<class UAthenaSpectatorScoreboardRowData*> RowDataArray;                                      // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bUseBroadcastScoreboard;                           // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScoreboardSortMethod             CurrentSortMethod;                                 // 0x221(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1057[0x6];                                     
	UMulticastDelegateProperty_                  OnSortMethodChanged;                               // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        TimeBetweenTicks;                                  // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1058[0x54];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorScoreboardScreenBase");
		return Clss;
	}

	void UpdateRows();
	void UpdateRowFromPlayerState(class AFortPlayerState* PlayerState);
	void UpdateListUI(bool bResetFocus);
	void SetSortMethod(enum class EScoreboardSortMethod InSortMethod);
	bool IsMapWidgetLocationVisible(struct FVector2D& MapWidgetLocation);
	enum class EScoreboardSortMethod GetNextSortMethod();
};

// 0xA0 (0x3C8 - 0x328)
// Class FortniteUI.AthenaStatsScreenBase
class UAthenaStatsScreenBase : public UFortActivatablePanel
{
public:
	class UCommonTabListWidget*                  StatsTabList;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentPlaylistId;                                 // 0x330(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasLastQuerySuccessful;                           // 0x334(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105A[0x93];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaStatsScreenBase");
		return Clss;
	}

	void OnTabSelected(class FName TabName);
	void OnQueryStarted();
	void OnQueryFinished(bool bWasSuccessful);
	class FString GetWinsTag();
	class FString GetThirdTierPlaceTag();
	int32 GetStatValue(const class FString& BaseGameplayTag);
	class FString GetStatGameplayTag(const class FString& BaseStatName);
	class FString GetSecondTierPlaceTag();
	class FText GetLastUpdateTime();
	class FText FormatStatValueAsElapsedTime(struct FTimespan& ValueAsTimespan);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaTeamAliveCountBase
class UAthenaTeamAliveCountBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_105C[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamAliveCountBase");
		return Clss;
	}

	void SetTeamSlotData(int32 TeamIdx, struct FAthenaTeamCountSlotData& TeamSlotData);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.AthenaTeamScoreWidgetBase
class UAthenaTeamScoreWidgetBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerStateAthena*                CurrPlayerState;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GoalScore;                                         // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PreviousScore;                                     // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamScoreWidgetBase");
		return Clss;
	}

	void OnScoreChanged(int32 Score);
	void OnPlacementChanged(int32 Placement);
	void HandleSpectatingChanged(class AFortPlayerStateAthena* SpectatingTarget);
	void HandleScoreChanged(int32 Score);
	void HandlePlacementChanged(int32 Placement);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaTimeWidgetBase
class UAthenaTimeWidgetBase : public UFortHUDElementWidget
{
public:
	bool                                         bIsDisplaying;                                     // 0x238(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105D[0x3];                                     
	float                                        CachedFinalCountdownTime;                          // 0x23C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          UpdateTimerHandle;                                 // 0x240(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            TimeText;                                          // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTimeWidgetBase");
		return Clss;
	}

	void UpdateTimeText();
	void StopTimeDisplay();
	void StartTimeDisplay();
	void OnStopTimeDisplay();
	void OnStartTimeDisplay();
	void HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaTravelLogFormatting
class UAthenaTravelLogFormatting : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTravelLogFormatting");
		return Clss;
	}

	bool ShouldDisplayText(struct FAthenaTravelLogEntry& Entry);
	bool IsTravelLogTextDisplayEnabled();
	class FText FormatTravelLogEntry(class UObject* WorldContextObject, struct FAthenaTravelLogEntry& Entry);
};

// 0x48 (0x280 - 0x238)
// Class FortniteUI.AthenaTrickFeedBase
class UAthenaTrickFeedBase : public UFortHUDElementWidget
{
public:
	class UAthenaPlayerViewModel*                VM;                                                // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1060[0x3C];                                    
	bool                                         bTrickStarted;                                     // 0x27C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1061[0x3];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTrickFeedBase");
		return Clss;
	}

	void UpdateScore(int32 TotalScore);
	void UpdateMultiplier(int32 Multiplier);
	void UpdateAirDistanceHeight(float AirTime, float Distance, float Height);
	void TrickStarted();
	void TrickFailed();
	void TrickComplete();
	void BindToModel(class UAthenaPlayerViewModel* ViewModel);
	void AddTrick(enum class EVehicleTrickType TrickType, class FText& TrickName);
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaWinConditionMsgBase
class UAthenaWinConditionMsgBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1063[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaWinConditionMsgBase");
		return Clss;
	}

	void OnWinConditionMsgEvent(class FText& MESSAGE, enum class EAthenaWinConditionMsgType MsgType);
	void HandleWinConditionMsgDisplay(enum class EAthenaWinConditionMsgType MsgType);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaWinnersList
class UAthenaWinnersList : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaWinnersList");
		return Clss;
	}

	void OnWinnersAnnounced(struct FAthenaWinnerInfo& WinnerInfo);
};

// 0x50 (0x3A0 - 0x350)
// Class FortniteUI.BacchusButton
class UBacchusButton : public UBacchusHUDElement
{
public:
	enum class EButtonClickMethod                ClickMethod;                                       // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x351(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1064[0x2];                                     
	float                                        ButtonSize;                                        // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ButtonDisplayScale;                                // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1065[0x4];                                     
	class FText                                  ButtonSizeName;                                    // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ButtonDisplayScaleName;                            // 0x378(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UButton*                               InternalButton;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1066[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusButton");
		return Clss;
	}

	void SetButtonSprite(class UPaperSprite* NewSprite);
	void SetButtonSize(float NewButtonSize);
	void SetButtonDisplayScale(float NewDisplayScale);
	void OnClicked();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.BacchusDPICustomScalingRule
class UBacchusDPICustomScalingRule : public UDPICustomScalingRule
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusDPICustomScalingRule");
		return Clss;
	}

};

// 0x88 (0x380 - 0x2F8)
// Class FortniteUI.BacchusHUDLayoutToolPanel
class UBacchusHUDLayoutToolPanel : public UCommonActivatablePanel
{
public:
	class UHUDLayoutToolButtonLayer*             ButtonLayer;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHUDLayoutToolPanZoomWidget*           ZoomWidget;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Background;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBackgroundColors                     CombatColors;                                      // 0x310(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBackgroundColors                     BuildColors;                                       // 0x340(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             OpenPanelOffset;                                   // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              BackgroundMID;                                     // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusHUDLayoutToolPanel");
		return Clss;
	}

	void OnBuildMode(bool bNewlyInBuildMode);
};

// 0x0 (0x350 - 0x350)
// Class FortniteUI.BacchusQuickbar
class UBacchusQuickbar : public UBacchusHUDElement
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusQuickbar");
		return Clss;
	}

};

// 0x38 (0x388 - 0x350)
// Class FortniteUI.BacchusQuickbarComboSlot
class UBacchusQuickbarComboSlot : public UBacchusHUDElement
{
public:
	enum class EComboSlotType                    SlotType;                                          // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1067[0x3];                                     
	int32                                        SlotIndex;                                         // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SlotTypeName;                                      // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SlotIndexName;                                     // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusQuickbarComboSlot");
		return Clss;
	}

	void SetQuickbarType(int32 NewType);
	void Refresh();
	enum class EFortQuickBars GetQuickbarType();
};

// 0x30 (0x238 - 0x208)
// Class FortniteUI.CarmineHUDBase
class UCarmineHUDBase : public UUserWidget
{
public:
	uint8                                        Pad_1068[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CarmineHUDBase");
		return Clss;
	}

	void OnBossHealthBarChanged(struct FAthenaBossHealthData& BossData);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.CarmineUIExtenderBase
class UCarmineUIExtenderBase : public UFortGameUIExtenderAthena
{
public:
	bool                                         bShowGoToBossCommand;                              // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1069[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CarmineUIExtenderBase");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class FortniteUI.CMSContext
class UCMSContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_106A[0x68];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CMSContext");
		return Clss;
	}

	void MarkNewsAsViewed();
	bool IsNewNewsAvailable();
	struct FAthenaNews GetLatestNews();
	struct FAthenaNewsEntry GetLatestEmergencyNotice();
};

// 0x48 (0x160 - 0x118)
// Class FortniteUI.CommonTagVisibilityWidget
class UCommonTagVisibilityWidget : public UContentWidget
{
public:
	struct FGameplayTagContainer                 HUDElementTag;                                     // 0x118(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_106B[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTagVisibilityWidget");
		return Clss;
	}

	void OnVisibilitySetEvent(enum class ESlateVisibility InVisibility);
	void Initialize(class ULocalPlayer* OwningLocalPlayer, class APlayerController* OwningPlayerController);
	void HandleOnHUDResetToDefaults();
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.EmergencyNoticeBase
class UEmergencyNoticeBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmergencyNoticeBase");
		return Clss;
	}

	void ShowNotice(class FText& Title, class FText& Body);
	void HideNotice();
};

// 0x38 (0x60 - 0x28)
// Class FortniteUI.ReportablePlayerInfo
class UReportablePlayerInfo : public UObject
{
public:
	uint8                                        Pad_106C[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReportablePlayerInfo");
		return Clss;
	}

};

// 0x38 (0x8C8 - 0x890)
// Class FortniteUI.FeedbackReportablePlayerBase
class UFeedbackReportablePlayerBase : public UCommonButton
{
public:
	uint8                                        Pad_106D[0x8];                                     
	class FString                                DebugName;                                         // 0x898(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReportablePlayerInfo*                 PlayerInfo;                                        // 0x8A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Header;                                  // 0x8B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_SecondaryInfoText;                       // 0x8B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_SecondayInfoArea;                    // 0x8C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FeedbackReportablePlayerBase");
		return Clss;
	}

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
};

// 0x80 (0x3A8 - 0x328)
// Class FortniteUI.FeedbackReportPlayerBase
class UFeedbackReportPlayerBase : public UFortActivatablePanel
{
public:
	TArray<class UReportablePlayerInfo*>         ReportablePlayers;                                 // 0x328(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UPlayerReportReasonInfo*>       ReportReasons;                                     // 0x338(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UReportablePlayerInfo*                 SelectedPlayer;                                    // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerReportReasonInfo*               SelectedReportReason;                              // 0x350(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OptionalReportReasonLength;                        // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayerEntries;                                  // 0x35C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Cancel;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Send;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_106F[0x8];                                     
	class UCommonListView*                       ListView_ReportablePlayers;                        // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_ReportReasons;                            // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_ReasonField;                          // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMultiLineEditableText*                MultiLineEditableText_ReasonField;                 // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CharCount;                                    // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FeedbackReportPlayerBase");
		return Clss;
	}

	void OnPopulateView(enum class EPlayerReportingStep CurrentStep);
	void OnListViewSelectionMade(enum class EPlayerReportingStep ReportingStep, class FText& SelectedText);
	void OnFeedbackSentCallback(bool Succeeded);
	void HandleTabClicked(enum class EPlayerReportingStep ClickedStep);
	void HandleMessageChanged(class FText& Text);
	void HandleBackAction();
	void DynamicHandleReportReasonSelected(class UObject* SelectedItem);
	void DynamicHandlePlayerSelected(class UObject* SelectedItem);
	void CloseDialog();
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.PlayerReportReasonInfo
class UPlayerReportReasonInfo : public UObject
{
public:
	uint8                                        Pad_1070[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerReportReasonInfo");
		return Clss;
	}

};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FeedbackReportPlayerReasonBase
class UFeedbackReportPlayerReasonBase : public UCommonButton
{
public:
	uint8                                        Pad_1071[0x8];                                     
	class UPlayerReportReasonInfo*               ReportReason;                                      // 0x898(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Header;                                  // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FeedbackReportPlayerReasonBase");
		return Clss;
	}

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
};

// 0x30 (0x8C0 - 0x890)
// Class FortniteUI.FortAbilitiesPageTileBase
class UFortAbilitiesPageTileBase : public UCommonButton
{
public:
	class UCommonWidgetSwitcher*                 SwitcherAbilityBindingSwitcher;                    // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindAbilityKeybind;                             // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindAbilityKeybindCombo1;                       // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindAbilityKeybindCombo2;                       // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        QuickBarSlot;                                      // 0x8B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1072[0x4];                                     
	class UFortInputData*                        InputData;                                         // 0x8B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAbilitiesPageTileBase");
		return Clss;
	}

	void UpdateGamepadKeyBindingText();
};

// 0x50 (0x78 - 0x28)
// Class FortniteUI.FortAbilitySystemContext
class UFortAbilitySystemContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1074[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAbilitySystemContext");
		return Clss;
	}

	void RemoveDelegatesFromWidget(class UWidget* Widget);
	void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, UDelegateProperty_ Callback);
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
};

// 0xC8 (0x3F0 - 0x328)
// Class FortniteUI.FortAccountLinkingWindow
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1075[0x70];                                    
	class UCommonWidgetSwitcher*                 Switcher_Main;                                     // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBackgroundBlur*                       HaveEpicAccountBlur;                               // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBackgroundBlur*                       SkipSignInBlur;                                    // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                 Switcher_NoThanks;                                 // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCircularThrobber*                     Throbber_LoginDelay;                               // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Signup;                                     // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Login;                                      // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoThanks;                                   // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInSignup;                           // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInLogin;                            // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInNoThanks;                         // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAccountLinkingWindow");
		return Clss;
	}

	void HandleSkipSignUpClicked();
	void HandleSkipNoThanksClicked();
	void HandleSkipLoginClicked();
	void HandleSignupClicked();
	void HandleNoThanksClicked();
	void HandleLoginClicked();
	void FortNewPlatformReceipt__DelegateSignature();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortAccountNotFound
class UFortAccountNotFound : public UCommonUserWidget
{
public:
	uint8                                        Pad_1076[0x10];                                    
	class URichTextBlock*                        Text_Desc;                                         // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Back;                                       // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Web;                                        // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAccountNotFound");
		return Clss;
	}

};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortOptionsTab
class UFortOptionsTab : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTabSettingChanged;                               // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UCommonListView*                       TabListView;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESettingTab                       TabType;                                           // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1077[0x7];                                     
	TArray<class UFortSettingInfo*>              TabSettingsData;                                   // 0x230(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOptionsTab");
		return Clss;
	}

	void UpdateOptionsTab();
	void UpdateOptions(bool UpdateQuality);
	bool IsXboxPlatform();
	bool IsSwitchPlatform();
	bool IsPS4Platform();
	bool IsAthena();
	void ConstructSettingList();
	void CenterOnTab();
};

// 0x8 (0x248 - 0x240)
// Class FortniteUI.FortAccountOptions
class UFortAccountOptions : public UFortOptionsTab
{
public:
	uint8                                        Pad_1078[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAccountOptions");
		return Clss;
	}

	void SetRefundRequestText(int32 RefundsRemaining, int32 TotalRefunds, int32 DaysToRefund);
	void SetPrivacySettings(struct FMcpPrivacySettings& NewPrivacySettings);
	void SetCanReceiveGifts(bool bInCanReceiveGifts);
	void SaveSettingsToMcp();
	bool CanLocalPlayerReceiveGifts();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortAccountStatsContext
class UFortAccountStatsContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAccountStatsContext");
		return Clss;
	}

	bool CanShowAccountStats();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortAccountWidgetBase
class UFortAccountWidgetBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_107C[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAccountWidgetBase");
		return Clss;
	}

	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result);
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	struct FAthenaSeasonBannerLevel GetSeasonBannerInfo(int32 Level);
	bool GetNextSeasonReward(struct FFortItemQuantityPair* Reward, int32* RewardLevel);
	bool GetNextSeasonChaseReward(struct FFortItemQuantityPair* Reward, int32* RewardLevel, int32 StartingLevel);
};

// 0x28 (0x350 - 0x328)
// Class FortniteUI.FortActivatableVideoPanel
class UFortActivatableVideoPanel : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnMediaPlayerEndReached;                           // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAutoPlayOnActivated;                              // 0x338(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowSkipping;                                    // 0x339(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_107F[0x6];                                     
	class UFortVideoPlayerWidget*                VideoPlayerWidget;                                 // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Skip;                                       // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivatableVideoPanel");
		return Clss;
	}

	bool StreamVideo(const class FString& VideoURL);
	bool LoadVideo(class FName VideoID);
};

// 0x50 (0x168 - 0x118)
// Class FortniteUI.FortActorCanvas
class UFortActorCanvas : public UPanelWidget
{
public:
	struct FGameplayTagContainer                 DefaultHUDElementTags;                             // 0x118(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1080[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActorCanvas");
		return Clss;
	}

	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget* Indicator);
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.FortActorCanvasSlot
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAutoRemove;                                    // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1081[0xD];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActorCanvasSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetCanAutoRemove(bool bAllowAutoRemove);
};

// 0x8 (0x898 - 0x890)
// Class FortniteUI.FortAlterationButtonWidget
class UFortAlterationButtonWidget : public UCommonButton
{
public:
	class UFortAlterationInfo*                   AlterationInfo;                                    // 0x890(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationButtonWidget");
		return Clss;
	}

	void Setup(class UFortAlterationInfo* InAlterationInfo);
	void OnSetup();
	class UFortAlterationInfo* GetAlterationInfo();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortAlterationModOptinScreenBase
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanel
{
public:
	class UFortItem*                             ItemToOptin;                                       // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1082[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationModOptinScreenBase");
		return Clss;
	}

	void SetupItem(class UFortItem* Item);
	void RequestClose(bool bCancelled);
	void OnSetupItem();
	void OnItemConversionComplete();
	void ConvertItemAlterations();
};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.FortAlterationModScreenBase
class UFortAlterationModScreenBase : public UFortActivatablePanel
{
public:
	class UFortAlterationsWidget*                AlterationsToEdit;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAlterationOptionsBase*            AlterationSlotOptions;                             // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             ItemInspectionMainItemDetailsHostPanel;            // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             AlterationsExtraDetailsPanel;                      // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x350(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortAlterableItem>     AlterableItem;                                     // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAlterationOption*                 CurrentAlterationOptionInternal;                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1084[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationModScreenBase");
		return Clss;
	}

	void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);
	void RefreshItemAndAlterationsBP();
	void OnItemSlotChanged(bool SelectedSlot);
	void OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption);
	void OnAlterationModificationSucess(int32 ModifiedSlotIndex);
	void OnAlterationModificationStarted();
	void OnAlterationModificationCompleted();
	void HandleBackAction(bool* bPassThrough);
	void ConfirmSelection();
	void CancelSelection();
	bool AreIngredientRequirementsMent(TArray<struct FFortItemQuantityPair>& RequiredIngredients);
};

// 0x48 (0x8D8 - 0x890)
// Class FortniteUI.FortAlterationOption
class UFortAlterationOption : public UCommonButton
{
public:
	uint8                                        Pad_1086[0x8];                                     
	struct FAlterationOption                     AlterationOption;                                  // 0x898(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1087[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationOption");
		return Clss;
	}

	void Setup(struct FAlterationOption* InAlterationOption, enum class EFortAlterationOptionType InAlterationOptionType);
	void OnSetup();
	TArray<struct FFortItemQuantityPair> GetRequiredIngredients();
	float GetNextPipCount(float MaxPipCount);
	float GetCurrentPipCount(float MaxPipCount);
	enum class EFortAlterationOptionType GetAlterationOptionType();
	class UFortAlterationItemDefinition* GetAlterationDefinition();
};

// 0xA8 (0x2B8 - 0x210)
// Class FortniteUI.FortAlterationOptionsBase
class UFortAlterationOptionsBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_108B[0x10];                                    
	TSubclassOf<class UFortAlterationOption>     AlterationOptionClass;                             // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    AlterationOptionButtons;                           // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_108C[0x20];                                    
	class UFortAlterableItem*                    Item;                                              // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SlotIndex;                                         // 0x258(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpgradeOptionExists;                              // 0x25C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_108D[0x3];                                     
	struct FAlterationOption                     UpgradeOption;                                     // 0x260(0x38)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FAlterationOption>             RespecOptions;                                     // 0x298(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_108E[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationOptionsBase");
		return Clss;
	}

	void ProcessAlterationOptions();
	void OnItemChanged();
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	bool IsValidAlterationSlot();
	void HandleAlterationsOptionSelected(class UCommonButton* AlterationOptionButton, int32 GroupIndex);
	void HandleAlterationsOptionHovered(class UCommonButton* AlterationOptionButton, int32 GroupIndex);
	bool DoAlterationOptionsExist(enum class EFortAlterationOptionType OptionType);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAlterationInfo
class UFortAlterationInfo : public UObject
{
public:
	class UFortItem*                             CorrespondingItem;                                 // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SlotIndex;                                         // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_108F[0x4];                                     
	class UFortAlterationItemDefinition*         AlterationDef;                                     // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RequiredMinLevel;                                  // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUpgrade;                                        // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1090[0x3];                                     
	int32                                        CurrentItemLevel;                                  // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFreeAlterationSlot;                               // 0x4C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUnlockedByEvolution;                              // 0x4D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1091[0x2];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationInfo");
		return Clss;
	}

	bool IsFreeAlterationChoice();
	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int32 GetSlotIndex();
	int32 GetRequiredLevel();
	enum class EFortRarity GetRarity();
	float GetCurrentPipCount(float MaxPips);
	class UFortItem* GetCorrespondingItem();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};

// 0x78 (0x288 - 0x210)
// Class FortniteUI.FortAlterationsWidget
class UFortAlterationsWidget : public UCommonUserWidget
{
public:
	class UFortItem*                             Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAlterationWidgetState        State;                                             // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1095[0x7];                                     
	class UFortItem*                             ItemToCompareWith;                                 // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseButtons;                                       // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1096[0x37];                                    
	class UCommonTextBlock*                      EmptyText;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1097[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationsWidget");
		return Clss;
	}

	void SetupInteractionEvents(class UFortAlterationButtonWidget* Buttion);
	void SetState(enum class EFortAlterationWidgetState InState);
	void SetItemToCompareWith(class UFortItem* InItem);
	void SetItem(class UFortItem* InItem, bool bInPreviewNewAlterations, bool bIntroAlterations);
	void ProcessAlterations();
	void OnStateChanged();
	void OnItemToCompareWithChanged();
	void OnItemChanged(bool bIntroAlterations);
	void OnGenerateAlteration(class UFortAlterationInfo* AlterationInfo);
	void OnFocusFirstItem();
	void OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex);
	void HandleAlterationsSlotSelected(class UCommonButton* InAlterationButton, int32 SelectedIndex);
	void HandleAlterationsSlotHovered(class UCommonButton* InAlterationButton, int32 SelectedIndex);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortAlterationWidget
class UFortAlterationWidget : public UCommonUserWidget
{
public:
	float                                        MaxPipCount;                                       // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1098[0x4];                                     
	class UFortAlterationInfo*                   AlterationInfo;                                    // 0x218(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationWidget");
		return Clss;
	}

	void Setup(class UFortAlterationInfo* InAlterationInfo);
	void OnSetup();
	class UFortAlterationInfo* GetAlterationInfo();
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortAnnouncementWidget
class UFortAnnouncementWidget : public UCommonUserWidget
{
public:
	class AFortClientAnnouncement*               BoundAnnouncement;                                 // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnnouncementWidget");
		return Clss;
	}

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void BindUpdateEvents(class AFortClientAnnouncement* Announcement);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortArmoryScreen
class UFortArmoryScreen : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortArmoryScreen");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class FortniteUI.FortAsyncAction_LoadCurrentSubgameProfiles
class UFortAsyncAction_LoadCurrentSubgameProfiles : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 PlayerController;                                  // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_LoadCurrentSubgameProfiles");
		return Clss;
	}

	class UFortAsyncAction_LoadCurrentSubgameProfiles* LoadCurrentSubgameProfiles(class AFortPlayerController* PlayerController);
};

// 0x20 (0x50 - 0x30)
// Class FortniteUI.FortAsyncAction_SetUIState
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnStateEntered;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_109A[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_SetUIState");
		return Clss;
	}

	class UFortAsyncAction_SetUIState* SetUIState(class UObject* InWorldContextObject, enum class EFortUIState DesiredState);
};

// 0x130 (0x160 - 0x30)
// Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x48(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_ShowAdvancedLatentConfirmation_NUI");
		return Clss;
	}

	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ShowAdvancedLatentActionConfirmation(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x138 (0x168 - 0x30)
// Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x48(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_109C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_ShowConfirmation_NUI");
		return Clss;
	}

	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, bool bShowConfirm, bool bShowDecline, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_CustomInput(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, class FName ConfirmAction, class FName DeclineAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x320 (0x350 - 0x30)
// Class FortniteUI.FortAsyncAction_ShowPartyDialog
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase
{
public:
	class UObject*                               WorldContextObject;                                // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x38(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x150(0x1F8)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_ShowPartyDialog");
		return Clss;
	}

	class UFortAsyncAction_ShowPartyDialog* ShowPartyMemberManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowPartyDialog* ShowPartyLeaderManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
};

// 0x50 (0x378 - 0x328)
// Class FortniteUI.FortAthenaMatchmakingOptions
class UFortAthenaMatchmakingOptions : public UFortActivatablePanel
{
public:
	TSubclassOf<class UFortAthenaMatchmakingTile> TileItemClass;                                     // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            StandardGameModeBox;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            LTMGameModeBox;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         TeamFillButton;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         RankedButton;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    MatchmakingTileGroup;                              // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_109E[0x8];                                     
	struct FPlaylistFrontEndData                 RepresentedPlaylist;                               // 0x360(0x10)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_109F[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMatchmakingOptions");
		return Clss;
	}

	void UpdateMatchmakingButtonsBP(bool IsPartyLeader, bool IsMatchmaking, bool PlaylistSupportsPartySize, bool PlaylistIsDisabled, bool CanShowFill);
	void SetSquadFillText(bool InCurrentSquadFill);
	void SetRepresentedPlaylist(struct FPlaylistFrontEndData& PlaylistToRepresent);
	void SetOwningMatchmakingWidget(class UFortAthenaMatchmakingWidget* InOwningMatchmakingWidget);
	void RepresentedPlaylistChanged(struct FPlaylistFrontEndData& NewRepresentedPlaylist);
	void OnTileDoubleClicked(class UCommonButton* ButtonClicked);
	void HandlePlaylistNameChanged(class FName NewPlaylistName);
	void HandleInputTypeChanged(enum class ECommonInputType CurrentInputType);
	void HandleButtonGroupSelectionChanged(class UCommonButton* Button, int32 Index);
	void CloseMatchmakingOptions();
	void CanceledPlaylist();
	void AcceptedPlaylist();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortAthenaMatchmakingTile
class UFortAthenaMatchmakingTile : public UCommonButton
{
public:
	class UEpicCMSImage*                         GameModeImage;                                     // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPlaylistFrontEndData                 TilePlaylistData;                                  // 0x898(0x10)(Transient, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMatchmakingTile");
		return Clss;
	}

	void UpdateTileAvailability(bool Available);
	void TilePlaylistSetAsMatchmakingPlaylist();
	void SetTileSize(bool UseLargeSize);
	void SetDefaultImage();
	void PlaylistChanged(struct FPlaylistFrontEndData& PlaylistToRepresent);
};

// 0xC0 (0x2D0 - 0x210)
// Class FortniteUI.FortAthenaMatchmakingWidget
class UFortAthenaMatchmakingWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortMissionGenerator>     DefaultMissionGen;                                 // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentPlaylistName;                               // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylistAthena*                   CurrentPlaylistObj;                                // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentSquadFill;                                 // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A0[0x7];                                     
	class UWidget*                               SpinnerAndTextContainer;                           // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         PlayButton;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         CancelButton;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         StartMatchButton;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingHeaderText;                             // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingMessageText;                            // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         NewModeBorder;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A1[0x68];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMatchmakingWidget");
		return Clss;
	}

	void SetSquadFillText(bool InCurrentSquadFill, bool bHideFillOption);
	void PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist);
	void OnSetPlayButtonText(class FText& PlayButtonText);
	void OnSetCancelButtonText(class FText& CancelButtonText);
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void OnPlayButtonPressed();
	void OnCancelButtonPressed();
	void OnAvailablePlaylistsUpdated();
	int32 GetCurrentPartySize();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortAthenaNewsWidget
class UFortAthenaNewsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Title1;                                            // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body1;                                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image1;                                            // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Title2;                                            // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body2;                                             // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image2;                                            // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Title3;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body3;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image3;                                            // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNewsWidget");
		return Clss;
	}

};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.FortAthenaTabsScreenBase
class UFortAthenaTabsScreenBase : public UFortActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x328(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A3[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaTabsScreenBase");
		return Clss;
	}

	void ShowReplayBrowser();
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	bool CanShowSeasonShopTab();
	bool CanShowPrototypeTab(class FName TabNameID);
};

// 0x10 (0x218 - 0x208)
// Class FortniteUI.FortUserWidget
class UFortUserWidget : public UUserWidget
{
public:
	uint8                                        Pad_10A4[0x8];                                     
	bool                                         bConsumePointerInput;                              // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A5[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUserWidget");
		return Clss;
	}

	void AddStoreCheatMenu();
	void AddGrantCheatMenu(const class FString& TemplateId, const class FString& InstanceId);
};

// 0x18 (0x230 - 0x218)
// Class FortniteUI.FortAttributeList
class UFortAttributeList : public UFortUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem>    AttributeItemClass;                                // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A6[0x7];                                     
	class UVerticalBox*                          AttributeContainer;                                // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAttributeList");
		return Clss;
	}

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	TArray<struct FFortDisplayAttribute> SetData(TArray<struct FFortDisplayAttribute>& Data);
	void ClearPreviewData();
	void Clear();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortAttributeList_NUI
class UFortAttributeList_NUI : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem_NUI> AttributeItemClass;                                // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A8[0x7];                                     
	TArray<class UFortAttributeListItem_NUI*>    ShownAttributeWidgets;                             // 0x220(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10A9[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAttributeList_NUI");
		return Clss;
	}

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	void SetData(TArray<struct FFortDisplayAttribute>& Data);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void ClearPreviewData();
};

// 0xE8 (0x2F0 - 0x208)
// Class FortniteUI.FortAttributeListItem
class UFortAttributeListItem : public UUserWidget
{
public:
	bool                                         bHoverEnabled;                                     // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AB[0xE7];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAttributeListItem");
		return Clss;
	}

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	bool SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute, struct FFortDisplayAttribute* DeltaAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0xF8 (0x308 - 0x210)
// Class FortniteUI.FortAttributeListItem_NUI
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_10AC[0x8];                                     
	bool                                         bHoverEnabled;                                     // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AD[0x7];                                     
	struct FGameplayTag                          StatTag;                                           // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AE[0xE0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAttributeListItem_NUI");
		return Clss;
	}

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	void SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute);
	void PreviewStarted();
	void PreviewEnded();
	bool HasPreviewAttribute();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0x8 (0x358 - 0x350)
// Class FortniteUI.FortAutorunLockZone
class UFortAutorunLockZone : public UBacchusHUDElement
{
public:
	bool                                         bIsInZone;                                         // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAutorunLockEnabled;                             // 0x351(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10AF[0x6];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAutorunLockZone");
		return Clss;
	}

	void OnInZoneChanged(bool bNewIsInZone);
};

// 0x40 (0x158 - 0x118)
// Class FortniteUI.FortBangWrapper
class UFortBangWrapper : public UContentWidget
{
public:
	uint8                                        Pad_10B0[0x8];                                     
	enum class EFortBangSize                     Size;                                              // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x3];                                     
	struct FVector2D                             Offset;                                            // 0x124(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBangType                     BangType;                                          // 0x12C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B2[0x3];                                     
	class FName                                  TutorialNameID;                                    // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B3[0x1F];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBangWrapper");
		return Clss;
	}

	void SetBangVisibility(bool InVisible);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortBangWrapper_NUI
class UFortBangWrapper_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_10B6[0x8];                                     
	enum class EFortBangType                     BangType;                                          // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B7[0x7];                                     
	class FName                                  TutorialNameID;                                    // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBangWrapper_NUI");
		return Clss;
	}

	void UnregisterTutorialNameID();
	void SetTutorialNameID(class FName InTutorialNameID);
	void SetBangType(enum class EFortBangType NewBangType);
	void SetBangStateBP(bool bEnabled, int32 Count);
	void OnStopCallout();
	void OnStartCallout();
	void OnBangStateChanged(bool bEnabled, int32 Count);
};

// 0x70 (0x368 - 0x2F8)
// Class FortniteUI.FortBannerSelectorBase
class UFortBannerSelectorBase : public UCommonActivatablePanel
{
public:
	class UEditableText*                         BannerName;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BannerNameMaxLength;                               // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BA[0x4];                                     
	class UBorder*                               ErrorBorder;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ErrorText;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFilterHomeBaseNameWithOSS;                        // 0x318(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BB[0x4F];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBannerSelectorBase");
		return Clss;
	}

	void UpdateErrorText(class FText& ErrorMessageText);
	void OnHomebaseNameCommitSucceeded();
	void OnHomebaseNameCommitFailed();
	void IsPlayerNameValid(class FText& PlayerName, bool* OutIsValid, class FText* OutErrorText);
	bool HasIllegalChars(const class FString& NewBannerName);
	void HandleBannerNameChanged(class FText& Text);
	void CompleteHomebaseName();
	void CompleteHomebaseBannerSelection();
};

// 0x1A30 (0x1A58 - 0x28)
// Class FortniteUI.FortButtonStyle
class UFortButtonStyle : public UObject
{
public:
	struct FFortStateStyle                       NormalBase;                                        // 0x28(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalHovered;                                     // 0x378(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalPressed;                                     // 0x6C8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedBase;                                      // 0xA18(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedHovered;                                   // 0xD68(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedPressed;                                   // 0x10B8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       Disabled;                                          // 0x1408(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  ButtonPadding;                                     // 0x1758(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortMultiSizeFont                    Font;                                              // 0x17B8(0x210)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  CustomPadding;                                     // 0x19C8(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x1A28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x1A40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortButtonStyle");
		return Clss;
	}

	struct FMargin GetMarginBySizeFromMultiSizeMargin(struct FFortMultiSizeMargin& MultiSizeMargin, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySizeFromMultiSizeFont(struct FFortMultiSizeFont& MultiSizeFont, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySize(enum class EFortBrushSize Size);
	struct FMargin GetCustomPaddingBySize(enum class EFortBrushSize Size);
	struct FMargin GetButtonPaddingBySize(enum class EFortBrushSize Size);
	struct FSlateBrush GetBrushBySizeFromMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush, enum class EFortBrushSize Size);
};

// 0x5C8 (0x7E0 - 0x218)
// Class FortniteUI.FortBaseButton
class UFortBaseButton : public UFortUserWidget
{
public:
	uint8                                        Pad_10C2[0x8];                                     
	UMulticastDelegateProperty_                  EnabledChanged;                                    // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  SelectedChanged;                                   // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ButtonClicked;                                     // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortBangSize                     BangSize;                                          // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C3[0x3];                                     
	struct FVector2D                             BangOffset;                                        // 0x254(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBangType                     BangType;                                          // 0x25C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C4[0x3];                                     
	class FName                                  TutorialNameID;                                    // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C5[0x7];                                     
	TSubclassOf<class UFortButtonStyle>          Style;                                             // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBrushSize                    BrushSize;                                         // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C6[0x7];                                     
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelectable;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C7[0x7];                                     
	class FName                                  SelectionGroup;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleable;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClickable;                                        // 0x2C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x2C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10C8[0x51D];                                   

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBaseButton");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UFortButtonStyle> InStyle);
	void SetSelectionGroup(class FName InSelectionGroup);
	void SetSelected(bool InSelected);
	void SetHovered(bool InHovered);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetClickable(bool InClickable);
	void SetBrushSize(enum class EFortBrushSize InSize);
	void SetBangVisibility(bool bVisible);
	void OnButtonClicked();
	class UFortButtonStyle* GetStyle();
	int32 GetSelectionGroupIndex();
	bool GetSelected();
	struct FFortStateStyle GetCurrentStateStyle();
	struct FSlateFontInfo GetCurrentFont();
	struct FMargin GetCurrentCustomPadding();
	struct FMargin GetCurrentButtonPadding();
	void ForceClick();
};

// 0x8 (0x220 - 0x218)
// Class FortniteUI.FortBluGloCounter
class UFortBluGloCounter : public UFortUserWidget
{
public:
	uint8                                        Pad_10C9[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBluGloCounter");
		return Clss;
	}

	void OnBluGloQuantityChanged(int32 Quantity);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortBorderStyleList
class UFortBorderStyleList : public UCommonUserWidget
{
public:
	class FName                                  BordersPath;                                       // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBorderStyleList");
		return Clss;
	}

	TArray<TSoftClassPtr<class UCommonBorderStyle>> GetBorderStyles();
};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.FortBuildingInfoIndicatorWidget
class UFortBuildingInfoIndicatorWidget : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBuildingInfoIndicatorWidget");
		return Clss;
	}

	void SetKeyBindWidgetBoundAction(class UFortKeybindWidget* FortKeybindWidget, class FName ActionName, enum class EFortBuildingInteraction InteractionType);
};

// 0x18 (0x438 - 0x420)
// Class FortniteUI.FortButtonInternalWidget
class UFortButtonInternalWidget : public UButton
{
public:
	bool                                         IsClickable;                                       // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CB[0x17];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortButtonInternalWidget");
		return Clss;
	}

};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortCampaignMap
class UFortCampaignMap : public UCommonUserWidget
{
public:
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x210(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCampaignMap");
		return Clss;
	}

	void OnSwipeRight();
	void OnSwipeLeft();
	void OnShowPreviousPage();
	void OnShowNextPage();
};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortCapturePointWidget
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_10CE[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCapturePointWidget");
		return Clss;
	}

	void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, enum class ECaptureState CaptureState, enum class EFortTeam ControllingTeam);
};

// 0x18 (0x230 - 0x218)
// Class FortniteUI.FortChatContainer
class UFortChatContainer : public UFortUserWidget
{
public:
	bool                                         MinimizeEnabled;                                   // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x219(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x21A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CF[0x1];                                     
	float                                        ListFadeTime;                                      // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D0[0xC];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChatContainer");
		return Clss;
	}

	void SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost);
	void AttachChatWindowToNativeWidget();
};

// 0x48 (0x158 - 0x110)
// Class FortniteUI.FortChatWidget
class UFortChatWidget : public UNativeWidgetHost
{
public:
	bool                                         MinimizeEnabled;                                   // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x111(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x112(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D1[0x1];                                     
	float                                        ListFadeTime;                                      // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ThrottleChat;                                      // 0x11C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x3];                                     
	float                                        ThrottleTicketTime;                                // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThrottleTicketCount;                               // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChatEnteredEvent;                                // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUserListChanged;                                 // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChatWidget");
		return Clss;
	}

	void SetControllerActionBrush(const struct FSlateBrush& SlateBrush);
	void FocusChatEntry();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortCheatMenuFactory
class UFortCheatMenuFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatMenuFactory");
		return Clss;
	}

	void AddStoreCheatMenu(class UCommonUserWidget* Widget);
	void AddGrantCheatMenu(class UCommonUserWidget* Widget, const class FString& TemplateId, const class FString& InstanceId);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookGenericRewardWidget
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	uint8                                        bUpdateVisibilityBasedOnRewardExistence : 1;       // Mask : 0x1 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D4[0x3];                                     
	enum class ESlateVisibility                  VisibilityWhenNoRewardSpecified;                   // 0x214(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibilityWhenRewardSpecified;                     // 0x215(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D5[0x2];                                     
	class UFortCollectionBookRewardCardWidget*   RewardCardWidget;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookRewardStatus       RewardStatus;                                      // 0x220(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D6[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookGenericRewardWidget");
		return Clss;
	}

	void SetRewardStatus(enum class ECollectionBookRewardStatus Status);
	void SetRewards(struct FFortRewardInfo& Rewards);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	bool HasRewards();
	enum class ECollectionBookRewardStatus GetRewardStatus();
	void ClearRewards();
};

// 0x8 (0x318 - 0x310)
// Class FortniteUI.FortPopupMenu
class UFortPopupMenu : public UCommonPopupMenu
{
public:
	uint8                                        Pad_10D7[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPopupMenu");
		return Clss;
	}

};

// 0x8 (0x320 - 0x318)
// Class FortniteUI.FortCollectionBookItemPopupMenu
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu
{
public:
	uint8                                        Pad_10D8[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookItemPopupMenu");
		return Clss;
	}

	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	class UFortCollectionBookSlotWidget* GetHostWidget();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortCollectionBookOverviewWidget
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelected;                      // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClicked;                       // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortCollectionBookPage*               LastSelectedPage;                                  // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookCategory*           LastSelectedCategory;                              // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortCollectionBookCategory*>   CategoryObjectPool;                                // 0x240(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                       PageTreeViewWidget;                                // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookOverviewWidget");
		return Clss;
	}

	void OnDeactivated();
	void OnActivated();
};

// 0x0 (0x228 - 0x228)
// Class FortniteUI.FortCollectionBookPageCompletionRewardWidget
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageCompletionRewardWidget");
		return Clss;
	}

};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortCollectionBookPageDetailsWidget
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      PageCompletionText;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                  // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         RewardDetailsButton;                               // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPage*               DetailsPage;                                       // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x238(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x260(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageDetailsWidget");
		return Clss;
	}

	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x30 (0x8C0 - 0x890)
// Class FortniteUI.FortCollectionBookPageListWidget
class UFortCollectionBookPageListWidget : public UCommonButton
{
public:
	uint8                                        Pad_10DB[0x8];                                     
	class UCommonTextBlock*                      PageNameWidget;                                    // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               AvailableSlotsWidget;                              // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PageCompletionWidget;                              // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                AssociatedPageOrCategory;                          // 0x8B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExpanded;                                       // 0x8B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DC[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageListWidget");
		return Clss;
	}

	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
};

// 0x20 (0x2E8 - 0x2C8)
// Class FortniteUI.FortCollectionBookPicker
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	UMulticastDelegateProperty_                  OnSlotItemConfirmationCompleteEvent;               // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DF[0x8];                                     
	class UFortAccountItem*                      CurrentSlottedItem;                                // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPicker");
		return Clss;
	}

	void SlotItemConfirmationComplete(class UFortItem* CommittedItem, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemConfirmed__DelegateSignature(class UFortItem* ItemToSlot, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	class UFortAccountItem* GetCurrentSlottedItem();
};

// 0xC0 (0x3B8 - 0x2F8)
// Class FortniteUI.FortCollectionBookPrimaryPanel
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelectedDelegate;              // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClickedDelegate;               // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookSectionClickedDelegate;            // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SummonInfoPanelActionRowHandle;                    // 0x338(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookOverviewWidget*     OverviewWidget;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       SectionTileViewWidget;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookPrimaryNavTarget   CurrentNavTarget;                                  // 0x358(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E0[0x7];                                     
	class UFortCollectionBookSection*            LastClickedSection;                                // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E1[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPrimaryPanel");
		return Clss;
	}

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E2[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardDetailInspectWidget");
		return Clss;
	}

	void SetAssociatedLevel(int32 Level);
	void OnXPRequiredChanged(int32 NewXPRequired);
	int32 GetXPRequired();
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	TSoftClassPtr<class UFortCollectionBookProgressionRewardDetailInspectWidget> RewardWidgetClass;                                 // 0x328(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x350(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumRewardsToShow;                                  // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E4[0x4];                                     
	class UVerticalBox*                          RewardBoxWidget;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          MajorRewardBoxWidget;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsModalWidget");
		return Clss;
	}

	void OnSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct);
	void OnInputMethodChanged(bool bUsingGamepad);
	void InspectItemBP(class UFortItem* Item);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget* NextRewardWidget;                                  // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsPreviewWidget");
		return Clss;
	}

};

// 0x10 (0x238 - 0x228)
// Class FortniteUI.FortCollectionBookProgressionRewardWidget
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DisplayNameWidget;                                 // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardWidget");
		return Clss;
	}

	void SetAssociatedLevel(int32 Level);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortCollectionBookProgressWidget
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	int32                                        CachedXPLevel;                                     // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedXPCompletionPct;                             // 0x214(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookProgressionRewardsModalWidget> RewardDetailsModalWidgetClass;                     // 0x218(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                   // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         DetailsButtonWidget;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageDetailsWidget*  PageDetailsWidget;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                // 0x268(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressWidget");
		return Clss;
	}

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookLevelChanged(int32 NewLevel);
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RecycleResultsWidget;                              // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E5[0x7];                                     
	class UFortAccountItem*                      ItemToRecycle;                                     // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRecycleSlotResultsWidget");
		return Clss;
	}

	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);
};

// 0x80 (0x290 - 0x210)
// Class FortniteUI.FortCollectionBookRewardCardWidget
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnDisplayedItemChangedEvent;                       // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               MultiItemRewardOverlay;                            // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ChoiceRewardOverlay;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCardInterval;                                // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x23C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x23D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E6[0x2];                                     
	struct FFortRewardInfo                       RepresentedRewards;                                // 0x240(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortItem*>                     DummyItems;                                        // 0x270(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          UpdateCardTimer;                                   // 0x280(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E7[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRewardCardWidget");
		return Clss;
	}

	void SetRewards(struct FFortRewardInfo& Rewards);
	void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);
	bool HasRewards();
	void ClearRewards();
};

// 0x50 (0x348 - 0x2F8)
// Class FortniteUI.FortCollectionBookRewardModalWidget
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      TitleWidget;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ProgressTextWidget;                                // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E8[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRewardModalWidget");
		return Clss;
	}

};

// 0x58 (0x280 - 0x228)
// Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButton*                         RewardDetailsButton;                               // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x230(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x258(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x270(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookSection*            Section;                                           // 0x278(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionCompletionRewardWidget");
		return Clss;
	}

	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x1B8 (0x4B0 - 0x2F8)
// Class FortniteUI.FortCollectionBookSectionPanel
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSectionCloseRequest;                             // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreviewXPChangeEvent;                            // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      SectionNameTextWidget;                             // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSlotView*           SlotViewWidget;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPicker*             SlotItemPicker;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ContextOverlayWidget;                              // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ContextTextWidget;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                               // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ItemAcquisitionSourceContainerWidget;              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDescWidget;                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDesc2Widget;                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ResearchRecruitUnslotContainerWidget;              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PersonRecruitUnavailableMessageWidget;             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemResearchUnavailableMessageWidget;              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      UnslotUnavailableMessageWidget;                    // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x380(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CloseActionRowHandle;                              // 0x390(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SlotItemActionRowHandle;                           // 0x3A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectItemActionRowHandle;                        // 0x3B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectCollectionBookItemActionRowHandle;          // 0x3C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectPreviewItemActionRowHandle;                 // 0x3D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   OpenPickerActionRowHandle;                         // 0x3E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   LogAllowedItemsActionRowHandle;                    // 0x3F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ResearchItemActionRowHandle;                       // 0x400(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   RecruitActionRowHandle;                            // 0x410(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   UnslotItemActionRowHandle;                         // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ECollectionBookSectionNavTarget   CurrentNavTarget;                                  // 0x430(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EB[0x7];                                     
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x438(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSummonedInspectPanel;                          // 0x440(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EC[0x3];                                     
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle;                // 0x444(0x4)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnShowItemDetailEvent;                             // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSlotItemConfirmEvent;                            // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnResearchItemConfirmEvent;                        // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnUnslotItemConfirmEvent;                          // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnInspectItemEvent;                                // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_10ED[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionPanel");
		return Clss;
	}

	void OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnUnslotItemActionExecuted(bool* bPassThrough);
	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotPickerItemSelected(class UFortItem* SelectedItem);
	void OnSlotPickerItemHovered(class UFortItem* HoveredItem);
	void OnSlotItemConfirmationCompleted(class UFortItem* SelectedItem, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotButtonCommitted(class UFortCollectionBookSlotButton* SlotButton);
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnResearchItemOperationComplete(class UFortAccountItem* NewItem, const class FString& TemplateId);
	void OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, const struct FFortCollectionBookSlotData& SlotData);
	void OnPurchaseItemActionExecuted(bool* bPassThrough);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);
	void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x78 (0x908 - 0x890)
// Class FortniteUI.FortCollectionBookSectionTileWidget
class UFortCollectionBookSectionTileWidget : public UCommonButton
{
public:
	uint8                                        Pad_10EF[0x8];                                     
	TSoftClassPtr<class UFortCollectionBookSlotWidget> SlotWidgetClass;                                   // 0x898(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               SlotWidgetPadding;                                 // 0x8C0(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              SlotWidgetHorizontalAlignment;                     // 0x8D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                SlotWidgetVerticalAlignment;                       // 0x8D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F0[0x2];                                     
	int32                                        MaxNumSlotsSupported;                              // 0x8D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SlotBoxWidget;                                     // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      SectionNameWidget;                                 // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget;                               // 0x8E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x8F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotWidget*> SlotWidgets;                                       // 0x8F8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionTileWidget");
		return Clss;
	}

	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState);
	void OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnItemSlotted(class UFortAccountItem* ItemSlotted, class FName SlotId);
};

// 0x8 (0x898 - 0x890)
// Class FortniteUI.FortCollectionBookSlotButton
class UFortCollectionBookSlotButton : public UCommonButton
{
public:
	class UFortCollectionBookSlotWidget*         CollectionBookSlotWidget;                          // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotButton");
		return Clss;
	}

	void OnSlottedItemUpdated();
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortCollectionBookSlotDetailsWidget
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotDetailsWidget");
		return Clss;
	}

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortCollectionBookSlotView
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UFortCollectionBookSlotButton> CollectionBookButtonClass;                         // 0x210(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CollectionBookButtonBox;                           // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           CollectionBookSlotButtonGroup;                     // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotButton*> CollectionBookSlotButtons;                         // 0x248(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSendOnSlotCommittedEventOnMouseClick;             // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F4[0x37];                                    
	bool                                         bCommitSelectedItemsOnClick;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F5[0x3];                                     
	int32                                        PreviousSelectedButtonIdx;                         // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentSelectedButtonIdx;                          // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F6[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotView");
		return Clss;
	}

	void OnSlotButtonCommitted(class UCommonButton* CommittedButton, int32 ButtonIdx);
	void OnSlotButtonClicked(class UCommonButton* ClickedButton, int32 ButtonIdx);
	void OnSelectedSlotButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIdx);
};

// 0x128 (0x338 - 0x210)
// Class FortniteUI.FortCollectionBookSlotWidget
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_10F7[0x10];                                    
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRewardCard;                                     // 0x221(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F8[0x6];                                     
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedOverlayWidget;                            // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ReadyToSlotOverlayWidget;                          // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedButReadyOverlayWidget;                    // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SlotRowName;                                       // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ItemAvailableToSlotText;                           // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoItemsAvailableToSlotText;                        // 0x268(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotText;             // 0x2B0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotFullyUpgradedText;                       // 0x2C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeUpgradedText;                       // 0x2E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeEvolvedText;                        // 0x2F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             SlottedItemRepresentation;                         // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F9[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotWidget");
		return Clss;
	}

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnItemDestroyed();
	void OnItemCardUpdated();
	bool IsItemSlotted();
	bool HasItemsToSlot();
	class FName& GetSlotRowName();
	int32 GetNumItemsToSlot();
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();
};

// 0x30 (0x358 - 0x328)
// Class FortniteUI.FortCollectionBookWidget
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*     ProgressWidget;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 MainWidgetSwitcher;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPrimaryPanel*       PrimaryPanelWidget;                                // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionPanel*       SectionPanelWidget;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimaryPanelIdx;                                   // 0x348(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionPanelIdx;                                   // 0x34C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10FA[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookWidget");
		return Clss;
	}

	void OnPreviewXPChangeRequest(int32 XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};

// 0x10 (0xA8 - 0x98)
// Class FortniteUI.FortCommittableButtonGroup
class UFortCommittableButtonGroup : public UCommonButtonGroup
{
public:
	UMulticastDelegateProperty_                  OnButtonCommitted;                                 // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCommittableButtonGroup");
		return Clss;
	}

};

// 0x358 (0x458 - 0x100)
// Class FortniteUI.FortMultiSizeImage
class UFortMultiSizeImage : public UWidget
{
public:
	struct FFortMultiSizeBrush                   MultiSizeBrush;                                    // 0x100(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x430(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FB[0x3];                                     
	struct FLinearColor                          ColorAndOpacity;                                   // 0x434(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FC[0x14];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMultiSizeImage");
		return Clss;
	}

	void SetMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush);
	void SetColorAndOpacity(struct FLinearColor& Color);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
};

// 0x8 (0x460 - 0x458)
// Class FortniteUI.FortComparisonResultIndicator
class UFortComparisonResultIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenNotShown;                       // 0x458(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x459(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FD[0x6];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortComparisonResultIndicator");
		return Clss;
	}

	void SetComparisonResult(enum class EFortBuffState ComparisonResult);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortCraftingBarWidget
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
public:
	class UCommonTextBlock*                      CraftingText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          CraftingProgressBar;                               // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CompletedRemainVisibleTime;                        // 0x248(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10FE[0x14];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCraftingBarWidget");
		return Clss;
	}

	void SetHideCraftingBar(bool bInHideCraftBar);
	void OnCompletedSetHidden();
	void HandlePlayerStoppedCrafting(bool bSuccess, enum class EFortCraftFailCause CraftFailureCause);
	void HandlePlayerStartedCrafting();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortDailyRewards
class UFortDailyRewards : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1100[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDailyRewards");
		return Clss;
	}

	bool TryGetDailyRewardsData(struct FFortDailyRewardsData* OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards);
	void SetupDailyRewards();
	void FinishedClaiming();
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>& Loot);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortDailyRewardsItem
class UFortDailyRewardsItem : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsItemData             ItemData;                                          // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDailyRewardsItem");
		return Clss;
	}

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortDailyRewardsSchedule
class UFortDailyRewardsSchedule : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsScheduleData         ScheduleData;                                      // 0x210(0x98)(BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDailyRewardsSchedule");
		return Clss;
	}

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortDefenderConfigPanel
class UFortDefenderConfigPanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>              SelectedDefenderItem;                              // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              SelectedWeaponItem;                                // 0x300(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              SelectedAmmoItem;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SelectedAmmoQuantity;                              // 0x310(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingTrapDefender>  DefenderTrap;                                      // 0x314(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1103[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderConfigPanel");
		return Clss;
	}

	bool UnsummonDefender();
	bool SpawnDefender();
	bool IsWeaponSelectionValid();
	bool HasWeaponForSelectedDefender();
	bool HasAnyDefenders();
	class UFortSchematicItemDefinition* GetSourceSchematic(class UFortWorldItemDefinition* ItemDefUsedForCrafting);
	class UFortWorldItem* GetDefenderPawnWeaponItem(class AFortAIPawn* DefenderPawn);
	class UFortWorldItemDefinition* GetCompatibleAmmoDef();
	class UFortWorldItem* GetCompatibleAmmo();
	int32 GetAmmoCountFromPlayer(class UFortWorldItemDefinition* AmmoItemDef);
	int32 GetAmmoCountFromDefender(class UFortWorldItemDefinition* AmmoItemDef);
};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortDefenderItemTileButton
class UFortDefenderItemTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderItemTileButton");
		return Clss;
	}

	void HandleEquipSlotChanged(int32 EquipSlot);
};

// 0x148 (0x490 - 0x348)
// Class FortniteUI.FortItemTileView
class UFortItemTileView : public UCommonTileView
{
public:
	uint8                                        Pad_1105[0x8];                                     
	struct FFortItemFilterDefinition             Filter;                                            // 0x350(0x80)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x3D0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShouldShowNullItemTile;                           // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallyLoadItemDetails;                     // 0x421(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemTileViewDisplayType          DisplayType;                                       // 0x422(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1106[0x5];                                     
	UMulticastDelegateProperty_                  OnInventoryUpdatedEvent;                           // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1107[0x18];                                    
	TArray<TWeakObjectPtr<class UFortItem>>      ItemsForTileView;                                  // 0x450(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x460(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1108[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemTileView");
		return Clss;
	}

	void ShowNullItemTile();
	void SetSorter(struct FFortItemSorterDefinition& Sorter);
	void SetItemViewContext(UInterfaceProperty_ ItemViewContext);
	void SetFilterAndSorter(struct FFortItemFilterDefinition& Filter, struct FFortItemSorterDefinition& Sorter);
	void SetFilter(struct FFortItemFilterDefinition& Filter);
	void RefreshSort();
	void RefreshFilterAndSort();
	void OnInventoryUpdated__DelegateSignature();
	void HideNullItemTile();
	bool ContainsItem(class UFortItem* Item);
	void CenterSelectedItemTileWidget();
};

// 0x0 (0x490 - 0x490)
// Class FortniteUI.FortDefenderItemTileView
class UFortDefenderItemTileView : public UFortItemTileView
{
public:
	//TWeakObjectPtr<class UFortDefenderConfigPanel> DefenderConfigPanel;                               // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderItemTileView");
		return Clss;
	}

};

// 0x0 (0x890 - 0x890)
// Class FortniteUI.FortDefenderSlotButton
class UFortDefenderSlotButton : public UCommonButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSlotButton");
		return Clss;
	}

};

// 0x8 (0x2D0 - 0x2C8)
// Class FortniteUI.FortDefenderSlotItemPicker
class UFortDefenderSlotItemPicker : public UFortItemPickerBase
{
public:
	enum class EFortDefenderSlotType             DefenderSlotType;                                  // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1109[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSlotItemPicker");
		return Clss;
	}

	void PopulateDefenderSlotItems(class UFortDefenderItem* DefenderItem);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortDefenderSlotView
class UFortDefenderSlotView : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSlotView");
		return Clss;
	}

};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortDefenderSlotWidget
class UFortDefenderSlotWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSlotWidget");
		return Clss;
	}

};

// 0x20 (0x8B0 - 0x890)
// Class FortniteUI.FortSquadSelectorButton
class UFortSquadSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_110B[0x10];                                    
	TSubclassOf<class UFortSquadManagementScreenBase> SquadManagementScreenType;                         // 0x8A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSelectorButton");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleSquadChangedBP();
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
};

// 0x0 (0x8B0 - 0x8B0)
// Class FortniteUI.FortDefenderSquadSelectorButton
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSquadSelectorButton");
		return Clss;
	}

	bool TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked);
	bool TryGetPowerLevel(int32* OutPowerLevel);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortDirectAcquisitionOfferInfo
class UFortDirectAcquisitionOfferInfo : public UObject
{
public:
	uint8                                        Pad_111B[0x18];                                    
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_111C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionOfferInfo");
		return Clss;
	}

	bool OfferHasDenyRequirements();
	bool IsValidOffer();
	bool IsUnique();
	bool IsRefundable();
	bool IsPriceInRealMoney(int32 PriceIndex);
	bool IsPriceInMTX(int32 PriceIndex);
	bool IsLockedByRequirement();
	bool IsGiftable();
	bool IsExclusive();
	bool HasRequirement(class FText* RequirementText);
	bool HasDisplayAsset();
	bool HasCatalogOfferName(class FText* CatalogOfferName);
	int32 GetTotalQuantity();
	struct FSlateBrush GetTileImage();
	class FName GetStorefrontName();
	int32 GetSortPriority();
	class FText GetShortName();
	class FText GetShortDescription();
	enum class ECatalogSaleType GetSaleType(int32 PriceIndex);
	class FText GetSaleText(int32 PriceIndex, int32 ItemQuantity);
	bool GetSalePrice(int32 PriceIndex, class FText* SalePrice, int32 ItemQuantity);
	enum class ECatalogRequirementType GetRequirementTypeAtIndex(int32 RequirementIndex);
	int32 GetRequirementMinQuantityAtIndex(int32 RequirementIndex);
	class FString GetRequirementIdAtIndex(int32 RequirementIndex);
	int32 GetQuantityRemaining();
	class UFortAccountItemDefinition* GetPriceItem(int32 PriceIndex, int32* RequiredItemCount);
	class FString GetOfferId();
	class UFortMtxOfferData* GetOfferDisplayAsset();
	struct FCatalogOffer& GetOffer();
	int32 GetNumRequirements();
	int32 GetNumGrantedItems();
	class FText GetNormalPrice(int32 PriceIndex, int32 ItemQuantity);
	class FText GetName();
	bool GetMetaAsBool(const class FString& MetaTag);
	class FText GetItemTypeText();
	int32 GetItemQuantity(const class FString& TemplateId);
	int32 GetItemOfferCount(const class FString& TemplateId);
	void GetGrantedItemDefinitions(TArray<class UFortAccountItemDefinition*>* GrantedItems);
	struct FFortMtxGradient GetGradient();
	enum class EFortMtxStoreOfferType GetFortStoreOfferType();
	class FString GetFortStoreOfferCategory();
	class FString GetForcedGiftBoxTemplateId();
	int32 GetFirstGrantQuantity();
	class UFortAccountItemDefinition* GetFirstGrantItemDefinition();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	class UFortAccountItemDefinition* GetCurrencyItemDefinition();
	class FText GetCategoryText();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	class FString GetBannerOverrideTag();
	struct FLinearColor GetBackground();
	class UFortAccountItem* CreatePreviewItem();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortDirectAcquisitionOfferWidgetBase
class UFortDirectAcquisitionOfferWidgetBase : public UCommonButton
{
public:
	TArray<class UFortDirectAcquisitionOfferInfo*> GroupedOffers;                                     // 0x890(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortDirectAcquisitionOfferInfo*       OfferData;                                         // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionOfferWidgetBase");
		return Clss;
	}

	void SetupOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
	void RemoveAllOffers();
	void OnUpdateStatus();
	void OnOfferSet();
	void OnOfferAdded();
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	class UFortDirectAcquisitionOfferInfo* GetOfferInfo();
	void AddOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
};

// 0x48 (0x408 - 0x3C0)
// Class FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase
class UFortDirectAcquisitionOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview
{
public:
	uint8                                        Pad_111D[0x10];                                    
	struct FDataTableRowHandle                   EnterViewModeInputActionRowHandle;                 // 0x3D0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsInItemViewMode;                                  // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_111E[0x7];                                     
	TArray<class UFortDirectAcquisitionOfferInfo*> PagedItems;                                        // 0x3E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortDirectAcquisitionOfferInfo*       OfferData;                                         // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortVariantPicker*                    Picker_VariantSelector;                            // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionOfferDetailsWidgetBase");
		return Clss;
	}

	void UpdateItemViewModeBP();
	bool ShouldHavePurchaseConfirmation();
	void SetupOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
	void SetPagedItems(TArray<class UFortDirectAcquisitionOfferInfo*>& InPagedItems);
	void SetIsInItemViewMode(bool Value);
	void SendShopInteractionAnalytic(const class FString& Interaction);
	void PurchaseAmountRight();
	void PurchaseAmountLeft();
	void OnUpdateStatus();
	void OnOfferSet();
	void OnEnterViewModeActionCommitted(bool* Passthrough);
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	class UFortDirectAcquisitionOfferInfo* GetOfferInfo();
	void AutoEquip();
};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.FortDirectAcquisitionWidgetBase
class UFortDirectAcquisitionWidgetBase : public UFortActivatablePanel
{
public:
	TArray<class FString>                        StorefrontNames;                                   // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowIneligible;                                   // 0x338(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1120[0x7];                                     
	TArray<class UFortDirectAcquisitionOfferInfo*> AcquisitionOfferData;                              // 0x340(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1121[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionWidgetBase");
		return Clss;
	}

	void TriggerRefresh();
	void SetStorefrontNames(TArray<class FString>& InStorefrontNames);
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void NoOffersAvailable();
	struct FDateTime GetWeeklyStoreEndDate();
	struct FDateTime GetSeasonStoreEndDate();
	struct FDateTime GetDailyStoreEndDate();
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData);
	void ClearOfferWidgets();
};

// 0x88 (0x380 - 0x2F8)
// Class FortniteUI.FortDisplayNameWidget
class UFortDisplayNameWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1122[0x10];                                    
	class FText                                  ButtonDisableReason;                               // 0x308(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameTakenText;                                     // 0x320(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameInvalidFormatText;                             // 0x338(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameTooShortText;                                  // 0x350(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Enter;                                      // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditText_DisplayName;                              // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDisplayNameWidget");
		return Clss;
	}

	void HandleTextChanged(class FText& Text);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortErrorWindow
class UFortErrorWindow : public UFortActivatablePanel
{
public:
	TSubclassOf<class UCommonUserWidget>         ErrorEntryClass;                                   // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonUserWidget*>             ErrorEntriesPool;                                  // 0x330(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortErrorWindow");
		return Clss;
	}

	void PutErrorEntries(TArray<class UCommonUserWidget*>& ErrorEntries);
	class UCommonUserWidget* GetErrorEntry();
	void DismissErrors(const TArray<struct FFortErrorInfo>& ErrorInfos);
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.FortEulaWidget
class UFortEulaWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1123[0x18];                                    
	class UFortRichTextBlock*                    Text_Description;                                  // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_License;                                 // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Confirm;                                    // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Decline;                                    // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEulaWidget");
		return Clss;
	}

};

// 0x8 (0x460 - 0x458)
// Class FortniteUI.FortSimpleItemConditionIconIndicator
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenConditionIsFalse;               // 0x458(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1124[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSimpleItemConditionIconIndicator");
		return Clss;
	}

	void ShouldCollapseWhenConditionIsFalse(bool Value);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	class UFortItem* GetItemToRepresent();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortEvolveIndicator
class UFortEvolveIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEvolveIndicator");
		return Clss;
	}

};

// 0x60 (0x358 - 0x2F8)
// Class FortniteUI.FortExpeditionBuildSquadWidget
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x300(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            ExpeditionSquadSlotDetails;                        // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              ExpeditionSquadSlotPicker;                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1127[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionBuildSquadWidget");
		return Clss;
	}

	bool StartExpedition();
	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnStartExpeditionCompleted();
	void OnRequestClosePicker();
	void OnRefreshBuildSquadWidget();
	bool IsSquadSlotLocked(int32 SlotIndex);
	bool IsExpeditionValidToStart();
	void HandleStartExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded);
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortExpeditionDetailsWidget
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1129[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionDetailsWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnAbandonExpeditionCompleted();
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);
	void AbandonExpedition();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortExpeditionExpiresWidget
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112A[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionExpiresWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortExpeditionListItemWidget
class UFortExpeditionListItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_112B[0x8];                                     
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionListItemWidget");
		return Clss;
	}

	void OnItemChanged();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortExpeditionListViewWidget
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnExpeditionSelected;                              // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExpeditionListViewRefreshed;                     // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonListView*                       ExpeditionListView;                                // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentTabNameId;                                  // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortExpeditionListSort           SortType;                                          // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112D[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionListViewWidget");
		return Clss;
	}

	void SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType);
	class FText GetExpeditionListSortName();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortExpeditionMasterWidget
class UFortExpeditionMasterWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_112E[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionMasterWidget");
		return Clss;
	}

};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortExpeditionOverviewWidget
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FExpeditionTabInfo>            TabListRegistrationInfo;                           // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                ExpeditionTabList;                                 // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortExpeditionListViewWidget*         ExpeditionListView;                                // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionOverviewWidget");
		return Clss;
	}

	void UpdateExpeditionTabs();
	void OnExpeditionTabSelected(class FName& TabNameID);
	void OnExpeditionOverviewRefresh();
	void HandleExpeditionTabSelected(class FName TabNameID);
	void HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortExpeditionPickVehicleWidget
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionPickVehicleWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortExpeditionReturnsWidget
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112F[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionReturnsWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortExpeditionRewardsWidget
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnAllExpeditionsCollected;                         // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTileView*                       RewardsTileView;                                   // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingCollection;                                // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1133[0xF];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionRewardsWidget");
		return Clss;
	}

	void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ProcessNextReward();
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
};

// 0x58 (0x268 - 0x210)
// Class FortniteUI.FortExpeditionSummaryWidget
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	int32                                        AvailableExpeditions;                              // 0x210(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CompletedExpeditions;                              // 0x214(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesTotal;                                 // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesAvailable;                             // 0x21C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesTotal;                                  // 0x220(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesAvailable;                              // 0x224(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesTotal;                                  // 0x228(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesAvailable;                              // 0x22C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsTotal;                              // 0x230(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsAvailable;                          // 0x234(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsTotal;                               // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsAvailable;                           // 0x23C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsTotal;                               // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsAvailable;                           // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortExpeditionItem*>           InProgressExpeditions;                             // 0x248(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1134[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionSummaryWidget");
		return Clss;
	}

	void UnbindInventoryDelegates();
	void OnRefreshSummaryWidget();
	void BindInventoryDelegates();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortExpeditionUtilities
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionUtilities");
		return Clss;
	}

	int32 TotalUnseenExpeditionsForTab(class UWidget* Widget, class FName& TabNameID);
	bool IsSquadOnExpedition(class UWidget* Widget, class FName& SquadId);
	struct FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);
	bool GetVehicleTagFromSquadId(class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable);
	void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds);
	float GetExpeditionSquadPower(class AFortPlayerController* FortPC, class FName& SquadId);
	void GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds);
	float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, class FName& SquadId, TArray<class UFortItem*>& SlottedItems);
	void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);
	bool AreExpeditionsUnlocked(class UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueId);
	bool AreAnyExpeditionsComplete(class UWidget* Widget);
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortExpeditionVehicleTileItemWidget
class UFortExpeditionVehicleTileItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_113E[0x8];                                     
	TWeakObjectPtr<class UObject>                SquadId;                                           // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionVehicleTileItemWidget");
		return Clss;
	}

};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortFavoriteIndicator
class UFortFavoriteIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFavoriteIndicator");
		return Clss;
	}

};

// 0x30 (0x8C0 - 0x890)
// Class FortniteUI.FortMobileShareButton
class UFortMobileShareButton : public UCommonButton
{
public:
	uint8                                        Pad_113F[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileShareButton");
		return Clss;
	}

	void SetShareParams(const class FString& URL, class FText& Description);
	void OnOSImageEnumSet(enum class EFortFortMobileShareButtonOS OSType);
};

// 0x70 (0x930 - 0x8C0)
// Class FortniteUI.FortFriendCodeEntryBase
class UFortFriendCodeEntryBase : public UFortMobileShareButton
{
public:
	struct FFriendCode                           FriendCode;                                        // 0x8C0(0x20)(NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      LinkDataTextBox;                                   // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugName;                                         // 0x8E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthOfCode;                                      // 0x8F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1140[0x4];                                     
	class FText                                  SharedMessage;                                     // 0x900(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  SharedMessageNoInvite;                             // 0x918(0x18)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFriendCodeEntryBase");
		return Clss;
	}

};

// 0x28 (0x350 - 0x328)
// Class FortniteUI.FortFriendCodeListBase
class UFortFriendCodeListBase : public UFortActivatablePanel
{
public:
	TArray<struct FFriendCode>                   BacchusFriendCodes;                                // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortFriendCodeEntryBase>  FriendCodeEntryClass;                              // 0x338(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_FriendCodes;                              // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        WarningText;                                       // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFriendCodeListBase");
		return Clss;
	}

	void JustDesc();
	void DescAndURL();
	void CloseAndPopDialog();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortFriendLinkPanel
class UFortFriendLinkPanel : public UFortActivatablePanel
{
public:
	class UCommonButton*                         Button_ShareButton;                                // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFriendLinkPanel");
		return Clss;
	}

	void OnShareButtonTypeSet(enum class EShareButtonType Type);
	void OnCopiedToClipboard();
};

// 0x320 (0x348 - 0x28)
// Class FortniteUI.FortFrontEndContext
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1162[0x8];                                     
	UMulticastDelegateProperty_                  OnFrontEndCameraChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnLobbyBackgroundChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaPlaylistsChanged;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyEmptyPlayerClicked;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerGadgetsClicked;                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadHovered;                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadUnhovered;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerHovered;                              // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnhovered;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerSelected;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnselected;                           // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPartySuggestionAccepted;                         // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerTalkingChanged;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerMutingChanged;                        // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayersStoppedTalking;                      // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterPinClicked;                               // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSetPreviewedSceneTheater;                        // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterSelected;                                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterDataChanged;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileClicked;                              // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileUnselected;                           // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileDoubleClicked;                        // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileFocused;                              // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileUnfocused;                            // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemViewed;                                 // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemsViewed;                                // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSeasonTabVariantPreviewInfoChanged;              // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedIn;                                  // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedOut;                                 // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMainTabSelected;                                 // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSocialImportClosed;                              // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1163[0x8];                                     
	struct FFortFrontEndFeatureStruct            Features;                                          // 0x228(0x18)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1164[0xC0];                                    
	struct FFortSavedModeLoadout                 CachedModeLoadout;                                 // 0x300(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FUnlockableVariantPreviewInfo         SeasonTabVariantPreviewInfo;                       // 0x320(0x28)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFrontEndContext");
		return Clss;
	}

	void ViewVaultItemsFromOffer(struct FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItems(TArray<class UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItemFromDefinition(class UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItem(class UFortItem* ItemToView, bool bIgnoreCurrentlyEquppedFavorites);
	void UpdateNewAccountItemBangCounts(class UFortInventoryContext* InventoryContext);
	bool TryGetAttributeInfo(struct FGameplayAttribute& GameplayAttribute, struct FFortAttributeInfo* OutAttribute);
	void SkipInitialBenchmark();
	class UFortSocialImportPanel* ShowSocialImport(TSubclassOf<class UFortSocialImportPanel> PanelClass);
	void ShowAthenaStoreNewItemBang();
	bool ShouldShowSocialImport();
	bool ShouldShowLoginMessage();
	bool ShouldRunInitialBenchmark();
	void SetSelectedTheater(const class FString& TheaterId);
	void SetSeenLoginMessage();
	void SetSeasonTabVariantPreviewInfo(const struct FUnlockableVariantPreviewInfo& Info);
	void SetPersonalHeroChoice(class UFortHero* Hero, const struct FDisplayManagerVariantData& VariantData);
	void SetLocalVariantPreview(class UAthenaCosmeticItemDefinition* CosmeticItem, const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag);
	void SetHeroChoice(int32 PartyMemberIndex, class UFortHero* Hero, const struct FDisplayManagerVariantData& VariantData);
	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void SetFrontEndCamera(enum class EFrontEndCamera NewState);
	void SetDefaultLocalVariantPreview(class UAthenaCosmeticItemDefinition* CosmeticItem);
	void SendPlayQuestAnalytic(class UFortQuestItem* QuestItem);
	void SendFrontendEnteredEvent();
	bool SelectTileForQuest(class UFortQuestItem* QuestItem, float* OutCriticalMissionDifficultyOverrideMin, float* OutCriticalMissionDifficultyOverrideMax);
	void SelectGadgetForSlot(int32 Slot, class UFortItemDefinition* GadgetDefinition);
	void SelectDefaultTheaterTile();
	void SelectDefaultTheater();
	void RunBenchmarkAndApplyBestSettings();
	void PushContentWidget_Adv(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	bool IsActiveTileMissionValid();
	bool Is4PlayerTile(class AFortTheaterMapTile* Tile);
	void HideAthenaStoreNewItemBang();
	void HandleDynamicSocialImportClosed();
	struct FDisplayManagerVariantData GetVariantDataForMemberIndex(int32 MemberIndex);
	class UClass* GetUITestingClass();
	bool GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails);
	enum class EFortTheaterType GetTheaterType(const class FString& TheaterId);
	int32 GetTheaterRegionCount(const class FString& TheaterId);
	class FText GetTheaterName(const class FString& TheaterId);
	bool GetTheaterData(const class FString& TheaterId, struct FFortTheaterMapData* OutTheaterData);
	class FString GetSelectedTheaterId();
	bool GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData);
	void GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets);
	struct FUnlockableVariantPreviewInfo GetSeasonTabVariantPreviewInfo();
	enum class EFortReturnToFrontendBehavior GetReturnToFrontendBehavior();
	class FText GetRequirementText(struct FFortRequirementsInfo& InRequirements);
	TArray<struct FGameDifficultyInfo> GetRecommendedTeamDifficulties();
	TArray<int32> GetRecommendedDifficultyIndexesInAvailableDifficulties(bool bIncludeMissionAlertTiles);
	class AActor* GetPrefabActorForCurrentDisplayedItem();
	void GetOutpostStructureUpgradeCost(int32 TheaterSlot, int32 UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems);
	int32 GetOutpostStructureMaxLevel(int32 TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	bool GetOutpostCoreLevelByTheaterId(const class FString& TheaterId, int32* OutCoreLevel);
	bool GetOutpostCoreLevelByItemDefinition(class UFortOutpostItemDefinition* OutpostCoreItemDef, int32* OutCoreLevel);
	class UMeshComponent* GetMeshForCurrentDisplayedItem();
	class FText GetMCPRegion();
	struct FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles);
	class FName GetLobbyBackgroundLevelName();
	class UFortItemDefinition* GetItemFromItemQuantityPair(struct FFortItemQuantityPair& InPair);
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int32 PartyMemberIndex);
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int32 TheaterSlot, int32 InHarvestingOptimizerLevel);
	enum class EFrontEndCamera GetFrontEndCamera();
	class AFortTheaterMapTile* GetFocusedTile();
	bool GetFocusedOrActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetFocusedOrActiveTile();
	class FText GetFeatureStateReasonText(enum class EFortFrontEndFeatureStateReason Reason);
	void GetFeatureState(enum class EFortFrontEndFeature Feature, enum class EFortFrontEndFeatureState* OutFeatureState, enum class EFortFrontEndFeatureStateReason* OutReason);
	int32 GetFabricatorStoredGooAmount(int32 TheaterSlot);
	int32 GetFabricatorIncomingGooAmount(int32 TheaterSlot);
	int32 GetFabricatorDisintegrationSecondsRemaining(int32 TheaterSlot);
	enum class EFrontEndCamera GetDesiredPlayButtonCamera();
	class FName GetDefenderSquadIDByTheaterID(const class FString& TheaterId);
	class FText GetCurrentTheaterName();
	TArray<struct FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles);
	struct FFortMultiSizeBrush GetAttributeIcon(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDisplayName(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDescription(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	bool GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData);
	bool GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetActiveTile();
	void GetAccountLevelUpRewards(TArray<struct FFortItemQuantityPair>* Rewards, int32 AccountLevel);
	void ForceSetFeatureState(enum class EFortFrontEndFeature Feature, enum class EFortFrontEndFeatureState State, enum class EFortFrontEndFeatureStateReason Reason);
	void ClearSelectedTheater();
	void ClearLocalPreview(bool StopUsingLocalPreview);
	bool CanShowLockerSlotType(enum class EAthenaCustomizationCategory SlotType);
	bool CanFindTileForQuest(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInFocusedOrActiveTileMission(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInActiveTileMission(class UFortQuestItem* QuestItem);
	void BroadcastMainTabSelected(class FName TabName);
	void BindToFeatureStateAndInitialize(enum class EFortFrontEndFeature Feature, UDelegateProperty_ Delegate);
	bool AreProfilesAvailableToWIFE();
};

// 0xA0 (0x3C8 - 0x328)
// Class FortniteUI.FortGameFeedbackBase
class UFortGameFeedbackBase : public UFortActivatablePanel
{
public:
	class UEditableText*                         SubjectEditable;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMultiLineEditableText*                BodyEditable;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditableText*                         BodyEditable_SingleLine;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x340(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1167[0x80];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeedbackBase");
		return Clss;
	}

	void SubmitFeedback();
	void OnSelectionButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnInitiateDebugInfoForFeedbackComplete();
	void InitiateDebugInfoForFeedback();
	void CancelFeedback();
	void AddButtonWithFeedbackType(class UCommonButton* Button, enum class EFortUIGameFeedbackType GameFeedbackType);
};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortGameOptions
class UFortGameOptions : public UFortOptionsTab
{
public:
	TArray<class UFortHUDVisibilityData*>        HUDData;                                           // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameOptions");
		return Clss;
	}

	void UpdatePossibleLanguages();
	void UpdateHUDSettings(const struct FGameplayTag& HUDMapping, bool NewVisibility);
	void SetControllerPlatform(const class FString& InControllerPlatform);
	void HandleGamePadToggleMode();
	bool GetHUDSettings(const struct FGameplayTag& HUDMapping);
	class FString GetControllerPlatform();
	void ConstructHUDTagList();
};

// 0x28 (0x268 - 0x240)
// Class FortniteUI.FortInputOptions
class UFortInputOptions : public UFortOptionsTab
{
public:
	TArray<class UFortOptionsMenuInputData*>     InputData;                                         // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCommonListView*                       InputCommonListView;                               // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_116C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInputOptions");
		return Clss;
	}

	void HandleUsingGamepadChanged(enum class ECommonInputType bNewInputType);
	class UWidget* GetListWidget(class UObject* Item);
	class FText GetBindedKeyNameBP(int32 KeyBind, bool IsPrimary);
	void ConstructKeyBindList();
	void ChangeBinding(bool IsPrimarySlot, int32 Input, const struct FKey& NewKey);
};

// 0x0 (0x268 - 0x268)
// Class FortniteUI.FortGamepadInputOptions
class UFortGamepadInputOptions : public UFortInputOptions
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGamepadInputOptions");
		return Clss;
	}

	void SetControllerPlatform(const class FString& InControllerPlatform);
	void ResetCustomGamepadToDefault();
	bool IsCustomGamepadConfig(const class FString& ConfigName);
	bool HasCustomGamepadBindingChanges();
	void HandleGamePadToggleMode();
	class FString GetControllerPlatform();
	void EnableAnalogCursor();
	void DisableAnalogCursor();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortGiftBoxButton
class UFortGiftBoxButton : public UCommonButton
{
public:
	uint8                                        Pad_116E[0x8];                                     
	class UFortGiftBoxItemDefinition*            GiftBoxDefinition;                                 // 0x898(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      Image_Gift;                                        // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftBoxButton");
		return Clss;
	}

	void PlayGiftSelectedAnimation(bool bIsSelected);
};

// 0x150 (0x510 - 0x3C0)
// Class FortniteUI.FortGiftingScreen
class UFortGiftingScreen : public UFortActivatablePanelWithItemPreview
{
public:
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes;                                         // 0x3C8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortGiftBoxItemDefinition*>    GiftBoxItemDefs;                                   // 0x3D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortGiftBoxButton*                    SelectedGiftBoxButton;                             // 0x3E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDirectAcquisitionOfferInfo*       OfferInfo;                                         // 0x3F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortUserDetails*>              UserDetailArray;                                   // 0x3F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortUserDetails*                      LocalPlayerDetails;                                // 0x408(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DefaultGiftMessage;                                // 0x410(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGiftingErrorText>             GiftingErrorMessages;                              // 0x428(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGiftingErrorText                     GiftingErrorMessageDefault;                        // 0x438(0x38)(Edit, Protected, NativeAccessSpecifierProtected)
	int32                                        PersonalizedMessageLength;                         // 0x470(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1170[0x3C];                                    
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_RecipientCurrency;                           // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Price;                                        // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_GiftCount;                                    // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FriendCount;                                  // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CharCount;                                    // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Friends;                                  // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Continue;                                   // 0x4E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Send;                                       // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       TileView_GiftBoxes;                                // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_ChosenRecipients;                         // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_Message;                              // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingScreen");
		return Clss;
	}

	void SetOffer(class UFortDirectAcquisitionOfferInfo* NewOfferInfo);
	void OnOfferSet(class UFortDirectAcquisitionOfferInfo* NewOfferInfo);
	void OnMoveToGiftWrapStep();
	void OnMoveToFriendSelectStep();
	void OnGiftingTimerEnded();
	void OnEndGiftingSubmission(bool bSuccess);
	void OnBeginGiftingSubmission();
	void HandleMessageChanged(class FText& InText);
	void FocusFriendsList();
	void DynamicHandleGiftSent(bool bSuccess, TArray<class FString>& IneligableAccounts);
	void AllowGiftWrapSelection(bool bIsAllowed);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortUserDetails
class UFortUserDetails : public UObject
{
public:
	uint8                                        Pad_1171[0x40];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUserDetails");
		return Clss;
	}

};

// 0x20 (0x8B0 - 0x890)
// Class FortniteUI.FortGiftingUserItem
class UFortGiftingUserItem : public UCommonButton
{
public:
	uint8                                        Pad_1172[0x8];                                     
	class UFortUserDetails*                      ItemData;                                          // 0x898(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_DisplayName;                                  // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Alias;                                        // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingUserItem");
		return Clss;
	}

	void SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect);
};

// 0x370 (0x398 - 0x28)
// Class FortniteUI.FortGlobalUIContext
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1191[0x8];                                     
	UMulticastDelegateProperty_                  SubGameChanged;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1192[0x18];                                    
	UMulticastDelegateProperty_                  OnKeybindsChanged;                                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStarted;                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStopped;                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEnterVehicleDriver;                              // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEnterVehiclePassenger;                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExitVehicle;                                     // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamPowerChanged;                                // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropStartedDelegate;                        // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropEndedDelegate;                          // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreReportChanged;                              // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnContextHelpChanged;                              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemReceivedNotificationShown;                   // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeDrillDown;                              // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeSelected;                               // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQueryFortBackendVersionComplete;                 // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadingScreenVisibilityChanged;                  // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerControllerConnectionChanged;          // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1193[0x18];                                    
	TMap<class FName, class UFortUIMessageManager*> MessageManagersByName;                             // 0x180(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<enum class EFortUIFeature, struct FFortUIFeatureStruct> Features;                                          // 0x1D0(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1194[0xF0];                                    
	class UAthenaMatchReadyDesktopPopup*         AthenaMatchReadyNotificationWidget;                // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1195[0x10];                                    
	class UFortHelpItem*                         ActiveContextSpecificHelpItem;                     // 0x328(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUIVisible;                                      // 0x330(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowRateWidget;                                   // 0x331(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1196[0x6];                                     
	class FText                                  FeedbackTitle;                                     // 0x338(0x18)(Transient, NativeAccessSpecifierPrivate)
	struct FDateTime                             FirstLoginTime;                                    // 0x350(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          AddictionMsgTimer;                                 // 0x358(0x8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLocalPlayerUniqueNetId;                     // 0x360(0x28)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1197[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGlobalUIContext");
		return Clss;
	}

	void UnregisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void UnbindToFeatureState(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	void TriggerUIFeedbackEvent(class FName EventName);
	bool ShowWebURL(const class FString& URL, enum class EFortUrlType URLType);
	void ShowConsoleAccountPicker(int32 ControllerIndex, UDelegateProperty_& CompletionDelegate);
	void ShowBang(enum class EFortBangType Type);
	void ShowAthenaMatchReadyExternalNotificationWindow();
	bool ShouldShowRateWidget();
	bool ShouldCloseMenuOnEscape();
	void SetSubGame(enum class ESubGame SubGame);
	void SetRatingWidgetFeedbackTitle(class FText& Title);
	void SetInputMode(enum class EFortInputMode InMode);
	void SetHidePerkRecombobulatorHelp(bool bInHideHelp);
	void SetCurrentInputPresetName(const class FString& InputPresetName);
	void SetCurrentCustomInputTemplatePresetName(const class FString& InputPresetName);
	void SetContextHelpItem(class UFortHelpItem* ContextSpecificHelpItem);
	void SetBangFromCount(enum class EFortBangType Type, int32 Count);
	void SendUINavigationAnalytic(const class FString& Destination, bool bUserInitiated);
	void SendLeaveZoneAnalytic();
	void SendExperienceRatingAnalytic(const class FString& RatingType, const class FString& FeedbackSentBy, class FText& RatingQuestion, int32& StarCount, const class FString& GameSessionId, const class FString& Comment);
	void RunLauncherWithOptions(const class FString& Options);
	void ReturnToSubGameSelect();
	void RegisterScriptedActions(const TArray<TSubclassOf<class AFortScriptedAction>>& ScriptedActions);
	void RegisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void QuitGame();
	void QueryGameBackendVersion();
	void ProcessConfirmationResult(enum class EFortDialogResult InResult, class FName InResultName, struct FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle);
	void OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion);
	void OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature(bool bConnected);
	void OnLoadingScreenVisibilityChangedDelegate__DelegateSignature(bool IsVisible);
	void Logout();
	bool IsUsingGamepad();
	bool IsUIVisible();
	bool IsPendingLogout();
	bool IsMobileApp();
	bool IsInZone();
	bool IsInOutpostZone();
	bool IsHUDVisible();
	bool IsGamepadAttached();
	bool IsDesktopPlatform();
	bool IsCustomGamepadConfig(int32 ConfigIndex);
	bool IsCurrentlyShowingLoadingScreen();
	bool IsBluGloEnabled();
	bool IsBattleRoyaleMatchmakingEnabled();
	bool IsAllContentInstalled();
	void InputActionHoldStopped(class FName InputActionName, bool bCompletedSuccessfully);
	void InputActionHoldStarted(class FName InputActionName, float HoldDuration);
	void HideBang(enum class EFortBangType Type);
	bool HasCompletedOnboardingObjective(struct FDataTableRowHandle& Objective);
	bool HasAccesstoMultipleSubGames();
	class FString GetWatermark();
	class FName GetVehicleJumpActionName();
	class FName GetVehicleExitActionName();
	class FName GetVehicleChangeSeatActionName();
	class FName GetUseActionName();
	class FName GetTrapPickerActionName();
	class FName GetTrapConfirmActionName();
	void GetTopLevelHelpItems(TArray<class UFortHelpItem*>* ActiveHelpEntries);
	class FName GetSwitchQuickBarActionName();
	enum class ESubGame GetSubGame();
	class FName GetShoppingCartCoastActionName();
	class FString GetSessionId();
	class FString GetSessionConnectString();
	class UFortSeasonalEventManager* GetSeasonalEventManager();
	class UFortUIScoreReport* GetScoreReport();
	class FName GetRotatePrimitiveClockwiseActionName();
	class UFortQuestManager* GetQuestManager(enum class ESubGame SubGame);
	class FText GetPlatformDisplayName();
	class FName GetPickerConfirmActionName(enum class EFortPickerMode PickerMode);
	class FName GetPickerCancelActionName(enum class EFortPickerMode PickerMode);
	class FName GetPerformBuildingImprovementInteractionActionName();
	class FName GetPerformBuildingEditInteractionActionName();
	class UFortUIMessageManager* GetMessageManager(class FName ManagerName, bool* bCreatedNew);
	class UFortUIRewardReport* GetLastMissionRewardReport();
	void GetLastMissionInfo(struct FFortLastMissionInfo* LastMissionInfo);
	struct FGameSummaryInfo GetLastGameSummaryInfo();
	class FText GetKeyTextForAction(class FName Action, class FText* ButtonActionType, bool bUseAbbreviatedText);
	struct FKey GetKeyForAction(class FName Action, bool bForceGamepadKey);
	class FName GetJumpActionName();
	int32 GetInputPriority(enum class EInputPriority Priority);
	bool GetInputDetailsForAction(class FName Action, struct FFortInputActionDetails* InputActionDetails);
	bool GetHidePerkRecombobulatorHelp();
	class FName GetGolfCartReverseActionName();
	class FName GetGolfCartForwardActionName();
	class FName GetGolfCartEBrakeActionName();
	class FName GetGadget2ActionName();
	class FName GetGadget1ActionName();
	class FName GetFireActionName();
	class FText GetFeedbackTitle();
	class FText GetFeatureStateReasonText(enum class EFortUIFeatureStateReason Reason);
	void GetFeatureState(enum class EFortUIFeature Feature, enum class EFortUIFeatureState* OutFeatureState, enum class EFortUIFeatureStateReason* OutReason);
	class FString GetCurrentInputPresetName();
	class FString GetCurrentCustomInputTemplatePresetName();
	class FName GetCrouchActionName();
	class FText GetConningXpModifierMessage(int32 TotalSkillPoints, int32 ContentDifficulty);
	float GetConningDifficultyXpModifier(int32 TotalSkillPoints, int32 ContentDifficulty);
	class UFortCollectionBookManager* GetCollectionBookManager();
	class FName GetChangeMaterialActionName();
	class FName GetBuildConfirmActionName();
	bool GetBrushForKeyWithCustomInput(const struct FKey& Key, struct FSlateBrush* Brush, enum class ECommonInputType InputType, enum class ECommonGamepadType GamepadType);
	bool GetBrushForKey(const struct FKey& Key, struct FSlateBrush* Brush);
	class FString GetBackendName();
	void GetAllPlayerInputPresetNamesForSubGame(enum class ESubGame SubGame, TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	void GetAllPlayerInputPresetNames(TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	class FText GetAccountGameplayRestrictionText();
	enum class ESubGameAccessReason GetAccessReason(enum class ESubGame SubGame);
	class FName GetAbility3ActionName();
	class FName GetAbility2ActionName();
	class FName GetAbility1ActionName();
	void ForceSetFeatureState(enum class EFortUIFeature Feature, enum class EFortUIFeatureState ForcedState, enum class EFortUIFeatureStateReason Reason);
	void ExitVehicle();
	void EnterVehiclePassenger();
	void EnterVehicleDriver();
	void DisplayStateContent(bool bDisplay);
	void CopyToClipboard(const class FString& ClipboardText);
	float ContentInstallationProgress();
	void CloseExternalNotificationWindowIfOpen();
	void ClearSelectionGroup(class FName SelectionGroup);
	void ClearRatingWidgetInfo();
	void ClearLastMissionReports();
	void ClearLastGameSummaryInfo();
	void ClearForceSetFeatureState(enum class EFortUIFeature Feature);
	void CheckFlag(const class FString& FlagName, enum class EFlagStatus* OutStatus);
	bool CanPlay(enum class ESubGame SubGame, class FText* DenialReason);
	bool CanMatchmake(enum class ESubGame SubGame, class FText* DenialReason);
	void BroadcastItemReceivedNotificationShown(bool IsActive);
	void BindToFeatureStateAndInitialize(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	bool AutoSelectSubGame();
	bool AllowQuit();
	bool AllowLogout();
};

// 0x148 (0x260 - 0x118)
// Class FortniteUI.FortGridWidgetBase
class UFortGridWidgetBase : public UContentWidget
{
public:
	TSubclassOf<class UFortGridPickerTile>       ClearWidgetType;                                   // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileWidth;                                         // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileHeight;                                        // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesAcross;                                       // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesDown;                                         // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShrinkToFit;                                      // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1198[0x3];                                     
	float                                        PeekOverflowTilePercentage;                        // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               TilePadding;                                       // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           GridBackground;                                    // 0x148(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               GridBackgroundPadding;                             // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       DataProvider;                                      // 0x1E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnTileGenerated;                                   // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTileClicked;                                     // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseEnterTile;                                  // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseLeaveTile;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortGridPickerTile>       TileWidgetType;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGridSortKind                     SortKind;                                          // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReversed;                                         // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1199[0x6];                                     
	UDelegateProperty_                           GetSortKeyFor;                                     // 0x240(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_119A[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGridWidgetBase");
		return Clss;
	}

	void SetTileWidth(float Width);
	void SetTilesDown(int32 Down);
	void SetTilesAcross(int32 Across);
	void SetTilePadding(const struct FMargin& Padding);
	void SetTileHeight(float Height);
	void SetPeekOverflowTilePercentage(float Percent);
	void SetDataProvider(TArray<class UObject*>& Data);
	void SetClearWidgetType(TSubclassOf<class UFortGridPickerTile> InClearWidgetType);
	TArray<class UFortGridPickerTile*> GetTiles();
	class UFortGridPickerTile* GetTileForObject(class UObject* Object);
};

// 0x48 (0x2A8 - 0x260)
// Class FortniteUI.FortGridPickerButton
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	enum class EMenuPlacement                    GridPlacement;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119B[0x7];                                     
	class UFortGridPickerGrid*                   GridWidget;                                        // 0x268(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOnTileClicked;                               // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119C[0x7];                                     
	UDelegateProperty_                           GridWidgetDelegate;                                // 0x278(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGridPickerOpenChanged;                           // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_119D[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGridPickerButton");
		return Clss;
	}

	void SetIsOpen(bool ShouldBeOpen);
	void OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen);
	void OnButtonClicked();
	class UFortGridPickerGrid* CreateGridWidget__DelegateSignature();
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortGridPickerGrid
class UFortGridPickerGrid : public UFortUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGridPickerGrid");
		return Clss;
	}

};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortGridPickerTile
class UFortGridPickerTile : public UFortUserWidget
{
public:
	class UObject*                               Data;                                              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGridWidgetBase*                   Owner;                                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGridPickerTile");
		return Clss;
	}

	void SetData(class UObject* InData);
	void OnClicked();
	void ForwardClicked();
};

// 0x10 (0x270 - 0x260)
// Class FortniteUI.FortGridWidget
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	uint8                                        Pad_119E[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGridWidget");
		return Clss;
	}

};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortHaveInviteSelect
class UFortHaveInviteSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_119F[0x10];                                    
	class UCommonButton*                         Button_Yes;                                        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHaveInviteSelect");
		return Clss;
	}

};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortHealthWarningBase
class UFortHealthWarningBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_11A0[0x18];                                    
	float                                        ShowTimeLength;                                    // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11A1[0x4];                                     
	class UCommonTextBlock*                      Text_HealthWarning;                                // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_RatingsIcons;                                 // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHealthWarningBase");
		return Clss;
	}

};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortHelpTreeItemBase
class UFortHelpTreeItemBase : public UCommonButton
{
public:
	uint8                                        Pad_11A2[0x8];                                     
	class UFortHelpItem*                         HelpItem;                                          // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHelpTreeItemBase");
		return Clss;
	}

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortHeroManagementContext
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnPlayerDataUpdated;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroDeleteResponse;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroCreateResponse;                           // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCurrentHeroChanged;                              // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestResponse;                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestSent;                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilitySelectionRolledBack;                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAvailableAbilityPointsChanged;                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHeroStatsChanged;                                // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortHero*                             CurrentHero;                                       // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BD[0x8];                                     
	class UFortHero*                             HeroBeingDeleted;                                  // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BE[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroManagementContext");
		return Clss;
	}

	bool SetHeroName(const class FString& NewName);
	bool SetCurrentHero(const class FString& HeroId);
	bool RequestSetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx, int32 Depth);
	bool RequestSetTraitDepth(int32 TraitIdx, int32 Depth);
	bool RequestCreateHero(class UFortHeroType* HeroType, const class FString& Name, enum class EFortCustomGender Gender);
	bool RedeemPrevAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool RedeemPrevAbility(int32 TraitIdx);
	void RedeemAllAbilitiesFromID(const class FString& HeroId);
	bool RedeemAllAbilities();
	bool PurchaseNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool PurchaseNextAbility(int32 TraitIdx);
	void MarkHeroAsSeen(const class FString& HeroId);
	bool IsSkillTreeUnlocked();
	bool IsShowingStatsScreen();
	bool IsCreateHeroEnabled();
	int32 GetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool GetTraitDepth(int32 TraitIdx, int32* Depth);
	int32 GetNumUnspentAbilityPointsFromID(const class FString& HeroId);
	bool GetNumUnspentAbilityPoints(int32* NumAbilityPoints);
	int32 GetNumHeroTraits();
	int32 GetNextAbilityCostFromID(const class FString& HeroId, int32 TraitIdx);
	int32 GetNextAbilityCost(int32 TraitIdx);
	int32 GetMaxNameLength();
	struct FHeroUIData GetHeroDataFromID(const class FString& HeroId);
	bool GetHeroData(struct FHeroUIData* HeroData);
	void GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats);
	bool GetCurrentHeroID(class FString* HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilities();
	bool GetAttributeValuesArrayFromID(const class FString& HeroId, const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	bool GetAttributeValuesArray(const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	float GetAttributeValueFromID(const class FString& HeroId, struct FGameplayAttribute& Attribute, bool bUseProxy);
	float GetAttributeValue(struct FGameplayAttribute& Attribute, bool bUseProxy);
	TArray<class FString> GetAllHeroIDs();
	class UFortAbilitySystemComponent* GetAbilitySystemComponent();
	int32 GetAbilityCostFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	int32 GetAbilityCost(int32 TraitIdx, int32 TraitDepth);
	void GenerateRandomHeroName(class UDataTable* NameTable, class FString* Name);
	void FocusOnHero(const class FString& HeroId);
	enum class ENameStatus CheckHeroNameValidity(const class FString& Name);
	bool CanRedeemAllAbilities();
	bool CanModifyTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanModifyTraitDepth(int32 TraitIdx);
	bool CanAffordNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanAffordNextAbility(int32 TraitIdx);
	bool CanAffordAbilityFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	bool CanAffordAbility(int32 TraitIdx, int32 TraitDepth);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortSquadStatDetailsWidget
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_11BF[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatDetailsWidget");
		return Clss;
	}

};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortHeroSquadBonusPerksWidgetBase
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                   SupportBonusPerkWidget;                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPerkWidget_NUI*                   TacticalBonusPerkWidget;                           // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSquadBonusPerksWidgetBase");
		return Clss;
	}

};

// 0x110 (0x438 - 0x328)
// Class FortniteUI.FortSquadManagementScreenBase
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_11C5[0x10];                                    
	class UFortSquadStatsWidgetBase*             SquadStatsWidget;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   SquadSlotsView;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            SelectedSlotDetailsPanel;                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              SelectedSlotItemPicker;                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectInputActionRowHandle;                       // 0x358(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x368(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryInputActionRowHandle;                     // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryCloseInputActionRowHandle;                // 0x398(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClosePickerInputActionRowHandle;                   // 0x3A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SelectPickerSlotActionRowHandle;                   // 0x3B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CyclePickerSortActionRowHandle;                    // 0x3C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousSquadActionRowHandle;                      // 0x3D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextSquadActionRowHandle;                          // 0x3E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClearAllActionRowHandle;                           // 0x3F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   AutoSlotActionRowHandle;                           // 0x408(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C6[0x10];                                    
	class UFortItemViewContext_SquadSlotsView*   ItemViewContext_SquadSlotsView;                    // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;               // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadManagementScreenBase");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetAttributeValueFromSquad(float* OutValue, struct FGameplayAttribute& Attribute);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSquadWithOffset(int32 Offset);
	void SelectPreviousSquad();
	void SelectNextSquad();
	void NavigateToSquadSlot(int32 SquadSlotIndex);
	void HandleViewInAll(int32 SquadSlotIndex);
	void HandleSquadStateChanged();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void HandleSelectPickerSlotInputAction();
	void HandlePreviousSquadInputAction();
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandleOpenSquadSlot(int32 SquadSlotIndex);
	void HandleNextSquadInputAction();
	void HandleManageInputAction();
	void HandleInventoryInputAction();
	void HandleInspectInputAction();
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void HandleDifferentSquadSetBP();
	void HandleCyclePickerSortInputAction();
	void HandleClosePickerInputAction();
	void HandleBackInputAction();
	class FName GetIdOfSquadToManageBP();
	void ClearSquad();
};

// 0x20 (0x458 - 0x438)
// Class FortniteUI.FortHeroSquadManagementScreen
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                   ManageDefendersInputActionRowHandle;               // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortHeroSquadBonusPerksWidgetBase*    BonusPerksWidget;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C8[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSquadManagementScreen");
		return Clss;
	}

	void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortIconWithLabel
class UFortIconWithLabel : public UWidget
{
public:
	bool                                         ShouldShowIcon;                                    // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCollapseIconWhenNotShown;                    // 0x101(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    IconBrushSize;                                     // 0x102(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x103(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C9[0x4];                                     
	TSubclassOf<class UCommonTextStyle>          LabelTextStyle;                                    // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CA[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortIconWithLabel");
		return Clss;
	}

};

// 0x10 (0x130 - 0x120)
// Class FortniteUI.FortHeroSupportPerkIndicator
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CB[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSupportPerkIndicator");
		return Clss;
	}

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType SupportTypeToRepresent);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x358 (0x560 - 0x208)
// Class FortniteUI.FortHeroSupportPerkWidget
class UFortHeroSupportPerkWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class UFortHero>              HeroToRepresent;                                   // 0x208(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportPerkWidgetState       SupportPerkWidgetState;                            // 0x211(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CC[0x6];                                     
	class UFortMultiSizeImage*                   PerkImage;                                         // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NameText;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CD[0x330];                                   

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSupportPerkWidget");
		return Clss;
	}

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType InSupportTypeToRepresent);
	void SetState(enum class EFortSupportPerkWidgetState InState);
	void SetHeroToRepresent(class UFortHero* InHeroToRepresent);
	void OnSupportTypeUpdated();
	void OnStateChanged();
	void OnHeroUpdated();
	bool IsPerkUnlocked();
	bool IsPerkInCorrectSlot();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool IsPerkActive();
	bool IsHeroInSupportSlot();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHomebaseNodeItemUtilities
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomebaseNodeItemUtilities");
		return Clss;
	}

	bool TryGetHomebaseNodeState(class UWidget* Widget, class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSquadSlotUnseen(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	bool IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	void GetHomebaseNodePageNames(TArray<class FName>* NodePages);
	void GetHomebaseNodeItems(class AFortPlayerController* FortPC, TArray<class UFortHomebaseNodeItem*>* NodeItems);
	class FName GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	class UFortHomebaseNodeItem* GetHomebaseNodeItem(class AFortPlayerController* FortPC, class FName& NodeID);
	bool AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController* FortPC, enum class EFortHomebaseSquadType SquadType);
	bool AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController* FortPC, class FName& SquadId);
};

// 0x70 (0x98 - 0x28)
// Class FortniteUI.FortHomebaseUIContext
class UFortHomebaseUIContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnSquadSlotChanged;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarlyGameFinished;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePurchased;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             SquadIconDataTableAsset;                           // 0x58(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11DD[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomebaseUIContext");
		return Clss;
	}

	void SetShowHeroHeadAccessoriesForLocalPlayer(bool bShow);
	void SetShowHeroBackpackForLocalPlayer(bool bShow);
	void OnSquadSlotChanged__DelegateSignature(class FName SquadName, int32 SlotIndex);
	void OnNodesPurchased__DelegateSignature(class FName NodeID);
	bool IsInEarlyGame();
	bool IsAnySquadSlotUnlocked(class FName SquadId);
	void GetWorkerSetBonusEffectModifiers(struct FGameplayTag& SetBonusTag, TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	int32 GetTotalNodesInSkillTreePage(class FName PageId);
	struct FFortMultiSizeBrush GetSquadIcon(class FName SquadId);
	bool GetShowHeroHeadAccessoriesForLocalPlayer();
	bool GetShowHeroBackpackForLocalPlayer();
	class FName GetRootSkillTreePageId();
	class FName GetRootSkillTreeNodeId();
	struct FSlateColor GetQuestNodeColour();
	int32 GetNumOwnedNodesInSkillTreePage(class FName PageId);
	bool GetNodeTagBonusesForDisplay(class FName NodeID, TArray<struct FFortTagUIData>* OutGrantedTagsUIData);
	bool GetNodeDescription(class FName NodeID, class FText* OutDescription);
	bool GetNodeAttributeBonusesForDisplay(class FName NodeID, TArray<struct FFortDisplayAttribute>* OutDisplayAttributes);
	bool GetLocalPlayerHasHeroHeadAccessories();
	bool GetLocalPlayerHasHeroBackpack();
	TArray<class UFortItem*> GetItemsInSquad(class FName SquadId, bool bRemoveEmptySquadSlots);
	class UFortItem* GetItemInSquadSlot(class FName SquadName, int32 SlotIndex);
	class FName GetEarlyGameRootSkillTreePageId();
	class FName GetEarlyGameRootSkillTreeNodeId();
	void GetEarlyGameNodeProgressionState(int32* OutOwnedNodeCount, int32* OutRequiredNodeCountToLeaveEarlyGame);
	class FName GetEarlyGameNodePageId();
};

// 0x8 (0x390 - 0x388)
// Class FortniteUI.FortHomeCMSScreenBase
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase
{
public:
	class UWidgetSwitcher*                       LayoutSwitcher;                                    // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomeCMSScreenBase");
		return Clss;
	}

	void OnTilesLoaded();
	bool AreTilesLoaded();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortHUDCenterPopupMessageWidget
class UFortHUDCenterPopupMessageWidget : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UUserWidget>             CenterPopupModalWidgetClass;                       // 0x210(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11DF[0x8];                                     
	class UCommonActivatablePanel*               CenterPopupModalWidget;                            // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDCenterPopupMessageWidget");
		return Clss;
	}

	void UpdateState();
	void OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup);
	enum class ECenterPopupMessageStateEnum GetCenterPopupMessageState();
};

// 0x5A0 (0x5C8 - 0x28)
// Class FortniteUI.FortHUDContext
class UFortHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_11E6[0x8];                                     
	UMulticastDelegateProperty_                  OnCursorModeChanging;                              // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCursorModeChanged;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGameViewportActivationChanged;                   // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMgmtMenuTabChangeRequested;                      // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnIndicatorModeChanged;                            // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnContextualReticleChanged;                        // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVehicleFocused;                                  // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingFocused;                                 // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingStateChanged;                     // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingHealthChanged;                    // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingRepairCostChanged;                // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapDurabilityChanged;    // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapChanged;              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamagedResourceBuilding;                         // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerCanInteract;                               // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInteractUpdated;                                 // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerTargetingChanged;                          // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreChanged;                                    // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreStatChanged;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneCompleted;                                   // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnSet;                                         // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamageReceived;                                  // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnableToPerformAction;                           // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxHealthChanged;                     // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerHealthChanged;                        // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDied;                                 // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerSpawned;                              // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerRevived;                              // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKillsChanged;                         // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerPlaceChanged;                         // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerViewTargetChanged;                    // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxShieldChanged;                     // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerShieldChanged;                        // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxStaminaChanged;                    // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerStaminaChanged;                       // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnToggleScoreboard;                                // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndOfDayRecap;                                   // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveCombatStart;                                 // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveBasedModifiersApplied;                       // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActiveGameplayModifiersChanged;                  // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierInitialized;                            // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierComplete;                               // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeWaveComplete;                               // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingMaterialCycled;                          // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHighlightsCountChanged;                          // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUIResetRequired;                                 // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHUDStateRefreshed;                               // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWeaponEquippedDelegate;                          // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilityDecisionWindowStackUpdated;               // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemCollectorChanged;                            // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTotalQuantumChanged;                             // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllFOBCoresAdded;                                // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldDaysElapsedChanged;                         // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNumSurvivorsRescuedChanged;                      // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarnedBadgesChanged;                             // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPotentialBadgesChanged;                          // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionManagerCreated;                           // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionsUpdated;                                 // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedMissionChanged;                           // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterUniqueIDChanged;                          // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneDifficultyInfoRowChanged;                    // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDifficultyIncreaseRewardTierChanged;             // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDifficultyIncreaseRewardsChanged;                // 0x410(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionGeneratorChanged;                         // 0x420(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionRewardsChanged;                           // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestAdded;                            // 0x440(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestRemoved;                          // 0x450(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E7[0x18];                                    
	UMulticastDelegateProperty_                  OnHUDElementVisibilityChanged;                     // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E8[0x10];                                    
	UMulticastDelegateProperty_                  OnDebugHUDObjectiveHeightChangedDelegate;          // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildModeChanged;                                // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPersonalVehicleModeChanged;                      // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDebugHudObjectiveHeight;                          // 0x4C8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingAttachToHUD;                               // 0x4C9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11E9[0x6];                                     
	class AFortPlayerState*                      OwningPlayerState;                                 // 0x4D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingActor*                        CurFocusedBuilding;                                // 0x4D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingTrap*                         CurFocusedTrap;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EA[0x8];                                     
	class ABuildingActor*                        BuildingFocusCandidates;                           // 0x4F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EB[0xD0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDContext");
		return Clss;
	}

	void UpdateTrapAttachedToBuilding();
	void ToggleFullScreenMap();
	bool ShouldOnlyShowNextPrevBuildingSlotKeybinds();
	void SetPreparingMgmtMenu(bool bPreparing);
	void SetIndicatorsState(enum class EFortIndicatorState NewState);
	void SetIndicatorsAllowed(bool bIndicatorsAllowed);
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void SetCursorModeLocked(bool bLocked);
	void RequestMgmtMenuTab(class FName TabName);
	void RemovePointOfInterest(class AActor* PointOfInterest);
	bool IsPreparingMgmtMenu();
	bool IsInEditMode();
	bool IsInCursorMode();
	void HandlePersonalVehicleModeChanged(bool bEnteredVehicle);
	void HandleLocalPlayerViewTargetChanged();
	void HandleLocalPlayerPlaceChanged();
	void HandleLocalPlayerKillsChanged();
	void HandleLocalPawnSpawned();
	void HandleLocalPawnRevived();
	void HandleLocalPawnDied(struct FFortPlayerDeathReport& DeathReport);
	void HandleFocusedBuildingHealthChanged();
	void HandleBuildingModeChanged(bool bEntering);
	float GetTimeToDelayEndOfDayZoneWidgetDisplay();
	class AFortPvPBaseCornerstone* GetTeamCornerstone(enum class EFortTeam Team);
	float GetScoreDisplayFactor();
	TArray<struct FFortBadgeCount> GetPotentialBadges();
	class AFortPlayerStateZone* GetPlayerStateZone();
	int32 GetNumAllowedDifficultyIncreases();
	void GetMissionRewards(TArray<class UFortItem*>* MissionRewards, TArray<class UFortItem*>* MissionAlertRewards);
	TArray<struct FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives();
	class AFortMissionManager* GetMissionManager();
	struct FFortKillerVisualInfo GetKillerVisualInfoFromDeathReport(struct FFortPlayerDeathReport& DeathReport);
	enum class EFortIndicatorState GetIndicatorsState();
	class AFortGameStateZone* GetGameStateZone();
	class AFortMission* GetFocusedMission();
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo);
	TArray<struct FEarnedBadgeEntry> GetEarnedBadges();
	int32 GetDifficultyIncreaseRewardsTier();
	void GetDifficultyIncreaseRewardsDifference(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* RewardDeltaInfo);
	void GetDifficultyIncreaseRewards(int32 DifficultyIncreaseTier, TArray<struct FFortItemDelta>* DifficultyIncreaseRewards);
	struct FFortHUDState& GetCurrentHUDState();
	class UFortHero* GetCurrentHero();
	bool GetCurrentBasicMissionInfo(struct FFortBasicMissionInfo* BasicMissionInfo);
	class AFortBluGloManager* GetBluGloManager();
	void ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ForwardOnNumSurvivorsRescuedChanged(int32 NumSurvivorsRescued);
	void ForwardOnMissionsUpdated();
	void ForwardOnAbilityDecisionWindowStackUpdated();
	void EnterCursorMode(class FName ActionName, class UUserWidget* CursorModeWidget);
	void EnterCameraMode();
	bool AreIndicatorsEnabled();
	bool AreHUDElementsVisible(struct FGameplayTagContainer& HUDElementTags);
	void AddPointOfInterest(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortHUDEquipProgressBase
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDEquipProgressBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHUDObjectiveSizeInterface
class UFortHUDObjectiveSizeInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDObjectiveSizeInterface");
		return Clss;
	}

	float GetHeightEstimate();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortHUDTargetUnderReticleWidget
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
public:
	UInterfaceProperty_                          Target;                                            // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bKeepTargetUntilNewValidTarget;                    // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EC[0x7];                                     
	struct FGameplayTagContainer                 TargetRequiredTags;                                // 0x228(0x20)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11ED[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDTargetUnderReticleWidget");
		return Clss;
	}

	void OnTargetHealthChanged();
	void OnTargetDied();
	void OnTargetDestroyed();
	void OnTargetChanged();
	void OnTargetActorDestroyed(class AActor* DestroyedActor);
	void HandleOnHUDTargetUnderReticle(UInterfaceProperty_* NewTarget);
	void ClearTarget();
};

// 0x40 (0x70 - 0x30)
// Class FortniteUI.FortHUDVisibilityData
class UFortHUDVisibilityData : public UDataAsset
{
public:
	struct FGameplayTag                          HUDVisibilityGameplayTag;                          // 0x30(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Visible;                                           // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EE[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHUDVisibilityData");
		return Clss;
	}

};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortInfoWindow
class UFortInfoWindow : public UFortActivatablePanel
{
public:
	class UCommonListView*                       InfoEntries;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInfoWindow");
		return Clss;
	}

	class UWidget* GetListWidget(class UObject* Item);
};

// 0x30 (0x270 - 0x240)
// Class FortniteUI.FortInputReflector
class UFortInputReflector : public UCommonInputReflector
{
public:
	struct FDataTableRowHandle                   MoreInfoActionData;                                // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortActivatablePanel>  PanelRequestingMoreInfo;                           // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EF[0x8];                                     
	class UCommonButton*                         MoreInfoButton;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMenuAnchor*                           MoreInfoMenuAnchor;                                // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInputReflector");
		return Clss;
	}

	void OnInputActionTriggered(bool* bPassThrough);
	class UWidget* GetPopupMenuWidget();
};

// 0x178 (0x1A0 - 0x28)
// Class FortniteUI.FortInventoryContext
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnMcpWorldItemsChanged;                            // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpOutpostItemsChanged;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldItemListChanged;                            // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOutpostItemListChanged;                          // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemPickedUp;                                    // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarContentsChanged;                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSlotFocusChanged;                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSecondarySlotFocusChanged;               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarForceFullUpdate;                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldItemsChanged;                               // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPinnedSchematicsChanged;                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicsLockedChanged;                         // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicUnlocked;                               // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCraftItemStarted;                                // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCraftItemFailed;                                 // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemLimitStateChangedEvent;                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UFortSchematicItemDefinition*, bool> SchematicLockedStates;                             // 0x128(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1227[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInventoryContext");
		return Clss;
	}

	bool WouldExceedMaxStackSize(class UFortItemDefinition* ItemDefinition, int32 QuantityToTest);
	void UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition);
	void UnlockAllSchematics();
	void SortAccountItemArrayForTransmog(TArray<class UFortAccountItem*>& VaultItems, TArray<class UFortAccountItem*>* SortedItems);
	bool SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled);
	bool RemoveItemFromQuickBar(class UFortItem* Item);
	struct FFortItemQuantityPair MakeItemQuantityPair(class UFortItemDefinition* ItemDefinition, int32 ItemQuantity);
	void LockAllSchematics();
	bool IsTrapAvailableForBuilding(class ABuildingSMActor* Actor);
	bool IsSlotHidden(enum class EFortQuickBars InQuickBar, int32 Slot);
	bool IsSchematicPinned(class UFortSchematicItem* Schematic);
	bool IsPickAxeEquipped();
	bool HasUnavailableItemsInStorage();
	bool HasTrapReadyForBuilding(class ABuildingSMActor* BuildingToAttachTo);
	bool HasRecyclingWarnings(class UFortItem* Item);
	bool HasGameplayTagContainerExact(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasEvolutions(class UFortItem* Item);
	void HandleMcpProfilesInitialized();
	void GetWorldItemListForDeployableBaseThePlayerIsIn(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	void GetWorldItemList(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	class UFortPersistentResourceItemDefinition* GetVoucherResourceItemDefinition();
	enum class EVaultItemLimitStatus GetVaultItemLimitStatus();
	int32 GetVaultItemLimit();
	TArray<class FText> GetUserFriendlyTags(class UFortItem* Item);
	struct FRecipe GetUpgradeItemRarityRecipeFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	void GetUnseenTransformKeys(enum class EConversionControlKeyRequest RequestType, enum class EInventoryContentSortType SortType, TArray<class UFortAccountItem*>* TransformKeys);
	class FText GetTrapAttachTypeName(class ABuildingSMActor* Actor);
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition* ItemDefinition, struct FTransmogSacrifice* OutTransmogData);
	void GetTransformKeys(enum class EConversionControlKeyRequest RequestType, enum class EInventoryContentSortType SortType, TArray<class UFortAccountItem*>* TransformKeys);
	int32 GetTotalItemQuantityByDefinition(class UFortItemDefinition* ItemDefinition);
	class FText GetTierText(enum class EFortItemTier Tier);
	bool GetSupportBonusPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* SupportBonusPerks);
	int32 GetStorageOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	int32 GetStorageNumItems();
	int32 GetStorageCapacity();
	class FText GetShorthandItemStackCount(int32 Quantity, int32 MiniumFractionalDigits, int32 MaximumFractionalDigits);
	class UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition();
	int32 GetResourceItemMaxStackSize(enum class EFortResourceType ResourceType);
	class UFortResourceItemDefinition* GetResourceItemDefinition(enum class EFortResourceType ResourceType);
	class UTexture2D* GetResourceIcon(enum class EFortResourceType ResourceType);
	int32 GetResourceCount(enum class EFortResourceType ResourceType);
	class FText GetRecyclingWarningText(enum class EItemRecyclingWarning Warning, bool WereAnyItemsAnimate);
	class FText GetRecyclingCatalystDisplayName(class UFortItem* Item);
	class FText GetRecycleRestrictionReasonText(enum class EItemRecyclingRestrictionReason Reason);
	class UFortItem* GetQuickBarSlottedItem(enum class EFortQuickBars InQuickBar, int32 Slot);
	void GetQuickbarFocus(enum class EFortQuickBars* OutQuickBar, int32* OutSlot, int32* OutSecondarySlot, int32* OutPreviousFocusedSlot);
	void GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems);
	class UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition();
	int32 GetNumInInventory(class UFortItemDefinition* ItemDefinition, bool bIncludeReserved);
	int32 GetNumGiftingStamps();
	enum class EFortItemTier GetItemTierRecyclingWarningThreshold();
	enum class EFortRarity GetItemRarityRecyclingWarningThreshold();
	int32 GetItemLevelRecyclingWarningThreshold();
	void GetItemInstancesByDefinition(class UFortItemDefinition* ItemDefinition, TArray<class UFortItem*>* Items);
	void GetHomebaseUnlockedTransmogKeys(TArray<class UFortAccountItem*>* TransmogKeys);
	class UFortPersistentResourceItemDefinition* GetHeroResourceItemDefinition();
	bool GetHeroAbilityPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* HeroAbilityPerks);
	bool GetGameplayTagByIndex(const struct FGameplayTagContainer& GameplayTagContainer, int32 Index, struct FGameplayTag* Result);
	class FText GetEvolveRestrictionReasonText(enum class EItemEvolutionRestrictionReason Reason);
	class AFortWeapon* GetEquippedWeapon();
	class FText GetDisassembleRestrictionReasonText(enum class EItemDisassembleRestrictionReason Reason);
	int32 GetDeployableBaseOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	void GetDeployableBaseItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition();
	int32 GetCurrentResourceCount();
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition();
	int32 GetCountOfVaultLimitedItems();
	int32 GetCountOfHeroItems();
	void GetCoreItemsByType(enum class EFortItemType ItemType, TArray<class UFortAccountItem*>* Items);
	void GetCoreItemsByFilterType(const class FString& SearchText, enum class EInventoryContentSortType SortType, enum class EFortInventoryFilter SubType, TArray<class UFortAccountItem*>* OutItemList);
	TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	int32 GetBackpackOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	void GetBackpackItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	void GetAccountItemsByType(enum class EFortItemType ItemType, TArray<class UFortAccountItem*>* Items);
	void GetAccountItemsByFilterType(const class FString& SearchText, enum class EInventoryContentSortType SortType, enum class EFortInventoryFilter SubType, TArray<class UFortAccountItem*>* OutItemList);
	void EquipItem(class UFortItem* Item);
	void EnumerateRecyclingWarningsForItems(TArray<class UFortItem*>& Items, TArray<enum class EItemRecyclingWarning>* OutWarnings);
	bool DropItemOnQuickBar(class UFortItem* Item, enum class EFortQuickBars TargetQuickbar, int32 TargetSlot);
	void DropItem(class UFortWorldItem* ItemBeingDropped, int32 Quantity);
	bool DoesItemMatchFilter(class UFortItem* Item, struct FFortItemListFilter& FilterSettings);
	void DestroyWorldItem(class UFortItem* Item);
	bool CraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool CraftAndSlotSchematic(class UFortSchematicItem* SchematicItem, int32 PostCraftSlot, enum class EFortCraftFailCause* FailCause);
	bool CanUpgradeItemRarity(class UFortItem* Item, TArray<enum class EItemEvolutionRestrictionReason>* OutRestrictionReasons);
	bool CanSwapItem(class UFortItem* Item, enum class EFortQuickBars TargetQuickbar, int32 TargetSlot);
	bool CanRecycle(class UFortItem* Item, TArray<enum class EItemRecyclingRestrictionReason>* OutRestrictionReasons);
	bool CanPinSchematic(class UFortSchematicItem* Schematic);
	bool CanEvolve(class UFortItem* Item, TArray<enum class EItemEvolutionRestrictionReason>* OutRestrictionReasons);
	bool CanDisassembleItem(class UFortWorldItem* Item, TArray<enum class EItemDisassembleRestrictionReason>* OutRestrictionReasons);
	bool CanCraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool AreRecipeRequirementsMet(TArray<struct FFortItemQuantityPair>& RecipeCosts);
	bool AreAnyItemsUnseenForInventoryFilter(enum class EFortFrontendInventoryFilter FilterType);
	bool AreAnyItemsAnimate(TArray<class UFortItem*>& Items);
	bool ActivateItem(class UFortItem* Item);
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortInventoryOverflowIndicator
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInventoryOverflowIndicator");
		return Clss;
	}

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortInviteRequest
class UFortInviteRequest : public UCommonUserWidget
{
public:
	uint8                                        Pad_1228[0x10];                                    
	class UCommonButton*                         Button_RequestInvite;                              // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Logout;                                     // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInviteRequest");
		return Clss;
	}

};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortItemBaseWidget
class UFortItemBaseWidget : public UCommonUserWidget
{
public:
	struct FFortItemQuantityPair                 ItemQuantityPair;                                  // 0x210(0x40)(NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemBaseWidget");
		return Clss;
	}

	void SetItemQuantityPairToRepresent(const struct FFortItemQuantityPair& InItemQuantityPair);
	void SetItemDefinitionToRepresent(class UFortItemDefinition* InItemDefinition);
	void OnItemDefinitionChanged();
	void OnItemCountChanged(int32 NewCount);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta);
	int32 GetQuantity();
	class UFortItemDefinition* GetItemDefinition();
};

// 0x28 (0x128 - 0x100)
// Class FortniteUI.FortItemWidget_NUI
class UFortItemWidget_NUI : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_122A[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemWidget_NUI");
		return Clss;
	}

	void SetItemViewContext(UInterfaceProperty_ ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x0 (0x128 - 0x128)
// Class FortniteUI.FortItemCardBase
class UFortItemCardBase : public UFortItemWidget_NUI
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCardBase");
		return Clss;
	}

	enum class EFortItemCardSize PortBrushSize(enum class EFortBrushSize& BrushSize);
};

// 0xF8 (0x120 - 0x28)
// Class FortniteUI.FortItemCardMaterialPooler
class UFortItemCardMaterialPooler : public UObject
{
public:
	uint8                                        Pad_122B[0xF8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCardMaterialPooler");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemCardUtilities
class UFortItemCardUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCardUtilities");
		return Clss;
	}

	struct FVector2D GetCardDimensions(enum class EFortItemType ItemType, enum class EFortItemCardSize CardSize, bool IsReward, bool UseNewItemCardSizes);
};

// 0x10 (0x130 - 0x120)
// Class FortniteUI.FortItemCategoryIndicator
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCategoryOrdinal          OrdinalOfCategoryToRepresent;                      // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122C[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCategoryIndicator");
		return Clss;
	}

	void SetOrdinalOfCategoryToRepresent(enum class EFortItemCategoryOrdinal ItemCategoryOrdinal);
	void SetLabelColorOverride(const struct FLinearColor& InLabelColorOverride);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void ClearLabelColorOverride();
};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortItemCollectorWidget
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	class ABuildingItemCollectorActor*           ItemCollector;                                     // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122E[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCollectorWidget");
		return Clss;
	}

	void OnItemCollectorValuesChanged(class UFortWorldItemDefinition* InputItem, int32 Goal, int32 Deposit, int32 Captures);
	void OnItemCollectorStateChanged(enum class EFortItemCollectorState ItemCollectorState);
	void OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector);
};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortItemCooldownWidget
class UFortItemCooldownWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCooldownStarted_Delegate;                        // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCooldownStopped_Delegate;                        // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      CooldownText;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CooldownImage;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownPercentageMID;                             // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122F[0x48];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCooldownWidget");
		return Clss;
	}

	void SetItem(class UFortWorldItem* InWorldItem);
	void OnWorldItemDestroyed();
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType);
};

// 0x18 (0x300 - 0x2E8)
// Class FortniteUI.FortItemCountTextBlock
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCountStyle               CountStyle;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1231[0x3];                                     
	float                                        ItemCountMaxInterpolateDuration;                   // 0x2F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemCountMinInterpolateRate;                       // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1232[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCountTextBlock");
		return Clss;
	}

	void SetOverrideValue(int32 InOverrideValue);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetCountStyle(enum class EFortItemCountStyle InCountStyle);
	void InterpolateOverrideToValue(int32 TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta);
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.FortItemDetailsActivatablePanel
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1233[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsActivatablePanel");
		return Clss;
	}

	void HandleDifferentItemToDetailSetBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleConsumeItemProgressChangedBP();
};

// 0x8 (0x338 - 0x330)
// Class FortniteUI.FortItemDetailsModeActivatablePanel
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UCommonWidgetSwitcher*                 DetailPanelWidgetSwitcher;                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsModeActivatablePanel");
		return Clss;
	}

	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
};

// 0x10 (0x340 - 0x330)
// Class FortniteUI.FortItemCompareModeActivatablePanel
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   ComparisonModeLeftItemDetailsPanel;                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementItemDetailsPanel*   ComparisonModeRightItemDetailsPanel;               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCompareModeActivatablePanel");
		return Clss;
	}

};

// 0x10 (0x340 - 0x330)
// Class FortniteUI.FortItemMulchModeActivatablePanel
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   MulchModeItemDetailsPanel;                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementMulchDetailsPanel*  MulchDetailsPanel;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemMulchModeActivatablePanel");
		return Clss;
	}

};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortItemDetailElementWidget
class UFortItemDetailElementWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1235[0x7];                                     
	UInterfaceProperty_                          ItemViewContext;                                   // 0x228(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x238(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1236[0x1F];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailElementWidget");
		return Clss;
	}

	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePreDifferentItemToDetailSet();
	void HandlePreDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void HandleItemToDetailChangedBP();
	void HandleInspectModeChanged();
};

// 0x68 (0x278 - 0x210)
// Class FortniteUI.FortItemDetailsHostPanel
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1237[0x7];                                     
	class UScrollBox*                            ScrollBox;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            DetailsContainerSlotWidget;                        // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         HighRarityBorder;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1238[0x27];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsHostPanel");
		return Clss;
	}

	void ShouldPreviewUpgradingItem(bool Value);
	void SetScrollWidget();
	void SetItemViewContext(UInterfaceProperty_& ItemViewContext);
	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void SetInspectMode(enum class EFortItemInspectionMode InspectMode);
	void HandleShouldPreviewUpgradingItemChangedBP();
	void HandleInspectModeChanged();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortItemDetailsPanel
class UFortItemDetailsPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_123A[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsPanel");
		return Clss;
	}

	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget);
};

// 0x30 (0x290 - 0x260)
// Class FortniteUI.FortItemDisplayNameText
class UFortItemDisplayNameText : public UCommonTextBlock
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123B[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDisplayNameText");
		return Clss;
	}

	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0xE8 (0x1E8 - 0x100)
// Class FortniteUI.FortItemIcon
class UFortItemIcon : public UWidget
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123C[0x3];                                     
	struct FLinearColor                          ColorAndOpacity;                                   // 0x10C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShadow;                                           // 0x11C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123D[0x3];                                     
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SmallPreviewImageBrush;                            // 0x130(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_123E[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemIcon");
		return Clss;
	}

	void SetShadowColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushSize(enum class EFortBrushSize InBrushSize);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortItemInfoWidget
class UFortItemInfoWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemInfoWidget");
		return Clss;
	}

	void PopulateUsingItemDefinition(class UFortItemDefinition* NewItem);
	void PopulateUsingItem(class UFortItem* NewItem);
};

// 0xA8 (0x468 - 0x3C0)
// Class FortniteUI.FortItemInspectionScreen
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{
public:
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x3C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1241[0x3];                                     
	TWeakObjectPtr<class UFortItem>              InspectedItem;                                     // 0x3C4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UpgradeAllowed;                                    // 0x3CC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EvolveAllowed;                                     // 0x3CD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FavoriteAllowed;                                   // 0x3CE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RarityUpgradingAllowed;                            // 0x3CF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPreviewing;                                      // 0x3D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1242[0x7];                                     
	class UFortItemInspectCycleWidget*           CycleWidget;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     InspectAnimationTag;                               // 0x3E0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModScreenBase> AlterationModScreenClass;                          // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1243[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemInspectionScreen");
		return Clss;
	}

	void SetItemToRepresent(class UFortItem* Item);
	void SetInspectionMode(enum class EFortItemInspectionMode NewInspectMode);
	void SetAttemptingConversion(bool bIsAttemptingConversion);
	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading);
	bool IsItemSlottedInCollectionBook(class UFortItem* Item);
	void HandleItemToInspectDestroyedBP();
	void HandleItemToInspectDestroyed();
	void HandleItemToInspectChangedBP();
	void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleIsPreviewingChanged();
	void HandleDifferentItemToInspectSetBP();
	void HandleDifferentInspectionModeSetBP();
	class UFortItemInspectCycleWidget* GetCycleWidget();
	bool DoesItemHaveLegacyAlterations();
	void DoAlterationModification();
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortItemInspectCycleWidget
class UFortItemInspectCycleWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnItemToRepresentChanged;                          // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemTileView>      ItemTileView;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousItemActionRowHandle;                       // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextItemActionRowHandle;                           // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1246[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemInspectCycleWidget");
		return Clss;
	}

	void SetupActionHandlers();
	void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);
	void SetItemToRepresent(class UFortItem* NewItemToRepresent);
	void SelectPreviousItem();
	void SelectNextItem();
	void SelectItemWithOffset(int32 Offset);
	void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem);
	class UFortItem* GetItemWithOffset_BP(int32 IndexOffset);
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortItemManagementCustomFilterModalWidget
class UFortItemManagementCustomFilterModalWidget : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortInventoryCustomFilter> AvailableFilters;                                  // 0x330(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<enum class EFortInventoryCustomFilter>  LocalCustomFilterSet;                              // 0x340(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementCustomFilterModalWidget");
		return Clss;
	}

	void ToggleFilter(enum class EFortInventoryCustomFilter Filter);
	void OnEndCommitCustomFilter(bool bWasSuccessful);
	void OnCustomFilterSetUpdated();
	void OnBeginCommitCustomFilter();
	bool IsCustomFilterEnabled(enum class EFortInventoryCustomFilter Filter);
	void EnableAllFilters();
	void DisableAllFilters();
	void CommitCustomFilters();
};

// 0x168 (0x378 - 0x210)
// Class FortniteUI.FortItemManagementInventoryPanel
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_124A[0x50];                                    
	class FName                                  CurrentFilterName;                                 // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInventoryContentSortType         CurrentSortType;                                   // 0x268(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124B[0x7];                                     
	TSubclassOf<class UCommonButton>             FilterTabButtonType;                               // 0x270(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        FilterTabButtonStyle;                              // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                           // 0x280(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                FilterTabList;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      TileViewLoadGuard;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     TileView;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          CraftingPanel;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      CraftingTileViewLoadGuard;                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     CraftingTileView;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          StoragePanel;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      StorageTileViewLoadGuard;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     StorageTileView;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MulchRestrictionReasonText;                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 SmallTileSize;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 LargeTileSize;                                     // 0x2E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124C[0x2];                                     
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x2E4(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124D[0x8C];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementInventoryPanel");
		return Clss;
	}

	void UpdateSchematicTiles();
	void ToggleTileSize();
	void TogglePrioritizeFavorites();
	void SwitchPanelFocus();
	void SetSortType(enum class EInventoryContentSortType SortType);
	void SetFilter(class FName FilterName);
	void RefreshCraftingSort();
	bool IsSwitchPanelAvailable();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleInventoryUpdatedEvent();
	void HandleFilterTabSelected(class FName TabNameID);
	void HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleDifferentSortTypeSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentFilterSetBP();
	void HandleCustomInventoryFilterChanged();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCraftItemStarted();
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();
	TArray<enum class EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();
	bool GetShouldPrioritizeFavorites();
	class FText GetQualifiedFilterDisplayName();
	void CycleSortType();
	void AdvanceSelection();
	void AddItemStackToMulch(class UFortItem* Item, int32 Count);
};

// 0x8 (0x320 - 0x318)
// Class FortniteUI.FortItemManagementItemPopupMenu
class UFortItemManagementItemPopupMenu : public UFortPopupMenu
{
public:
	uint8                                        Pad_124E[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementItemPopupMenu");
		return Clss;
	}

	void MulchItem();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleCompareAction();
	class UFortItemManagementItemTileButton* GetHostButton();
};

// 0x60 (0x920 - 0x8C0)
// Class FortniteUI.FortItemManagementItemTileButton
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x8C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTheItemToDetail;                                // 0x8C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasTheItemToCompareDetailsWith;                    // 0x8C9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasAnItemMarkedForMulching;                        // 0x8CA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124F[0x1];                                     
	int32                                        MulchCount;                                        // 0x8CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NotCraftableOverlay;                               // 0x8D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowCollectionBookIndicator;                       // 0x8E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1250[0x3F];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementItemTileButton");
		return Clss;
	}

	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void HandleShowCollectionBookIndicatorChanged();
	void HandleItemMulchStateChanged();
	void HandleItemChangedBP();
	void HandleHasItemToDetailChanged();
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void HandleDifferentItemManagementModeSetBP();
	class UWidget* GetPopupMenu();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x18 (0x290 - 0x278)
// Class FortniteUI.FortItemManagementItemDetailsPanel
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel
{
public:
	bool                                         HasItemMarkedForMulching;                          // 0x278(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1251[0x3];                                     
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x27C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1252[0xC];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementItemDetailsPanel");
		return Clss;
	}

	void HandleHostSet();
	void HandleHasItemMarkedForMulchingChanged();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortItemManagementMulchDetailsPanel
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*             ResourceList;                                      // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1253[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementMulchDetailsPanel");
		return Clss;
	}

	bool IsSpaceAvailableForMulch();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleHostSet();
	TArray<class UFortItem*> GetItemsToMulch();
	TArray<int32> GetItemCountsToMulch();
	void CommitMulch();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortItemManagementModeDetailsPanel
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                 ModeWidgetSwitcher;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      DetailsModeItemDetailsPanel;                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      ComparisonModeItemDetailsPanel;                    // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      MulchModeItemDetailsPanel;                         // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1254[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementModeDetailsPanel");
		return Clss;
	}

	void HandleHostSet();
	void HandleDifferentItemManagementModeSetBP();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFrontendInventoryFilterFunctionLibrary");
		return Clss;
	}

	class FText ToText(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
};

// 0x188 (0x4B0 - 0x328)
// Class FortniteUI.FortItemManagementScreen
class UFortItemManagementScreen : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnItemViewRefreshed;                               // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1258[0xC0];                                    
	enum class EFortItemManagementMode           Mode;                                              // 0x3F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x3F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnlyModeWIFE;                                 // 0x3FA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeItemRequestInProgress;                      // 0x3FB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1259[0x4];                                     
	class UFortItemManagementInventoryPanel*     InventoryPanel;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementModeDetailsPanel*   ModeDetailsPanel;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_125A[0x58];                                    
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x470(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemManagementCustomFilterModalWidget> CustomFilterModalClass;                            // 0x478(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_125B[0x18];                                    
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x498(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemManagementCustomFilterModalWidget* CustomFilterModal;                                 // 0x4A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_125C[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementScreen");
		return Clss;
	}

	void TransferItem(class UFortItem* Item);
	void ToggleShowCollectionBookIndicator();
	void ShowMulchConfirmationModal();
	void ShowCustomFilterModal();
	void SetFrontendInventoryFilter(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
	void SetConsumeItemRequestInProgress(bool InProgress);
	void RequestPopupMenuForSelectedItem();
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	bool IsScreenWIFE();
	void InspectItem(class UFortItem* Item);
	void HideMulchConfirmationModal();
	void HideCustomFilterModal();
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem);
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	bool GetShouldShowCollectionBookIndicator();
	int32 GetNumItemsToMulch();
	class UFortItem* GetItemToDetail();
	class UFortItem* GetItemToCompareDetailsWith();
	TArray<class UFortItem*> GetItemsToMulchBP();
	void EquipItem(class UFortItem* Item);
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterDetailsMode(class UFortItem* ItemToDetail);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void DropItem(class UFortItem* Item);
	void CycleSortType();
	void CraftItem(class UFortSchematicItem* SchematicItem);
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	bool CanRequestPopupMenuForSelectedItem();
	bool CanItemBeMulched(class UFortItem* Item, class FText* OutRestrictionReason);
	void CancelInventoryPanelTileViewRefresh();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortItemQuantityListEntryBase
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_125F[0x8];                                     
	int32                                        Quantity;                                          // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1260[0x1C];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemQuantityListEntryBase");
		return Clss;
	}

	void SetPreviewData(struct FFortItemEntryPreviewData& PreviewData);
	void SetItemInstanceAndQuantity(struct FFortItemInstanceQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void SetItemDefinitionAndQuantity(struct FFortItemQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void PreviewStarted();
	void PreviewEnded();
	bool IsBeingPreviewed();
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void GetPreviewData(struct FFortItemEntryPreviewData* OutPreviewData);
	class UFortItem* GetItemInstance();
	class UFortItemDefinition* GetItemDefinition();
	void ClearPreviewData();
};

// 0x80 (0x290 - 0x210)
// Class FortniteUI.FortItemQuantityListBase
class UFortItemQuantityListBase : public UCommonUserWidget
{
public:
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x210(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1263[0x7];                                     
	TSubclassOf<class UFortItemQuantityListEntryBase> ListEntryWidgetType;                               // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UObject*, class UFortItemQuantityListEntryBase*> ItemObjectToWidgetMap;                             // 0x220(0x50)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1264[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemQuantityListBase");
		return Clss;
	}

	void SetItemToCompareDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemToCompareQuantityPairs);
	void SetItemInstancesAndQuantities(TArray<struct FFortItemInstanceQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	void SetItemInspectMode(enum class EFortItemInspectionMode InspectMode);
	void SetItemDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	void OnItemInspectModeChanged();
	bool IsEmptyList();
	TArray<class UFortItemDefinition*> GetItemDefinitions();
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
};

// 0x368 (0x578 - 0x210)
// Class FortniteUI.FortItemRatingIndicator
class UFortItemRatingIndicator : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   RatingTypeIcon;                                    // 0x220(0x330)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	int32                                        RatingValue;                                       // 0x550(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x554(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldAppearEnchanted;                             // 0x555(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1265[0x22];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemRatingIndicator");
		return Clss;
	}

	void SetItemViewContext(UInterfaceProperty_ ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleViewModelChanged();
};

// 0x58 (0x380 - 0x328)
// Class FortniteUI.FortItemReceivedWidgetBase
class UFortItemReceivedWidgetBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1267[0x18];                                    
	TArray<struct FFortReceivedItemLootInfo>     ItemDefs;                                          // 0x340(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortGiftBoxItem*                      GiftBoxItem;                                       // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromUsername;                                      // 0x358(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        HeaderContainer;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            GiftScrollBox;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UItemCardWidgetBase>       ItemCardClass;                                     // 0x378(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemReceivedWidgetBase");
		return Clss;
	}

	void ShowGiftBox();
	void SetGiftBoxItem(class UFortGiftBoxItem* GiftBoxItem);
	void SetAlignmentOnSlots(class UScrollBox* Widget);
	void SetAlignmentOnSlot(class UScrollBox* Widget, int32 Index);
	void OnGiftBoxItemSetInternal();
	void OnGiftBoxItemSet();
	class UFortItem* GetTemporaryInstance(struct FFortReceivedItemLootInfo& ItemReference);
};

// 0x10 (0x390 - 0x380)
// Class FortniteUI.FortItemReceivedScreen
class UFortItemReceivedScreen : public UFortItemReceivedWidgetBase
{
public:
	UMulticastDelegateProperty_                  OnFinalGiftingComplete;                            // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemReceivedScreen");
		return Clss;
	}

};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortMessageReceivedScreen
class UFortMessageReceivedScreen : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnMessageClosed;                                   // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UFortGiftBoxItem*                      GiftBoxItem;                                       // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMessageReceivedScreen");
		return Clss;
	}

};

// 0x10 (0x390 - 0x380)
// Class FortniteUI.FortItemReceivedPrePrompt
class UFortItemReceivedPrePrompt : public UFortItemReceivedWidgetBase
{
public:
	UMulticastDelegateProperty_                  OnPrePromptClosed;                                 // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemReceivedPrePrompt");
		return Clss;
	}

};

// 0x18 (0x220 - 0x208)
// Class FortniteUI.ItemReceivedHeaderBase
class UItemReceivedHeaderBase : public UUserWidget
{
public:
	class UFortGiftBoxItem*                      GiftBoxItem;                                       // 0x208(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromUsername;                                      // 0x210(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedHeaderBase");
		return Clss;
	}

	void InitFromGiftBoxItem();
};

// 0x48 (0x70 - 0x28)
// Class FortniteUI.FortGiftInfo
class UFortGiftInfo : public UObject
{
public:
	struct FGiftBoxInfo                          GiftBoxInfo;                                       // 0x28(0x48)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftInfo");
		return Clss;
	}

};

// 0x10 (0x430 - 0x420)
// Class FortniteUI.ItemCardWidgetBase
class UItemCardWidgetBase : public UButton
{
public:
	class UFortGiftInfo*                         LootInfo;                                          // 0x420(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                FortMultiSizeItemCard_Widget;                      // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCardWidgetBase");
		return Clss;
	}

	void SetLootInfo(class UFortGiftInfo* LootInfo);
	void OnLootInfoSet();
};

// 0x0 (0x78 - 0x78)
// Class FortniteUI.FortNullItem
class UFortNullItem : public UFortItem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNullItem");
		return Clss;
	}

};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortItemTransform
class UFortItemTransform : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemTransform");
		return Clss;
	}

	void ProcessPendingSeenTransformKeys();
	void OnRequestCloseItemPicker();
	void LogSelectedKey(class UFortItem* SelectedKey);
};

// 0x178 (0x1A0 - 0x28)
// Class FortniteUI.FortItemView
class UFortItemView : public UObject
{
public:
	uint8                                        Pad_1268[0x8];                                     
	struct FDataTableRowHandle                   UnifiedZoomInputAction;                            // 0x30(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ZoomOutInputAction;                                // 0x40(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ZoomInInputAction;                                 // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   RotateInputAction;                                 // 0x60(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1269[0x120];                                   
	TArray<struct FDataTableRowHandle>           RegisteredInputActions;                            // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemView");
		return Clss;
	}

	void UnregisterInputActions();
	void SetSettings(struct FFortItemViewSettings& Settings);
	void SetSceneComponentToAffect(class USceneComponent* Component);
	void SetOwningPanel(class UCommonActivatablePanel* Panel);
	void RestoreInitialTransform();
	void RegisterInputActions();
	struct FFortItemViewSettings GetSettings();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemViewContextInterface
class UFortItemViewContextInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContextInterface");
		return Clss;
	}

};

// 0x38 (0x818 - 0x7E0)
// Class FortniteUI.FortItemWidget
class UFortItemWidget : public UFortBaseButton
{
public:
	UDelegateProperty_                           OnGetItemToCompareDelegate;                        // 0x7E0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x7F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownMaterial;                                  // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastCooldownTimeInSeconds;                         // 0x800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastCooldownPct;                                   // 0x804(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        LastIsActivatable : 1;                             // Mask : 0x1 0x808(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_126C[0xB];                                     
	int32                                        QuantityOverride;                                  // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemWidget");
		return Clss;
	}

	void SetOnGetItemToCompareDelegate(UDelegateProperty_ InDelegate);
	void SetItem(class UFortItem* InItem, int32 QuantityOverride);
	void SetCooldownMaterial(class UMaterialInstanceDynamic* NewCooldownMaterial);
	void OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare);
	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void OnFortItemDestroyed();
	bool IsSlotted();
	bool IsSchematic();
	bool IsItemValid();
	bool IsInventoryOverflowItem();
	bool IsEquipped();
	bool HasTertiaryCategory();
	bool HasSecondaryCategory();
	bool HasLevel();
	bool HasDurability();
	float GetType();
	int32 GetStackCount();
	enum class EFortRarity GetRarity();
	int32 GetLevel();
	class UFortItem* GetItemToCompare();
	class UFortItem* GetItem();
	class UTexture* GetIconTexture(enum class EFortBrushSize InBrushSize);
	float GetDurability();
	class FText GetDisplayName();
	class FText GetDescription();
	void BPOnItemSet(class UFortItem* NewItem);
	void BPOnItemChanged();
	void BPOnCooldownSecondsChanged(int32 NewCooldownSeconds);
	void BPOnActivatableChanged(bool bNewActivatable);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortJournalQuestDetails
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	class UFortQuestItem*                        CurrentQuest;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortJournalQuestDetails");
		return Clss;
	}

	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);
	void HandleCurrentQuestChangedBP();
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	enum class EFortTheaterMapTileType GetActiveMissionTileType();
	bool CanPlayQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanGotoQuest();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortJournalQuestProgressBar
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	uint8                                        Pad_126E[0x8];                                     
	TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo;                                // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortJournalQuestProgressBar");
		return Clss;
	}

	void GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction);
};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortKeybindWidget
class UFortKeybindWidget : public UCommonUserWidget
{
public:
	class FName                                  BoundAction;                                       // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  BoundKeyFallback;                                  // 0x218(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputTypeOverride;                                 // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonGamepadType                GamepadTypeOverride;                               // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForcedHoldKeybind;                                // 0x232(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortKeybindForcedHoldStatus      ForcedHoldKeybindStatus;                           // 0x233(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoldKeybind;                                    // 0x234(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowKeybindBorder;                                // 0x235(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowTimeCountDown;                                // 0x236(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1273[0x1];                                     
	struct FKey                                  BoundKey;                                          // 0x238(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HoldKeybindImage;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TextCountdown;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       KeyCountdownSwitcher;                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PercentageMaterialParameterName;                   // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressPercentageMID;                             // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1274[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortKeybindWidget");
		return Clss;
	}

	void UpdateKeybindWidget();
	void Update();
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void SetShowProgressCountDown(bool bShow);
	void SetForcedHoldKeybindStatus(enum class EFortKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetBoundKey(const struct FKey& NewBoundAction);
	void SetBoundAction(class FName NewBoundAction);
	bool IsHoldKeybind();
	bool GetBrushForKey(enum class EFortBrushSize BrushSize, struct FSlateBrush* Brush);
};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortLayoutQuestNode
class UFortLayoutQuestNode : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile*                QuestTile;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestNodeIndex;                                    // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1275[0x14];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLayoutQuestNode");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortLeaderboardContext
class UFortLeaderboardContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLeaderboardContext");
		return Clss;
	}

	bool CanShowStats();
	bool CanShowLeaderboards();
	bool CanShowGlobalLeaderboards();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortLeaderboardEntryWidget
class UFortLeaderboardEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_1276[0x8];                                     
	class UObject*                               LeaderboardEntryObject;                            // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLeaderboardEntryWidget");
		return Clss;
	}

};

// 0x18 (0x128 - 0x110)
// Class FortniteUI.FortLegacySlateBridgeWidget
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	enum class EFortLegacySlateWidget            ContainedWidgetType;                               // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1277[0x3];                                     
	float                                        DPIScaleFactor;                                    // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UDelegateProperty_                           OnClose;                                           // 0x118(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLegacySlateBridgeWidget");
		return Clss;
	}

	void UpdateSlateWidget(enum class EFortLegacySlateWidget SlateWidgetType);
	void SetOnCloseHandler(UDelegateProperty_& OnCloseHandler);
};

// 0x88 (0x188 - 0x100)
// Class FortniteUI.FortLevelIndicator
class UFortLevelIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemForComparison;                                 // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1278[0x7];                                     
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowMaximumLevel;                            // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1279[0x3];                                     
	int32                                        CurrentLevel;                                      // 0x124(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevel;                                      // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsComparingLevels;                                 // 0x12C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ComparisonResultIndicatorSize;                     // 0x12D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127A[0x2];                                     
	int32                                        CurrentLevelForComparison;                         // 0x130(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevelForComparison;                         // 0x134(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      LabelTextBlock;                                    // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               CurrentLevelNumericTextBlock;                      // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_127B[0x10];                                    
	class UCommonTextBlock*                      DivisionOperatorTextBlock;                         // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               MaximumLevelNumericTextBlock;                      // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_127C[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLevelIndicator");
		return Clss;
	}

	void SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemForComparison(class UFortItem* ItemForComparison);
	void HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortLiveStreamGrantWindowExpires
class UFortLiveStreamGrantWindowExpires : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLiveStreamGrantWindowExpires");
		return Clss;
	}

};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortLobby
class UFortLobby : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_127D[0x10];                                    
	class UOverlay*                              OverlayMain;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLobby");
		return Clss;
	}

	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
};

// 0x80 (0x378 - 0x2F8)
// Class FortniteUI.FortLoginCredentialSelect
class UFortLoginCredentialSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_127E[0x38];                                    
	class UCommonButton*                         Button_Epic;                                       // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Facebook;                                   // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Google;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_PS;                                         // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_XB;                                         // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Erebus;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_CreateAccount;                              // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoXB;                                       // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoSony;                                     // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLoginCredentialSelect");
		return Clss;
	}

};

// 0x40 (0x338 - 0x2F8)
// Class FortniteUI.FortLoginResultWidget
class UFortLoginResultWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_127F[0x10];                                    
	TSubclassOf<class UCommonTextStyle>          ErrorStyle;                                        // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          NoErrorStyle;                                      // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1280[0x8];                                     
	class UCommonTextBlock*                      Text_Title;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Continue;                                   // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLoginResultWidget");
		return Clss;
	}

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortLoginStatus
class UFortLoginStatus : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1281[0x10];                                    
	class UCommonTextBlock*                      Text_Title;                                        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Status;                                       // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Status;                                     // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLoginStatus");
		return Clss;
	}

	void SetTitleText(class FText& TitleText);
	void SetLoginStatus(class FText& InLoginStatus);
};

// 0x78 (0x288 - 0x210)
// Class FortniteUI.FortLoginUnavailable
class UFortLoginUnavailable : public UCommonUserWidget
{
public:
	class FText                                  DisableMessage;                                    // 0x210(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  DisableButtonMsg;                                  // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  InviteClosedMessage;                               // 0x240(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  InviteButtonMsg;                                   // 0x258(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1282[0x8];                                     
	class UCommonTextBlock*                      Text_Title;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_DisplayMsg;                                   // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLoginUnavailable");
		return Clss;
	}

	void OnMessageSet(bool bDisableMessage);
	void LaunchSpecificURL();
};

// 0x68 (0x360 - 0x2F8)
// Class FortniteUI.FortMainTabsScreenBase
class UFortMainTabsScreenBase : public UCommonActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x2F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TopTabContainer;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1283[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMainTabsScreenBase");
		return Clss;
	}

	void HandleRefreshSkillTreeNodePage();
	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	void ConstructTabs();
};

// 0x118 (0x140 - 0x28)
// Class FortniteUI.FortMaterialProgressBarStyle
class UFortMaterialProgressBarStyle : public UObject
{
public:
	class FName                                  BackgroundColorParamName;                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x30(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMaterialProgressBarSectionStyle  BarSectionStyles;                                  // 0x40(0x40)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1284[0xC0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMaterialProgressBarStyle");
		return Clss;
	}

};

// 0x158 (0x368 - 0x210)
// Class FortniteUI.FortMaterialProgressBar
class UFortMaterialProgressBar : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortMaterialProgressBarStyle> Style;                                             // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BackgroundColorParamName;                          // 0x218(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x220(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortMaterialProgressBarSectionOverflowBehavior OverflowBehavior;                                  // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1288[0x7];                                     
	struct FFortMaterialProgressBarSectionInfo   BarSectionInfo;                                    // 0x238(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1289[0xD8];                                    
	class UCommonBorder*                         ProgressBar;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressBarMID;                                    // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMaterialProgressBar");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UFortMaterialProgressBarStyle> BarStyle);
	void SetProgressBarSectionPercent(enum class EFortMaterialProgressBarSection BarSection, float Percent);
	void SetProgressBarSectionColor(enum class EFortMaterialProgressBarSection BarSection, const struct FLinearColor& Color, enum class EFortMaterialProgressBarSectionColorNumber ColorNumber);
	void SetBackgroundColor(const struct FLinearColor& Color);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortMicIndicatorWidget
class UFortMicIndicatorWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_128A[0x38];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMicIndicatorWidget");
		return Clss;
	}

	void SetPlayerUniqueId(struct FUniqueNetIdRepl& InPlayerUniqueId);
	void OnPlayerTalkingChanged(bool bIsTalking);
	void OnPlayerMuted(bool bIsMuted);
	void OnPlayerMicAvailable(bool bIsTalking);
};

// 0x150 (0x178 - 0x28)
// Class FortniteUI.FortMissionActivationInfo
class UFortMissionActivationInfo : public UObject
{
public:
	bool                                         bIsMultiplayer;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1295[0x77];                                    
	class AFortPlayerController*                 FortPC;                                            // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateZone*                    GameStateZone;                                     // 0xA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1296[0xC0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationInfo");
		return Clss;
	}

	class FText TimeSecondsToText(float InSeconds);
	void SubmitVote(enum class EFortVoteType VoteType, bool bApprove);
	void RequestVote(enum class EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, enum class EFortVoteArbitratorType ArbitratorType);
	bool IsVoteLocked(enum class EFortVoteType VoteType);
	bool IsVoteActive(enum class EFortVoteType VoteType);
	bool IsPlayerVoteInstigator(enum class EFortVoteType VoteType);
	bool IsAnyVoteActive();
	bool HasPlayerVoted(enum class EFortVoteType VoteType);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandleGameplayVoteUpdated(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	float GetVoteTimeRemaining(enum class EFortVoteType VoteType);
	TArray<struct FVoter> GetVoters(enum class EFortVoteType VoteType);
	void GetVoteCounts(enum class EFortVoteType VoteType, int32* OutYesVoteCount, int32* OutNoVoteCount);
	int32 GetStartObjectiveBluGloRequirement();
	class UFortMissionInfo* GetPrimaryMissionInfo();
	class AFortMission* GetPrimaryMission();
	enum class EFortVoteType GetMissionVoteType();
	float GetMissionObjectiveTimeRemaining();
	class FText GetLockoutTimeRemaining(enum class EFortVoteType VoteType);
	struct FUniqueNetIdRepl GetInstigatorId(enum class EFortVoteType VoteType);
	int32 GetIncreaseDifficultyBluGloRequirement();
	void GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards);
	int32 GetAvailableBluGloCount();
	enum class EFortVoteArbitratorType GetArbitratorType(enum class EFortVoteType VoteType);
	bool DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortMissionActivationWidgetPanel
class UFortMissionActivationWidgetPanel : public UCommonUserWidget
{
public:
	class UFortMissionActivationInfo*            InfoObject;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1298[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationWidgetPanel");
		return Clss;
	}

	void SetInfoObject(class UFortMissionActivationInfo* NewInfoObject);
	void OnVoteUpdatedBP(enum class EFortVoteType VoteType);
	void OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void InfoObjectUpdated();
};

// 0x50 (0x378 - 0x328)
// Class FortniteUI.FortMissionActivationWidget
class UFortMissionActivationWidget : public UFortActivatablePanel
{
public:
	class UFortMissionActivationInfo*            InfoObject;                                        // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ReadyUpObjectiveHandle;                            // 0x330(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0x350(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_129A[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationWidget");
		return Clss;
	}

	void RequestStartObjectiveState();
	void RequestDifficultyIncreaseState();
	void RequestDefaultState();
	void OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked);
	void OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	enum class EFortMissionActivationWidgetState GetCurrentState();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortMissionSelect
class UFortMissionSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_129B[0x10];                                    
	UMulticastDelegateProperty_                  OnNavigation;                                      // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionSelect");
		return Clss;
	}

	bool NavigateMissionTiles(enum class EUINavigation Direction);
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortMissionTracker
class UFortMissionTracker : public UFortHUDElementWidget
{
public:
	class UFortMissionTrackerList*               MissionTrackerList;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 MainQuestList;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 PinnedQuestsList;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               AdditionalEntriesIndicator;                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               DebugHeightEstimate;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllowedSize;                                       // 0x260(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnforceHeightLimit;                               // 0x264(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSizeEstimateNeedsRefresh;                         // 0x265(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_129C[0x2];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionTracker");
		return Clss;
	}

	void RefreshSizeEstimate();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
};

// 0xA8 (0x2B8 - 0x210)
// Class FortniteUI.FortMissionTrackerEntry
class UFortMissionTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_129D[0x8];                                     
	UMulticastDelegateProperty_                  OnMissionEntryVisibilityChanged;                   // 0x218(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMissionTrackerSubEntry> SubEntryClass;                                     // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x230(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x231(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_129E[0x6];                                     
	class UCommonTextBlock*                      MissionNameText;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ObjectivesListBox;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UpperSeparator;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortMission*                          TrackedMission;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x258(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_129F[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionTrackerEntry");
		return Clss;
	}

	void UpdateVisibility();
	void OnMissionSet();
	void HandleObjectivesChanged();
	void HandleMissionInfoSet();
};

// 0x90 (0x2A0 - 0x210)
// Class FortniteUI.FortMissionTrackerList
class UFortMissionTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_12A0[0x8];                                     
	TSubclassOf<class UFortMissionTrackerEntry>  MissionEntryClass;                                 // 0x218(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A1[0x7];                                     
	class UVerticalBox*                          MissionsListBox;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnMissionTrackerListVisibilityChanged;             // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x240(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A2[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionTrackerList");
		return Clss;
	}

	void UpdateVisibility();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleMissionsUpdated();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortMissionTrackerSubEntry
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_12A3[0x8];                                     
	UMulticastDelegateProperty_                  OnMissionSubEntryVisibilityChanged;                // 0x218(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	bool                                         bConfigureAsHUD;                                   // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x229(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A4[0x6];                                     
	class AFortObjectiveBase*                    TrackedObjective;                                  // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionTrackerSubEntry");
		return Clss;
	}

	void OnObjectiveSet();
	void OnHiddenByHeightConstraintChanged();
	void NotifyVisibilityChanged();
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.FortMissionVoteHUDElementWidget
class UFortMissionVoteHUDElementWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_12AA[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionVoteHUDElementWidget");
		return Clss;
	}

	void OnVoteUpdated(enum class EFortVoteType VoteType, int32 YesVoteCount, int32 NoVoteCount);
	void OnVoteStarted(enum class EFortVoteType VoteType, int32 YesVoteCount, int32 NoVoteCount);
	void OnVoteEnded(enum class EFortVoteType VoteType, bool VoteSucceeded);
	bool HasLocalPlayerVoted(enum class EFortVoteType VoteType);
	void HandleMissionActivationVoteUpdate(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	void HandleDifficultyIncreaseVoteUpdate(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	int32 GetVoteTimeRemaining(enum class EFortVoteType VoteType);
};

// 0x10 (0x40 - 0x30)
// Class FortniteUI.FortModalContainerData
class UFortModalContainerData : public UDataAsset
{
public:
	TArray<struct FFortModalContainerSizeEntry>  Entries;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortModalContainerData");
		return Clss;
	}

};

// 0x58 (0x158 - 0x100)
// Class FortniteUI.FortModalContainerWidget
class UFortModalContainerWidget : public UWidget
{
public:
	uint8                                        Pad_12AB[0x8];                                     
	enum class EModalContainerSize               SizeConstraint;                                    // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AC[0x7];                                     
	TArray<struct FFortModalContainerSizeEntry>  DefaultSizeEntries;                                // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortModalContainerData*               OverrideSizeEntries;                               // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               TopContent;                                        // 0x128(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               MiddleContent;                                     // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BottomContent;                                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BackgroudContent;                                  // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12AD[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortModalContainerWidget");
		return Clss;
	}

};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortMOTDWidget
class UFortMOTDWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_12AE[0x10];                                    
	class UCommonTextBlock*                      Text_Header;                                       // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Body;                                         // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Close;                                      // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox;                                         // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMOTDWidget");
		return Clss;
	}

};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortMovieWidget
class UFortMovieWidget : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMediaOpened;                                     // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x238(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMovieWidget");
		return Clss;
	}

	bool SetMediaSource(class UMediaSource* InMediaSource);
	void RequestStopMovie();
	void RequestPlayMovie(bool bShouldRewind);
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	bool HasPlayerForSource(class UMediaSource* InMediaSource);
	class UMediaTexture* GetMediaTexture();
	class UMediaSoundComponent* GetMediaSoundComponent();
	class UMediaPlayer* GetMediaPlayer();
};

// 0x230 (0x260 - 0x30)
// Class FortniteUI.FortMtxOfferData
class UFortMtxOfferData : public UPrimaryDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDisplayName;                                  // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDescription;                                  // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         GrantOverride;                                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TileImage;                                         // 0x88(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BadgeImage;                                        // 0x110(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DetailsImage;                                      // 0x198(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMtxDetailsAttribute>      DetailsAttributes;                                 // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortMtxGradient                      Gradient;                                          // 0x230(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background;                                        // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMtxOfferData");
		return Clss;
	}

};

// 0xA8 (0x3D0 - 0x328)
// Class FortniteUI.FortMtxOfferDetailsBase
class UFortMtxOfferDetailsBase : public UFortActivatablePanel
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x330(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMtxOfferDetailsBase");
		return Clss;
	}

	void UpdateMtxOffer(class UFortMtxStoreOfferBase* MtxOfferWidget);
	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0xA8 (0x938 - 0x890)
// Class FortniteUI.FortMtxStoreOfferBase
class UFortMtxStoreOfferBase : public UCommonButton
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x898(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMtxStoreOfferBase");
		return Clss;
	}

	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0x48 (0x340 - 0x2F8)
// Class FortniteUI.FortMtxStoreRootBase
class UFortMtxStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_12B5[0x8];                                     
	TSubclassOf<class UFortMtxStoreOfferBase>    MtxOfferWidgetClass;                               // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StorefrontNames;                                   // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMtxPackage>                   MtxOffers;                                         // 0x318(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12B6[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMtxStoreRootBase");
		return Clss;
	}

	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void NoOffersAvailable();
	void HandleMtxPackagesRead(TArray<struct FMtxPackage>& Offers);
	enum class EFortMtxStoreOfferType GetStoreOfferType(const struct FMtxPackage& Package);
	struct FMtxBreakdown GetMtxBreakdown();
	bool AreOffersLoaded();
};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortMulchItemTileButton
class UFortMulchItemTileButton : public UFortItemTileButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMulchItemTileButton");
		return Clss;
	}

	void HandleItemChanged_BP(class UFortItem* NewItem);
};

// 0x20 (0x348 - 0x328)
// Class FortniteUI.FortMulchConfirmationModalWidget
class UFortMulchConfirmationModalWidget : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       RecycleItemTileView;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementMulchDetailsPanel*  RecycleDetailsPanel;                               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12B7[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMulchConfirmationModalWidget");
		return Clss;
	}

	void UpdateConfirmationModal_BP();
	void UpdateConfirmationModal();
	TMap<enum class EItemRecyclingWarning, int32> GetMulchWarnings();
	void CommitMulch();
};

// 0x58 (0x350 - 0x2F8)
// Class FortniteUI.FortMultiFactorAuthWidget
class UFortMultiFactorAuthWidget : public UCommonActivatablePanel
{
public:
	class FText                                  PromptText;                                        // 0x2F8(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Continue;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditText_MultiFactorCode;                          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B9[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMultiFactorAuthWidget");
		return Clss;
	}

	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0x38 (0x160 - 0x128)
// Class FortniteUI.FortMultiSizeItemCard
class UFortMultiSizeItemCard : public UFortItemWidget_NUI
{
public:
	enum class EFortItemCardSize                 BPItemCardSize;                                    // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDisplayItemAsReward;                         // 0x129(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BA[0x2];                                     
	int32                                        QuantityOverride;                                  // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemType                     EmptyItemType;                                     // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSuppressItemTypeIcon;                        // 0x131(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSuppressTierMeter;                           // 0x132(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCollapseBorderPadding;                       // 0x133(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BB[0x2C];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMultiSizeItemCard");
		return Clss;
	}

	bool ShouldUseNewItemCards();
	void SetShouldDisplayItemAsReward(bool Value);
	void SetShouldCollapseBorderPadding(bool Value);
	void SetQuantityOverride(int32 QuantityOverride);
	void SetEmptyItemType(enum class EFortItemType NewEmptyItemType);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	enum class EFortItemCardSize GetCardSize();
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortNewAccountWarning
class UFortNewAccountWarning : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_12BC[0x20];                                    
	class UCommonButton*                         Button_NewAccount;                                 // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Back;                                       // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNewAccountWarning");
		return Clss;
	}

};

// 0x4B0 (0x4E8 - 0x38)
// Class FortniteUI.FortniteUserInterfaceSettings
class UFortniteUserInterfaceSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    WidthScaleCurve;                                   // 0x38(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve;                                  // 0xB0(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_InGame;                        // 0x128(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_InGame;                       // 0x1A0(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_FrontEnd;                      // 0x218(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_FrontEnd;                     // 0x290(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_InGame;                    // 0x308(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_InGame;                   // 0x380(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_FrontEnd;                  // 0x3F8(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_FrontEnd;                 // 0x470(0x78)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortniteUserInterfaceSettings");
		return Clss;
	}

};

// 0x40 (0x258 - 0x218)
// Class FortniteUI.FortBaseCanvasEntity
class UFortBaseCanvasEntity : public UFortUserWidget
{
public:
	uint8                                        Pad_12BD[0x8];                                     
	class FName                                  NodeID;                                            // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsideredInSizeCalculation;                      // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BE[0x3];                                     
	float                                        MovementMultiplier;                                // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BF[0x8];                                     
	struct FVector2D                             BasePos;                                           // 0x248(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasHadBasePosSet;                                  // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C0[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBaseCanvasEntity");
		return Clss;
	}

	void Outro(enum class EFortAnimSpeed Speed);
	void Intro(enum class EFortAnimSpeed Speed);
};

// 0x28 (0x280 - 0x258)
// Class FortniteUI.FortBaseCanvasNode
class UFortBaseCanvasNode : public UFortBaseCanvasEntity
{
public:
	class UMediaSource*                          PreviewMediaSource;                                // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHideConnectorsToDependents;                 // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C5[0x7];                                     
	UMulticastDelegateProperty_                  OnNodeStateChangedEvent;                           // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C6[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBaseCanvasNode");
		return Clss;
	}

	bool SelectNode();
	void SelectedChanged(bool bEnabled);
	void Purchase();
	void OnNodeStateChanged__DelegateSignature(class UFortBaseCanvasNode* Node);
	bool IsPurchaseable(TArray<enum class EFortHomebaseNodePurchaseRestrictionReason>* OutRestrictionReasons);
	bool IsOwned();
	bool IsLocked();
	void HandleNodeStateChangedInternal();
	void HandleNodeStateChanged();
	class FText GetPurchaseRestrictionReasonText(enum class EFortHomebaseNodePurchaseRestrictionReason Reason);
	float GetPurchasePercent();
	class UMediaSource* GetPreviewMediaSource();
	bool GetNodeStyleDataCopy(struct FFortNodeStyleData* Style);
	class FName GetNodeID();
	bool GetNodeDataCopy(struct FHomebaseNode* Node);
	TArray<struct FFortItemInstanceQuantityPair> GetCosts();
	bool DrillDownToNodePage();
	bool DoesDrillDownToCurrentNodePage();
};

// 0x100 (0x228 - 0x128)
// Class FortniteUI.FortNodeCanvas
class UFortNodeCanvas : public UCanvasPanel
{
public:
	uint8                                        Pad_12C8[0x8];                                     
	class FName                                  NodePageName;                                      // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeTypeData;                                      // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             OriginForParallax;                                 // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C9[0xD8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNodeCanvas");
		return Clss;
	}

	void PanToNode(class FName NodeID, enum class EFortAnimSpeed PanSpeed);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasEntityInterface
class UFortNodeCanvasEntityInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNodeCanvasEntityInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasInterface
class UFortNodeCanvasInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNodeCanvasInterface");
		return Clss;
	}

};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortNodePrerequisitesWidget
class UFortNodePrerequisitesWidget : public UFortUserWidget
{
public:
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNodePrerequisitesWidget");
		return Clss;
	}

	void ProcessNodePrequisites(class FName NodeID);
	void GenerateNodePrerequisiteConnector(enum class EFortNodePrerequisiteConnector Connector);
	void GenerateNodePrerequisite(const struct FFortUINodePrerequisite& NodePrerequisite);
};

// 0x50 (0x268 - 0x218)
// Class FortniteUI.FortNumericTextBlock
class UFortNumericTextBlock : public UTextBlock
{
public:
	UMulticastDelegateProperty_                  CountFinished;                                     // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        StartingValue;                                     // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestValue;                                         // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGrouping;                                      // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsCurrency;                                       // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CA[0x2];                                     
	float                                        EaseOutExp;                                        // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShrinkTime;                                        // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CB[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNumericTextBlock");
		return Clss;
	}

	bool IsInterpolatingNumber();
	void InterpolateSet(int32 InValue, float InUpdateLength, float InReportEndEarly);
	int32 GetCurrentValue();
	void DirectlySet(int32 InValue);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortOptionsMenu
class UFortOptionsMenu : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOptionsMenu");
		return Clss;
	}

	bool ShowVideoOptions();
	bool ShowInputOptions();
	bool ShowControllerOptions();
	bool ShowBrightnessOptions();
	bool ShowAccountOptions();
	bool ShowAccessibilityOptions();
	void ResetGameOptionsSettings();
	void ResetClientHUDSettings();
	void OnVideoCancel();
	void OnVideoAccept();
	void OnResetToDefaults();
	void OnReset();
	void OnApply();
	bool NeedsVideoChangeConfirmation();
	bool NeedsLanguageChangeConfirmation();
	void HandleSettingsSaveComplete();
	void HandleSettingsErrorMessageClosed();
	void HandleBenchmarkComplete();
	void ClearCachedEula();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortOptionsMenuData
class UFortOptionsMenuData : public UDataAsset
{
public:
	TMap<enum class ESettingTab, struct FOptionsTabData> TabDatas;                                          // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOptionsMenuData");
		return Clss;
	}

};

// 0xC0 (0xF0 - 0x30)
// Class FortniteUI.FortOptionsMenuInputData
class UFortOptionsMenuInputData : public UDataAsset
{
public:
	class FName                                  ActionName;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PrimaryText;                                       // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SecondaryText;                                     // 0x68(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ElementNumber;                                     // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CC[0x4];                                     
	class UCommonTextBlock*                      TabText;                                           // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortActionKeyMapping                 ActionKeyMapping;                                  // 0x90(0x60)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOptionsMenuInputData");
		return Clss;
	}

};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortOptionsMenuSetting
class UFortOptionsMenuSetting : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  SettingValueChanged;                               // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	enum class ESettingType                      SettingType;                                       // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CD[0x7];                                     
	class FText                                  NameText;                                          // 0x228(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOptionsMenuSetting");
		return Clss;
	}

	void UpdateSetting(class UCommonTextBlock* TooltipTextBlock);
	void SettingChangedSlider(float PreviousValue, float NewValue);
	void SettingChangedRotator(int32 PreviousValue, int32 NewValue);
	float GetSettingValueSlider();
	int32 GetSettingValueRotator();
	TArray<class FText> GetSettingDisplayNames();
	void CenterOnWidget();
};

// 0x60 (0x88 - 0x28)
// Class FortniteUI.FortSettingInfo
class UFortSettingInfo : public UObject
{
public:
	enum class ESettingType                      SettingType;                                       // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CE[0x7];                                     
	TSubclassOf<class UFortOptionsMenuSetting>   SettingWidgetType;                                 // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OptionDisplayText;                                 // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  OptionHoverText;                                   // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinIntegralDigits;                                 // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIntegralDigits;                                 // 0x6C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFractionalDigits;                               // 0x70(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFractionalDigits;                               // 0x74(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSensitivityValue;                               // 0x78(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSensitivityValue;                               // 0x7C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERoundingMode                     RoundingMode;                                      // 0x80(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CF[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSettingInfo");
		return Clss;
	}

};

// 0x88 (0x350 - 0x2C8)
// Class FortniteUI.FortOutpostStorageItemPicker
class UFortOutpostStorageItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_12D0[0x88];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOutpostStorageItemPicker");
		return Clss;
	}

	void UseFilters(const TArray<enum class EFortItemType>& ItemTypes);
	void UseFilter(enum class EFortItemType ItemType);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortPartyFinderBase
class UFortPartyFinderBase : public UFortActivatablePanel
{
public:
	class UCommonBorder*                         CommonBorder_PartyServicesDegredationWarning;      // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                       TreeView_Social;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Close;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPartyFinderBase");
		return Clss;
	}

	void HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems);
	void HandlePartyServicesDegredationChanged(bool bAreServicesDegredated);
	void ClosePartyFinder();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortPartyTreeItemBase
class UFortPartyTreeItemBase : public UCommonButton
{
public:
	uint8                                        Pad_12D1[0x8];                                     
	class UFortSocialItem*                       SocialItem;                                        // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPartyTreeItemBase");
		return Clss;
	}

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortPerksWidget_NUI
class UFortPerksWidget_NUI : public UCommonUserWidget
{
public:
	class UFortHero*                             Hero;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPerksWidgetState             State;                                             // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D3[0x7];                                     
	class UFortHero*                             EvolutionOption;                                   // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkTierWidget_NUI>   PerkTierWidgetType;                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkWidget_NUI>       PerkWidgetType;                                    // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      PerksListLoadGuard;                                // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12D4[0x60];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPerksWidget_NUI");
		return Clss;
	}

	void SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption);
	void SetHero(class UFortHero* InHero);
	void ProcessPerkTiers();
	void ProcessPerks();
	void ProcessActiveAbilityPerksAsync();
	void OnStateChanged();
	void OnHeroChanged();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget);
	void OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortPerkTierWidget_NUI
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_12D5[0x8];                                     
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x218(0x20)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D6[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPerkTierWidget_NUI");
		return Clss;
	}

	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0xC8 (0x2D8 - 0x210)
// Class FortniteUI.FortPerkWidget_NUI
class UFortPerkWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_12D8[0x8];                                     
	struct FFortUIPerk                           Perk;                                              // 0x218(0x98)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D9[0x8];                                     
	class UFortTooltipContext*                   CachedTooltipContext;                              // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12DA[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPerkWidget_NUI");
		return Clss;
	}

	void SetTooltipContext(class UFortTooltipContext* InTooltipContext);
	void RequestTooltipDescription();
	void RequestCombinedTooltipDescription();
	void OnTooltipDescriptionReady(TArray<class FText>& DescriptionList);
	void OnPerkUpdated();
	void OnCombinedTooltipDescriptionReady(class FText& Description);
	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool HasAbility();
	class FText GetTooltipTitle();
	class UFortTooltipContext* GetTooltipContext();
	enum class EFortSupportBonusType GetSupportBonusType();
	int32 GetRequiredLevel();
	enum class EFortItemTier GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
};

// 0x180 (0x1A8 - 0x28)
// Class FortniteUI.FortPickerContext
class UFortPickerContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnShowPicker;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerConfirm;                                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerCancel;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionMoved;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionChosen;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerRefreshItems;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E3[0x18];                                    
	TArray<struct FItemDefOptionData>            CustomPickerMenuItems;                             // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSquadQuickChatOptionData>     SquadChatMenuItems;                                // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UFortItemDefinition*, float>      TrackedTrapsMap;                                   // 0xC0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12E4[0x8];                                     
	class UFortPickerData*                       PickerData;                                        // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortSchematicItem*>            AccountTrapSchematics;                             // 0x120(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortPickerTemporaryWheel>     AvailableWheels;                                   // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        CurrentWheelIndex;                                 // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12E5[0xC];                                     
	TMap<class UObject*, int32>                  ConsumableStackCount;                              // 0x150(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12E6[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPickerContext");
		return Clss;
	}

	bool UseLeftThumbstick();
	void SwitchToAdjacentWheel(int32 SelectionDirection);
	void ShowRadialPickerMenu(enum class EFortPickerToDisplay PickerType, int32 WheelIndex, class UObject* ContextObject);
	void SetFortPickerData(class UFortPickerData* Data);
	void RestoreInputAxes();
	void PickerOptionAccepted(int32 Option);
	void PickerCanceled();
	void GetRadialPickerOptionItem(int32 Index, class UFortItem** Item, bool* bOptionEnabled);
	void GetRadialPickerOptionImageAndLabel(int32 Index, class FText* Label, struct FSlateBrush* Brush, bool* bOptionEnabled);
	void GetPickerWheelAdjacency(bool* bCanPageLeft, bool* bCanPageRight);
	int32 GetNumPickerOptions();
	class UFortItem* GetListPickerOption(int32 Index);
	int32 GetCurrentWheelIndex();
	class FText GetCurrentPickerDisplayName();
	void GetAdjacentPickerWheelInformation(int32 Direction, class FText* AdjacentTitle, bool* bCanPageThisDirection);
	bool DoesRadialCloseOnRelease();
};

// 0xC0 (0xF0 - 0x30)
// Class FortniteUI.FortPickerData
class UFortPickerData : public UDataAsset
{
public:
	TArray<struct FBuildingCategoryOptionData>   BuildingCategories;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           WallOptions;                                       // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           FloorOptions;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           StairOptions;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           RoofOptions;                                       // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       TrapCategories;                                    // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       WeaponCategories;                                  // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRadialOptionData>             SocialCategories;                                  // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FChatOptionData>               ChatOptions;                                       // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAthenaQuickChatBank*>          SquadChatOptionBanks;                              // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMapNoteOptionData>            MapNoteOptions;                                    // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FEmoteOptionData>              EmoteOptions;                                      // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPickerData");
		return Clss;
	}

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortPlayedBeforeSelect
class UFortPlayedBeforeSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_12E7[0x18];                                    
	class UCommonButton*                         Button_Yes;                                        // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayedBeforeSelect");
		return Clss;
	}

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortPlayerBanned
class UFortPlayerBanned : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerBanned");
		return Clss;
	}

};

// 0xB8 (0x2C8 - 0x210)
// Class FortniteUI.FortPlayerProfileBannerEditor
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
public:
	enum class ESaveProfileForBanners            ProfileToSave;                                     // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E8[0x4];                                     
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x218(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class FName>                          IconCategories;                                    // 0x288(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ColorCategories;                                   // 0x298(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  ChosenIcon;                                        // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenIconCategory;                                // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColor;                                       // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColorCategory;                               // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerProfileBannerEditor");
		return Clss;
	}

	void SetBannerIcon(class FName& Icon);
	void SetBannerColor(class FName& Color);
	void RefreshBannerEditor();
	void OnShowPreviousCategory();
	void OnShowNextCategory();
	void HandleEditorDeactivated();
	void HandleEditorActivated();
	void CommitChosenIconAndColor();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortPlayerProfileBannerEditorTile
class UFortPlayerProfileBannerEditorTile : public UCommonButton
{
public:
	uint8                                        Pad_12E9[0x8];                                     
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerProfileBannerEditorTile");
		return Clss;
	}

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortPlayerProfileModalWidget
class UFortPlayerProfileModalWidget : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerProfileModalWidget");
		return Clss;
	}

};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortPlayerTrackerBase
class UFortPlayerTrackerBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_12EC[0x8];                                     
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x218(0x28)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortRegisteredPlayerInfo> PlayerInfo;                                        // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PartyIndex;                                        // 0x248(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLocalPlayer;                                     // 0x24C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldDeferAttributesChangedEvents;                // 0x24D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12ED[0x2];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerTrackerBase");
		return Clss;
	}

	void UpdateBasedOnId();
	void SetUniqueIdInternal(struct FUniqueNetIdRepl& InUniqueId);
	void SetUniqueId(struct FUniqueNetIdRepl& InUniqueId);
	void SetTeamMember(int32 InPlayerIndex);
	void ResetPartyEvents();
	void ReRegisterAttributeChangedDelegates();
	void RegisterAttributeChangedDelegates();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void OnPlayerAttributesChanged();
	bool HasModifiedStats();
	void HandleTooltipAttributeChanged();
	void HandleTeamMemberStateChangedId(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandlePartyLeft();
	void HandleOnPlayerIdUpdated(struct FUniqueNetIdRepl& NewInfo);
	void HandleOnLocalPlayerInfoUpdated(struct FFortTeamMemberInfo& NewInfo);
	void HandleDelayedOnPlayerAttributesChanged();
	int32 GetTeamTech();
	int32 GetTeamResistance();
	int32 GetTeamOffense();
	int32 GetTeamFortitude();
	bool GetModifiedHomebaseRating(int32* Rating, float* ProgressFraction);
	bool GetHomebaseRating(int32* Rating, float* ProgressFraction);
	int32 GetBuffedTech();
	int32 GetBuffedResistance();
	int32 GetBuffedOffense();
	int32 GetBuffedFortitude();
	int32 GetBaseTech();
	int32 GetBaseResistance();
	int32 GetBaseOffense();
	int32 GetBaseFortitude();
};

// 0x80 (0x3A8 - 0x328)
// Class FortniteUI.FortPrivacyBase
class UFortPrivacyBase : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnPrivacyChanged;                                  // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonButton*                         AllowFriendsOfFriendsButton;                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          AllowFriendsOfFriendsContainer;                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UCommonButton*, enum class EPartyType> PrivacyButtonMap;                                  // 0x350(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F0[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPrivacyBase");
		return Clss;
	}

	void HandlePrivacyButtonSelected(class UCommonButton* SelectedPrivacyButton, int32 ButtonIndex);
	void ApplyPrivacySetting();
	void AddPrivacyButton(class UCommonButton* PrivacyButton, enum class EPartyType PartyType);
};

// 0x20 (0x8B0 - 0x890)
// Class FortniteUI.FortPurchaseHistoryEntry
class UFortPurchaseHistoryEntry : public UCommonButton
{
public:
	uint8                                        Pad_12F3[0x8];                                     
	class UCommonTextBlock*                      Text_Name;                                         // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                Card_PurchasedItem;                                // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                Card_SecondaryItem;                                // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryEntry");
		return Clss;
	}

	void SetRefundState(class FText& PurchaseText, enum class EItemRefundability Refundability);
	void SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded);
};

// 0xC8 (0x2D0 - 0x208)
// Class FortniteUI.FortPurchaseHistoryListView
class UFortPurchaseHistoryListView : public UListViewBase
{
public:
	uint8                                        Pad_12F4[0xC8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryListView");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.ReturnReasonDataWrapper
class UReturnReasonDataWrapper : public UObject
{
public:
	uint8                                        Pad_12F5[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReturnReasonDataWrapper");
		return Clss;
	}

};

// 0xD8 (0x3D0 - 0x2F8)
// Class FortniteUI.FortPurchaseHistoryScreen
class UFortPurchaseHistoryScreen : public UCommonActivatablePanel
{
public:
	struct FDataTableRowHandle                   PreviousStepRowHandle;                             // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRefundConfirmation>   RefundConfirmationClass;                           // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRefundConfirmation*               RefundConfirmationWidget;                          // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FText>                          ReturnReasons;                                     // 0x318(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReturnReasonDataWrapper*>      WrapperArray;                                      // 0x328(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F8[0x10];                                    
	TArray<class UFortItemDefinition*>           SelectedItemDefs;                                  // 0x348(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F9[0x18];                                    
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefundConfirmationProcessing;                     // 0x378(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12FA[0x7];                                     
	class UFortPurchaseHistoryListView*          ListView_Purchases;                                // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Reasons;                                  // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_RequestRefund;                              // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                    RichText_WarningMsg;                               // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundItem1;                                  // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundItem2;                                  // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundValue;                                  // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundReason;                                 // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryScreen");
		return Clss;
	}

	void OnPopulateView(enum class EPurchaseReturnStep CurrentStep);
	void OnNoPurchasesAvailable();
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex);
	void OnBeginRefundSubmission();
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void HandleTabButtonClicked(enum class EPurchaseReturnStep ClickedStep);
	void HandlePreviousStepAction(bool* bPassThrough);
	enum class EPurchaseReturnStep GetCurrentStep();
	void ConsumeComplete();
};

// 0x20 (0x238 - 0x218)
// Class FortniteUI.FortPvPMinimapWidget
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_12FB[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPvPMinimapWidget");
		return Clss;
	}

};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortQuestExpiresWidget
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>         Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12FC[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestExpiresWidget");
		return Clss;
	}

	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortQuestMapCosmeticListWidget
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_12FD[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapCosmeticListWidget");
		return Clss;
	}

	void UpdateCosmeticListDisplay();
	TArray<class UFortItemDefinition*> GetDisplayItemDefs();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortQuestMapDetailsPanel
class UFortQuestMapDetailsPanel : public UCommonUserWidget
{
public:
	struct FDataTableRowHandle                   PlayButtonTriggeringAction;                        // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapDetailsPanel");
		return Clss;
	}

	void DisplayInactiveQuest(class UFortQuestItemDefinition* QuestDef);
	void DisplayActiveQuest(class UFortQuestItem* QuestItem);
};

// 0x68 (0x270 - 0x208)
// Class FortniteUI.FortQuestMapNodeLayout
class UFortQuestMapNodeLayout : public UUserWidget
{
public:
	class UCommonButton*                         ButtonPrevious;                                    // 0x208(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         ButtonNext;                                        // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              StartArrow;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              EndArrow;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          LayoutPanel;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FF[0x10];                                    
	class UCommonButtonGroup*                    QuestButtonGroup;                                  // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1300[0x20];                                    
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapNodeLayout");
		return Clss;
	}

	void SetParentScreen(class UFortQuestMapScreen* Parent);
	void SetLayoutPanel(class UPanelWidget* Value);
	void HandleQuestButtonSelected(class UCommonButton* SelectedQuestButton, int32 ButtonIndex);
	struct FFortQuestMapPage GetQuestPageData();
	void DisposeLayout();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortQuestMapQuestTile
class UFortQuestMapQuestTile : public UCommonUserWidget
{
public:
	class UCommonButton*                         QuestButton;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1301[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapQuestTile");
		return Clss;
	}

	void HandleSelectedChange(bool Selected);
	void HandleQuestDataChangedBP();
	struct FFortQuestMapNode GetQuestNodeData();
};

// 0x78 (0x370 - 0x2F8)
// Class FortniteUI.FortQuestMapScreen
class UFortQuestMapScreen : public UCommonActivatablePanel
{
public:
	class UFortQuestMapDetailsPanel*             CampaignDetailsPanel;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDetailsPanel*             EventDetailsPanel;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapViewer*                   QuestMapViewer;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestMapScreenMode               CurrentMode;                                       // 0x310(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSpecialEventsCamera;                           // 0x311(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1302[0x6];                                     
	class FString                                ActiveEventFlag;                                   // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                CampaignQuestMapDataTable;                         // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                EventQuestMapDataTable;                            // 0x338(0x10)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              CutoffQuest;                                       // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                CurrentQuestMapDataTable;                          // 0x350(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1303[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapScreen");
		return Clss;
	}

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode);
	void ToggleQuestMapState();
	void SetQuestMapViewer(class UFortQuestMapViewer* Value);
	void SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility);
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	bool IsBeyondCutoffQuest();
	void InitializeQuestData();
	void HandleRequestCurrentQuestNavigation();
	void HandleMapViewerSelectedQuestIndexChanged();
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction);
	bool GetBeyondCutoffQuest();
};

// 0x70 (0x2F0 - 0x280)
// Class FortniteUI.FortQuestMapViewer
class UFortQuestMapViewer : public UFortCampaignMap
{
public:
	class UCanvasPanel*                          CosmeticCanvasPanel;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              FullQuestMap;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1304[0x48];                                    
	class UFortQuestMapNodeLayout*               NodeLayout;                                        // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1305[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapViewer");
		return Clss;
	}

	void SetQuestMapNodeLayout(class UFortQuestMapNodeLayout* Value);
	void PlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection);
	void PlayLayoutFadeInAnimation();
	void NavigateToPage(enum class EViewerNavigationDirection Direction);
	void NavigateToCurrentQuest();
	void HandleQuestMapDataChangedBP();
	void HandleLayoutSelectedIndexChanged();
	void HandleLayoutOutroAnimationFinished();
	struct FFortQuestMapPage GetQuestMapData();
	struct FFortQuestMapPageCosmetics GetQuestMapCosmeticData();
	void DisposeQuestMap();
};

// 0x8 (0x1A8 - 0x1A0)
// Class FortniteUI.FortQuestNotificationHandler
class UFortQuestNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestNotificationHandler");
		return Clss;
	}

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortQuestObjectiveEntry
class UFortQuestObjectiveEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_1307[0x8];                                     
	UMulticastDelegateProperty_                  OnFinishedDisplaying;                              // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	class UFortQuestObjectiveInfo*               MyObjectiveInfo;                                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestObjectiveEntry");
		return Clss;
	}

	void StartDisplayingObjective();
	void ObjectiveInfoSet(class UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortQuestTrackerEntry
class UFortQuestTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_1308[0x10];                                    
	class UCommonTextBlock*                      QuestNameText;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       ObjectivesList;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestItem*                        TrackedQuest;                                      // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestFinalObjectiveHiddenDelegate;            // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortQuestObjectiveInfo*>       HUDCachedObjectiveInfos;                           // 0x248(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x258(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1309[0x7];                                     
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTrackerEntry");
		return Clss;
	}

	void OnSetup();
	void HandleHUDObjectiveCompletion(class UFortQuestObjectiveInfo* QuestObjective);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortQuestTrackerList
class UFortQuestTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_130A[0x8];                                     
	bool                                         bConfigureAsHUD;                                   // 0x218(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_130B[0x7];                                     
	class UCommonListView*                       QuestList;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortQuestItem*>                HUDCachedQuests;                                   // 0x228(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTrackerList");
		return Clss;
	}

	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleQuestsUpdated();
	void HandlePinnedQuestsChanged();
	void HandleHUDFinalObjectiveHidden(class UFortQuestItem* QuestItem);
	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortQuestTrackerSubEntry
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_130C[0x10];                                    
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x228(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestObjectiveCompletedDelegate;              // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x248(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_130D[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTrackerSubEntry");
		return Clss;
	}

	void OnSetup();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void NotifyCompletionAnimationFinished();
	void HandleQuestsUpdated();
};

// 0x10 (0x8A0 - 0x890)
// Class FortniteUI.FortQuestTreeItemWidget
class UFortQuestTreeItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_130E[0x8];                                     
	TWeakObjectPtr<class UObject>                QuestOrCategory;                                   // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTreeItemWidget");
		return Clss;
	}

	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortQuestUpdateEntry
class UFortQuestUpdateEntry : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortQuestObjectiveEntry>  SubEntryClass;                                     // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FinishedDisplayingQuests;                          // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVerticalBox*                          ObjectivesBox;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1311[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestUpdateEntry");
		return Clss;
	}

	void StartQuestOutro();
	void StartQuestIntro();
	void SetupAsAnnouncement();
	void SetQuestItem(class UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
	void QuestItemSet(class UFortQuestItem* QuestItemToCheck);
	int32 GetNumDisplayedObjectives();
	void FinishQuestOutro();
	void FinishQuestIntro();
	void CurrentlyDisplayedObjectiveFinished(class UFortQuestObjectiveEntry* QuestObjective);
	bool CanAddObjective(class UFortQuestItem* QuestItemToCheck);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortQuestUpdatesLog
class UFortQuestUpdatesLog : public UFortHUDElementWidget
{
public:
	TSubclassOf<class UFortQuestUpdateEntry>     QuestEntryClass;                                   // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDisplayedQuestUpdates;                          // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDisplayedQuestObjectives;                       // 0x244(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          QuestUpdatesBox;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1313[0x10];                                    
	TArray<class UFortQuestUpdateEntry*>         QuestUpdateWidgets;                                // 0x260(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1314[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestUpdatesLog");
		return Clss;
	}

	void HandleQuestUpdateFinished(class UFortQuestUpdateEntry* QuestEntryFinished);
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo* QuestItemToCheck);
};

// 0xD8 (0x2E8 - 0x210)
// Class FortniteUI.FortQuickBarSlotBase
class UFortQuickBarSlotBase : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                 SwitcherTopComboSwitcher;                          // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 SwitcherBottomComboSwitcher;                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTop;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottom;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomCombo1;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomCombo2;                               // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTopComboArrow1;                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTopComboArrow2;                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomComboArrow1;                          // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomComboArrow2;                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BottomHoldText;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopLeftArrowImage;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopLeftArrowImage2;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopRightArrowImage;                                // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopRightArrowImage2;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomLeftArrowImage;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomLeftArrowImage2;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomRightArrowImage;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomRightArrowImage2;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                EmptyImage;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemCardMaximized;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemCardMinimized;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemCooldownWidget*               QuickbarSlotCooldown;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SlotInteraction;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortQuickBars                    QuickBarType;                                      // 0x2D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowBottomArrows : 1;                             // Mask : 0x1 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowTopArrows : 1;                                // Mask : 0x2 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideKeybindsWhenAbilityUnavailable : 1;           // Mask : 0x4 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldCollapseItemWidgetBorder : 1;               // Mask : 0x8 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        DoNotPlaySelectionAnimation : 1;                   // Mask : 0x10 0x2D5(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsAthenaQuickBar : 1;                             // Mask : 0x20 0x2D5(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bKeybindsHidden : 1;                               // Mask : 0x40 0x2D5(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x2D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1316[0x1];                                     
	class UFortItem*                             Item;                                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInputData*                        InputData;                                         // 0x2E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuickBarSlotBase");
		return Clss;
	}

	void UpdateKeyBindingVisibility();
	void UpdateKeyBindingText();
	void UpdateItemCardsVisibility();
	void SetTopComboSwitcherVisibility(enum class ESlateVisibility InVisibility);
	void SetSlotSelected(bool bSelected);
	void SetQuickbarTypeRuntime(enum class EFortQuickBars NewQuickBarType, bool bRefresh);
	void SetQuickbarIndexRuntime(int32 Index, bool bRefresh);
	void SetBottomComboSwitcherVisibility(enum class ESlateVisibility InVisibility);
	void Resize(enum class EFortItemCardSize CardSize);
	void RefreshItem();
	void OnRefreshItem();
	void MinimizeSlot(bool bShouldSkipAnimation);
	void MaximizeSlot(bool bShouldSkipAnimation);
	class FName GetKeyBindingActionKeyboard();
	class FName GetKeyBindingActionGamepad();
	class FName GetKeyBindingAction();
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortRedeemCodeBase
class UFortRedeemCodeBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRedeemCodeBase");
		return Clss;
	}

	void RedeemFriendCode(const class FString& FriendCode);
	void OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason);
};

// 0x48 (0x340 - 0x2F8)
// Class FortniteUI.FortRedirectToEpicAccountWidget
class UFortRedirectToEpicAccountWidget : public UCommonActivatablePanel
{
public:
	TArray<struct FPlatformSupportDesc>          SupportedPlatforms;                                // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPlatformSupportDesc                  DefaultValues;                                     // 0x308(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_CreateAccount;                              // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRedirectToEpicAccountWidget");
		return Clss;
	}

	void SetLoginType(enum class EFortLoginAccountType LoginType);
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortRefundConfirmation
class UFortRefundConfirmation : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1317[0x10];                                    
	class UCommonTextBlock*                      Text_AreYouSure;                                   // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundsRemaining;                             // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Yes;                                        // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRefundConfirmation");
		return Clss;
	}

	void SetRefundsRemainingText(int32 RefundsRemaining, int32 TotalRefunds);
};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortRejoinWindowBase
class UFortRejoinWindowBase : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      RejoinTime;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1318[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRejoinWindowBase");
		return Clss;
	}

	void StopTimeout();
	void StartTimeout(float TimeoutTime);
	void OnTimeoutTimeReached();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortReplayBase
class UFortReplayBase : public UFortHUDElementWidget
{
public:
	class UFortReplayContext*                    ReplayContext;                                     // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayBase");
		return Clss;
	}

	void SetReplayContext(class UFortReplayContext* InReplayContext);
	void OnTimelineRangeChanged(float StartTime, float EndTime);
	void OnReplayPausedChanged(bool bIsPaused);
	void OnPlaybackTimeChanged(float NowTime);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortReplayViewSettingsTabBase
class UFortReplayViewSettingsTabBase : public UFortActivatablePanel
{
public:
	class AFortPlayerControllerSpectating*       SpectatingPC;                                      // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayViewSettingsTabBase");
		return Clss;
	}

	void SetWidgetValues();
	void ResetToDefault();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void InitializeWidgets();
	void CenterOnTab();
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortReportActioned
class UFortReportActioned : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReportActioned");
		return Clss;
	}

};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortResultsSummaryScreenWidget
class UFortResultsSummaryScreenWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResultsSummaryScreenWidget");
		return Clss;
	}

	void GetTotalScoreSortedScoreIndices(class UFortUIScoreReport* ScoreReport, TArray<int32>* OutSortedScoreIndices);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortResultsTeleportScreenWidget
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
public:
	float                                        ExitTime;                                          // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131A[0x24];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResultsTeleportScreenWidget");
		return Clss;
	}

	void StartExitTimer();
	void OnExitTimerFinished();
	void OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds);
	void OnExitTimePercentagePassedUpdated(float Percent);
};

// 0xC0 (0x3B8 - 0x2F8)
// Class FortniteUI.FortResultsWidget
class UFortResultsWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_131D[0x78];                                    
	int32                                        AdditionalGrantedMissionPoints;                    // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_131E[0x4];                                     
	TArray<class UFortItem*>                     RewardedBadges;                                    // 0x378(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     MissedBadges;                                      // 0x388(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedItems;                                     // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedAccountItems;                              // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResultsWidget");
		return Clss;
	}

	void TriggerSetupTeleportCameraEvent();
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void RequestExitZone();
	void LogXPData();
	bool IsDataFinalized();
	enum class EFortCompletionResult GetZoneCompletionResult();
	int32 GetTotalMissionPointsEarned();
	void GetRewardsByType(enum class EFortRewardItemType Type, TArray<class UFortItem*>* OutRewards);
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortReticle
class UFortReticle : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_131F[0x28];                                    
	class UMaterialInterface*                    ReticleWeaponCooldownMI;                           // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReticle");
		return Clss;
	}

	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnReticleColorChanged();
	void OnPawnSet();
	void OnContextualReticleChanged();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortReturnReasonEntry
class UFortReturnReasonEntry : public UCommonButton
{
public:
	uint8                                        Pad_1320[0x8];                                     
	class UObject*                               InternalData;                                      // 0x898(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Name;                                         // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReturnReasonEntry");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortRewardNotificationData
class UFortRewardNotificationData : public UObject
{
public:
	enum class EFrontEndRewardType               RewardType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1322[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationData");
		return Clss;
	}

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x70 (0xA0 - 0x30)
// Class FortniteUI.FortRewardCollectionBookData
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x30(0x70)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardCollectionBookData");
		return Clss;
	}

};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortRewardNotificationSubWidget
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTransitionInComplete;                            // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTransitionOutComplete;                           // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1324[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationSubWidget");
		return Clss;
	}

	void TransitionOutBegin();
	void TransitionOut();
	void TransitionInBegin();
	void TransitionIn();
	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void OnPrimaryAction();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnDeactivated();
	void OnActivated();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommittedEvent);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortRewardConversationWidget
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardConversationWidget");
		return Clss;
	}

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardDifficultyIncrease
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardDifficultyIncrease");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardEpicQuestData
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardEpicQuestData");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardExpeditionData
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardExpeditionData");
		return Clss;
	}

};

// 0x68 (0x2A0 - 0x238)
// Class FortniteUI.FortRewardExpeditionWidget
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	UMulticastDelegateProperty_                  OnMcpError;                                        // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1327[0x58];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardExpeditionWidget");
		return Clss;
	}

	void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void CollectExpedition(class UFortExpeditionItem* Expedition);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardGiftBoxData
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{
public:
	class UFortGiftBoxItem*                      GiftBox;                                           // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardGiftBoxData");
		return Clss;
	}

};

// 0x20 (0x8B0 - 0x890)
// Class FortniteUI.FortRewardInfoButton
class UFortRewardInfoButton : public UCommonButton
{
public:
	uint8                                        Pad_1328[0x8];                                     
	class UPanelWidget*                          ItemCardPanel;                                     // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x8A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x8A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1329[0x6];                                     
	class UFortItem*                             ItemInstance;                                      // 0x8A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardInfoButton");
		return Clss;
	}

	void SetShowDescriptionBP(bool bInShowDescription);
	void SetShowDescription(bool bInShowDescription);
	void SetItemInstanceQuantityPair(struct FFortItemInstanceQuantityPair& ItemQuantityPair);
	void HandleDifferentItemOrQuantitySetBP();
	int32 GetQuantity();
	class UFortItem* GetItemInstance();
};

// 0x88 (0x298 - 0x210)
// Class FortniteUI.FortRewardInfoWidget
class UFortRewardInfoWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RewardListWidget;                                  // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x229(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowDescription;                                  // 0x22A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowItemInteraction;                             // 0x22B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxNumRewardsShown;                                // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRewardInfoButton>     OrWidgetType;                                      // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRewardInfoButton>     RewardInfoButtonType;                              // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132B[0x20];                                    
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_132C[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardInfoWidget");
		return Clss;
	}

	void SetRewards(struct FFortRewardInfo& RewardsIn);
	void SetReward(struct FFortItemQuantityPair& RewardIn);
	void SetButtonGroup(class UCommonButtonGroup* InButtonGroup);
	bool ContainsReward(const class FString& TemplateIdToCheck);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardItemCacheData
class UFortRewardItemCacheData : public UFortRewardNotificationData
{
public:
	class UFortItem*                             ItemCache;                                         // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardItemCacheData");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionAlertData
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardMissionAlertData");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionData
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardMissionData");
		return Clss;
	}

};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortRewardNewQuestWidget
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNewQuestWidget");
		return Clss;
	}

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0xB8 (0x3B0 - 0x2F8)
// Class FortniteUI.FortRewardNotificationWidget
class UFortRewardNotificationWidget : public UCommonActivatablePanel
{
public:
	TArray<class UFortRewardNotificationData*>   NotificationDataList;                              // 0x2F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_132E[0x10];                                    
	class UOverlay*                              OverlayMain;                                       // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x320(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_132F[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationWidget");
		return Clss;
	}

	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void ResetAllRewardData();
	void OnPrimaryActionTextChanged(class FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void AddQuestData(class UFortQuestItem* Quest);
	void AddMissionData();
	void AddMissionAlertData();
	void AddItemCacheRewardData(class UFortItem* ItemCache);
	void AddGiftBoxData();
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddDifficultyIncreaseRewardData();
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardQuestData
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardQuestData");
		return Clss;
	}

};

// 0x998 (0xA98 - 0x100)
// Class FortniteUI.FortRichTextBlock
class UFortRichTextBlock : public UWidget
{
public:
	class FText                                  Text;                                              // 0x100(0x18)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            StyleSet;                                          // 0x118(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TextMargin;                                        // 0x120(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoWrapText;                                      // 0x134(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x135(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1330[0x2];                                     
	struct FButtonStyle                          HyperlinkButtonStyle;                              // 0x138(0x278)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x3B0(0x4D0)(Edit, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x880(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1331[0x7];                                     
	TSubclassOf<class UFortKeybindWidget>        KeybindWidgetClass;                                // 0x888(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1332[0x208];                                   

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRichTextBlock");
		return Clss;
	}

	void SetText(class FText InText);
	class FString EscapeStringForRichText(const class FString& InString);
};

// 0xC8 (0xF0 - 0x28)
// Class FortniteUI.FortSettingsContext
class UFortSettingsContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1333[0x50];                                    
	UMulticastDelegateProperty_                  WindowModeHasChanged;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1334[0x5C];                                    
	float                                        MinGammaValue;                                     // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGammaValue;                                     // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1335[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSettingsContext");
		return Clss;
	}

	void WindowModeChanged(int32 NewMode);
	void ViewDistanceQualityChanged(int32 ButtonId);
	void UseVsyncChanged(bool IsChecked);
	void UpdateGammaSettings(float GammaValue);
	void TouchVerticalSensitivityValueChanged(float NewValue);
	void TouchTargetingMultiplierValueChanged(float NewValue);
	void TouchLookSensitivityChanged(float NewValue);
	void TouchDragScopedSensitivityValueChanged(float NewValue);
	void ThreeDResolutionChanged(float Resolution);
	void TextureQualityChanged(int32 ButtonId);
	void TargetingToggleChanged(bool bInChecked);
	void TargetingMultiplierValueChanged(float NewValue);
	void TapInteractChanged(bool bInChecked);
	void StreamerModeChanged(bool bInChecked);
	void SprintToggleChanged(bool bInChecked);
	void SprintCancelsReloadChanged(bool bInChecked);
	void SprintByDefaultChanged(bool bInChecked);
	void SoundFXVolumeChanged(float NewValue);
	void ShowViewerCountChanged(bool bInChecked);
	void ShowGrassChanged(bool IsChecked);
	void ShowFPSChanged(bool IsChecked);
	void ShadowQualityChanged(int32 ButtonId);
	void SetVoiceChatPTTEnabled(bool bNewValue);
	void SetVoiceChatOutputDevice(int32 NewDevice);
	void SetVoiceChatInputDevice(int32 NewDevice);
	void SetVoiceChatEnabled(bool bNewValue);
	void SetVoiceChat3DEnabled(bool bNewValue);
	void SetVisualizeAudioSources(bool bEnable);
	void SetSubtitlesEnabled(bool bNewValue);
	void SetQuality(int32 NewQuality);
	void SetIgnoreGamepadInput(bool bIgnore);
	void SetColorBlindStrength(float InColorBlindStrength);
	void SetColorBlindMode(int32 InMode);
	void SetAllowGameVolumeWhenMinimized(bool bNewValue);
	void SendSettingChanges();
	void ScopedMultiplierValueChanged(float NewValue);
	void SafeZoneChanged(float NewValue);
	void ResolutionChanged(int32 NewResolution);
	void RegionChanged(int32 NewRegion);
	void PowerSaverModeChanged(bool bInChecked);
	void PostProcessQualityChanged(int32 ButtonId);
	void PeripheralLightingChanged(bool bInChecked);
	void OnUseTapToShootChanged(bool bInChecked);
	void OnTurboBuildChanged(bool bInChecked);
	void OnShowGlobalChatEnabledChanged(bool bInChecked);
	void OnShadowPlayHighlightsChanged(bool bInChecked);
	void OnReplayRecordingPreferenceChanged(bool bInChecked);
	void OnQualitySelectorChanged(int32 ValueRef);
	void OnLargeTeamsReplayRecordingPreferenceChanged(bool bInChecked);
	void OnHUDScaleChanged(float bInHUDScale);
	void OnGamepadAutoRunChanged(bool bInChecked);
	void OnForceFeedbackChanged(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool bInChecked);
	void OnEditModeAimAssistChanged(bool bInChecked);
	void OnCrossplayPreferenceChanged(bool bInChecked);
	void OnAutoPickupWeaponsConsolePCChanged(bool bInChecked);
	void OnAutoPickupWeaponsChanged(bool bInChecked);
	void OnAutoOpenDoorsChanged(bool bInChecked);
	void OnAutoChangeMaterialChanged(bool bInChecked);
	void OnAimAssistChanged(bool bInChecked);
	void MusicVolumeChanged(float NewValue);
	void MouseSensitivityYChanged(float NewValue);
	void MouseSensitivityXChanged(float NewValue);
	void MotionTargetingMultiplierValueChanged(float NewValue);
	void MotionScopedMultiplierValueChanged(float NewValue);
	void MotionHarvestingToolMultiplierValueChanged(float NewValue);
	void MotionControlEnabledValueChanged(bool NewValue);
	void MotionBlurChanged(bool IsChecked);
	void LookInversionChanged(bool bInChecked);
	void LanguageChanged(int32 NewMode);
	void InvertAcceptAndBackChanged(int32 NewMode);
	void GyroSensitivityValueChanged(float NewValue);
	TArray<class FText> GetWindowModeNames();
	bool GetVoiceChatPTTEnabled();
	int32 GetVoiceChatOutputDevice();
	int32 GetVoiceChatInputDevice();
	bool GetVoiceChatEnabled();
	bool GetVoiceChat3DEnabled();
	bool GetVisualizeAudioSources();
	int32 GetViewDistanceQuality();
	TArray<class FText> GetViewDistanceNames();
	bool GetUseVsync();
	bool GetUseTapToShoot();
	bool GetTurboBuild();
	float GetTouchVerticalSensitivityValue();
	float GetTouchTargetingMultiplierValue();
	float GetTouchLookSensitivityValue();
	float GetTouchDragScopedSensitivityValue();
	float GetThreeDResolution();
	int32 GetTextureQuality();
	bool GetTargetingToggleState();
	float GetTargetingMultiplierValue();
	bool GetTapInteractState();
	bool GetSubtitlesEnabled();
	bool GetStreamerModeEnabled();
	bool GetSprintToggleState();
	bool GetSprintCancelsReloadState();
	bool GetSprintByDefaultState();
	float GetSoundFXVolumeValue();
	bool GetShowViewerCountEnabled();
	bool GetShowHeroHeadAccessories();
	bool GetShowHeroBackpack();
	bool GetShowGrass();
	bool GetShowGlobalChatEnabled();
	bool GetShowFPS();
	int32 GetShadowQuality();
	bool GetShadowPlayHighlightsEnabled();
	float GetScopedMultiplierValue();
	float GetSafeZoneValue();
	bool GetReplayRecordingEnabled();
	TArray<class FText> GetRegionDisplayNames();
	TArray<class FText> GetQualityOffNames();
	TArray<class FText> GetQualityNames();
	TArray<class FText> GetQualityLowNames();
	int32 GetQuality();
	bool GetPowerSaverMode();
	int32 GetPostProcessQuality();
	TArray<class FText> GetPossibleLanguages();
	bool GetPeripheralLightingEnabled();
	int32 GetOverallQualityLevel();
	float GetMusicVolumeValue();
	struct FVector2D GetMouseSensitivityValue();
	float GetMotionTargetingMultiplierValue();
	float GetMotionScopedMultiplierValue();
	float GetMotionHarvestingToolMultiplierValue();
	bool GetMotionControlsEnabledValue();
	bool GetMotionBlur();
	int32 GetMaxQualityLevel();
	bool GetLookInversionState();
	bool GetLargeTeamsReplayRecordingEnabled();
	bool GetInvertAcceptAndBack();
	bool GetIgnoreGamepadInput();
	float GetHUDScale();
	float GetGyroSensitivityValue();
	float GetGammaSettings();
	float GetGamepadTargetingMultiplierValue();
	float GetGamepadScopedMultiplierValue();
	struct FVector2D GetGamepadLookSensitivityValue();
	bool GetGamepadAutoRunState();
	TArray<class FText> GetFPSNames();
	bool GetForceFeedbackState();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState();
	bool GetFirstPersonCameraState();
	int32 GetEffectsQuality();
	bool GetEditModeAimAssistState();
	TArray<class FText> GetDisplayResolutionNames();
	float GetDialogVolumeValue();
	float GetDefaultGammaSettings();
	int32 GetCurrentWindowMode();
	int32 GetCurrentRegion();
	int32 GetCurrentLanguage();
	int32 GetCurrentFPS();
	int32 GetCurrentDisplayResolution();
	bool GetCrossplayPreference();
	bool GetConsoleUnlockedFPSState();
	float GetColorBlindStrength();
	TArray<class FText> GetColorBlindModeNames();
	int32 GetColorBlindMode();
	float GetCinematicsVolume();
	float GetChatVolumeValue();
	void GetAvailableVoiceChatOutputDevices();
	void GetAvailableVoiceChatInputDevices();
	bool GetAutoPickupWeaponsConsolePC();
	bool GetAutoPickupWeapons();
	bool GetAutoOpenDoors();
	bool GetAutoEquipState();
	bool GetAutoChangeMaterial();
	int32 GetAntiAliasingQuality();
	bool GetAllowLowPower();
	bool GetAllowGameVolumeWhenMinimized();
	bool GetAimAssistState();
	void GamepadTargetingMultiplierValueChanged(float NewValue);
	void GamepadScopedMultiplierValueChanged(float NewValue);
	void GamepadLookSensitivityYChanged(float NewValue);
	void GamepadLookSensitivityXChanged(float NewValue);
	void FrameRateLimitChanged(int32 FrameRateLimit);
	void FirstPersonCameraChanged(bool bInChecked);
	void EffectsQualityChanged(int32 ButtonId);
	void DialogVolumeChanged(float NewValue);
	void ConsoleUnlockedFPSChanged(bool bInChecked);
	void CinematicsVolumeChanged(float NewValue);
	void ChatVolumeChanged(float NewValue);
	void AutoEquipChanged(bool bInChecked);
	void AntiAliasingQualityChanged(int32 ButtonId);
	void AllowLowPowerChanged(bool IsChecked);
};

// 0x40 (0x338 - 0x2F8)
// Class FortniteUI.FortSignInConsole
class UFortSignInConsole : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1337[0x10];                                    
	class UEditableText*                         Email;                                             // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SendCode;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         Passcode;                                          // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SubmitCode;                                 // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_Main;                                     // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSignInConsole");
		return Clss;
	}

	void UpdatePasscodeStatus(class FText& Text);
	void UpdateEmailStatus(class FText& Text);
	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0x70 (0x368 - 0x2F8)
// Class FortniteUI.FortSignInWidget
class UFortSignInWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1339[0x10];                                    
	TSubclassOf<class UCommonBorderStyle>        NormalBorderStyle;                                 // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        HighlightBorderStyle;                              // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ForgotPasswordURL;                                 // 0x318(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_133A[0x10];                                    
	class UEditableText*                         Email;                                             // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         Password;                                          // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         EmailBorder;                                       // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         PasswordBorder;                                    // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         SignInButton;                                      // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ForgotPassword;                             // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSignInWidget");
		return Clss;
	}

	void UpdateSignInButton(class FText& Text);
	void StartSignIn();
	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0xE8 (0x200 - 0x118)
// Class FortniteUI.FortSkillTreeCanvas
class UFortSkillTreeCanvas : public UPanelWidget
{
public:
	uint8                                        Pad_133C[0x8];                                     
	struct FVector2D                             OriginForParallaxEffect;                           // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133D[0x38];                                    
	class UCommonButtonGroup*                    NodeButtonGroup;                                   // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_133E[0x98];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeCanvas");
		return Clss;
	}

	void HandleButtonGroupSelectionCleared();
	void HandleButtonGroupSelectionChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEditorInterface
class UFortSkillTreeCanvasEditorInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeCanvasEditorInterface");
		return Clss;
	}

};

// 0x28 (0x8B8 - 0x890)
// Class FortniteUI.FortSkillTreeCanvasNode
class UFortSkillTreeCanvasNode : public UCommonButton
{
public:
	uint8                                        Pad_1342[0x8];                                     
	class FName                                  PageId;                                            // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x8A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldHideConnectorsToDependents;                  // 0x8A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1343[0xF];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeCanvasNode");
		return Clss;
	}

	bool TryGetStaticSkillTreeNodeData(struct FHomebaseNode* OutNodeData);
	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeDisplayData(struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void HandleSkillTreeNodeStateChanged();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEntityInterface
class UFortSkillTreeCanvasEntityInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeCanvasEntityInterface");
		return Clss;
	}

	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x18 (0x50 - 0x38)
// Class FortniteUI.FortSkillTreeCanvasSlot
class UFortSkillTreeCanvasSlot : public UPanelSlot
{
public:
	struct FVector2D                             BasePosition;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParallaxPanningFactor;                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1344[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeCanvasSlot");
		return Clss;
	}

	void SetZOrder(int32 InZOrder);
	void SetPosition(const struct FVector2D& InPosition);
	int32 GetZOrder();
	struct FVector2D GetPosition();
	struct FVector2D GetBasePosition();
};

// 0x18 (0x8A8 - 0x890)
// Class FortniteUI.FortSkillTreePageSelectorButton
class UFortSkillTreePageSelectorButton : public UCommonButton
{
public:
	class FName                                  SkillTreePageId;                                   // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSkillTreeViewer>      SkillTreeViewerType;                               // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1347[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreePageSelectorButton");
		return Clss;
	}

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	bool TryGetSkillTreeNodeState(class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSkillTreePageLocked();
	void HandleRefreshSkillTreeNodePage();
	void HandleDifferentSkillTreePageSet();
	class FText GetButtonNodeCompletionText();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortSkillTreeLandingPage
class UFortSkillTreeLandingPage : public UCommonActivatablePanel
{
public:
	TArray<struct FDataTableRowHandle>           SkillsToLinkTo;                                    // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           ResearchToLinkTo;                                  // 0x308(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeLandingPage");
		return Clss;
	}

	void SetupEventBasedSkillTreePages(TArray<class FString>& ActiveEventFlags);
	class UFortSkillTreePageSelectorButton* CreateAndAddPageButton(class FName& SkillTreePageId, enum class ESkillTreePageType PageType, bool bNewRow);
	bool ClearEventSkillTrees();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortSkillTreeNodeDetailsPanel
class UFortSkillTreeNodeDetailsPanel : public UCommonUserWidget
{
public:
	class FName                                  IdOfSkillTreeNodeToRepresent;                      // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134D[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeNodeDetailsPanel");
		return Clss;
	}

	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeSquadAttributeData(struct FHomebaseNode& HomebaseNode, class FText* Name, class FText* Description, struct FFortMultiSizeBrush* Brush);
	bool TryGetNodeDisplayDataFromID(class FName HomeBaseNodeID, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	bool TryGetNodeDisplayData(struct FHomebaseNode& HomebaseNode, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void SetSkillTreeNodeToRepresent(class FName& SkillTreeNodeId);
	bool HasSkillTreeNodeToRepresent();
	void HandleSkillTreeNodeStateChanged();
	void HandleDifferentSkillTreeNodeToRepresentSetBP();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry
class UFortSkillTreeNodeDisplayDataRegistry : public UDataAsset
{
public:
	TMap<class FName, struct FFortSkillTreeNodeDisplayData> SkillTreeNodeStyleIdToDisplayDataMap;              // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeNodeDisplayDataRegistry");
		return Clss;
	}

};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortSkillTreePageWidget
class UFortSkillTreePageWidget : public UCommonUserWidget
{
public:
	class FName                                  SkillTreePageId;                                   // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134F[0x38];                                    
	class UFortSkillTreeCanvas*                  SkillTreeCanvas;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreePageWidget");
		return Clss;
	}

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x78 (0xA8 - 0x30)
// Class FortniteUI.FortSkillTreePageWidgetRegistry
class UFortSkillTreePageWidgetRegistry : public UDataAsset
{
public:
	TMap<class FName, TSubclassOf<class UUserWidget>> SkillTreePageIdToWidgetTypeMap;                    // 0x30(0x50)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1350[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreePageWidgetRegistry");
		return Clss;
	}

};

// 0xC8 (0x3C0 - 0x2F8)
// Class FortniteUI.FortSkillTreeViewer
class UFortSkillTreeViewer : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnNodeSelectionChangedEvent;                       // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMargin                               PageDisplayAreaMargins;                            // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortSkillTreePageWidget*              CurrentPageWidget;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              PageHostOverlay;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackOutInputAction;                                // 0x328(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class UFortSkillTreePageWidget*> PageIdToWidgetCache;                               // 0x338(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        ZoomLevel;                                         // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1358[0x34];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSkillTreeViewer");
		return Clss;
	}

	bool TryGetSkillTreePageStaticData(struct FHomebaseNodePage* OutData);
	void ShowPage(class FName& SkillTreePageId, enum class EFortAnimSpeed TransitionSpeed);
	void OnNodeSelectionChanged__DelegateSignature();
	void NavigateTo(class FName& SkillTreeNodeId, bool ShouldSelectNode, enum class EFortAnimSpeed TransitionSpeed);
	void HandleViewParametersChangedBP();
	void HandleNodeSelectionChangedBP();
	void HandleDifferentPageShown();
	void HandleBackOutAction(bool* Passthrough);
	void GetViewParameters(struct FVector2D* OutPanOffset, float* OutZoomLevel);
	class FName GetSelectedNodeId();
	int32 GetPageTotalNodes(class FName& SkillTreePageId);
	bool GetPageLocked(class FName& SkillTreePageId);
	int32 GetPageAquiredNodes(class FName& SkillTreePageId);
	void GetCurrenciesNeededForPage(class FName& SkillTreePageId, TArray<class UFortItemDefinition*>* OutCurrencies);
	void DrillDownToSubPage(class FName& DrillDownSkillTreeNodeId, enum class EFortAnimSpeed TransitionSpeed);
	bool CanBackOutOfSubPage();
	void BackOutOfSubPage(enum class EFortAnimSpeed TransitionSpeed);
};

// 0x30 (0x8C0 - 0x890)
// Class FortniteUI.FortSocialImportButton
class UFortSocialImportButton : public UCommonButton
{
public:
	uint8                                        Pad_1359[0x18];                                    
	class UFortSocialImportPanel*                ActivePanel;                                       // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESocialImportPanelType            DesiredPanelType;                                  // 0x8B0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_135A[0x7];                                     
	TSubclassOf<class UFortSocialImportPanel>    SocialImportPanelClass;                            // 0x8B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialImportButton");
		return Clss;
	}

	void OnCaptionGenerated(class FText& Caption);
	void HandleDynamicSocialImportDialogClosed();
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortSocialImportPanel
class UFortSocialImportPanel : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSocialImportPanelClosed;                         // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_135B[0x28];                                    
	class UWidgetSwitcher*                       Switcher_AddFriends;                               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Import;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Yes;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_OptOut;                                     // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialImportPanel");
		return Clss;
	}

	void ShowPanel();
	void OnWaitingViewRequested();
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void OnLauncherImportOpened();
	void OnIncentivizedSet(bool bIncentivized);
	void OnImportViewRequested();
	void OnClaimViewRequested();
	bool GetSocialPlatform(enum class ESocialImportPanelPlatform* OutPlatform);
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortSocialItemWidget
class UFortSocialItemWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialItemWidget");
		return Clss;
	}

	void SetSocialItem(class UFortSocialItem* InSocialItem);
};

// 0x708 (0x808 - 0x100)
// Class FortniteUI.FortSocialListView
class UFortSocialListView : public UWidget
{
public:
	UDelegateProperty_                           GenerateItemEvent;                                 // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortSocialItemWidget>     SocialItemWidgetType;                              // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ListRowStyle;                                      // 0x118(0x6B8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UFortSocialItem*>               SocialList;                                        // 0x7D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_135C[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialListView");
		return Clss;
	}

	void SetList(TArray<class UFortSocialItem*>& InList);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortSocialMenuPanel
class UFortSocialMenuPanel : public UFortActivatablePanel
{
public:
	uint8                                        Pad_135D[0x10];                                    
	class UFortSocialMenuSlateWrapperWidget*     SlateWrapper_Social;                               // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialMenuPanel");
		return Clss;
	}

	void SetOnSocialMenuPanelClosedDelegate(UDelegateProperty_& OnPanelClosedDelegate);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortSocialMenuSlateWrapperWidget
class UFortSocialMenuSlateWrapperWidget : public UWidget
{
public:
	uint8                                        Pad_135E[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialMenuSlateWrapperWidget");
		return Clss;
	}

};

// 0x67B8 (0x67E8 - 0x30)
// Class FortniteUI.FortSocialStyle
class UFortSocialStyle : public UDataAsset
{
public:
	struct FSocialStyle                          Style;                                             // 0x30(0x67B0)(Edit, NativeAccessSpecifierPublic)
	class USocialStyleDataAsset*                 OverrideStyle;                                     // 0x67E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialStyle");
		return Clss;
	}

};

// 0x28 (0x230 - 0x208)
// Class FortniteUI.FortSpectatedPlayerSwitcher
class UFortSpectatedPlayerSwitcher : public UUserWidget
{
public:
	int32                                        MaxPlayersToShow;                                  // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_135F[0x4];                                     
	TArray<struct FPotentialSpectatorTarget>     DisplayedTargets;                                  // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPotentialSpectatorTarget>     AvailableTargets;                                  // 0x220(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSpectatedPlayerSwitcher");
		return Clss;
	}

	bool ShouldBeVisible();
	void OnDisplayedTargetsUpdated();
};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortSplashScreenWidget
class UFortSplashScreenWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1360[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSplashScreenWidget");
		return Clss;
	}

};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortSquadIcon
class UFortSquadIcon : public UCommonUserWidget
{
public:
	class FName                                  Name;                                              // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1361[0x7];                                     
	class UImage*                                Icon;                                              // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadIcon");
		return Clss;
	}

	void SetSquad(class FName& InName);
	void HandleDifferentSquadSetBP();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetails
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonNumericTextBlock*               PowerRating;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetails");
		return Clss;
	}

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadMemberBP(class FName& SquadId, int32 Index);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetailsLocked");
		return Clss;
	}

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSummary
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	uint8                                        Pad_1363[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSummary");
		return Clss;
	}

	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x88 (0x298 - 0x210)
// Class FortniteUI.FortSquadLandingPageSurvivorSummary
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*           FortitudeStatValue;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           OffenseStatValue;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           ResistanceStatValue;                               // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           TechStatValue;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1364[0x68];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageSurvivorSummary");
		return Clss;
	}

	void HandleClearSetBonusSummaryLineItemsBP();
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
};

// 0xD0 (0xF8 - 0x28)
// Class FortniteUI.FortSquadManagementItemViewContextBase
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	uint8                                        Pad_1365[0xD0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadManagementItemViewContextBase");
		return Clss;
	}

};

// 0x8 (0x100 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotsView
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_1366[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotsView");
		return Clss;
	}

};

// 0x10 (0x108 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotItemPicker
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_1367[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotItemPicker");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	uint8                                        Pad_1368[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotsView");
		return Clss;
	}

};

// 0x8 (0x110 - 0x108)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	uint8                                        Pad_1369[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotItemPicker");
		return Clss;
	}

};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortSquadSlotDetailsPanel
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_136D[0x28];                                    
	class UFortSquadSlotItemDetailsHostPanel*    ItemDetailsPanel;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_136E[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotDetailsPanel");
		return Clss;
	}

	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot);
	void SetScrollWidget();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandleSquadSlotStateChangedBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleDifferentSquadSlotSetBP();
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x280 - 0x258)
// Class FortniteUI.FortSquadSlotItemDetailElementWidget
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	uint8                                        Pad_1371[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemDetailElementWidget");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x2A0 - 0x278)
// Class FortniteUI.FortSquadSlotItemDetailsHostPanel
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	uint8                                        Pad_1374[0x28];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemDetailsHostPanel");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xD0 (0x398 - 0x2C8)
// Class FortniteUI.FortSquadSlotItemPicker
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_1377[0x40];                                    
	UMulticastDelegateProperty_                  OnSortChanged;                                     // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1378[0x80];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemPicker");
		return Clss;
	}

	void SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes);
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
	void FortSquadSlotSortChanged__DelegateSignature(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType SquadSlotType);
	void CycleSortType();
};

// 0x18 (0x8D8 - 0x8C0)
// Class FortniteUI.FortSquadSlotItemPickerTileButton
class UFortSquadSlotItemPickerTileButton : public UFortItemPickerButton
{
public:
	uint8                                        Pad_1379[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemPickerTileButton");
		return Clss;
	}

	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId);
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
};

// 0x0 (0x318 - 0x318)
// Class FortniteUI.FortSquadSlotSelectorPopupMenu
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSelectorPopupMenu");
		return Clss;
	}

	class UFortSquadSlotSelectorButton* GetHostButton();
};

// 0x28 (0x2A8 - 0x280)
// Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	bool                                         IsSquadLeaderSlot;                                 // 0x280(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         LeaderMatchesSquadType;                            // 0x281(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137A[0x2];                                     
	int32                                        SubordinatePersonalityMatchCount;                  // 0x284(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MatchesLeaderPersonality;                          // 0x288(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137B[0x3];                                     
	int32                                        MatchingSetBonusCount;                             // 0x28C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SetBonusSize;                                      // 0x290(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137C[0x14];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSurvivorTraitMatchesDetailWidget");
		return Clss;
	}

	void HandleTraitValuesUpdatedBP();
};

// 0x80 (0x910 - 0x890)
// Class FortniteUI.FortSquadSlotSelectorButton
class UFortSquadSlotSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_137F[0x28];                                    
	UMulticastDelegateProperty_                  OnRequestOpenSquadSlotEvent;                       // 0x8B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestViewInAllEvent;                           // 0x8C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortSquadSlotWidget*                  SquadSlotWidget;                                   // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UInterfaceProperty_                          ItemViewContext;                                   // 0x8E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1380[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSelectorButton");
		return Clss;
	}

	void ViewInAll();
	void SquadSlotWidgetUpdated();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void OpenSquadSlot();
	bool IsSquadSlotLockedBP();
	void HandlePreDifferentSquadSlotSetBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UWidget* GetPopupMenu();
	bool GetInPreviewMode();
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xE8 (0x2F8 - 0x210)
// Class FortniteUI.FortSquadSlotsView
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	uint8                                        Pad_1388[0x10];                                    
	UMulticastDelegateProperty_                  OnDifferentSquadSlotSelectedEvent;                 // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestOpenSquadSlotEvent;                       // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestViewInAllEvent;                           // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        IndexOfSelectedSquadSlot;                          // 0x250(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlotButtonsRequireSelection;                      // 0x254(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPreviewMode;                                    // 0x255(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1389[0x2];                                     
	TMap<enum class ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap;                             // 0x258(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           SquadSlotButtonGroup;                              // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_138A[0x30];                                    
	UInterfaceProperty_                          ItemViewContext;                                   // 0x2E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_138B[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotsView");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes);
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked);
	void SetInPreviewMode(bool bPreview);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSlot(int32 SquadSlotIndex);
	void OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void HandleRequestViewInAll(int32 SquadSlotIndex);
	void HandleRequestOpenSquadSlot(int32 SquadSlotIndex);
	void HandleHoveredButtonChanged(class UCommonButton* HoveredButton, int32 ButtonIndex);
	void HandleButtonDoubleClicked(class UCommonButton* CommittedButton, int32 ButtonIndex);
	void HandleButtonClicked(class UCommonButton* CommittedButton, int32 ButtonIndex);
	int32 GetIndexOfSelectedSquadSlot();
	class FName GetIdOfSquadToManageBP();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
};

// 0x98 (0x198 - 0x100)
// Class FortniteUI.FortSquadSlotWidget
class UFortSquadSlotWidget : public UWidget
{
public:
	uint8                                        Pad_138E[0x28];                                    
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138F[0x3F];                                    
	class UFortMultiSizeItemCard*                SlottedItemCard;                                   // 0x168(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1390[0x8];                                     
	UInterfaceProperty_                          ItemViewContext;                                   // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1391[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotWidget");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortSquadStatsWidgetBase
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>    OverviewStats;                                     // 0x210(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortAttributeList_NUI*                DetailedStats;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1392[0x20];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatsWidgetBase");
		return Clss;
	}

	void RequestStatsUpdate();
	void RequestShowPreviewStats();
	void HandleSquadSlottingPreviewStateChanged();
	struct FUniqueNetIdRepl GetLocalPlayerId();
};

// 0x58 (0x268 - 0x210)
// Class FortniteUI.FortSquadStatValueWithIcon
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x210(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    TeamAttribute;                                     // 0x230(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1393[0x7];                                     
	class UCommonNumericTextBlock*               Value;                                             // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Icon;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatValueWithIcon");
		return Clss;
	}

	void HandleDifferentAttributeSetBP();
};

// 0x40 (0x368 - 0x328)
// Class FortniteUI.FortSquadTypeLandingPageBase
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1394[0x7];                                     
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFortFrontendInventoryFilter      ItemManagementScreenFilter;                        // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1395[0x7];                                     
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;                              // 0x358(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadTypeLandingPageBase");
		return Clss;
	}

	void HandlePendingNavigationOp();
	void HandleManageInputAction(bool* bPassThrough);
	void HandleBackInputAction(bool* bPassThrough);
	class UFortSquadSelectorButton* CreateAndAddSquadButton(class FName& SquadId);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortStatIcon
class UFortStatIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x210(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1396[0x7];                                     
	class UImage*                                Icon;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStatIcon");
		return Clss;
	}

	void SetAttribute(struct FGameplayAttribute& InAttribute);
	void HandleDifferentAttributeSetBP();
};

// 0xE8 (0x110 - 0x28)
// Class FortniteUI.FortStoreContext
class UFortStoreContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_13A0[0x8];                                     
	UMulticastDelegateProperty_                  OnCardPackOffersChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStorePurchaseCompleted;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStoreStateChange;                                // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FCardPackOffer>                Offers;                                            // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextStoreRefresh;                                  // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCard>                         CardList;                                          // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CardIndex;                                         // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A1[0x4];                                     
	struct FOpenedCardPack                       OpenedCardPack;                                    // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortRarity                       LastCardRarity;                                    // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A2[0x7];                                     
	TArray<struct FCard>                         PurchasedItemList;                                 // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortCardPackItem*>             PurchasedCardPacks;                                // 0xB8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A3[0x38];                                    
	TArray<struct FSoftObjectPath>               MissingAssetsAttemptedAsyncLoad;                   // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreContext");
		return Clss;
	}

	bool StoreHasStarsForSale();
	void RealMoneyPurchaseStart();
	void RealMoneyPurchaseFinished();
	bool PurchaseOpeningComplete();
	bool OpenWebPayment(const class FString& AttemptedMTXOfferId);
	enum class ECardPackPurchaseError MakePurchase(struct FCardPackOffer& Offer, int32 Quantity);
	bool MakeChoice(int32 ChoiceIdx);
	bool IsWaitingForMcp();
	struct FTimespan GetTimeUntilMarketplaceRefresh();
	struct FTimespan GetTimeUntilDailyLimitReset();
	enum class EFortStoreState GetStoreState();
	struct FLinearColor GetRarityColor(enum class EFortRarity Rarity);
	enum class EFortStoreState GetPreviousState();
	int32 GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType);
	bool GetCard(int32 CardIdx, struct FCard* ResultOut);
	void GetAccountItems(TArray<class UFortAccountItemDefinition*>& AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems);
	void FreshenCache();
	void FireInteractionAnalyticsEvent(const class FString& Interaction, const class FString& Details);
	bool ExitWebPayment();
	bool ExitSummary();
	void ExitRealMoneyStore();
	bool ExitCurrencyStore();
	bool ExitCardPackStore();
	bool ErrorOccurred(const class FString& ErrorAnalytics);
	void EnterRealMoneyStore();
	bool EnterCurrencyStore(const class FString& AttemptedPurchaseCardPackId);
	bool EnterCardPackStore();
	void DismissError();
	bool ChoiceResultComplete();
	bool CardPackOpeningComplete();
	bool CardPackDestroyComplete();
	bool CardFrontRevealComplete();
	bool CardFlipComplete();
	bool CardExitComplete();
	bool CardEntryComplete();
	bool CardBackRevealComplete();
	bool CardAddedToSummaryComplete();
	void AttemptOpenSinglePack();
	void AttemptOpenAllPacks();
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortStorefront
class UFortStorefront : public UFortUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStorefront");
		return Clss;
	}

};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortStoreRootBase
class UFortStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_13A5[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreRootBase");
		return Clss;
	}

	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.StoreCardObject
class UStoreCardObject : public UObject
{
public:
	struct FCard                                 Card;                                              // 0x28(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreCardObject");
		return Clss;
	}

};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortStoreSummary
class UFortStoreSummary : public UCommonActivatablePanel
{
public:
	TArray<class UStoreCardObject*>              StoreCardObjects;                                  // 0x2F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCommonTileView*                       TileView;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummary");
		return Clss;
	}

	void SetCards(TArray<struct FCard>& Cards);
};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortSubGameSelectBase
class UFortSubGameSelectBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSubGameSelectBase");
		return Clss;
	}

	void ShowRedeemCodeScreen(enum class ESubGame SubGame, UDelegateProperty_& CompletionDelegate);
	void GetUpsellStorefrontNames(enum class ESubGame SubGame, TArray<class FString>* OutStorefrontNames);
	bool GetShortDescription(enum class ESubGame SubGame, class FText* ShortDescription);
	bool GetIsOnSale(enum class ESubGame SubGame);
	bool GetFullDescription(enum class ESubGame SubGame, class FText* FullDescription);
	bool CheckRewardRate();
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortSubGameSelectButtonBase
class UFortSubGameSelectButtonBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSubGameSelectButtonBase");
		return Clss;
	}

	void UpdateButtonState(bool bVisible);
};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortSupportCenter
class UFortSupportCenter : public UCommonActivatablePanel
{
public:
	class UCommonButton*                         Button_OnlineSupport;                              // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Forums;                                     // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSupportCenter");
		return Clss;
	}

};

// 0xD8 (0x510 - 0x438)
// Class FortniteUI.FortSurvivorSquadManagementScreen
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*     StatMatchesWidget;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13AD[0xD0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadManagementScreen");
		return Clss;
	}

	void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData);
	void AutoSlotSquad();
};

// 0x20 (0x8D0 - 0x8B0)
// Class FortniteUI.FortSurvivorSquadSelectorButton
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>            FortStatAttributes;                                // 0x8B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            FortTeamStatAttributes;                            // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadSelectorButton");
		return Clss;
	}

	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
};

// 0x378 (0x588 - 0x210)
// Class FortniteUI.FortSurvivorSquadStatMatchBase
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_13B1[0x8];                                     
	struct FFortUISurvivorSquadStatMatch         StatMatch;                                         // 0x218(0x370)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchBase");
		return Clss;
	}

	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);
};

// 0x30 (0x270 - 0x240)
// Class FortniteUI.FortSurvivorSquadStatMatchesBase
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	TSubclassOf<class UFortSurvivorSquadStatMatchBase> StatMatchClass;                                    // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSummaryView;                                      // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x7];                                     
	TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches;                                       // 0x250(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B4[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchesBase");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetSummaryView(bool bInSummaryView);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortSurvivorSquadSummaryStatItem
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	enum class EFortBrushSize                    ImageSize;                                         // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x7];                                     
	class UImage*                                Icon;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Value;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Name;                                              // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadSummaryStatItem");
		return Clss;
	}

	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation);
};

// 0xD0 (0x1E8 - 0x118)
// Class FortniteUI.FortSwipePanel
class UFortSwipePanel : public UContentWidget
{
public:
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x118(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bBeginSwipeOnPointerEnter;                         // 0x188(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsumePointerInput;                              // 0x189(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B6[0x6];                                     
	UMulticastDelegateProperty_                  OnSwipeLeft;                                       // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeRight;                                      // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeUp;                                         // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeDown;                                       // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B7[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSwipePanel");
		return Clss;
	}

	void SwipeUp();
	void SwipeRight();
	void SwipeLeft();
	void SwipeDown();
	void GetSwipeInfo(int32* OutIndex, struct FVector2D* OutSwipePercentage);
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.FortSwipePanelSlot
class UFortSwipePanelSlot : public UPanelSlot
{
public:
	uint8                                        Pad_13B8[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSwipePanelSlot");
		return Clss;
	}

};

// 0x8 (0x1E0 - 0x1D8)
// Class FortniteUI.FortSZAwareImage
class UFortSZAwareImage : public UImage
{
public:
	bool                                         AnchorLeft;                                        // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorRight;                                       // 0x1D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorTop;                                         // 0x1DA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorBottom;                                      // 0x1DB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B9[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSZAwareImage");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTabButtonInterface
class UFortTabButtonInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTabButtonInterface");
		return Clss;
	}

	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
};

// 0x78 (0x350 - 0x2D8)
// Class FortniteUI.FortTabListWidgetBase
class UFortTabListWidgetBase : public UCommonTabListWidget
{
public:
	UMulticastDelegateProperty_                  OnTabContentCreated;                               // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FFortTabListRegistrationInfo>  PreregisteredTabInfoArray;                         // 0x2E8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap;                            // 0x2F8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13BD[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTabListWidgetBase");
		return Clss;
	}

	void SetTabHiddenState(class FName TabNameID, bool bHidden);
	void SetPreviousTabInputActionData(const struct FDataTableRowHandle& PreviousData);
	void SetNextTabInputActionData(const struct FDataTableRowHandle& NextData);
	bool RegisterFortTab(class FName TabNameID, TSubclassOf<class UCommonButton> TabButtonType, struct FFortTabButtonLabelInfo& LabelInfo, class UWidget* ContentWidget);
	void RegisterAllPreregisteredTabInfos();
	void OnTabContentCreated__DelegateSignature(class FName TabId, class UCommonUserWidget* TabWidget);
	bool IsLastTabActive();
	bool IsFirstTabActive();
	int32 GetVisibleTabCount();
	bool GetPreregisteredTabInfo(class FName TabNameID, struct FFortTabListRegistrationInfo* OutTabInfo);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortTextStyleList
class UFortTextStyleList : public UCommonUserWidget
{
public:
	class FName                                  TextStylesPath;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTextStyleList");
		return Clss;
	}

	TArray<TSoftClassPtr<class UCommonTextStyle>> GetTextStyles();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortTheaterSelect
class UFortTheaterSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_13C0[0x10];                                    
	class UOverlay*                              OverlayMain;                                       // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTheaterSelect");
		return Clss;
	}

	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum);
	bool GetSurvivalCMSText(class FText* Title, class FText* Body);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortTierIndicator
class UFortTierIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C1[0x3];                                     
	float                                        InterPipPadding;                                   // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C2[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTierIndicator");
		return Clss;
	}

	void SetPreviewState(int32 TierIncrease);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetInterPipPadding(float InterPipPadding);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
	void ClearPreviewState();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTimelineBase
class UFortTimelineBase : public UFortActivatablePanel
{
public:
	class UFortReplayContext*                    ReplayContext;                                     // 0x328(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTimelineBase");
		return Clss;
	}

	class UWidget* GetProgressBarWidget();
	void ClearTimelineMarkers();
	void AddReplayEventToTimeline(enum class EFortReplayEventType EventType, float RelativeTime);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTooltipUIContext
class UFortTooltipUIContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTooltipUIContext");
		return Clss;
	}

	bool HasTooltipStats(class UObject* Object);
	TArray<struct FFortDisplayAttribute> GetUpgradeStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetUIDataForTag(struct FGameplayTag& Tag, struct FFortTagUIData* OutData);
	TArray<struct FFortDisplayAttribute> GetTooltipStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetTooltipStat(class UObject* Object, class UFortTooltipContext* TooltipContext, const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute);
	TArray<struct FGameplayAttribute> GetTooltipAttributes(class UObject* Object);
	bool GetDisplayNameAndMultiBrushForTag(struct FGameplayTag& Tag, class FText* OutDisplayName, struct FFortMultiSizeBrush* OutBrush);
	bool GetDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, TArray<class FText>* OutDescription);
	TArray<struct FFortDisplayAttribute> GetComparisonStats(class UObject* Object, class UObject* ComparisonObject, class UFortTooltipContext* TooltipContext);
	bool GetCombinedDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, class FText* OutDescription);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTopBarPanel
class UFortTopBarPanel : public UFortActivatablePanel
{
public:
	uint8                                        Pad_13CA[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTopBarPanel");
		return Clss;
	}

	void AddIconToScreen(class UCommonLazyImage* Image);
};

// 0x118 (0x328 - 0x210)
// Class FortniteUI.FortTouchControlRegion
class UFortTouchControlRegion : public UCommonUserWidget
{
public:
	uint8                                        Pad_13D3[0x40];                                    
	class UFortAutorunLockZone*                  AutoRunLockTarget;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          AutorunLockDelayHandle;                            // 0x258(0x8)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortTouchMoveStick*                   TouchMoveStick;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTouchLookStick*                   TouchLookStick;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               AutoRunTapZone;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionTouchOrigin;                       // 0x278(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionTouchEndPos;                       // 0x280(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MoveVector;                                        // 0x288(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MoveStickPos;                                      // 0x294(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockMagnitudeThreshold;                   // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAngleBegin;                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAngleEnd;                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAccumulator;                          // 0x2A8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLastLookTouchWasTap : 1;                          // Mask : 0x1 0x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMoveStickIsTouched : 1;                           // Mask : 0x2 0x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMoveStickIsLocked : 1;                            // Mask : 0x4 0x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLookStickIsTouched : 1;                           // Mask : 0x8 0x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsLockedOn : 1;                                   // Mask : 0x10 0x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D4[0x3];                                     
	float                                        MoveStickLockTimeToHold;                           // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLastTouchTime;                            // 0x2B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LockBar_MID;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovePlayerRegionLastTouchTime;                     // 0x2C0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionLastTouchPos;                      // 0x2C4(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraRegionTouchStartPos;                   // 0x2CC(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraRegionLastTouchPos;                    // 0x2D4(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraPlayerRegionLastTouchDiff;             // 0x2DC(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotateCameraLastTouchTime;                         // 0x2E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D5[0x8];                                     
	class UCurveFloat*                           RotateInertiaCurve;                                // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnStickOrigin;                                 // 0x2F8(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnStickCurrentPos;                             // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnBarOffset;                                   // 0x308(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsForceFiring;                                    // 0x310(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D6[0x17];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTouchControlRegion");
		return Clss;
	}

	void UpdateMoveStickLock(float DeltaTime);
	void UpdateLockOnStickPosition(const struct FVector2D& LocalPos);
	void UpdateLockOnStickOrigin(const struct FVector2D& LocalPos, bool IsTouchStartEvent);
	void SetMoveStickPos(const struct FVector2D& NewMoveStickPos);
	void SetLockOnStickPosition(const struct FVector2D& LocalPos);
	void SetFeedbackPosition(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void ResetTouchState();
	void OnRotatePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRotatePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta);
	void OnRotatePlayerRegionTouchLost(int32 PointerIndex);
	void OnRotatePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRegionTouchStarted(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRegionTouchMoved(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta);
	void OnRegionTouchEnded(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchLost(int32 PointerIndex);
	void OnMovePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget);
	void OnBuildModeChanged(bool bBuildModeEnabled);
	void OnAdditionalTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnAdditionalTouchLost(int32 PointerIndex);
	void OnAdditionalTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	bool MoveStickIsInSprintThreshold();
	bool MoveStickIsInLockPosition();
	void MovePlayerRegionTick(struct FGeometry& InGeometry, float DeltaTime);
	bool IsRotatePlayerRegionTouched();
	bool IsMovePlayerRegionTouched();
	bool IsFiring();
	float GetMoveStickRange();
	bool CanLockMoveStick();
};

// 0x70 (0x3C0 - 0x350)
// Class FortniteUI.FortTouchLookStick
class UFortTouchLookStick : public UBacchusHUDElement
{
public:
	class USizeBox*                              MainSizeBox;                                       // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UImage>                 FireImageRef;                                      // 0x358(0x28)(BlueprintVisible, ExportObject, Transient, InstancedReference, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FireImageAbsoluteOffset;                           // 0x380(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SizePropertyName;                                  // 0x388(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FText                                  ShowAllTimeTimePropertyName;                       // 0x3A0(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D8[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTouchLookStick");
		return Clss;
	}

	void SetTouchStickPositionLocal(const struct FVector2D& TouchPosition);
	void SetTouchStickPositionAbsolute(const struct FVector2D& TouchPosition);
	void SetSize(float NewSize);
	void SetFiringState(bool IsFiring);
	bool IsFireButtonUnderTouch(const struct FVector2D& TouchPosition);
	float GetSize();
	bool GetShowAllTimeTime();
};

// 0x28 (0x378 - 0x350)
// Class FortniteUI.FortTouchMoveStick
class UFortTouchMoveStick : public UBacchusHUDElement
{
public:
	bool                                         bIsTouched;                                        // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D9[0x7];                                     
	class FText                                  AlwaysShowPropertyName;                            // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bAlwaysShowWhenTouched;                            // 0x370(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13DA[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTouchMoveStick");
		return Clss;
	}

	void SetStickPosition(const struct FVector2D& NewPosition);
	void SetMovementLockStatus(bool MovementIsLocked);
	bool IsTouched();
	void HandleTouchStarted();
	void HandleTouchEnded();
	float GetHalfHeight();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortTrackedIndicator
class UFortTrackedIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTrackedIndicator");
		return Clss;
	}

};

// 0x88 (0x350 - 0x2C8)
// Class FortniteUI.FortTransformKeyPicker
class UFortTransformKeyPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_13DB[0x88];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTransformKeyPicker");
		return Clss;
	}

	void RebuildTransformKeys(TArray<class UObject*>& InDataProvider);
};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortTransformKeyPickerTileButton
class UFortTransformKeyPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTransformKeyPickerTileButton");
		return Clss;
	}

};

// 0x8 (0x2D0 - 0x2C8)
// Class FortniteUI.FortTransformSlotItemPicker
class UFortTransformSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_13DD[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTransformSlotItemPicker");
		return Clss;
	}

	void RebuildSlottableItems(TArray<enum class EFortInventoryFilter>& ItemFilters, enum class EFortItemType ItemType, TArray<class UFortItem*>& ItemsToIgnore);
};

// 0x0 (0x8C0 - 0x8C0)
// Class FortniteUI.FortTransformSlotItemPickerTileButton
class UFortTransformSlotItemPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTransformSlotItemPickerTileButton");
		return Clss;
	}

};

// 0x98 (0x360 - 0x2C8)
// Class FortniteUI.FortTrapDefenderItemPicker
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
public:
	class UFortItemDetailsHostPanel*             DetailsPanel;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingTrapDefender>  DefenderTrap;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13DE[0x88];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTrapDefenderItemPicker");
		return Clss;
	}

	void HandleSelectionCommittedBP(class UFortItem* CommittedItem);
};

// 0x30 (0x238 - 0x208)
// Class FortniteUI.FortTravelLogMap
class UFortTravelLogMap : public UUserWidget
{
public:
	float                                        MapSize;                                           // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentTimeFraction;                               // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistanceToCoalescePositions;                       // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DF[0x24];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTravelLogMap");
		return Clss;
	}

	void InitializeFromTravelRecord(struct FAthenaTravelRecord& Record);
};

// 0xC0 (0xE8 - 0x28)
// Class FortniteUI.FortTutorialContext
class UFortTutorialContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnUpdateTutorialAnnouncement;                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNewAnnouncementStartedOnClientDelegate;          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E1[0xA0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTutorialContext");
		return Clss;
	}

	void UpdateTutorialAnnouncement(const struct FFortClientAnnouncementData_Tutorial& AnnouncementData, bool bShow);
	void UnhideTutorialCallout(class FName WidgetName);
	void UnhideAllTutorialCallouts();
	void SkipTutorial();
	bool ShouldPromptToSkipTutorial();
	void OnNewAnnouncementStartedOnClient(class AFortClientAnnouncement* NewAnnouncement);
	void HideTutorialCallout(class FName WidgetName);
	void GetTutorialCallouts(TArray<class FName>* WidgetNames);
	void GetHiddenTutorialCallouts(TArray<class FName>* WidgetNames);
	void EnableTutorialCallout(class FName WidgetName);
	void DisableTutorialCallout(class FName WidgetName);
	void ContinueTutorial();
	void ClearTutorialCallouts();
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortTwitchLogin
class UFortTwitchLogin : public UCommonUserWidget
{
public:
	uint8                                        Pad_13E3[0x20];                                    
	TSoftClassPtr<class UFortTwitchLoginModalWidget> TwitchLoginModalWidgetClass;                       // 0x230(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTwitchLoginModalWidget*           ActiveLoginModal;                                  // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTwitchLogin");
		return Clss;
	}

	void OnShowLoginError(class FText& ErrorTitle, class FText& ErrorMessage);
	void OnLoginStatusChanged(bool bLoggedIn, const class FString& AccountName);
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal);
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal);
	void OnLinkedTwitchAccountChanged(const class FString& AccountName);
	void Logout();
	void Login();
	bool IsLoggedIn();
	class FString GetLinkedTwitchAccountName();
	class FString GetAccountName();
	void CancelLoginFlow();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTwitchLoginModalWidget
class UFortTwitchLoginModalWidget : public UFortActivatablePanel
{
public:
	class UNativeWidgetHost*                     NativeHost;                                        // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTwitchLoginModalWidget");
		return Clss;
	}

	void OnNativeHostContentChanged();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIBlueprintFunctionLibrary
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIBlueprintFunctionLibrary");
		return Clss;
	}

	class FString GetMetaStringOnOffer(struct FCardPackOffer& Offer, const class FString& Key);
	int32 GetMetaIntOnOffer(struct FCardPackOffer& Offer, const class FString& Key, int32 DefaultValue);
	bool GetMetaBoolOnOffer(struct FCardPackOffer& Offer, const class FString& Key, bool bDefaultValue);
	struct FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item);
	struct FSlateBrush GetItemSmallPreviewImageBrush(class UFortItem* Item, enum class EFortBrushSize BrushSize);
	struct FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(class UFortItemDefinition* ItemDefinition);
	struct FSlateBrush GetItemDefinitionSmallPreviewImageBrush(class UFortItemDefinition* ItemDefinition, enum class EFortBrushSize BrushSize);
	class UObject* GetAssetFromTemplateId(const class FString& TemplateId);
};

// 0x31B0 (0x31E0 - 0x30)
// Class FortniteUI.FortUIDataConfiguration
class UFortUIDataConfiguration : public UPrimaryDataAsset
{
public:
	class FString                                DefaultUIDataConfigurationPath;                    // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MobileUIDataConfigurationPath;                     // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BROnlyUIDataConfigurationPath;                     // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErebusUIDataConfigurationPath;                     // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortUIStateWidget_NUI>  StateWidgetClasses;                                // 0x70(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E8[0x1E0];                                   
	TArray<TSoftClassPtr<class UUserWidget>>     CachedWidgetClasses;                               // 0x278(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortVideoDisplayData*                 VideoDisplayData;                                  // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, int32>       StandardImageBrushSizes;                           // 0x290(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PowerRatingIconMultiSizeBrush;                     // 0x2E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedPositiveColorOverride;         // 0x308(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedNegativeColorOverride;         // 0x318(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FilledTierPipMultiSizeBrush;                       // 0x328(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnfilledTierPipMultiSizeBrush;                     // 0x350(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PreviewingTierPipMultiSizeBrush;                   // 0x378(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UpgradeArrowMultiSizeBrush;                        // 0x3A0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ComparisonUpArrowMultiSizeBrush;                   // 0x3C8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BetterComparisonResultColor;                       // 0x3F0(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WorseComparisonResultColor;                        // 0x400(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> InventoryOverflowIndicatorMultiSizeBrush;          // 0x410(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> TrackedSchematicIndicatorMultiSizeBrush;           // 0x438(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoritedItemIndicatorMultiSizeBrush;              // 0x460(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UClass*, TSubclassOf<class UUserWidget>> VariantToWidgetMaping;                             // 0x488(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableSocialFeatures;                             // 0x4D8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableChat;                                       // 0x4D9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePartyFeatures;                              // 0x4DA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E9[0x5];                                     
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnlockedSquadSlotBorderMultiSizeBrush;             // 0x4E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LockedSquadSlotBorderMultiSizeBrush;               // 0x508(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ReadOnlySquadSlotBorderMultiSizeBrush;             // 0x530(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> DefenderIconMultiSizeBrush;                        // 0x558(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> AssaultDefenderIconMultiSizeBrush;                 // 0x580(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PistolDefenderIconMultiSizeBrush;                  // 0x5A8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> MeleeDefenderIconMultiSizeBrush;                   // 0x5D0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SniperDefenderIconMultiSizeBrush;                  // 0x5F8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ShotgunDefenderIconMultiSizeBrush;                 // 0x620(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LeadSurvivorIconMultiSizeBrush;                    // 0x648(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SurvivorIconMultiSizeBrush;                        // 0x670(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> TrapIconMultiSizeBrush;                            // 0x698(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortKeybindWidget>      KeybindWidgetClass;                                // 0x6C0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             HiddenCursorWidget;                                // 0x6E8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             VirtualCursorWidget;                               // 0x710(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    UIScaleCurve;                                      // 0x738(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    FrontEndUIScaleCurve;                              // 0x7B0(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	enum class EFortReturnToFrontendBehavior     ReturnToFrontendBehavior;                          // 0x828(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EA[0x3];                                     
	float                                        SkillTreeMinimumZoomLevel;                         // 0x82C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeMaximumZoomLevel;                         // 0x830(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrement;                       // 0x834(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementController;             // 0x838(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementMobile;                 // 0x83C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSkillTreeCanvasStyle             SkillTreeCanvasStyle;                              // 0x840(0x34)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EB[0x4];                                     
	TSoftClassPtr<class UFortSkillTreeCanvasNode> DefaultSkillTreeNodeWidgetType;                    // 0x878(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortHomebaseNodeDisplayType, TSoftClassPtr<class UFortSkillTreeCanvasNode>> SkillTreeNodeWidgetTypeMap;                        // 0x8A0(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortSkillTreeNodeDisplayDataRegistry> SkillTreeNodeDisplayDataRegistry;                  // 0x8F0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardPowerRatingTextStylesByBrushSize;          // 0x918(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardStackCountTextStylesByBrushSize;           // 0x968(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardLevelMeterMaterial;                        // 0x9B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardDurabilityMeterMaterial;                   // 0x9E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardBackgroundPlateBrush;                      // 0xA08(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardRarityGradientBrush;                       // 0xA90(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardDefenderPortraitBackgroundBrush;           // 0xB18(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardHeroPortraitBackgroundBrush;               // 0xBA0(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardLeadSurvivorPortraitBackgroundBrush;       // 0xC28(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardSchematicBackgroundBrush;                  // 0xCB0(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardRewardTraitsBackgroundMultiSizeBrush;      // 0xD38(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardSchematicTraitsBackgroundMultiSizeBrush;   // 0xD60(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemManagementScreen> FrontendItemManagementScreenType;                  // 0xD88(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemInspectionScreen> FrontendItemInspectionScreenType;                  // 0xDB0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSkillTreeViewer>    SkillTreeViewerScreenType;                         // 0xDD8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> HeroSquadManagementScreenType;                     // 0xE00(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> SurvivorSquadManagementScreenType;                 // 0xE28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> DefenderSquadManagementScreenType;                 // 0xE50(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAthenaMatchReadyDesktopPopup> MatchReadyDesktopPopupWidgetType;                  // 0xE78(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortTabListWidgetBase>  MainTabSet;                                        // 0xEA0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortTabListWidgetBase>  MainTabSetStwNew;                                  // 0xEC8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitedToES2Features;                             // 0xEF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EC[0x7];                                     
	struct FWeightedBlendables                   FrontEndFFPostProcessMaterials;                    // 0xEF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseSpecificPinataWeapon;                          // 0xF08(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestVOEnabled;                                   // 0xF09(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13ED[0x6];                                     
	TMap<enum class EFortItemCardSize, struct FVector2D> PersonnelAndSchematicCardSizes;                    // 0xF10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, struct FVector2D> OtherItemCardSizes;                                // 0xF60(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> PersonnelAndSchematicItemCardMaterial;             // 0xFB0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> CardPackItemCardMaterial;                          // 0x1000(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> InstanceItemCardMaterial;                          // 0x1050(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> TransformKeyItemCardMaterial;                      // 0x10A0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> CosmeticItemCardMaterial;                          // 0x10F0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<enum class EFortItemType>             ItemTypesWhoseImagesReplaceCardBackgrounds;        // 0x1140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSet<enum class EFortItemType>               ItemTypesToHideCountWhenCountEqualsOne;            // 0x1150(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> ItemCardDetailAreaMaterial;                        // 0x11A0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoriteBookmarkMultiSizeBrush;                    // 0x11F0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PermanentTransformKeykMultiSizeBrush;              // 0x1218(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ConsumableTransformKeykMultiSizeBrush;             // 0x1240(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UTexture2D>> DefenderSubtypeWeaponTextures;                     // 0x1268(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBuffState, TSoftObjectPtr<class UMaterialInterface>> EnchantedCustomRatingBlockBackgroundMaterial;      // 0x12B8(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBuffState, TSoftObjectPtr<class UMaterialInterface>> NormalCustomRatingBlockBackgroundMaterial;         // 0x1308(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMargin                               CustomRatingBlockBackgroundBrushMargin;            // 0x1358(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardDurabilityMeterMaterial;          // 0x1368(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardLevelMeterMaterial;               // 0x1390(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardTraitIconMaterial;                // 0x13B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardUnearnedTierIconMaterial;         // 0x13E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardAvailableTierIconMaterial;        // 0x1408(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardEarnedTierIconMaterial;           // 0x1430(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    MysteryItemDefinition;                             // 0x1458(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration ItemCardConfig_XXL_PersonnelAndSchematics;         // 0x1480(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_ItemInstance_Configuration ItemCardConfig_XXL_ItemInstance;                   // 0x17D0(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_TransformKey_Configuration ItemCardConfig_XXL_TransformKey;                   // 0x1980(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration ItemCardConfig_XL_PersonnelAndSchematics;          // 0x19C8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_ItemInstance_Configuration ItemCardConfig_XL_ItemInstance;                    // 0x1D18(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_TransformKey_Configuration ItemCardConfig_XL_TransformKey;                    // 0x1EC8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_PersonnelAndSchematics_Configuration ItemCardConfig_L_PersonnelAndSchematics;           // 0x1F10(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_ItemInstance_Configuration ItemCardConfig_L_ItemInstance;                     // 0x21D8(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_TransformKey_Configuration ItemCardConfig_L_TransformKey;                     // 0x2388(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_PersonnelAndSchematics_Configuration ItemCardConfig_M_PersonnelAndSchematics;           // 0x23D0(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_ItemInstance_Configuration ItemCardConfig_M_ItemInstance;                     // 0x2698(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_TransformKey_Configuration ItemCardConfig_M_TransformKey;                     // 0x2848(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_PersonnelAndSchematics_Configuration ItemCardConfig_S_PersonnelAndSchematics;           // 0x2890(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_ItemInstance_Configuration ItemCardConfig_S_ItemInstance;                     // 0x2B58(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_TransformKey_Configuration ItemCardConfig_S_TransformKey;                     // 0x2CF8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration ItemCardConfig_XS_PersonnelAndSchematics;          // 0x2D40(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EE[0x4];                                     
	struct FFortItemCard_XS_ItemInstance_Configuration ItemCardConfig_XS_ItemInstance;                    // 0x2D78(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_TransformKey_Configuration ItemCardConfig_XS_TransformKey;                    // 0x2F00(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration ItemCardConfig_XXS_PersonnelAndSchematics;         // 0x2F48(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x4];                                     
	struct FFortItemCard_XXS_ItemInstance_Configuration ItemCardConfig_XXS_ItemInstance;                   // 0x2F80(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_TransformKey_Configuration ItemCardConfig_XXS_TransformKey;                   // 0x2FB0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             HealthyGamingDataTable;                            // 0x2FF8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipDisplayStatsLookupTable*   ObjClassToTooltipStatsMap;                         // 0x3020(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             LoadingScreenBacchusTutorialWidget;                // 0x3028(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             LoadingScreenVBuckScamWarning;                     // 0x3050(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       ActorCanvasArrowBrush;                             // 0x3078(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPlatformPrefixIconList> PlatformPrefixIconMap;                             // 0x30A0(0x50)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UFortOptionsMenuData*                  GameOptionsMenuData;                               // 0x30F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortUIDataProfileStats*>       ProfileStatStyleSets;                              // 0x30F8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<class FName, TSoftObjectPtr<class USlateBrushAsset>> LegacyNativeUIBrushMap;                            // 0x3108(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSoftObjectPtr<class UObject>> LegacyNativeUIAssetMap;                            // 0x3158(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        AnalogRotateSpeed;                                 // 0x31A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragRotateSpeed;                                   // 0x31AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchSwipeRotateRate;                              // 0x31B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseWheelZoomSpeed;                               // 0x31B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragZoomSpeed;                                     // 0x31B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerZoomSpeed;                                  // 0x31BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchZoomPinchRate;                                // 0x31C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemViewCompetingAxisInputThreshold;               // 0x31C4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EFortItemType>             ItemTypesToUseVaultCamera;                         // 0x31C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortFrontendItemViewSettingsManager> FrontendItemViewSettingsManager;                   // 0x31D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIDataConfiguration");
		return Clss;
	}

	bool GetIsCurrentlyInCrossplay(class UWorld* World);
	class UFortMultiSizeBrushAsset* GetDefenderSubtypeIconMultiSizeBrushByTag(const struct FGameplayTag& DefenderSubtypeTag);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIDataConfigurationContext
class UFortUIDataConfigurationContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIDataConfigurationContext");
		return Clss;
	}

	bool UseSpecificPinataWeapon();
	void SetPlatformPrefixIcon(class UImage* Image, const class FString& OtherPlayerPlatform, bool bForceShow);
	bool IsQuestVOEnabled();
	bool IsLimitedToES2Features();
	bool IsChatEnabled();
	TArray<enum class EFortItemType> GetItemTypesToUseVaultCamera();
	struct FPostProcessSettings GetFrontEndFFSettings();
	bool AreSocialFeaturesEnabled();
	bool ArePartyFeaturesEnabled();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortUIDataProfileStats
class UFortUIDataProfileStats : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FFortUIStatStyle> ProfileStatStyles;                                 // 0x30(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIDataProfileStats");
		return Clss;
	}

};

// 0x170 (0x380 - 0x210)
// Class FortniteUI.FortUIManagerWidget_NUI
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_13F5[0x8];                                     
	UMulticastDelegateProperty_                  OnBeginSpokenDialog;                               // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSpokenDialog;                                 // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnShouldBlockSubtitlePortraitChanged;              // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortUIState                      CurrentState;                                      // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      PendingState;                                      // 0x249(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F6[0x6];                                     
	class UFortUIStateWidget_NUI*                CurrentStateWidget;                                // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F7[0x10];                                    
	TArray<class UFortUIStateTrigger*>           StateTriggers;                                     // 0x268(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F8[0x8];                                     
	TArray<class UFortUINotificationQueue*>      UINotificationQueues;                              // 0x280(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bIsStateContentDisplayed;                          // 0x290(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F9[0x7];                                     
	class UFortUINavigationManager*              NavigationManager;                                 // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UUserWidget*>      TypedWidgetCache;                                  // 0x2A0(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FA[0x68];                                    
	bool                                         bSupressErrors;                                    // 0x358(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FB[0x17];                                    
	TSubclassOf<class UFortPlayerBanned>         PlayerBannedScreen;                                // 0x370(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BlockSubtitlePortraitRefcount;                     // 0x378(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FC[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIManagerWidget_NUI");
		return Clss;
	}

	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void ShowErrorDialog(class UObject* WorldContextObject, class FText OperationDesc, class FText DisplayMessage, const class FString& ErrorNote, enum class EFortErrorSeverity ErrorSeverity);
	bool ShouldBlockSubtitlePortrait();
	void SetStateContentDisplayed(bool bDisplay);
	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	void PopContentWidget();
	void PopAllContentWidgets();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateStarted();
	void OnStateEnded();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(struct FFortDialogDescription& Description);
	void OnShouldBlockSubtitlePortraitChanged__DelegateSignature(bool bShouldBlockSubtitlePortrait);
	void OnEndSpokenDialog__DelegateSignature();
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	bool IsShowingModalsConfirmationsErrors();
	void IncrementShouldBlockSubtitlePortrait();
	class UFortUINotificationQueue* GetUINotificationQueue(class UObject* WorldContextObject, enum class EFortNotificationQueueType QueueType);
	class UFortUINavigationManager* GetUINavigationManager(class UObject* WorldContextObject);
	class UFortUIManagerWidget_NUI* GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget_NUI* GetCurrentUIStateWidget();
	class UUserWidget* GetCachedWidget(class UClass* InClass);
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	void DecrementShouldBlockSubtitlePortrait();
	class UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<class UFortUIStateTrigger> Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(TSubclassOf<class UFortUINotification> UINotificationClass);
	void CloseErrorWindow();
	void CloseConfirmationWindow();
	enum class EFortUIState _BPGetCurrentUIState();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortUIMessageItemWidget
class UFortUIMessageItemWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMessageDisplayed;                                // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMessageRemoved;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  MessageID;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayDuration;                                   // 0x23C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RemoveDuration;                                    // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13FD[0x14];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIMessageItemWidget");
		return Clss;
	}

	void OnStackSizeChanged(int32 OldStackSize);
	void OnReturnedToPool();
	void OnBeginRemove();
};

// 0x80 (0xA8 - 0x28)
// Class FortniteUI.FortUIMessageManager
class UFortUIMessageManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnMessageAvailable;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UFortUIMessageItemWidget*>      MessageQueue;                                      // 0x38(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UFortUIMessageItemWidget>> CurrentlyDisplayedMessages;                        // 0x48(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FF[0x50];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIMessageManager");
		return Clss;
	}

	void HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem);
	int32 GetNumDisplayedItems();
	class UFortUIMessageItemWidget* GetNextMessageInQueue();
	class UFortUIMessageItemWidget* AddMessageItem(TSubclassOf<class UFortUIMessageItemWidget> MessageItemClass, class APlayerController* OwningPlayer, class FName MessageID, int32 StackCount);
};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortUIMessagesPageBase
class UFortUIMessagesPageBase : public UCommonActivatablePanel
{
public:
	int32                                        MaximumMessagesShown;                              // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1400[0x4];                                     
	class UCommonListView*                       MessagesList;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1401[0x8];                                     
	TArray<class UFortUINotification*>           MessagesShown;                                     // 0x310(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIMessagesPageBase");
		return Clss;
	}

	void OnNotificationCleared(class UFortUINotification* ClearedMessage);
	void OnMessageAvailable();
	void FillMessagesList();
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.UINavigationManager
class UUINavigationManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnNavigationEvent;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FUINavigationEntry>            NavigationStack;                                   // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UINavigationManager");
		return Clss;
	}

	void PushNavigation(class FText DisplayName, class UObject* ObjectData, class FName IdData, int32 IntData, UDelegateProperty_& OnNavigateTo, UDelegateProperty_& OnNavigateFrom);
	void PopNavigation();
	void NavigationToIndex(int32 Index);
	int32 GetStackSize();
	class FText GetDisplayName(int32 Index);
	void ClearStack();
};

// 0x110 (0x158 - 0x48)
// Class FortniteUI.FortUINavigationManager
class UFortUINavigationManager : public UUINavigationManager
{
public:
	UMulticastDelegateProperty_                  OnMainTabNavigateRequest;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFeatureNavigateOp;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePageNavigateRequest;                         // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadSlotNavigateRequest;                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultTabNavigateRequest;                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemNavigateRequest;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemEvolutionNavigateRequest;                    // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemNavigateRequest;                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPopContentStackOp;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadNavigationOp;                               // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortExpeditionsOp;                                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortCollectionBookOp;                              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemOp;                                     // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1410[0x20];                                    
	TArray<struct FFortUINavigationRequest>      NavigationRequests;                                // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUserWidget*                           HiddenCursorWidget;                                // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUserWidget*                           VirtualCursorWidget;                               // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUINavigationManager");
		return Clss;
	}

	bool TryGetPendingNavigationOp(struct FFortUINavigationOperation* NavigationOp);
	void SetScrollWidget(class UWidget* Widget);
	void PushSquadManagementScreen(class FName SquadId, int32 SquadSlotIndex);
	void PushSkillTreePage(class FName SkillTreePageId);
	void PushSkillTreeNode(class FName SkillTreeNodeId);
	void PushItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void NavigateToSquadSlot(class FName SquadId, int32 SquadSlotIndex);
	void NavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void NavigateToNodePageByGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void NavigateToNodePage(class FName PageId, class FName NodeID);
	void NavigateToItemManagementScreen(enum class EFortFrontendInventoryFilter Filter);
	void NavigateToItem(class UFortItem* Item);
	void NavigateToFeature(enum class EFortUIFeature Feature);
	void NavigateToExpeditions();
	void NavigateToCollectionBook();
	void NavigateForGift(class UFortGiftBoxItem* Item);
	bool HasPendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CompletePendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CenterWidget(class UWidget* Widget);
	bool CanNavigateToQuestObjective(class UFortQuestItem* QuestItem);
	bool CanAccessSquadManagementScreen(class FName SquadId, int32 SquadSlotIndex);
	bool CanAccessSkillTreePage(class FName SkillTreePageId);
	bool CanAccessSkillTreeNode(class FName SkillTreeNodeId);
	bool CanAccessItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter);
	bool CanAccessCollectionBook();
	bool AttemptPlayQuest(class UFortQuestItem* Quest);
	bool AttemptMatchmakeForQuest(class UFortQuestItem* Quest, bool* OutContentNotDownloaded);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortUINotificationQueue
class UFortUINotificationQueue : public UObject
{
public:
	int32                                        MaxNotificationsInQueue;                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1412[0x4];                                     
	TArray<class UFortUINotification*>           NotificationQueue;                                 // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1413[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUINotificationQueue");
		return Clss;
	}

	void UnregisterToReceiveNotifications();
	void RemoveNotification(class UFortUINotification* InNotificationDescription);
	void RegisterToReceiveNotifications(UDelegateProperty_& NotificationDelegate);
	void QueueNotification(class UFortUINotification* Notification, bool bShowImmediately);
	class UFortUINotification* GetNextNotification();
	bool CanNotificationBeQueued(enum class EFortNotificationPriority Priority);
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.FortUIRewardReport
class UFortUIRewardReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RewardDisplayLevel;                                // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1414[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIRewardReport");
		return Clss;
	}

	int32 GetRewardedChestIndex();
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIScoreReport
class UFortUIScoreReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIScoreReport");
		return Clss;
	}

	bool IsLocalPlayer(int32 ScoreReportIndex);
	int32 GetXpToCompleteLevel(int32 Level);
	bool GetXpInfo(int32 ScoreReportIndex, struct FFortUIXpInfo* OutXpInfo);
	int32 GetTeamScore(enum class EFortUIScoreType ScoreType);
	void GetScoreReportIndicesByPlayerID(TArray<int32>* SortedScoreReportIndices);
	int32 GetScoreReportIndex(struct FUniqueNetIdRepl& PlayerID);
	int32 GetPlayerScore(int32 ScoreReportIndex, enum class EFortUIScoreType ScoreType);
	class FString GetPlayerPlatform(int32 ScoreReportIndex);
	class FText GetPlayerName(int32 ScoreReportIndex);
	void GetPlayerIDFromScoreReportIndex(int32 ScoreReportIndex, struct FUniqueNetIdRepl* OutUniqueNetIdRepl);
	int32 GetPlayerCount();
	float GetLevelProgress(int32 Level, int32 DisplayXp);
	int32 GetDifficultBonusScore();
	float GetDifficultBonusMultiplier();
	class AFortPlayerState* GetCurrentPlayerState(int32 ScoreReportIndex);
	class AFortPlayerPawn* GetCurrentPlayerPawn(int32 ScoreReportIndex);
	int32 GetBadgeScore(class UFortItem* BadgeItem);
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIStateTrigger
class UFortUIStateTrigger : public UObject
{
public:
	enum class EFortUIState                      UIState;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1420[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger");
		return Clss;
	}

	bool IsLoggedIn();
	bool EvalBP();
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Athena
class UFortUIStateTrigger_Athena : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_Athena");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_AthenaReplay
class UFortUIStateTrigger_AthenaReplay : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_AthenaReplay");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_AthenaSpectator
class UFortUIStateTrigger_AthenaSpectator : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_AthenaSpectator");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_InGame
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_InGame");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Login
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_Login");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Replay
class UFortUIStateTrigger_Replay : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateTrigger_Replay");
		return Clss;
	}

};

// 0x28 (0x338 - 0x310)
// Class FortniteUI.FortUIStateWidget_Frontend
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI
{
public:
	class UFortGiftBoxItem*                      NextGiftBox;                                       // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortItemReceivedScreen>   ItemReceivedScreenClass;                           // 0x318(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1421[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateWidget_Frontend");
		return Clss;
	}

	void OnMatchmakingV2Changed(bool MatchmakingActive);
	bool NeedSeeTrailerMovie();
	void MarkTrailerMovieSeen();
	void Internal_OnInventoryUpdated(TSet<class FString>& ChangedTypes, int64 ProfileRevision);
	void HandleGiftingComplete();
	void HandleGiftBoxRemoved(bool bSuccess);
	bool CheckForGifts();
	void CheckBanStatus(bool bBanned);
};

// 0x1B8 (0x4C8 - 0x310)
// Class FortniteUI.FortUIStateWidget_Login
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI
{
public:
	TSubclassOf<class UFortLoginStatus>          StatusScreenClass;                                 // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginStatus*                      StatusScreenWidget;                                // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSplashScreenWidget>   SplashScreenClass;                                 // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSplashScreenWidget*               SplashScreenWidget;                                // 0x328(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortHaveInviteSelect>     HaveInviteClass;                                   // 0x330(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHaveInviteSelect*                 HaveInviteWidget;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortPlayedBeforeSelect>   PlayedBeforeClass;                                 // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayedBeforeSelect*               PlayedBeforeWidget;                                // 0x348(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortLoginCredentialSelect> CredentialSelectClass;                             // 0x350(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginCredentialSelect*            CredentialSelectWidget;                            // 0x358(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortInviteRequest>        InviteRequestClass;                                // 0x360(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInviteRequest*                    InviteRequestWidget;                               // 0x368(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSignInWidget>         SignInScreenClass;                                 // 0x370(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSignInWidget*                     SignInScreenWidget;                                // 0x378(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSignInWidget>         SignInConsoleClass;                                // 0x380(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSignInWidget*                     SignInConsoleWidget;                               // 0x388(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRedirectToEpicAccountWidget> RedirectToEpicClass;                               // 0x390(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRedirectToEpicAccountWidget*      RedirectToEpicWidget;                              // 0x398(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortNewAccountWarning>    NewAccountWarningClass;                            // 0x3A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNewAccountWarning*                NewAccountWarningWidget;                           // 0x3A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortLoginResultWidget>    LoginResultClass;                                  // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginResultWidget*                LoginResultWIdget;                                 // 0x3B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAccountNotFound>      AccountNotFoundClass;                              // 0x3C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAccountNotFound*                  AccountNotFoundWidget;                             // 0x3C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortDisplayNameWidget>    DisplayNameClass;                                  // 0x3D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDisplayNameWidget*                DisplayNameWidget;                                 // 0x3D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortMultiFactorAuthWidget> MultiFactorAuthWidgetClass;                        // 0x3E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiFactorAuthWidget*            MultiFactorAuthWidget;                             // 0x3E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortWebLoginWidget>       WebLoginWidgetClass;                               // 0x3F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortHealthWarningBase>    HealthWarningClass;                                // 0x3F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHealthWarningBase*                HealthWarningWidget;                               // 0x400(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortEulaWidget>           EulaClass;                                         // 0x408(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEulaWidget*                       EulaWidget;                                        // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  BenchmarkDialogTitle;                              // 0x418(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  BenchmarkDialogMessage;                            // 0x430(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAccountLinkingWindow> AccountLinkingWindowClass;                         // 0x448(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAccountLinkingWindow*             AccountLinkingWidget;                              // 0x450(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackButtonRowHandle;                               // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortMOTDWidget>           MOTDClass;                                         // 0x468(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMOTDWidget*                       MOTDWidget;                                        // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1422[0x8];                                     
	TSubclassOf<class UFortLoginUnavailable>     LoginUnavailableClass;                             // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1423[0x38];                                    
	class UCommonWidgetStack*                    LoginFlowStack;                                    // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateWidget_Login");
		return Clss;
	}

	void ShowBackBar();
	void SetConsoleWidgetDisplayName();
	void SafePopFlowStackNoReturn();
	class UWidget* SafePopFlowStack();
	void PushWidgetOntoFlowStack(class UWidget* Widget);
	void OnDisplayWebLogin(class UWidget* WebWidget);
	void OnDisplayWebAccountCreation(class UWidget* WebWidget);
	void HideTopBarOptions();
	class FText GetPlatformDisplayName();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortUpgradeIndicator
class UFortUpgradeIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeIndicator");
		return Clss;
	}

};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortUserChoiceWidget
class UFortUserChoiceWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUserChoiceWidget");
		return Clss;
	}

	void SetChoices(struct FChoiceData& ChoiceItems);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortVariantEditorWidgetBase
class UFortVariantEditorWidgetBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_1424[0x60];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantEditorWidgetBase");
		return Clss;
	}

};

// 0x50 (0x220 - 0x1D0)
// Class FortniteUI.FortVariantEntryBox
class UFortVariantEntryBox : public UDynamicEntryBox
{
public:
	class UAthenaCosmeticAccountItem*            CurrentItem;                                       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaCosmeticItemDefinition*         CurrentItemDef;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMcpVariantChannelInfo>        CurrentItemVariants;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1425[0x30];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantEntryBox");
		return Clss;
	}

};

// 0x48 (0x2B8 - 0x270)
// Class FortniteUI.FortVariantNumericalPicker
class UFortVariantNumericalPicker : public UFortVariantEditorWidgetBase
{
public:
	int32                                        MinNum;                                            // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxNum;                                            // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumericDelta;                                      // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentNumber;                                     // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCosmeticNumericalVariant*         NumericalVariant;                                  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ZeroDigitUp;                                // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ZeroDigitDown;                              // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_TenDigitUp;                                 // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_TenDigitDown;                               // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NumericalValue;                               // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VariantName;                                  // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantNumericalPicker");
		return Clss;
	}

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortVariantPicker
class UFortVariantPicker : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnVariantChanged;                                  // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UScrollBox*                            ScrollBox_Variants;                                // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantEntryBox*                  EntryBox_VariantOptions;                           // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantPicker");
		return Clss;
	}

	void InitFromCosmeticItemDef(class UAthenaCosmeticItemDefinition* InCosmeticItemDef);
	void InitFromCosmeticItem(class UAthenaCosmeticAccountItem* InCosmeticItem);
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.VariantObject
class UVariantObject : public UObject
{
public:
	struct FGameplayTag                          VariantChannel;                                    // 0x28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTag;                                        // 0x30(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwned;                                            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1426[0x7];                                     
	class UAthenaCosmeticItemDefinition*         CosmeticDef;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VariantObject");
		return Clss;
	}

};

// 0x40 (0x8D0 - 0x890)
// Class FortniteUI.FortVariantTileButton
class UFortVariantTileButton : public UCommonButton
{
public:
	uint8                                        Pad_1427[0x8];                                     
	struct FLinearColor                          LockedTintColor;                                   // 0x898(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IconParamName;                                     // 0x8A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVariantObject*                        SourceObject;                                      // 0x8B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_VariantDisplay;                              // 0x8B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Locked;                                      // 0x8C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Active;                                      // 0x8C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantTileButton");
		return Clss;
	}

};

// 0x20 (0x290 - 0x270)
// Class FortniteUI.FortVariantTileSelector
class UFortVariantTileSelector : public UFortVariantEditorWidgetBase
{
public:
	uint8                                        Pad_1428[0x8];                                     
	class UCommonTileView*                       Tile_VariantOptions;                               // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VariantName;                                  // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVariantObject*                        CurrentSelectedVariant;                            // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantTileSelector");
		return Clss;
	}

};

// 0x10 (0x280 - 0x270)
// Class FortniteUI.FortVehicleInfoIndicatorWidget
class UFortVehicleInfoIndicatorWidget : public UFortActorIndicatorWidget
{
public:
	TWeakObjectPtr<class AFortAthenaVehicle>     CurrentVehicle;                                    // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToHideWhenDamaged;                             // 0x278(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1429[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVehicleInfoIndicatorWidget");
		return Clss;
	}

	void SetVehicle(class AFortAthenaVehicle* NewVehicle);
	void OnVehicleHealthChanged();
	void OnVehicleChanged();
};

// 0x70 (0xA0 - 0x30)
// Class FortniteUI.FortVideoDisplayData
class UFortVideoDisplayData : public UDataAsset
{
public:
	class UMediaPlayer*                          FortVideoPlayer;                                   // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMediaSubtitlesPlayer*             SubtitlePlayer;                                    // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   LocaleAudioTrackIndexMap;                          // 0x40(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortVideoInfo>                Videos;                                            // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVideoDisplayData");
		return Clss;
	}

};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortVideoOptions
class UFortVideoOptions : public UFortOptionsTab
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVideoOptions");
		return Clss;
	}

};

// 0xA0 (0x2B8 - 0x218)
// Class FortniteUI.FortVideoPlayerWidget
class UFortVideoPlayerWidget : public UFortUserWidget
{
public:
	bool                                         bAutoPlayOnOpen;                                   // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoop;                                             // 0x219(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowSubtitles;                                    // 0x21A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMaintainAspectRatio;                              // 0x21B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNoAudio;                                          // 0x21C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_142A[0x73];                                    
	class UMediaPlayer*                          VideoPlayer;                                       // 0x290(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMediaSubtitlesPlayer*             SubtitlePlayer;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_VideoTexture;                                // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USubtitleDisplay*                      Subtitles;                                         // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVideoPlayerWidget");
		return Clss;
	}

	void DynamicHandleOnOpenMediaFailed(const class FString& FailedUrl);
	void DynamicHandleOnMediaOpened(const class FString& OpenedUrl);
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortWebLoginWidget
class UFortWebLoginWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_142B[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortWebLoginWidget");
		return Clss;
	}

	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortWorkerSetBonusIcon
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x210(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142C[0x7];                                     
	class UImage*                                Icon;                                              // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortWorkerSetBonusIcon");
		return Clss;
	}

	void SetGameplayTag(struct FGameplayTag& InGameplayTag);
	void HandleDifferentGameplayTagSetBP();
};

// 0x0 (0x890 - 0x890)
// Class FortniteUI.FriendCodeEntryBase
class UFriendCodeEntryBase : public UCommonButton
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeEntryBase");
		return Clss;
	}

};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FriendCodeListBase
class UFriendCodeListBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeListBase");
		return Clss;
	}

};

// 0x38 (0x8C8 - 0x890)
// Class FortniteUI.FriendCodeShareButtonBase
class UFriendCodeShareButtonBase : public UCommonButton
{
public:
	TArray<struct FFriendCode>                   BacchusFriendCodes;                                // 0x890(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortFriendCodeListBase>   FriendCodeListClass;                               // 0x8A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NumSharesRemainingText;                            // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            InviteCodeMessage;                                 // 0x8B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_142F[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeShareButtonBase");
		return Clss;
	}

	void OnQueryUnredeemedFriendCodesComplete(bool bSuccess, TArray<struct FFriendCode>& FriendCodes);
	void OnNumSharesUpdated();
	void OnFriendCodeIssued(bool bSuccess, struct FFriendCode& FriendCode);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolButtonLayer
class UHUDLayoutToolButtonLayer : public UCommonUserWidget
{
public:
	class UCanvasPanel*                          CanvasPanel_Combat;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CanvasPanel_Build;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CanvasPanel_Persistent;                            // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              InternalSizeBox;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UHUDLayoutToolPlacementWidget*> PlacementWidgets;                                  // 0x230(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolButtonLayer");
		return Clss;
	}

	void OnBuildMode(bool bBuildMode);
};

// 0x188 (0x1B0 - 0x28)
// Class FortniteUI.HUDLayoutToolContext
class UHUDLayoutToolContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1433[0x8];                                     
	UMulticastDelegateProperty_                  OnPropertyMenuStateChangeDelegate;                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCloseLayoutTool;                                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOpenLayoutToolDelegate;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRecenterPressedDelegate;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnViewOffsetUpdatedDelegate;                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNewViewOffsetLerpDelegate;                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHUDLayoutModeChangeDelegate;                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWidgetSelectedDelegate;                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOpenCloseFireModePanelDelegate;                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFireModeChangeDelegate;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1434[0xE0];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolContext");
		return Clss;
	}

	void StartLerping(const struct FVector2D& NewViewOffset);
	bool ShouldShowSelectedWidgetProperties();
	void SetSelectedWidget(class UHUDLayoutToolPlacementWidget* NewSelectedWidget);
	void SetPropertyMenuState(bool bNewlyOpen);
	void SetInBuildMode(bool bNewInBuildMode);
	void SetFireModeOpenState(bool bNewlyOpened);
	void SetFireMode(enum class EFireModeType NewFireMode);
	void SaveLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
	void ResetSelectedWidgetProperties();
	void ResetDirtyWidgets();
	void ResetAllWidgets();
	void OnViewOffsetUpdated();
	void OnToolOpened(const class FString& Reason);
	void OnRecenterPressed();
	void OnPanZoomWidgetClick();
	void LoadLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
	bool IsSelectedWidgetUnderPanel();
	bool IsLayoutDirty();
	bool IsFireModeAvailable(enum class EFireModeType NewFireMode);
	bool IsCentered();
	bool HasSelectedWidget();
	bool HasSavedLayout(enum class ELayoutDataType LayoutType);
	bool GetPropertyMenuState();
	bool GetIsPanning();
	bool GetIsLerping();
	bool GetInBuildMode();
	bool GetFireModeOpenState();
	struct FVector2D GetCurrentOffset();
	void CloseLayoutTool(const class FString& Reason);
	void ClearLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.HUDLayoutToolFireModePanel
class UHUDLayoutToolFireModePanel : public UFortActivatablePanel
{
public:
	bool                                         bSkipFireModeOptionTutorial;                       // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1435[0x7];                                     
	TArray<class UHUDLayoutToolFireModeButton*>  FireModeButtons;                                   // 0x330(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolFireModePanel");
		return Clss;
	}

	void SetOpenState(bool bNewOpenState);
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.HUDLayoutToolFireModeButton
class UHUDLayoutToolFireModeButton : public UCommonUserWidget
{
public:
	enum class EFireModeType                     FireModeType;                                      // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1436[0x7];                                     
	class FText                                  FireModeName;                                      // 0x218(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  FireModeDescription;                               // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            FireModeImage;                                     // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         SelectionButton;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMovieWidget*                      MovieWidget;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolFireModeButton");
		return Clss;
	}

	void OnSelected();
	void OnDeselected();
	enum class EFireModeType GetFireModeType();
	class FText GetFireModeDescription();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.HUDLayoutToolInterface
class UHUDLayoutToolInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolInterface");
		return Clss;
	}

};

// 0xC0 (0x1D8 - 0x118)
// Class FortniteUI.HUDLayoutToolPanZoomWidget
class UHUDLayoutToolPanZoomWidget : public UContentWidget
{
public:
	float                                        LerpSpeed;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecenterRadius;                                    // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1437[0xB8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPanZoomWidget");
		return Clss;
	}

	void StopOffsetLerp();
	void StartOffsetLerp(const struct FVector2D& NewTargetOffset);
	void Recenter();
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.HUDLayoutToolPanZoomWidgetSlot
class UHUDLayoutToolPanZoomWidgetSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1438[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPanZoomWidgetSlot");
		return Clss;
	}

};

// 0x188 (0x398 - 0x210)
// Class FortniteUI.HUDLayoutToolPlacementWidget
class UHUDLayoutToolPlacementWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1439[0x8];                                     
	bool                                         bCanMoveWidget;                                    // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143A[0x7];                                     
	TSubclassOf<class UBacchusHUDElement>        HUDElementClass;                                   // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          HUDElementTagOverride;                             // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingWidget;                                 // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143B[0x7];                                     
	class UBorder*                               SelectionBorder;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               DisplayScaleBorder;                                // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              MainOverlay;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_0;                                        // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_1;                                        // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_2;                                        // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_3;                                        // 0x25C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHUDLayoutDataEntry                   DefaultEntry;                                      // 0x260(0xD0)(Transient, Protected, NativeAccessSpecifierProtected)
	class UBacchusHUDElement*                    BacchusHUDElement;                                 // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143C[0x60];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPlacementWidget");
		return Clss;
	}

	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* InSelectedWidget);
	void OnInsideGridStateChange(bool bInsideGrid);
	bool IsInsideGrid();
	bool GetIsOverlapping();
	struct FGameplayTag BP_GetMobileVisualType();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolPropertyPanel
class UHUDLayoutToolPropertyPanel : public UCommonUserWidget
{
public:
	class FText                                  DefaultTitle;                                      // 0x210(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PanelTitle;                                        // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143D[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPropertyPanel");
		return Clss;
	}

	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
	void OnOpen();
	void OnMenuStateChange(bool bNewlyOpen);
	void OnClose();
	bool GetIsOpen();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolPropertyWidget
class UHUDLayoutToolPropertyWidget : public UCommonUserWidget
{
public:
	class UAnalogSlider*                         MySlider;                                          // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PropertyName;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PropertyValue;                                // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PropertyIndex;                                     // 0x228(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UHUDLayoutToolPlacementWidget> CurrentWidget;                                     // 0x22C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143E[0xC];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPropertyWidget");
		return Clss;
	}

	void SetPropertyType(enum class ELayoutPropertyType NewPropertyType);
	void SetBoolValue(bool bNewValue);
	void RefreshProperties();
	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
	void OnNewSliderValue(float NormalizedValue);
	void OnNewRotatorValue(int32 NormalizedValue);
	void OnNewBoolValue(bool bNewValue);
	TArray<class FText> GetRotatorLabels();
	int32 GetCurrentValueAsInt();
	bool GetCurrentValueAsBool();
	float GetCurrentValue();
};

// 0x30 (0x248 - 0x218)
// Class FortniteUI.FortItemGroupSlotPicker
class UFortItemGroupSlotPicker : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnItemPickerSelectionCommittedEvent;               // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupSlotWidget> HostItemGroupSlotWidget;                           // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UContentWidget*                        SlottedItemDetailsContainer;                       // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UWidget>                SlottedItemDetailsWidget;                          // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             UpgradedItemForPreview;                            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemGroupSlotPicker");
		return Clss;
	}

	void SignalSelectionCommitted(class UFortItem* SelectedItem);
	void SetSelection(class UFortItem* SelectedItem);
	void OnItemPickerSelectionChanged__DelegateSignature(class UFortItem* SelectedItem);
	void HandleItemSetInternal(class UFortItemGroupSlotWidget* ItemGroupSlotWidget);
	void HandleItemSet();
	class FName GetSquadId();
	int32 GetSlotIndexInGroup();
	class FText GetItemSlottingRestrictionReasonText(enum class ESquadSlotItemRestrictionReason Reason);
	class UFortItem* GetCurrentlySlottedItem();
	TArray<class UFortItem*> GetCompatibleCandidateItems();
	void GetCandidateItemSlottingRestrictions(class UFortItem* CandidateItem, TArray<enum class ESquadSlotItemRestrictionReason>* OutRestrictions);
	float GetCandidateFitnessValueForSlot(class UFortItem* Candidate);
	void EndUpgradePreview();
	void DetectCandidateSynergiesAndMatches(class UFortItem* Candidate, bool* OutHasSquadManagerSynergy, bool* OutHasPersonalitySynergy, bool* OutHasSetBonusMatch);
	class UWidget* CreateSlottedItemDetailsWidget(class UFortItem* Item);
	void BeginUpgradePreview();
};

// 0xD8 (0x2F0 - 0x218)
// Class FortniteUI.FortItemGroupSlotWidget
class UFortItemGroupSlotWidget : public UFortUserWidget
{
public:
	int32                                        SlotIndexInGroup;                                  // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocked;                                          // 0x21C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1447[0x3];                                     
	TMap<struct FGameplayAttribute, float>       AttributeBonusValues;                              // 0x220(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HasSetBonusMatch;                                  // 0x270(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1448[0x3];                                     
	TWeakObjectPtr<class UFortItem>              SlottedItem;                                       // 0x274(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1449[0x4];                                     
	TArray<enum class EFortItemType>             ItemTypeFilters;                                   // 0x280(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ItemTagFilter;                                     // 0x290(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSlotLockedStateChangedEvent;                 // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSetEvent;                                    // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAttributeBonusValueChangedEvent;                 // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupWidget>   HostItemGroupWidget;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotPicker>  ItemPickerWidgetType;                              // 0x2E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemGroupSlotWidget");
		return Clss;
	}

	bool TryGetSquadSlot(struct FHomebaseSquadSlot* OutSquadSlot);
	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSlottingPreviewItem(class UFortItem* Item);
	void SetItem(class UFortItem* ItemToSlot);
	void OnItemSlotLockedStateChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnItemSet__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnAttributeBonusValueChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	bool IsManagerSlot();
	bool IsItemCompatible(class UFortItem* Item);
	void InitializeSlot(class UFortItemGroupWidget* HostItemGroupWidget, int32 SlotIndexInGroup);
	void HandleTraitStateChanged(bool SetBonusMatchStateChanged);
	void HandlePreviewStateChanged(bool IsSquadSlotAffectedByPreview, bool IsBeingReplacedOrRelocated, bool WouldHavePersonalitySynergy, bool WouldHaveSetBonusMatch, TMap<struct FGameplayAttribute, float>& PreviewAttributeBonusValues);
	void HandleLockedStateChanged();
	void HandleItemSet();
	void HandleItemPickerSelectionCommittedInternal(class UFortItem* SelectedItem);
	void HandleItemPickerSelectionCommitted();
	void HandleAttributeBonusValueChanged();
	class FName GetSquadId();
	class UFortItemGroupSlotPicker* CreatePickerWidget();
	void CancelSlottingPreview();
};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortItemGroupWidget
class UFortItemGroupWidget : public UFortUserWidget
{
public:
	class FName                                  SquadId;                                           // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotWidget>  ItemSlotWidgetType;                                // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ItemSlotsContainer;                                // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupSlotWidget*>      SlotWidgets;                                       // 0x230(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemGroupWidget");
		return Clss;
	}

	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSquad(class FName SquadId);
	void HandleItemSlotAdded(int32 SlotIndex, class UFortItemGroupSlotWidget* ItemSlotWidget);
	void HandleEffectsChanged();
	void HandleDifferentSquadSet();
	void GetTotalAttributeBonuses(TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	class FName GetSquadId();
	void GetActiveSetBonusTags(TArray<struct FGameplayTag>* OutActiveSetBonusTags);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.MassiveGadgetEquippedWidget
class UMassiveGadgetEquippedWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassiveGadgetEquippedWidget");
		return Clss;
	}

	void HandleMassiveTagChanged(const struct FGameplayTag& Tag, int32 Count);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.MobileHUDVisual
class UMobileHUDVisual : public UCommonUserWidget
{
public:
	struct FGameplayTag                          VisualType;                                        // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Opacity;                                           // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_144D[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MobileHUDVisual");
		return Clss;
	}

	struct FGameplayTag GetVisualType();
};

// 0x28 (0x248 - 0x220)
// Class FortniteUI.MobileHUDButtonVisual
class UMobileHUDButtonVisual : public UMobileHUDVisual
{
public:
	float                                        ButtonSize;                                        // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ButtonDisplayScale;                                // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPaperSprite*                          DefaultIcon;                                       // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              OuterSizeBox;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              InnerSizeBox;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Icon;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MobileHUDButtonVisual");
		return Clss;
	}

	void SetButtonSprite(class UPaperSprite* NewSprite);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortQuestScreen
class UFortQuestScreen : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestScreen");
		return Clss;
	}

	void ProcessPendingSeenQuestItems();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.RemoteControlledPawnExpirationWidget
class URemoteControlledPawnExpirationWidget : public UCommonUserWidget
{
public:
	class UImage*                                ExpirationProgressImage;                           // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144E[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RemoteControlledPawnExpirationWidget");
		return Clss;
	}

	void OnPawnChanged();
};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.SeasonPassAboutWidget
class USeasonPassAboutWidget : public UFortActivatablePanel
{
public:
	TMap<class FString, TSubclassOf<class UEpicCMSSimpleMessage>> MessageWidgetLayoutMap;                            // 0x328(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_144F[0x10];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonPassAboutWidget");
		return Clss;
	}

	void OnStartPageGeneration();
	void OnPagesGenerated();
	class UWidget* OnCreateRewardWidget(class UFortItem* Item);
	void OnCreatePageWidget(class UEpicCMSSimpleMessage* Page);
	void NavigatePageRight();
	void NavigatePageLeft();
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.FortSeasonPassLevelInfo
class UFortSeasonPassLevelInfo : public UObject
{
public:
	uint8                                        Pad_1452[0x8];                                     
	class AFortPlayerController*                 FortPC;                                            // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemDefinition*           SeasonData;                                        // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSeasonPassLevelInfo");
		return Clss;
	}

	bool IsPaidUnlocked();
	bool IsPaidClaimed();
	bool IsFreeUnlocked();
	bool IsFreeClaimed();
	int32 GetSeasonPassMaxLevel();
	TArray<class UFortItem*> GetRewardItems(enum class EAthenaSeasonRewardTrack Track);
	int32 GetNumRewardItems(enum class EAthenaSeasonRewardTrack Track);
	float GetLevelProgress();
	int32 GetLevel();
	bool ContainsChaseReward(enum class EAthenaSeasonRewardTrack Track);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.SeasonPassLevelWidget
class USeasonPassLevelWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1453[0x10];                                    
	class UFortSeasonPassLevelInfo*              LevelInfo;                                         // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonPassLevelWidget");
		return Clss;
	}

	void PlayIntro();
	void OnSetup();
	void OnNavigateTo();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void OnAttemptClaimFinished(bool FreeClaimed, bool PaidClaimed);
	class UFortSeasonPassLevelInfo* GetLevelInfo();
	void AttemptClaim();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.SeasonPassLevelPanel
class USeasonPassLevelPanel : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1454[0x10];                                    
	class UFortSeasonPassLevelInfo*              LevelInfo;                                         // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonPassLevelPanel");
		return Clss;
	}

	void Setup(class UFortSeasonPassLevelInfo* Info);
	void OnSetup();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	class UFortSeasonPassLevelInfo* GetLevelInfo();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.SeasonPassPageWidget
class USeasonPassPageWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1457[0x18];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonPassPageWidget");
		return Clss;
	}

	bool ShouldPlayInto(int32 FirstLevel);
	void ScreenShown();
	bool OwnsSeasonPass();
	void OnBattlePassChanged();
	void NavigatePageRight();
	void NavigatePageLeft();
	int32 GetCurrentSeasonNumber();
	bool ContainsLevel(int32 Level);
};

// 0x70 (0x430 - 0x3C0)
// Class FortniteUI.SeasonPassScreenBase
class USeasonPassScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	uint8                                        Pad_1459[0x8];                                     
	class UAthenaSeasonItemDefinition*           SeasonData;                                        // 0x3C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USeasonPassLevelWidget*>        LevelWidgets;                                      // 0x3D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int32, class UFortSeasonPassLevelInfo*> LevelInfos;                                        // 0x3E0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonPassScreenBase");
		return Clss;
	}

	void UpdateStoreHasStarsNotification(bool bShowNotification);
	bool ShouldOpenAboutScreen();
	void ScrollPositive();
	void ScrollNegative();
	bool PurchaseAvailible();
	bool OwnsSeasonPass();
	void OnSetGiftability(bool bIsGiftable);
	void OnSeasonPassChanged();
	void OnNoCurrentSeason();
	void OnNavigateToLevel(int32 Level);
	void OnLevelsGenerated();
	void NavigateToLevel(int32 Level);
	int32 GetSeasonPassLevelMax();
	int32 GetSeasonPassLevel();
	struct FDateTime GetSeasonEndDate();
	class UFortSeasonPassLevelInfo* GetLevelInfo(int32 Level);
	TMap<int32, class UFortSeasonPassLevelInfo*>& GetAllLevelInfos();
	TArray<class USeasonPassLevelWidget*> GenerateLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo);
};

// 0x60 (0x160 - 0x100)
// Class FortniteUI.SeasonRewardsGridWidget
class USeasonRewardsGridWidget : public UWidget
{
public:
	TSubclassOf<class UUserWidget>               ItemWidgetToCreate;                                // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemWidgetCreated;                               // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMargin                               ItemPadding;                                       // 0x118(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ColumnPadding;                                     // 0x128(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScrollSpeed;                                       // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145A[0x24];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SeasonRewardsGridWidget");
		return Clss;
	}

	void Populate();
};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortSquadPanelWidget
class UFortSquadPanelWidget : public UFortUserWidget
{
public:
	enum class EFortHomebaseSquadType            SquadTypeFilter;                                   // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145B[0x7];                                     
	TSubclassOf<class UFortItemGroupWidget>      SquadWidgetType;                                   // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          SquadWidgetsContainer;                             // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupWidget*>          SquadWidgets;                                      // 0x230(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadPanelWidget");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
