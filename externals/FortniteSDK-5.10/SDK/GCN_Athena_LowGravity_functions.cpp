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


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_Athena_LowGravity_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "OnRemove");

	Params::AGCN_Athena_LowGravity_C_OnRemove_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AGCN_Athena_LowGravity_C::Activated(class AActor* PlayerPawn, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, float CallFunc_GetTimeSeconds_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool K2Node_SwitchEnum1_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "Activated");

	Params::AGCN_Athena_LowGravity_C_Activated_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult1 = CallFunc_EvaluateCurveTableRow_OutResult1;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY1 = CallFunc_EvaluateCurveTableRow_OutXY1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCN_Athena_LowGravity_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "WhileActive");

	Params::AGCN_Athena_LowGravity_C_WhileActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_LowGravity_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "UserConstructionScript");

	Params::AGCN_Athena_LowGravity_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "ReceiveTick");

	Params::AGCN_Athena_LowGravity_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_Athena_LowGravity_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "K2_HandleGameplayCue");

	Params::AGCN_Athena_LowGravity_C_K2_HandleGameplayCue_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCN_Athena_LowGravity_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "ReceiveBeginPlay");

	Params::AGCN_Athena_LowGravity_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_LowGravity_C::ExpireTell()
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "ExpireTell");

	Params::AGCN_Athena_LowGravity_C_ExpireTell_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_LowGravity_C::ClearExpireTell()
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "ClearExpireTell");

	Params::AGCN_Athena_LowGravity_C_ClearExpireTell_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_LowGravity_C::PlayExpirationSound()
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "PlayExpirationSound");

	Params::AGCN_Athena_LowGravity_C_PlayExpirationSound_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TimeFromJumpApex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_C::ExecuteUbergraph_GCN_Athena_LowGravity(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_TimeFromJumpApex_ReturnValue, bool CallFunc_IsFalling_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_C", "ExecuteUbergraph_GCN_Athena_LowGravity");

	Params::AGCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_TimeFromJumpApex_ReturnValue = CallFunc_TimeFromJumpApex_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue1 = CallFunc_Abs_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
