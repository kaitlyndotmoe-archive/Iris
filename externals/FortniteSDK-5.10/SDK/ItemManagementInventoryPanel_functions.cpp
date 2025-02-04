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


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Population Anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementItemTileButton_C*K2Node_DynamicCast_AsItem_Management_Item_Tile_Button            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::Population_Anim(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UItemManagementItemTileButton_C* K2Node_DynamicCast_AsItem_Management_Item_Tile_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "Population Anim");

	Params::UItemManagementInventoryPanel_C_Population_Anim_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Item_Tile_Button = K2Node_DynamicCast_AsItem_Management_Item_Tile_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Trigger Initial Population Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementItemTileButton_C*K2Node_DynamicCast_AsItem_Management_Item_Tile_Button            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::Trigger_Initial_Population_Reset(int32 Temp_int_Variable, int32 CallFunc_GetNumItems_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UItemManagementItemTileButton_C* K2Node_DynamicCast_AsItem_Management_Item_Tile_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "Trigger Initial Population Reset");

	Params::UItemManagementInventoryPanel_C_Trigger_Initial_Population_Reset_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Item_Tile_Button = K2Node_DynamicCast_AsItem_Management_Item_Tile_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Trigger Population Anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UItemManagementInventoryPanel_C::Trigger_Population_Anim(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "Trigger Population Anim");

	Params::UItemManagementInventoryPanel_C_Trigger_Population_Anim_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateStorageTextVisbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageCapacity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDeployableBaseManager*  CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::UpdateStorageTextVisbility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "UpdateStorageTextVisbility");

	Params::UItemManagementInventoryPanel_C_UpdateStorageTextVisbility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetStorageCapacity_ReturnValue = CallFunc_GetStorageCapacity_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.PrepOpeningInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TrapsTag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTrapByTag_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectTrapByItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemToDetail_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::PrepOpeningInventory(class FName ActionName, const struct FGameplayTag& TrapsTag, bool K2Node_SwitchName_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, bool CallFunc_SelectTrapByTag_Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectTrapByItem_Success, bool CallFunc_IsGameplayTagValid_ReturnValue, class UFortItem* CallFunc_GetItemToDetail_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "PrepOpeningInventory");

	Params::UItemManagementInventoryPanel_C_PrepOpeningInventory_Params Parms;
	Parms.ActionName = ActionName;
	Parms.TrapsTag = TrapsTag;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue1 = CallFunc_BP_GetSelectedItem_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue = CallFunc_GetQuickBarSlottedItem_ReturnValue;
	Parms.CallFunc_SelectTrapByTag_Success = CallFunc_SelectTrapByTag_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectTrapByItem_Success = CallFunc_SelectTrapByItem_Success;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetItemToDetail_ReturnValue = CallFunc_GetItemToDetail_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::SelectTrapByItem(class UFortItem* Item, bool* Success, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "SelectTrapByItem");

	Params::UItemManagementInventoryPanel_C_SelectTrapByItem_Params Parms;
	Parms.Item = Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::SelectTrapByTag(const struct FGameplayTag& Tag, bool* Success, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "SelectTrapByTag");

	Params::UItemManagementInventoryPanel_C_SelectTrapByTag_Params Parms;
	Parms.Tag = Tag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HideEquipSlotDragTargets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HideEquipSlotDragTargets()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HideEquipSlotDragTargets");

	Params::UItemManagementInventoryPanel_C_HideEquipSlotDragTargets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ShowEquipSlotDragTargets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::ShowEquipSlotDragTargets()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "ShowEquipSlotDragTargets");

	Params::UItemManagementInventoryPanel_C_ShowEquipSlotDragTargets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandlePinnedSchematicsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandlePinnedSchematicsChanged()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandlePinnedSchematicsChanged");

	Params::UItemManagementInventoryPanel_C_HandlePinnedSchematicsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.GetSelectedEquipSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelected_Selected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSelected_Selected1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSelected_Selected2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::GetSelectedEquipSlot(int32* Slot, bool CallFunc_IsSelected_Selected, bool CallFunc_IsSelected_Selected1, bool CallFunc_IsSelected_Selected2)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "GetSelectedEquipSlot");

	Params::UItemManagementInventoryPanel_C_GetSelectedEquipSlot_Params Parms;
	Parms.CallFunc_IsSelected_Selected = CallFunc_IsSelected_Selected;
	Parms.CallFunc_IsSelected_Selected1 = CallFunc_IsSelected_Selected1;
	Parms.CallFunc_IsSelected_Selected2 = CallFunc_IsSelected_Selected2;

	UObject::ProcessEvent(Func, &Parms);
	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ProcessSlotAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedSlot                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemToDetail_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropItemOnQuickBar_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCraftFailCause     CallFunc_CraftAndSlotSchematic_FailCause                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CraftAndSlotSchematic_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedEquipSlot_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::ProcessSlotAction(int32 SelectedSlot, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortItem* CallFunc_GetItemToDetail_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_DropItemOnQuickBar_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess1, enum class EFortCraftFailCause CallFunc_CraftAndSlotSchematic_FailCause, bool CallFunc_CraftAndSlotSchematic_ReturnValue, int32 CallFunc_GetSelectedEquipSlot_Slot, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "ProcessSlotAction");

	Params::UItemManagementInventoryPanel_C_ProcessSlotAction_Params Parms;
	Parms.SelectedSlot = SelectedSlot;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetItemToDetail_ReturnValue = CallFunc_GetItemToDetail_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_DropItemOnQuickBar_ReturnValue = CallFunc_DropItemOnQuickBar_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_CraftAndSlotSchematic_FailCause = CallFunc_CraftAndSlotSchematic_FailCause;
	Parms.CallFunc_CraftAndSlotSchematic_ReturnValue = CallFunc_CraftAndSlotSchematic_ReturnValue;
	Parms.CallFunc_GetSelectedEquipSlot_Slot = CallFunc_GetSelectedEquipSlot_Slot;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlotsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::UpdateEquipSlotsVisibility(class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "UpdateEquipSlotsVisibility");

	Params::UItemManagementInventoryPanel_C_UpdateEquipSlotsVisibility_Params Parms;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen1 = K2Node_DynamicCast_AsItem_Management_Screen1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::UpdateEquipSlots()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "UpdateEquipSlots");

	Params::UItemManagementInventoryPanel_C_UpdateEquipSlots_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateRecycleInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumItemsToMulch_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::UpdateRecycleInfo(int32 CallFunc_GetNumItemsToMulch_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "UpdateRecycleInfo");

	Params::UItemManagementInventoryPanel_C_UpdateRecycleInfo_Params Parms;
	Parms.CallFunc_GetNumItemsToMulch_ReturnValue = CallFunc_GetNumItemsToMulch_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SetUniqueFeatures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::SetUniqueFeatures(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "SetUniqueFeatures");

	Params::UItemManagementInventoryPanel_C_SetUniqueFeatures_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandleDifferentFilterSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleDifferentFilterSetBP");

	Params::UItemManagementInventoryPanel_C_HandleDifferentFilterSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentSortTypeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandleDifferentSortTypeSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleDifferentSortTypeSetBP");

	Params::UItemManagementInventoryPanel_C_HandleDifferentSortTypeSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementInventoryPanel_C_BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandleDifferentItemManagementModeSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleDifferentItemManagementModeSetBP");

	Params::UItemManagementInventoryPanel_C_HandleDifferentItemManagementModeSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleSetOfItemsToMulchChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandleSetOfItemsToMulchChangedBP()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleSetOfItemsToMulchChangedBP");

	Params::UItemManagementInventoryPanel_C_HandleSetOfItemsToMulchChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "Construct");

	Params::UItemManagementInventoryPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "Destruct");

	Params::UItemManagementInventoryPanel_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature");

	Params::UItemManagementInventoryPanel_C_BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFrontendInventoryFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementInventoryPanel_C::HandleDifferentFrontendInventoryFilterSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleDifferentFrontendInventoryFilterSetBP");

	Params::UItemManagementInventoryPanel_C_HandleDifferentFrontendInventoryFilterSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleQuickBarChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBarType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleQuickBarChangedBP");

	Params::UItemManagementInventoryPanel_C_HandleQuickBarChangedBP_Params Parms;
	Parms.QuickBarType = QuickBarType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementInventoryPanel_C_BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleCursorModeChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCursorModeEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementInventoryPanel_C::HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "HandleCursorModeChangedBP");

	Params::UItemManagementInventoryPanel_C_HandleCursorModeChangedBP_Params Parms;
	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ExecuteUbergraph_ItemManagementInventoryPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCriterionDisplayNameOfSortType_ReturnValue           ()
// class FText                        CallFunc_GetQualifiedFilterDisplayName_ReturnValue               ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItemDefinition*> CallFunc_GetUpgradeItemDefinitionsForCurrentInventory_ReturnValue(ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCount_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_Event_QuickBarType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToDetail_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonBorder*               K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCursorModeEnabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ActionName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_CursorModeContentWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementInventoryPanel_C::ExecuteUbergraph_ItemManagementInventoryPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Array_Index_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCriterionDisplayNameOfSortType_ReturnValue, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetUpgradeItemDefinitionsForCurrentInventory_ReturnValue, class UFortItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemCount_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class EFortQuickBars K2Node_Event_QuickBarType, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemManagementMode Temp_byte_Variable2, class UFortItem* CallFunc_GetItemToDetail_ReturnValue, class UCommonBorder* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class ESlateVisibility K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bCursorModeEnabled, class FName K2Node_Event_ActionName, class UUserWidget* K2Node_Event_CursorModeContentWidget, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementInventoryPanel_C", "ExecuteUbergraph_ItemManagementInventoryPanel");

	Params::UItemManagementInventoryPanel_C_ExecuteUbergraph_ItemManagementInventoryPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCriterionDisplayNameOfSortType_ReturnValue = CallFunc_GetCriterionDisplayNameOfSortType_ReturnValue;
	Parms.CallFunc_GetQualifiedFilterDisplayName_ReturnValue = CallFunc_GetQualifiedFilterDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetUpgradeItemDefinitionsForCurrentInventory_ReturnValue = CallFunc_GetUpgradeItemDefinitionsForCurrentInventory_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_Event_QuickBarType = K2Node_Event_QuickBarType;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetItemToDetail_ReturnValue = CallFunc_GetItemToDetail_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bCursorModeEnabled = K2Node_Event_bCursorModeEnabled;
	Parms.K2Node_Event_ActionName = K2Node_Event_ActionName;
	Parms.K2Node_Event_CursorModeContentWidget = K2Node_Event_CursorModeContentWidget;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
