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


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPicker_C::NavigateToFirstItem(class UObject* CallFunc_BP_GetSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPicker_C", "NavigateToFirstItem");

	Params::UItemTransformKeyPicker_C_NavigateToFirstItem_Params Parms;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   InItem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPicker_C::NavigateToSelectedItem(class UFortItem* InItem, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPicker_C", "NavigateToSelectedItem");

	Params::UItemTransformKeyPicker_C_NavigateToSelectedItem_Params Parms;
	Parms.InItem = InItem;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.GetSelectedKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedKey                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPicker_C::GetSelectedKey(class UFortItem** SelectedKey, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPicker_C", "GetSelectedKey");

	Params::UItemTransformKeyPicker_C_GetSelectedKey_Params Parms;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (SelectedKey != nullptr)
		*SelectedKey = Parms.SelectedKey;

}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            AccountKey                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPicker_C::SetSelectedKey(class UFortAccountItem* AccountKey)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPicker_C", "SetSelectedKey");

	Params::UItemTransformKeyPicker_C_SetSelectedKey_Params Parms;
	Parms.AccountKey = AccountKey;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
