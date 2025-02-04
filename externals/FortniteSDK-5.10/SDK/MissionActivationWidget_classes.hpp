#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x191 (0x509 - 0x378)
// WidgetBlueprintGeneratedClass MissionActivationWidget.MissionActivationWidget_C
class UMissionActivationWidget_C : public UFortMissionActivationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseDetailsPanel;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      StartObjective_To_Global_Lockdown;                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      IncreaseDifficulty_To_Global_Lockdown;             // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Close_Global_LockOut;                              // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_Global_LockOut;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideIncreaseDifficultyPanel;                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideStartObjectivePanel;                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideHintBox;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenDetailsPanel;                                  // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenIncreaseDifficultyPanel;                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenStartObjectivePanel;                           // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BackButton;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BlugloRequirement;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BottomBar;                                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DetailsPanelSizeBox;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Hint;                                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HintWrapper;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_4;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        IncreaseDifficultyButton;                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IncreaseDifficultySizeBox;                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockoutTimeRemainingText;                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionDifficultyIncreasePanel_C*     MissionDifficultyIncreasePanel;                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MissionLockoutBorder;                              // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionStartObjectivePanel_C*         MissionStartObjectivePanel;                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionVotingDetailsPanel_C*          MissionVotingDetailsPanel;                         // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ObjectiveReadyTimer;                               // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shadow;                                            // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        StartObjectiveButton;                              // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              StartObjectiveSizeBox;                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Timer_Glow;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortMissionActivationWidgetState PreviousState;                                     // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AF[0x7];                                     
	class FText                                  StartObjectiveHintText;                            // 0x490(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  IncreaseDifficultyHintText;                        // 0x4A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ReadyTimer;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EFortMissionActivationWidgetState NextStateToSet;                                    // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B0[0x3];                                     
	int32                                        AnimsPlayed;                                       // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortVoteType                     CurrentVote;                                       // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B1[0x7];                                     
	struct FTimerHandle                          LockoutTimer;                                      // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         WidgetState_SkipAnimations;                        // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArePanelButtonsInteractable;                       // 0x4E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartObjectiveShowingLockout;                      // 0x4E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IncreaseDifficultyShowingLockout;                  // 0x4E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B2[0x4];                                     
	class USoundBase*                            ShowWidgetSound;                                   // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HideWidgetSound;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CloseSubPanelSound;                                // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenSubPanelSound;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WidgetState_IsVoteInstigator;                      // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionActivationWidget_C");
		return Clss;
	}

	void HandleCloseDetailsPanelAnimFinished(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	float GetMissionObjectiveRemainingTime(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue);
	void UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1);
	void StartNextState(enum class EFortMissionActivationWidgetState LocalNextState);
	void UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void UpdateObjectiveReadyTime(float RemainingTime, class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_TimeSecondsToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue, class FText K2Node_Select_Default);
	void SetBluGloRequirementHint(int32 BlugloRequirement, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void UpdatePanelButtonInteractability(bool ButtonsEnabled, bool UpdateLockoutDisplay, bool ForceUpdateFocus, bool TryFocusIncreaseDifficulty, bool IncreaseDifficultyLocked, bool StartObjectiveLocked, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_BooleanXOR_ReturnValue, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UWidget* K2Node_Select_Default, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UPanelButton_C* K2Node_Select1_Default, class UWidget* K2Node_Select2_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue1, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue, bool CallFunc_IsVoteLocked_ReturnValue, bool CallFunc_IsVoteLocked_ReturnValue1);
	void OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState);
	void OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked);
	void Construct();
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void OnActivated();
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void HandleOnRecepientVoted();
	void HandleVoteResultFinished(enum class EFortVoteType VoteType, bool Success);
	void OnBeginIntro();
	void OnBeginOutro();
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void ExecuteUbergraph_MissionActivationWidget(int32 EntryPoint, enum class EFortMissionActivationWidgetState K2Node_Event_ActiveState, enum class EFortMissionActivationWidgetState K2Node_Event_PreviousState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, bool CallFunc_IsValid_ReturnValue, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, enum class EFortVoteType K2Node_Event_VoteType1, bool K2Node_Event_bIsLocked, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsPlayerVoteInstigator_ReturnValue, bool CallFunc_IsVoteActive_ReturnValue, bool CallFunc_IsPlayerVoteInstigator_ReturnValue1, bool CallFunc_IsVoteActive_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue1, bool K2Node_SwitchEnum2_CmpSuccess, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetMissionName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue1, class UFortMissionInfo* CallFunc_GetPrimaryMissionInfo_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, bool Temp_bool_Variable1, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsAnyVoteActive_ReturnValue, enum class EFortVoteType K2Node_CustomEvent_VoteType, bool K2Node_CustomEvent_Success, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_IsPlayerVoteInstigator_ReturnValue2, float Temp_float_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool Temp_bool_Variable2, float Temp_float_Variable2, float K2Node_Select2_Default, float Temp_float_Variable3, bool Temp_bool_Variable3, class AFortObjectiveBase* CallFunc_GetObjectiveByHandle_ReturnValue, float K2Node_Select3_Default, class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, enum class EFortVoteType K2Node_Event_VoteType, bool K2Node_Event_bIsVoteActive, int32 K2Node_Event_VoteResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
