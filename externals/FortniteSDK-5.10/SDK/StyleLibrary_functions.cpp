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


// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Difficulty_Value                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Difficulty_Linear_Color                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Invalid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                DifficultyColor                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStyleLibrary_C::Get_Conning_Color_For_Specific_Difficulty(int32 Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid, const struct FLinearColor& DifficultyColor, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Conning Color For Specific Difficulty");

	Params::UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params Parms;
	Parms.Difficulty_Value = Difficulty_Value;
	Parms.__WorldContext = __WorldContext;
	Parms.DifficultyColor = DifficultyColor;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = Parms.Difficulty_Linear_Color;

	if (Invalid != nullptr)
		*Invalid = Parms.Invalid;

}


// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Player_Skill_Level                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Content_Difficulty_Level                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameDifficultyInfo         Game_Difficulty_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Content_Skill_Points                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Difficulty_Linear_Color                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ToolTipText                                                      (Parm, OutParm)
// int32                              DifficultyValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                DifficultyColorNames                                             (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                DifficultyTooltips                                               (Edit, BlueprintVisible, ZeroConstructor)
// TArray<int32>                      DifficultyIndices                                                (Edit, BlueprintVisible, ZeroConstructor)
// TArray<struct FLinearColor>        DifficultyColors                                                 (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FName>                RowNames                                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              DifficultyOut                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Content_DL_In                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DifficultyColorName                                              (Edit, BlueprintVisible)
// class FText                        ConningTooltipText                                               (Edit, BlueprintVisible)
// int32                              Content_SP                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Player_Skill_Level_In                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      SPCutoffValues                                                   (Edit, BlueprintVisible, ZeroConstructor)
// struct FLinearColor                DifficultyColor                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// class FText                        CallFunc_Array_Get_Item1                                         ()
// struct FLinearColor                CallFunc_Array_Get_Item2                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FName                        CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)

void UStyleLibrary_C::Get_Conning_Color_From_Difficulty_Value(int32 Player_Skill_Level, float Content_Difficulty_Level, const struct FGameDifficultyInfo& Game_Difficulty_Info, int32 Content_Skill_Points, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, class FText* ToolTipText, int32* DifficultyValue, const TArray<class FText>& DifficultyColorNames, const TArray<class FText>& DifficultyTooltips, const TArray<int32>& DifficultyIndices, const TArray<struct FLinearColor>& DifficultyColors, const TArray<class FName>& RowNames, int32 DifficultyOut, float Content_DL_In, class FText DifficultyColorName, class FText ConningTooltipText, int32 Content_SP, bool Valid, int32 Player_Skill_Level_In, const TArray<float>& SPCutoffValues, const struct FLinearColor& DifficultyColor, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item1, const struct FLinearColor& CallFunc_Array_Get_Item2, TArray<float>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array1, class FName CallFunc_Array_Get_Item3, int32 Temp_int_Array_Index_Variable, TArray<struct FLinearColor>& K2Node_MakeArray_Array2, int32 CallFunc_Array_Get_Item4, bool Temp_bool_True_if_break_was_hit_Variable, float CallFunc_Array_Get_Item5, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<int32>& K2Node_MakeArray_Array3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FText>& K2Node_MakeArray_Array4, TArray<class FText>& K2Node_MakeArray_Array5)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Conning Color From Difficulty Value");

	Params::UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params Parms;
	Parms.Player_Skill_Level = Player_Skill_Level;
	Parms.Content_Difficulty_Level = Content_Difficulty_Level;
	Parms.Game_Difficulty_Info = Game_Difficulty_Info;
	Parms.Content_Skill_Points = Content_Skill_Points;
	Parms.__WorldContext = __WorldContext;
	Parms.DifficultyColorNames = DifficultyColorNames;
	Parms.DifficultyTooltips = DifficultyTooltips;
	Parms.DifficultyIndices = DifficultyIndices;
	Parms.DifficultyColors = DifficultyColors;
	Parms.RowNames = RowNames;
	Parms.DifficultyOut = DifficultyOut;
	Parms.Content_DL_In = Content_DL_In;
	Parms.DifficultyColorName = DifficultyColorName;
	Parms.ConningTooltipText = ConningTooltipText;
	Parms.Content_SP = Content_SP;
	Parms.Valid = Valid;
	Parms.Player_Skill_Level_In = Player_Skill_Level_In;
	Parms.SPCutoffValues = SPCutoffValues;
	Parms.DifficultyColor = DifficultyColor;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;

	UObject::ProcessEvent(Func, &Parms);
	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = Parms.Difficulty_Linear_Color;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ToolTipText != nullptr)
		*ToolTipText = Parms.ToolTipText;

	if (DifficultyValue != nullptr)
		*DifficultyValue = Parms.DifficultyValue;

}


// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                StyleSheetOut                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get HarvestWeakPoint Color");

	Params::UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (StyleSheetOut != nullptr)
		*StyleSheetOut = Parms.StyleSheetOut;

}


// Function StyleLibrary.StyleLibrary_C.ResizeBrush
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          BrushSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 BaseBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 NewParam                                                         (Parm, OutParm)
// struct FVector2D                   CallFunc_Get_Standard_Icon_Size_Icon_Size                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UStyleLibrary_C::ResizeBrush(enum class EFortBrushSize BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* NewParam, const struct FVector2D& CallFunc_Get_Standard_Icon_Size_Icon_Size, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "ResizeBrush");

	Params::UStyleLibrary_C_ResizeBrush_Params Parms;
	Parms.BrushSize = BrushSize;
	Parms.BaseBrush = BaseBrush;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Standard_Icon_Size_Icon_Size = CallFunc_Get_Standard_Icon_Size_Icon_Size;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);
	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStatValueDisplayTypeDisplay_Type                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Buff_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Base                                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Buff                                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStatValueDisplayTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Base___Buff_Colors(enum class EFortStatValueDisplayType Display_Type, enum class EFortBuffState Buff_State, const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, enum class EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EFortBuffState Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Base & Buff Colors");

	Params::UStyleLibrary_C_Get_Base___Buff_Colors_Params Parms;
	Parms.Display_Type = Display_Type;
	Parms.Buff_State = Buff_State;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (Base != nullptr)
		*Base = Parms.Base;

	if (Buff != nullptr)
		*Buff = Parms.Buff;

}


// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Bolt Elemental Color");

	Params::UStyleLibrary_C_Get_Bolt_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Ice_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Ice Elemental Color");

	Params::UStyleLibrary_C_Get_Ice_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Fire_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Fire Elemental Color");

	Params::UStyleLibrary_C_Get_Fire_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Unique Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Unique_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Unique Color");

	Params::UStyleLibrary_C_Get_Unique_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Item Size
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EFortBrushSize          Brush_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Item_Size                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)

void UStyleLibrary_C::Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Item Size");

	Params::UStyleLibrary_C_Get_Item_Size_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Item_Size != nullptr)
		*Item_Size = Parms.Item_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Debuff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Debuff Color");

	Params::UStyleLibrary_C_Get_Debuff_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Buff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Buff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Buff Color");

	Params::UStyleLibrary_C_Get_Buff_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EFortBrushSize          Brush_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Icon_Size                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)

void UStyleLibrary_C::Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Item Icon Size");

	Params::UStyleLibrary_C_Get_Item_Icon_Size_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Icon_Size != nullptr)
		*Icon_Size = Parms.Icon_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EFortBrushSize          Brush_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Icon_Size                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)

void UStyleLibrary_C::Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Standard Icon Size");

	Params::UStyleLibrary_C_Get_Standard_Icon_Size_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Icon_Size != nullptr)
		*Icon_Size = Parms.Icon_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Theme
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EFortUITheme            Theme_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUITheme                Theme                                                            (Parm, OutParm, HasGetValueTypeHash)
// enum class EFortUITheme            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUITheme                K2Node_Select_Default                                            (HasGetValueTypeHash)

void UStyleLibrary_C::Get_Theme(const struct FFortUIStylesheet& Stylesheet, enum class EFortUITheme Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme, enum class EFortUITheme Temp_byte_Variable, const struct FFortUITheme& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Theme");

	Params::UStyleLibrary_C_Get_Theme_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.Theme_Type = Theme_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (Theme != nullptr)
		*Theme = Parms.Theme;

}


// Function StyleLibrary.StyleLibrary_C.Get Theme Color
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet           Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EFortUITheme            Theme_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIThemeColor       Color_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Theme_Color                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIThemeColor       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUITheme                CallFunc_Get_Theme_Theme                                         (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyleLibrary_C::Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, enum class EFortUITheme Theme_Type, enum class EFortUIThemeColor Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color, enum class EFortUIThemeColor Temp_byte_Variable, const struct FFortUITheme& CallFunc_Get_Theme_Theme, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StyleLibrary_C", "Get Theme Color");

	Params::UStyleLibrary_C_Get_Theme_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.Theme_Type = Theme_Type;
	Parms.Color_Type = Color_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get_Theme_Theme = CallFunc_Get_Theme_Theme;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (Theme_Color != nullptr)
		*Theme_Color = Parms.Theme_Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
