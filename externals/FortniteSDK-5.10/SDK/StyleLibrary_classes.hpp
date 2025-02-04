#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass StyleLibrary.StyleLibrary_C
class UStyleLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StyleLibrary_C");
		return Clss;
	}

	void Get_Conning_Color_For_Specific_Difficulty(int32 Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid, const struct FLinearColor& DifficultyColor, bool K2Node_SwitchInteger_CmpSuccess);
	void Get_Conning_Color_From_Difficulty_Value(int32 Player_Skill_Level, float Content_Difficulty_Level, const struct FGameDifficultyInfo& Game_Difficulty_Info, int32 Content_Skill_Points, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, class FText* ToolTipText, int32* DifficultyValue, const TArray<class FText>& DifficultyColorNames, const TArray<class FText>& DifficultyTooltips, const TArray<int32>& DifficultyIndices, const TArray<struct FLinearColor>& DifficultyColors, const TArray<class FName>& RowNames, int32 DifficultyOut, float Content_DL_In, class FText DifficultyColorName, class FText ConningTooltipText, int32 Content_SP, bool Valid, int32 Player_Skill_Level_In, const TArray<float>& SPCutoffValues, const struct FLinearColor& DifficultyColor, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item1, const struct FLinearColor& CallFunc_Array_Get_Item2, TArray<float>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array1, class FName CallFunc_Array_Get_Item3, int32 Temp_int_Array_Index_Variable, TArray<struct FLinearColor>& K2Node_MakeArray_Array2, int32 CallFunc_Array_Get_Item4, bool Temp_bool_True_if_break_was_hit_Variable, float CallFunc_Array_Get_Item5, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<int32>& K2Node_MakeArray_Array3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FText>& K2Node_MakeArray_Array4, TArray<class FText>& K2Node_MakeArray_Array5);
	void Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	void ResizeBrush(enum class EFortBrushSize BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* NewParam, const struct FVector2D& CallFunc_Get_Standard_Icon_Size_Icon_Size, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Get_Base___Buff_Colors(enum class EFortStatValueDisplayType Display_Type, enum class EFortBuffState Buff_State, const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, enum class EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EFortBuffState Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default);
	void Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Ice_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Fire_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Unique_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	void Get_Debuff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Buff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	void Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, enum class EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue);
	void Get_Theme(const struct FFortUIStylesheet& Stylesheet, enum class EFortUITheme Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme, enum class EFortUITheme Temp_byte_Variable, const struct FFortUITheme& K2Node_Select_Default);
	void Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, enum class EFortUITheme Theme_Type, enum class EFortUIThemeColor Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color, enum class EFortUIThemeColor Temp_byte_Variable, const struct FFortUITheme& CallFunc_Get_Theme_Theme, const struct FLinearColor& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
