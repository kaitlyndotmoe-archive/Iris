#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x328 - 0x210)
// WidgetBlueprintGeneratedClass Results_CommanderXPBar.Results_CommanderXPBar_C
class UResults_CommanderXPBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkipToFinalState;                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FlashBar;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_BonusXpType_C*                BonusXpType;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressBarNew;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCommanderLabel;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CountTimer;                                        // 0x248(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        CurrentXP;                                         // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLevel;                                      // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  CountFinished;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PlayRate;                                          // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D42[0x4];                                     
	class UMaterialInstanceDynamic*              MAT_progressBarNew;                                // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  LeveledUp;                                         // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  IntroFinished;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CountTime;                                         // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CountTimeStart;                                    // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D43[0x6];                                     
	class USoundBase*                            GainXP;                                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ACGainXp;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Intro;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CountEnd;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentXpParameterName;                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCountStep;                                  // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D44[0x4];                                     
	UMulticastDelegateProperty_                  CountIncrement;                                    // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            RestXP;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BoostXP;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MissedXP;                                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FResults_CommanderXP_Data>     XpSections;                                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FResults_CommanderXP_MaterialData> ProgressBarInfo;                                   // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_CommanderXPBar_C");
		return Clss;
	}

	void DebugSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Conv_IntToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3);
	void GetHoveredProgressBarSection(class FName* XpSectionName, const struct FVector2D& ProgressBarSize, const struct FVector2D& ProgressBarPos, const struct FVector2D& MousePos, float ProgressBarWidth, float ProgressBarX, float MouseY, float MouseX);
	void UpdateProgressBarPercent(class FName ParameterName, float ProgressBarPercent, bool MatInfoFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FResults_CommanderXP_MaterialData& K2Node_MakeStruct_Results_CommanderXP_MaterialData, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FResults_CommanderXP_MaterialData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RandomizeDesignView(float UsedPercent, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_MakeLiteralName_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateXpType(int32 XPAmount, class FName XPType, bool bEarnedXP, bool K2Node_SwitchName_CmpSuccess, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface1, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface2, bool K2Node_DynamicCast_bSuccess2);
	void ClearXpBar();
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void SkipToFinalState();
	void SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate, const struct FFortExperienceDelta& ExperienceDelta, enum class EFortUIScoreType BonusScoreType, const struct FFortUIXpInfo& LocalPlayerXPInfo, int32 CurrentPlayerIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data1, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data2, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item1, int32 CallFunc_Array_LastIndex_ReturnValue2, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item2, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item3, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data3, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data4, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue3, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item4, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue4, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data5, int32 CallFunc_Array_Add_ReturnValue5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess1, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue);
	void UpdateCount(int32 CheckStartXP, int32 CheckEndXP, float TimePassed, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item1, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetXpToCompleteLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void Intro_Sequence();
	void Count_Sequence();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void On_Count_Finished();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Results_CommanderXPBar(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, int32 Temp_int_Variable, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void CountIncrement__DelegateSignature();
	void IntroFinished__DelegateSignature();
	void LeveledUp__DelegateSignature(int32 NewLevel);
	void CountFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
