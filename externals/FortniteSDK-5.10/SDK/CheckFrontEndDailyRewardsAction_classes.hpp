#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x39A - 0x388)
// BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C
class ACheckFrontEndDailyRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bLastStateWasLoginScreen;                          // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESubGame                          NewVar_0;                                          // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckFrontEndDailyRewardsAction_C");
		return Clss;
	}

	void IsFrontEndRewards_Running(bool* IsRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void Daily_Rewards_Open(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess);
	void CompleteDailyRewardAction();
	void ShowDailyRewards(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInViewport_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortScriptedActionParams& K2Node_Event_Params, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Daily_Rewards_Open_bRunning, enum class EFortStoreState CallFunc_GetStoreState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsFrontEndRewards_Running_IsRunning, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsInLobby_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
