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


// Function HitPointBar.HitPointBar_C.SetInitialValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetShield_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxShield_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxStamina_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStamina_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::SetInitialValues(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetShield_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetMaxStamina_ReturnValue, float CallFunc_GetStamina_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "SetInitialValues");

	Params::UHitPointBar_C_SetInitialValues_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShield_ReturnValue = CallFunc_GetShield_ReturnValue;
	Parms.CallFunc_GetMaxShield_ReturnValue = CallFunc_GetMaxShield_ReturnValue;
	Parms.CallFunc_GetMaxStamina_ReturnValue = CallFunc_GetMaxStamina_ReturnValue;
	Parms.CallFunc_GetStamina_ReturnValue = CallFunc_GetStamina_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVolatile                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressBarType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitPointBar_C::UpdateVolatileForUpdate(bool NewVolatile, enum class EProgressBarType Temp_byte_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "UpdateVolatileForUpdate");

	Params::UHitPointBar_C_UpdateVolatileForUpdate_Params Parms;
	Parms.NewVolatile = NewVolatile;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Update(bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "Update");

	Params::UHitPointBar_C_Update_Params Parms;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Update_Delta_Bar(float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "Update Delta Bar");

	Params::UHitPointBar_C_Update_Delta_Bar_Params Parms;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable6                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable7                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable8                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable9                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable10                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable11                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable12                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable13                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable14                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarType        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select6_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Initialize_Bar(enum class EProgressBarType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, enum class EProgressBarType Temp_byte_Variable1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EProgressBarType Temp_byte_Variable2, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, enum class EProgressBarType Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable6, const struct FLinearColor& Temp_struct_Variable7, const struct FLinearColor& Temp_struct_Variable8, const struct FMargin& K2Node_MakeStruct_Margin, class UTexture2D* Temp_object_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, enum class EProgressBarType Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable9, const struct FLinearColor& Temp_struct_Variable10, const struct FLinearColor& Temp_struct_Variable11, enum class EProgressBarType Temp_byte_Variable5, const struct FLinearColor& Temp_struct_Variable12, const struct FLinearColor& Temp_struct_Variable13, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& Temp_struct_Variable14, enum class EProgressBarType Temp_byte_Variable6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UTexture2D* K2Node_Select2_Default, class UClass* K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, const struct FLinearColor& K2Node_Select6_Default)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "Initialize Bar");

	Params::UHitPointBar_C_Initialize_Bar_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.Temp_struct_Variable10 = Temp_struct_Variable10;
	Parms.Temp_struct_Variable11 = Temp_struct_Variable11;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.Temp_struct_Variable13 = Temp_struct_Variable13;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_struct_Variable14 = Temp_struct_Variable14;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "UpdateCurrentValueWithoutReason");

	Params::UHitPointBar_C_UpdateCurrentValueWithoutReason_Params Parms;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Update Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Update_Fill_Bar(float Temp_float_Variable, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "Update Fill Bar");

	Params::UHitPointBar_C_Update_Fill_Bar_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue1 = CallFunc_FMax_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHitPointModificationReasonReason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UHitPointBar_C::UpdateCurrentValue(float Current, enum class EFortHitPointModificationReason Reason, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_FMax_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "UpdateCurrentValue");

	Params::UHitPointBar_C_UpdateCurrentValue_Params Parms;
	Parms.Current = Current;
	Parms.Reason = Reason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UHitPointBar_C::UpdateMaxValue(float Max, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "UpdateMaxValue");

	Params::UHitPointBar_C_UpdateMaxValue_Params Parms;
	Parms.Max = Max;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "PreConstruct");

	Params::UHitPointBar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "Tick");

	Params::UHitPointBar_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::ExecuteUbergraph_HitPointBar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static auto Func = Class->GetFunction("HitPointBar_C", "ExecuteUbergraph_HitPointBar");

	Params::UHitPointBar_C_ExecuteUbergraph_HitPointBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
