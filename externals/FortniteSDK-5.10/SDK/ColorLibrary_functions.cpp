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


// Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                StyleSheetOut                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_HarvestWeakPoint_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get HarvestWeakPoint Color");

	Params::UColorLibrary_C_Get_HarvestWeakPoint_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (StyleSheetOut != nullptr)
		*StyleSheetOut = Parms.StyleSheetOut;

}


// Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStatValueDisplayTypeDisplay_Type                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Buff_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
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

void UColorLibrary_C::Get_Base___Buff_Colors(enum class EFortStatValueDisplayType Display_Type, enum class EFortBuffState Buff_State, const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, enum class EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EFortBuffState Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Base & Buff Colors");

	Params::UColorLibrary_C_Get_Base___Buff_Colors_Params Parms;
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


// Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Bolt_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Bolt Elemental Color");

	Params::UColorLibrary_C_Get_Bolt_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Ice_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Ice Elemental Color");

	Params::UColorLibrary_C_Get_Ice_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Fire_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Fire Elemental Color");

	Params::UColorLibrary_C_Get_Fire_Elemental_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function ColorLibrary.ColorLibrary_C.Get Unique Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Unique_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Unique Color");

	Params::UColorLibrary_C_Get_Unique_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function ColorLibrary.ColorLibrary_C.Get Debuff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Debuff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Debuff Color");

	Params::UColorLibrary_C_Get_Debuff_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function ColorLibrary.ColorLibrary_C.Get Buff Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorStylesheet            Stylesheet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorLibrary_C::Get_Buff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("ColorLibrary_C", "Get Buff Color");

	Params::UColorLibrary_C_Get_Buff_Color_Params Parms;
	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
	if (Color != nullptr)
		*Color = Parms.Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
