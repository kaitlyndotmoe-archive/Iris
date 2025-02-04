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


// Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldFadePerk_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::UpdatePerk(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_IsPerkHighlighted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_HasAbility_ReturnValue, bool Temp_bool_Variable4, bool CallFunc_ShouldFadePerk_Result, enum class ESlateVisibility K2Node_Select_Default, class UClass* K2Node_Select1_Default, class UClass* K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "UpdatePerk");

	Params::UPerkWidgetNew_C_UpdatePerk_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_ShouldFadePerk_Result = CallFunc_ShouldFadePerk_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPerkWidgetNew_C::Get_OverlayAbilityPerk_ToolTipWidget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "Get_OverlayAbilityPerk_ToolTipWidget");

	Params::UPerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIncludeName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIncludeDescription                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          IconSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseLargeFormatName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUIPerk                 Perk                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowMouseTooltips                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::InitializeSettings(bool bIncludeName, bool bIncludeDescription, enum class EFortBrushSize IconSize, bool bUseLargeFormatName, const struct FFortUIPerk& Perk, bool ShowMouseTooltips)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "InitializeSettings");

	Params::UPerkWidgetNew_C_InitializeSettings_Params Parms;
	Parms.bIncludeName = bIncludeName;
	Parms.bIncludeDescription = bIncludeDescription;
	Parms.IconSize = IconSize;
	Parms.bUseLargeFormatName = bUseLargeFormatName;
	Parms.Perk = Perk;
	Parms.ShowMouseTooltips = ShowMouseTooltips;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetHighlightColor_Color                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHighlightColor_Color1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPerkWidgetNew_C::HighlightBadge(const struct FLinearColor& CallFunc_GetHighlightColor_Color, const struct FLinearColor& CallFunc_GetHighlightColor_Color1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "HighlightBadge");

	Params::UPerkWidgetNew_C_HighlightBadge_Params Parms;
	Parms.CallFunc_GetHighlightColor_Color = CallFunc_GetHighlightColor_Color;
	Parms.CallFunc_GetHighlightColor_Color1 = CallFunc_GetHighlightColor_Color1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat                TooltipStat                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemTier           CallFunc_GetPerkTier_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// bool                               CallFunc_IsTierPerk_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue1                            ()
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetTierText_ReturnValue                                 ()
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// class FText                        K2Node_Select_Default                                            ()
// struct FTooltipStat                K2Node_MakeStruct_TooltipStat                                    (HasGetValueTypeHash)

void UPerkWidgetNew_C::GetPerkStat(struct FTooltipStat* TooltipStat, bool Temp_bool_Variable, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, bool CallFunc_IsTierPerk_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetTooltipTitle_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_GetTierText_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText K2Node_Select_Default, const struct FTooltipStat& K2Node_MakeStruct_TooltipStat)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "GetPerkStat");

	Params::UPerkWidgetNew_C_GetPerkStat_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPerkTier_ReturnValue = CallFunc_GetPerkTier_ReturnValue;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.CallFunc_IsTierPerk_ReturnValue = CallFunc_IsTierPerk_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetTooltipTitle_ReturnValue1 = CallFunc_GetTooltipTitle_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_GetTierText_ReturnValue = CallFunc_GetTierText_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_TooltipStat = K2Node_MakeStruct_TooltipStat;

	UObject::ProcessEvent(Func, &Parms);
	if (TooltipStat != nullptr)
		*TooltipStat = Parms.TooltipStat;

}


// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkWidgetNew_C::ShowTierImage()
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "ShowTierImage");

	Params::UPerkWidgetNew_C_ShowTierImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportBonusType   SupportPerkType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetTierAbilityBrush_SlateBrush                          ()
// bool                               CallFunc_IsTierPerk_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UPerkWidgetNew_C::SetupBadge(enum class EFortSupportBonusType SupportPerkType, const struct FSlateBrush& CallFunc_GetTierAbilityBrush_SlateBrush, bool CallFunc_IsTierPerk_ReturnValue, int32 CallFunc_GetRequiredLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "SetupBadge");

	Params::UPerkWidgetNew_C_SetupBadge_Params Parms;
	Parms.SupportPerkType = SupportPerkType;
	Parms.CallFunc_GetTierAbilityBrush_SlateBrush = CallFunc_GetTierAbilityBrush_SlateBrush;
	Parms.CallFunc_IsTierPerk_ReturnValue = CallFunc_IsTierPerk_ReturnValue;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportBonusType   SupportPerkType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSupportBonusType   CallFunc_GetSupportBonusType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::InitializeHeroBonusIcon(enum class EFortSupportBonusType SupportPerkType, enum class EFortSupportBonusType Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, class UObject* Temp_object_Variable2, enum class EFortSupportBonusType CallFunc_GetSupportBonusType_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "InitializeHeroBonusIcon");

	Params::UPerkWidgetNew_C_InitializeHeroBonusIcon_Params Parms;
	Parms.SupportPerkType = SupportPerkType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_GetSupportBonusType_ReturnValue = CallFunc_GetSupportBonusType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DescriptionText                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVerticalAlignment      Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTooltipTitle_ReturnValue                             ()
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::InitializeText(const class FString& DescriptionText, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable1, enum class EVerticalAlignment Temp_byte_Variable3, enum class EVerticalAlignment Temp_byte_Variable4, enum class EVerticalAlignment K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select1_Default, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTooltipTitle_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "InitializeText");

	Params::UPerkWidgetNew_C_InitializeText_Params Parms;
	Parms.DescriptionText = DescriptionText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface = K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTooltipTitle_ReturnValue = CallFunc_GetTooltipTitle_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::ShouldFadePerk(bool* Result, bool CallFunc_IsPerkHighlighted_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "ShouldFadePerk");

	Params::UPerkWidgetNew_C_ShouldFadePerk_Params Parms;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Buff_Color_Color                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::GetHighlightColor(struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, bool CallFunc_IsPerkHighlighted_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "GetHighlightColor");

	Params::UPerkWidgetNew_C_GetHighlightColor_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Get_Buff_Color_Color = CallFunc_Get_Buff_Color_Color;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 SlateBrush                                                       (Parm, OutParm)
// enum class EFortItemTier           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           CallFunc_GetPerkTier_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UPerkWidgetNew_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush, enum class EFortItemTier Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, enum class EFortItemTier CallFunc_GetPerkTier_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "GetTierAbilityBrush");

	Params::UPerkWidgetNew_C_GetTierAbilityBrush_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.CallFunc_GetPerkTier_ReturnValue = CallFunc_GetPerkTier_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);
	if (SlateBrush != nullptr)
		*SlateBrush = Parms.SlateBrush;

}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 CallFunc_GetIcon_Brush                                           ()
// bool                               CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            ()

void UPerkWidgetNew_C::InitializeAbilityPerk(bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "InitializeAbilityPerk");

	Params::UPerkWidgetNew_C_InitializeAbilityPerk_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_GetIcon_Brush = CallFunc_GetIcon_Brush;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetIcon_Brush                                           ()
// bool                               CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            ()

void UPerkWidgetNew_C::InitializeBasicPerk(const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "InitializeBasicPerk");

	Params::UPerkWidgetNew_C_InitializeBasicPerk_Params Parms;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIcon_Brush = CallFunc_GetIcon_Brush;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "PreConstruct");

	Params::UPerkWidgetNew_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkWidgetNew_C::OnCombinedTooltipDescriptionReady(class FText& Description)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "OnCombinedTooltipDescriptionReady");

	Params::UPerkWidgetNew_C_OnCombinedTooltipDescriptionReady_Params Parms;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// class FText                        K2Node_Event_Description                                         (ConstParm)

void UPerkWidgetNew_C::ExecuteUbergraph_PerkWidgetNew(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText K2Node_Event_Description)
{
	static auto Func = Class->GetFunction("PerkWidgetNew_C", "ExecuteUbergraph_PerkWidgetNew");

	Params::UPerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Event_Description = K2Node_Event_Description;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
