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


// Function StatsListItemWIdget.StatsListItemWIdget_C.Initial Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::Initial_Reset()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "Initial Reset");

	Params::UStatsListItemWIdget_C_Initial_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Populate-Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::Populate_Update()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "Populate-Update");

	Params::UStatsListItemWIdget_C_Populate_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHightlight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::SetTextAndBorderHighlight(bool bHightlight, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "SetTextAndBorderHighlight");

	Params::UStatsListItemWIdget_C_SetTextAndBorderHighlight_Params Parms;
	Parms.bHightlight = bHightlight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UStatsListItemWIdget_C::GetListItemTooltipWidget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "GetListItemTooltipWidget");

	Params::UStatsListItemWIdget_C_GetListItemTooltipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::SetStatIcon(const struct FSlateBrush& NewParam)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "SetStatIcon");

	Params::UStatsListItemWIdget_C_SetStatIcon_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortDisplayAttribute       LocalCurrentAttribute                                            (Edit, BlueprintVisible)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortClampState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortComparisonType     Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortComparisonType     Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortClampState         Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, enum class EFortClampState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortComparisonType Temp_byte_Variable4, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, enum class EFortComparisonType Temp_byte_Variable5, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, enum class EFortClampState Temp_byte_Variable10, float K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "UpdateBuffArrows");

	Params::UStatsListItemWIdget_C_UpdateBuffArrows_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;
	Parms.LocalCurrentAttribute = LocalCurrentAttribute;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatsListItemWIdget_C::UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "UpdateBasicPairLabel");

	Params::UStatsListItemWIdget_C_UpdateBasicPairLabel_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatsListItemWIdget_C::UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "UpdateValueText");

	Params::UStatsListItemWIdget_C_UpdateValueText_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortStatValueDisplayTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::UpdateType(const struct FFortDisplayAttribute& CurrentAttribute, enum class EFortStatValueDisplayType Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "UpdateType");

	Params::UStatsListItemWIdget_C_UpdateType_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortDisplayAttribute       LocalCurrentAttribute                                            (Edit, BlueprintVisible)
// struct FLinearColor                BuffColor                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColor                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Base                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Buff                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortComparisonType     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, const struct FLinearColor& BuffColor, const struct FLinearColor& BaseColor, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, enum class EFortBuffState Temp_byte_Variable, enum class EFortBuffState Temp_byte_Variable1, class UClass* K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, enum class EFortComparisonType Temp_byte_Variable2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "UpdateColors");

	Params::UStatsListItemWIdget_C_UpdateColors_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;
	Parms.LocalCurrentAttribute = LocalCurrentAttribute;
	Parms.BuffColor = BuffColor;
	Parms.BaseColor = BaseColor;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Base___Buff_Colors_Base = CallFunc_Get_Base___Buff_Colors_Base;
	Parms.CallFunc_Get_Base___Buff_Colors_Buff = CallFunc_Get_Base___Buff_Colors_Buff;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute       CurrentAttribute                                                 (Edit, BlueprintVisible)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()

void UStatsListItemWIdget_C::Update(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "Update");

	Params::UStatsListItemWIdget_C_Update_Params Parms;
	Parms.CurrentAttribute = CurrentAttribute;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::ValueChanged(float Delta)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "ValueChanged");

	Params::UStatsListItemWIdget_C_ValueChanged_Params Parms;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::Construct()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "Construct");

	Params::UStatsListItemWIdget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::PreviewEnded()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "PreviewEnded");

	Params::UStatsListItemWIdget_C_PreviewEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::PreviewStarted()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "PreviewStarted");

	Params::UStatsListItemWIdget_C_PreviewStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatsListItemWIdget_C::DisplayAttributeChanged()
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "DisplayAttributeChanged");

	Params::UStatsListItemWIdget_C_DisplayAttributeChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListItemWIdget_C::ExecuteUbergraph_StatsListItemWIdget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, float K2Node_Event_Delta)
{
	static auto Func = Class->GetFunction("StatsListItemWIdget_C", "ExecuteUbergraph_StatsListItemWIdget");

	Params::UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
