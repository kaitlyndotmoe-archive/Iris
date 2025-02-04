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


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryScreen_C::ToggleBackAction(bool bShouldShow, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue1)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "ToggleBackAction");

	Params::UPurchaseHistoryScreen_C_ToggleBackAction_Params Parms;
	Parms.bShouldShow = bShouldShow;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue1 = CallFunc_HasInputActionHandler_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandlePreviousStepAction_bPassthrough                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryScreen_C::HandleBack(bool* Passthrough, bool CallFunc_HandlePreviousStepAction_bPassthrough)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "HandleBack");

	Params::UPurchaseHistoryScreen_C_HandleBack_Params Parms;
	Parms.CallFunc_HandlePreviousStepAction_bPassthrough = CallFunc_HandlePreviousStepAction_bPassthrough;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UPurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPurchaseHistoryScreen_C::Construct()
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "Construct");

	Params::UPurchaseHistoryScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMtxPurchaseHistory         PurchaseHistory                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UPurchaseHistoryScreen_C::OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnItemRefresh");

	Params::UPurchaseHistoryScreen_C_OnItemRefresh_Params Parms;
	Parms.PurchaseHistory = PurchaseHistory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPurchaseReturnStep     CurrentStep                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::OnPopulateView(enum class EPurchaseReturnStep CurrentStep)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnPopulateView");

	Params::UPurchaseHistoryScreen_C_OnPopulateView_Params Parms;
	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPurchaseHistoryScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnActivated");

	Params::UPurchaseHistoryScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPurchaseHistoryScreen_C::OnNoPurchasesAvailable()
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnNoPurchasesAvailable");

	Params::UPurchaseHistoryScreen_C_OnNoPurchasesAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UPurchaseHistoryScreen_C_BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	Params::UPurchaseHistoryScreen_C_BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	Params::UPurchaseHistoryScreen_C_BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPurchaseHistoryScreen_C::OnBeginRefundSubmission()
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnBeginRefundSubmission");

	Params::UPurchaseHistoryScreen_C_OnBeginRefundSubmission_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MtxRefunded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ReturnedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TicketIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnEndRefundSubmission");

	Params::UPurchaseHistoryScreen_C_OnEndRefundSubmission_Params Parms;
	Parms.bSuccess = bSuccess;
	Parms.MtxRefunded = MtxRefunded;
	Parms.ReturnedItem = ReturnedItem;
	Parms.TicketIndex = TicketIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.InitializeTickets
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumTicketsAvailableToUse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::InitializeTickets(int32 NumTicketsAvailableToUse)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "InitializeTickets");

	Params::UPurchaseHistoryScreen_C_InitializeTickets_Params Parms;
	Parms.NumTicketsAvailableToUse = NumTicketsAvailableToUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMtxPurchaseHistory         K2Node_Event_PurchaseHistory                                     ()
// enum class EPurchaseReturnStep     K2Node_Event_CurrentStep                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_MtxRefunded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_ReturnedItem                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TicketIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumTicketsAvailableToUse                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::ExecuteUbergraph_PurchaseHistoryScreen(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FMtxPurchaseHistory& K2Node_Event_PurchaseHistory, enum class EPurchaseReturnStep K2Node_Event_CurrentStep, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bSuccess, int32 K2Node_Event_MtxRefunded, class UFortItemDefinition* K2Node_Event_ReturnedItem, int32 K2Node_Event_TicketIndex, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_Event_NumTicketsAvailableToUse, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("PurchaseHistoryScreen_C", "ExecuteUbergraph_PurchaseHistoryScreen");

	Params::UPurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Event_PurchaseHistory = K2Node_Event_PurchaseHistory;
	Parms.K2Node_Event_CurrentStep = K2Node_Event_CurrentStep;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_MtxRefunded = K2Node_Event_MtxRefunded;
	Parms.K2Node_Event_ReturnedItem = K2Node_Event_ReturnedItem;
	Parms.K2Node_Event_TicketIndex = K2Node_Event_TicketIndex;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_NumTicketsAvailableToUse = K2Node_Event_NumTicketsAvailableToUse;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
