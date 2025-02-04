#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x438 - 0x238)
// WidgetBlueprintGeneratedClass MissionVotingDetailsPanel.MissionVotingDetailsPanel_C
class UMissionVotingDetailsPanel_C : public UFortMissionActivationWidgetPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideVoteResultAnimation;                           // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowVoteResultAnimation;                           // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_Timer;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Close_Details_Panel;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_Details_Panel;                                // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      VoteResultAnimation_UNUSED;                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AvailableBluGlo;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CounterBackgroundGlow;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InstigatorTimeRemainingImage;                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      InstigatorVoteTimer;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NotVotedPanel;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        NoVoteButton;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoVoteCount;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        NoVoteRequiredBox;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ObjectiveReadyTimer;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PanelSwitcher;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PanelTitle;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReceipientTimeRemainingImage;                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ReceipientVoteTime;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RequiredBluGlo;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     StartVoteButton;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StartVotePanel;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TimeTypeIcon;                                      // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TimeTypeIcon_1;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Vote_Result_Glow;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteDescription;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              VotedPanel;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VotedPanelContents;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       VoteInstigatorBanner;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteInstigatorName;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteName;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteResult;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VoterList;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        YesVoteButton;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      YesVoteCount;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortVoteType                     CurrentVoteType;                                   // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReceipient;                                      // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_425E[0x6];                                     
	class UMaterialInstanceDynamic*              InstigaterTimerMaterial;                           // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ReceipientTimerMaterial;                           // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnRecepientVoted;                                  // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTagContainer                 ReadyUpObjectiveHandle;                            // 0x3A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ReadyTimer;                                        // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsMissionReady;                                    // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_425F[0x3];                                     
	float                                        VoteDuration;                                      // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 DeadDropMission;                                   // 0x3D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnVoteLockedOut;                                   // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        FailedVoteLockOutDuration;                         // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4260[0x4];                                     
	struct FTimerHandle                          VoteResultAnimationTimer;                          // 0x408(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         LastVoteResultSuccess;                             // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4261[0x7];                                     
	UMulticastDelegateProperty_                  OnVoteResultFinished;                              // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            VoteSucceededSound;                                // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VoteFailedSound;                                   // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionVotingDetailsPanel_C");
		return Clss;
	}

	void CleanupVoteResultAnimation();
	void UpdateVoteCounts(int32 CallFunc_GetVoteCounts_OutYesVoteCount, int32 CallFunc_GetVoteCounts_OutNoVoteCount, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1);
	void UpdateDisplay(bool IsSinglePlayer, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable2, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, enum class EFortVoteType Temp_byte_Variable1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, enum class EFortVoteType Temp_byte_Variable2, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, enum class EFortVoteType Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class EFortVoteType Temp_byte_Variable7, class FText Temp_text_Variable9, class FText Temp_text_Variable10, bool Temp_bool_Variable4, bool CallFunc_IsVoteRequired_VoteRequired, bool CallFunc_IsVoteRequired_VoteRequired1, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, class FText K2Node_Select2_Default, class FText K2Node_Select3_Default, class UMaterialInterface* K2Node_Select4_Default, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select5_Default, enum class ESlateVisibility K2Node_Select6_Default, enum class ESlateVisibility K2Node_Select7_Default, class FText K2Node_Select8_Default);
	void CloseDetails();
	void OpenDetails();
	void IsVoteRequired(bool* VoteRequired, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateObjectiveReadyTime(float MissionObjectiveTimeRemaining, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_TimeSecondsToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default);
	void UpdateVoteButton(bool CanIncreaseDifficulty, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable1, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetDifficultyIncreaseRewardsTier_ReturnValue, int32 CallFunc_GetNumAllowedDifficultyIncreases_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVoteRequired_VoteRequired, class FText Temp_text_Variable3, class FText K2Node_Select_Default, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, class FText K2Node_Select1_Default, int32 CallFunc_GetAvailableBluGloCount_ReturnValue, bool CallFunc_IsVoteActive_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText Temp_text_Variable4, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable2, class FText K2Node_Select2_Default, int32 CallFunc_GetAvailableBluGloCount_ReturnValue1, bool CallFunc_IsVoteActive_ReturnValue1, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateVoteInstigatorInfo(const struct FUniqueNetIdRepl& InstigatorId, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, enum class EFortVoteType Temp_byte_Variable, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const struct FUniqueNetIdRepl& CallFunc_GetInstigatorId_ReturnValue);
	void UpdateRemainingVoteTime(float RemainingTime, float RemainingTimepercent, bool CallFunc_IsVoteActive_ReturnValue, float CallFunc_GetVoteTimeRemaining_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void RefreshPanel(int32 CallFunc_GetAvailableBluGloCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, bool CallFunc_IsVoteActive_ReturnValue, bool CallFunc_HasPlayerVoted_ReturnValue, TArray<struct FVoter>& CallFunc_GetVoters_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVoter& CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UMissionVoter_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitializePanel(enum class EFortVoteType InVoteType);
	void Construct();
	void Destruct();
	void BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowVoteResult(bool Success);
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnVoteUpdatedBP(enum class EFortVoteType VoteType);
	void HandleShowVoteResultAnimationFinished();
	void HandleHideVoteResultAnimationFinished();
	void PlayHideVoteResultAnimation();
	void BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MissionVotingDetailsPanel(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_CustomEvent_Success, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsVoteRequired_VoteRequired, enum class EFortVoteType K2Node_Event_VoteType1, bool K2Node_Event_bIsVoteActive, int32 K2Node_Event_VoteResult, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool K2Node_Event_bIsMultiplayer, class UMaterialInterface* Temp_object_Variable, enum class EFortVoteType K2Node_Event_VoteType, class UMaterialInterface* Temp_object_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UMaterialInterface* K2Node_Select_Default, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText Temp_text_Variable1, enum class EFortVoteArbitratorType CallFunc_GetArbitratorType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable2, class USoundBase* K2Node_Select1_Default, class FText K2Node_Select2_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void OnVoteResultFinished__DelegateSignature(enum class EFortVoteType VoteType, bool Success);
	void OnVoteLockedOut__DelegateSignature();
	void OnRecepientVoted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
