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


// Function IconTextButtonReplay.IconTextButtonReplay_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::ActivateButton()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "ActivateButton");

	Params::UIconTextButtonReplay_C_ActivateButton_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButtonReplay_C::UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "UpdateTextStyle");

	Params::UIconTextButtonReplay_C_UpdateTextStyle_Params Parms;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    ContentAlignment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButtonReplay_C::SetContentAlignment(enum class EHorizontalAlignment ContentAlignment)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "SetContentAlignment");

	Params::UIconTextButtonReplay_C_SetContentAlignment_Params Parms;
	Parms.ContentAlignment = ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*                  CallFunc_GetContentSlot_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "UpdateContentAlignment");

	Params::UIconTextButtonReplay_C_UpdateContentAlignment_Params Parms;
	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ControllerInputStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "SetMouseKeyboardStyle");

	Params::UIconTextButtonReplay_C_SetMouseKeyboardStyle_Params Parms;
	Parms.ControllerInputStyle = ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::UpdateStyle(bool UsingGamepad)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "UpdateStyle");

	Params::UIconTextButtonReplay_C_UpdateStyle_Params Parms;
	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayText_ReturnValue                              ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UIconTextButtonReplay_C::UpdateText(bool Temp_bool_Variable, class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "UpdateText");

	Params::UIconTextButtonReplay_C_UpdateText_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisplayText_ReturnValue = CallFunc_GetDisplayText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ControllerInputStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::SetControllerStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "SetControllerStyle");

	Params::UIconTextButtonReplay_C_SetControllerStyle_Params Parms;
	Parms.ControllerInputStyle = ControllerInputStyle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "UpdateTextAndStyle");

	Params::UIconTextButtonReplay_C_UpdateTextAndStyle_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "InitializeButton");

	Params::UIconTextButtonReplay_C_InitializeButton_Params Parms;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReplay_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "Set Icon");

	Params::UIconTextButtonReplay_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButtonReplay_C::Set_Text(class FText ButtonText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "Set Text");

	Params::UIconTextButtonReplay_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "OnCurrentTextStyleChanged");

	Params::UIconTextButtonReplay_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "PreConstruct");

	Params::UIconTextButtonReplay_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButtonReplay_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "SetTabLabelInfo");

	Params::UIconTextButtonReplay_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButtonReplay_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UIconTextButtonReplay_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UIconTextButtonReplay_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "OnTriggeredInputActionChanged");

	Params::UIconTextButtonReplay_C_OnTriggeredInputActionChanged_Params Parms;
	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButtonReplay_C::OnActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "OnActionProgress");

	Params::UIconTextButtonReplay_C_OnActionProgress_Params Parms;
	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::OnActionComplete()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "OnActionComplete");

	Params::UIconTextButtonReplay_C_OnActionComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::Construct()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "Construct");

	Params::UIconTextButtonReplay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "BP_OnHovered");

	Params::UIconTextButtonReplay_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "BP_OnUnhovered");

	Params::UIconTextButtonReplay_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "BP_OnSelected");

	Params::UIconTextButtonReplay_C_BP_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTextButtonReplay_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "BP_OnDeselected");

	Params::UIconTextButtonReplay_C_BP_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.ExecuteUbergraph_IconTextButtonReplay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_Event_NewTriggeredAction                                  (ConstParm, NoDestructor)
// float                              K2Node_Event_HeldPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SlateBrush_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButtonReplay_C::ExecuteUbergraph_IconTextButtonReplay(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_ComponentBoundEvent_bUsingGamepad, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("IconTextButtonReplay_C", "ExecuteUbergraph_IconTextButtonReplay");

	Params::UIconTextButtonReplay_C_ExecuteUbergraph_IconTextButtonReplay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentInputType_ReturnValue1 = CallFunc_GetCurrentInputType_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.K2Node_Event_NewTriggeredAction = K2Node_Event_NewTriggeredAction;
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_EqualEqual_SlateBrush_ReturnValue = CallFunc_EqualEqual_SlateBrush_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
