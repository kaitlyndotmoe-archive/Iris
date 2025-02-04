#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HasPinnedQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Pinned                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_PARENT_C::HasPinnedQuest(bool* Pinned)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "HasPinnedQuest");

	Params::ABP_Hex_PARENT_C_HasPinnedQuest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (Pinned != nullptr)
		*Pinned = Parms.Pinned;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CompletedQuest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Material_Instance_Dynamic                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            UniqueId                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               HasCompletedQuest                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_PARENT_C::HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& UniqueId, bool HasCompletedQuest, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "HandleUpdatingBannerMesh");

	Params::ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params Parms;
	Parms.Target = Target;
	Parms.CompletedQuest = CompletedQuest;
	Parms.Material_Instance_Dynamic = Material_Instance_Dynamic;
	Parms.UniqueId = UniqueId;
	Parms.HasCompletedQuest = HasCompletedQuest;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue1 = CallFunc_NotEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       CallFunc_GetMissionAlertVisualTags_ReturnValue                   ()
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        ()
// struct FGameplayTagContainer       CallFunc_GetMissionAlertVisualTags_ReturnValue1                  ()
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetMissionAlertVisualTags_ReturnValue2                  ()
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionAlertIndicator_C*    K2Node_DynamicCast_AsMission_Alert_Indicator                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue1                       ()
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTileHidden_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMissionAlertTile_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_PARENT_C::HandleMissionAlert(const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UMissionAlertIndicator_C* K2Node_DynamicCast_AsMission_Alert_Indicator, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_IsMissionAlertTile_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "HandleMissionAlert");

	Params::ABP_Hex_PARENT_C_HandleMissionAlert_Params Parms;
	Parms.CallFunc_GetMissionAlertVisualTags_ReturnValue = CallFunc_GetMissionAlertVisualTags_ReturnValue;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_GetMissionAlertVisualTags_ReturnValue1 = CallFunc_GetMissionAlertVisualTags_ReturnValue1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_GetMissionAlertVisualTags_ReturnValue2 = CallFunc_GetMissionAlertVisualTags_ReturnValue2;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Alert_Indicator = K2Node_DynamicCast_AsMission_Alert_Indicator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue1 = CallFunc_MakeGameplayTagQuery_ReturnValue1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue1 = CallFunc_DoesContainerMatchTagQuery_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsTileHidden_ReturnValue = CallFunc_IsTileHidden_ReturnValue;
	Parms.CallFunc_IsMissionAlertTile_ReturnValue = CallFunc_IsMissionAlertTile_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    SourceMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  TileTypeA                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  TileTypeB                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileIsSameRegionA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileIsSameRegionB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileIsHiddenA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileIsHiddenB                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileExistsA                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TileExistsB                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "GroundSliceSettings");

	Params::ABP_Hex_PARENT_C_GroundSliceSettings_Params Parms;
	Parms.SourceMaterial = SourceMaterial;
	Parms.TileTypeA = TileTypeA;
	Parms.TileTypeB = TileTypeB;
	Parms.TileIsSameRegionA = TileIsSameRegionA;
	Parms.TileIsSameRegionB = TileIsSameRegionB;
	Parms.TileIsHiddenA = TileIsHiddenA;
	Parms.TileIsHiddenB = TileIsHiddenB;
	Parms.TileExistsA = TileExistsA;
	Parms.TileExistsB = TileExistsB;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "UserConstructionScript");

	Params::ABP_Hex_PARENT_C_UserConstructionScript_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "Timeline_11__FinishedFunc");

	Params::ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "Timeline_11__UpdateFunc");

	Params::ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "Timeline_12__FinishedFunc");

	Params::ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "Timeline_12__UpdateFunc");

	Params::ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnLoaded_192496DB41CC2100CC1C729DB594CEF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::OnLoaded_192496DB41CC2100CC1C729DB594CEF8(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnLoaded_192496DB41CC2100CC1C729DB594CEF8");

	Params::ABP_Hex_PARENT_C_OnLoaded_192496DB41CC2100CC1C729DB594CEF8_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::ForceDefocus()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "ForceDefocus");

	Params::ABP_Hex_PARENT_C_ForceDefocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::CheckFocus()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "CheckFocus");

	Params::ABP_Hex_PARENT_C_CheckFocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::FireLightningA()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "FireLightningA");

	Params::ABP_Hex_PARENT_C_FireLightningA_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnMissionDataUpdated");

	Params::ABP_Hex_PARENT_C_OnMissionDataUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnDefocus()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnDefocus");

	Params::ABP_Hex_PARENT_C_OnDefocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnFocus()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnFocus");

	Params::ABP_Hex_PARENT_C_OnFocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnHostDeselect");

	Params::ABP_Hex_PARENT_C_OnHostDeselect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnHostSelect()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnHostSelect");

	Params::ABP_Hex_PARENT_C_OnHostSelect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnClientDeselect");

	Params::ABP_Hex_PARENT_C_OnClientDeselect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnClientSelect()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnClientSelect");

	Params::ABP_Hex_PARENT_C_OnClientSelect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamPower                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PersonalPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int32 TeamPower, int32 PersonalPower)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "HandleTeamPowerChanged");

	Params::ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params Parms;
	Parms.TeamPower = TeamPower;
	Parms.PersonalPower = PersonalPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnInitializeTile");

	Params::ABP_Hex_PARENT_C_OnInitializeTile_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::HandleFrontendCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "HandleFrontendCameraChanged");

	Params::ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params Parms;
	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::OnMarkedQuestChanged()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "OnMarkedQuestChanged");

	Params::ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::CheckIfQuestShouldBePinned()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "CheckIfQuestShouldBePinned");

	Params::ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::CheckForPinnedInLevel()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "CheckForPinnedInLevel");

	Params::ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::RetryTileInitialized()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "RetryTileInitialized");

	Params::ABP_Hex_PARENT_C_RetryTileInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::SetMissionPowerLevelDependencies()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "SetMissionPowerLevelDependencies");

	Params::ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "ReceiveBeginPlay");

	Params::ABP_Hex_PARENT_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::MissionLightning(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "MissionLightning");

	Params::ABP_Hex_PARENT_C_MissionLightning_Params Parms;
	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::MissionLightningOff(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "MissionLightningOff");

	Params::ABP_Hex_PARENT_C_MissionLightningOff_Params Parms;
	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Unpause Updates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_PARENT_C::Unpause_Updates()
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "Unpause Updates");

	Params::ABP_Hex_PARENT_C_Unpause_Updates_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.AsyncUpdateBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material_Instance_Dynamic                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Unique_Net_Id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::AsyncUpdateBanner(class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& Unique_Net_Id)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "AsyncUpdateBanner");

	Params::ABP_Hex_PARENT_C_AsyncUpdateBanner_Params Parms;
	Parms.Material_Instance_Dynamic = Material_Instance_Dynamic;
	Parms.Unique_Net_Id = Unique_Net_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTilePlayable_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TeamPower                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PersonalPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_NewCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_OldCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTileValidForMarkedQuest_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidMissionData_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTileHidden_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTileLocked_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ATheaterCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATheaterCamera_Blueprint_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalSkillPointsEarned_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMissionDetails         CallFunc_GetTileMissionDetails_MissionDetails                    ()
// bool                               CallFunc_GetTileMissionDetails_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Conning_Color_From_Difficulty_Value_Success         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText     ()
// int32                              CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMissionDetails         CallFunc_GetTileMissionDetails_MissionDetails1                   ()
// bool                               CallFunc_GetTileMissionDetails_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_EventName1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_EventName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ParticleTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_CustomEvent_Material_Instance_Dynamic                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Unique_Net_Id                                 (HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfoForPlayer_Result                         ()
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue          (HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsTilePlayable_ReturnValue, int32 K2Node_CustomEvent_TeamPower, int32 K2Node_CustomEvent_PersonalPower, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class UFortQuestItem* CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest, bool CallFunc_IsTileValidForMarkedQuest_ReturnValue, bool CallFunc_HasValidMissionData_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_IsTileLocked_ReturnValue, TArray<class ATheaterCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, class ATheaterCamera_Blueprint_C* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetTotalSkillPointsEarned_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, class UTexture* Temp_object_Variable1, class UTexture* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails, bool CallFunc_GetTileMissionDetails_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FLinearColor& CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_From_Difficulty_Value_Success, class FText CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText, int32 CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails1, bool CallFunc_GetTileMissionDetails_ReturnValue1, class FName K2Node_CustomEvent_EventName1, float K2Node_CustomEvent_EmitterTime1, const struct FVector& K2Node_CustomEvent_Location1, const struct FVector& K2Node_CustomEvent_Velocity1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess1, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UMaterialInstanceDynamic* K2Node_CustomEvent_Material_Instance_Dynamic, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Unique_Net_Id, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class FName CallFunc_Conv_StringToName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Hex_PARENT_C", "ExecuteUbergraph_BP_Hex_PARENT");

	Params::ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsTilePlayable_ReturnValue = CallFunc_IsTilePlayable_ReturnValue;
	Parms.K2Node_CustomEvent_TeamPower = K2Node_CustomEvent_TeamPower;
	Parms.K2Node_CustomEvent_PersonalPower = K2Node_CustomEvent_PersonalPower;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.K2Node_CustomEvent_NewCamera = K2Node_CustomEvent_NewCamera;
	Parms.K2Node_CustomEvent_OldCamera = K2Node_CustomEvent_OldCamera;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest = CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest;
	Parms.CallFunc_IsTileValidForMarkedQuest_ReturnValue = CallFunc_IsTileValidForMarkedQuest_ReturnValue;
	Parms.CallFunc_HasValidMissionData_ReturnValue = CallFunc_HasValidMissionData_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsTileHidden_ReturnValue = CallFunc_IsTileHidden_ReturnValue;
	Parms.CallFunc_IsTileLocked_ReturnValue = CallFunc_IsTileLocked_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue1 = CallFunc_GetCurrentInputType_ReturnValue1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue1 = CallFunc_NotEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetTotalSkillPointsEarned_ReturnValue = CallFunc_GetTotalSkillPointsEarned_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color = CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color;
	Parms.CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid = CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetTileMissionDetails_MissionDetails = CallFunc_GetTileMissionDetails_MissionDetails;
	Parms.CallFunc_GetTileMissionDetails_ReturnValue = CallFunc_GetTileMissionDetails_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color = CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color;
	Parms.CallFunc_Get_Conning_Color_From_Difficulty_Value_Success = CallFunc_Get_Conning_Color_From_Difficulty_Value_Success;
	Parms.CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText = CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText;
	Parms.CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue = CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetTileMissionDetails_MissionDetails1 = CallFunc_GetTileMissionDetails_MissionDetails1;
	Parms.CallFunc_GetTileMissionDetails_ReturnValue1 = CallFunc_GetTileMissionDetails_ReturnValue1;
	Parms.K2Node_CustomEvent_EventName1 = K2Node_CustomEvent_EventName1;
	Parms.K2Node_CustomEvent_EmitterTime1 = K2Node_CustomEvent_EmitterTime1;
	Parms.K2Node_CustomEvent_Location1 = K2Node_CustomEvent_Location1;
	Parms.K2Node_CustomEvent_Velocity1 = K2Node_CustomEvent_Velocity1;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_EmitterTime = K2Node_CustomEvent_EmitterTime;
	Parms.K2Node_CustomEvent_ParticleTime = K2Node_CustomEvent_ParticleTime;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_Material_Instance_Dynamic = K2Node_CustomEvent_Material_Instance_Dynamic;
	Parms.K2Node_CustomEvent_Unique_Net_Id = K2Node_CustomEvent_Unique_Net_Id;
	Parms.CallFunc_GetHomeBaseInfoForPlayer_Result = CallFunc_GetHomeBaseInfoForPlayer_Result;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue = CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;
	Parms.CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue = CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue = CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
