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


// Function GCN_Carmine_Death.GCN_Carmine_Death_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_Carmine_Death_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Carmine_Death_C", "OnStartParticleSystemSpawned");

	Params::UGCN_Carmine_Death_C_OnStartParticleSystemSpawned_Params Parms;
	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Carmine_Death.GCN_Carmine_Death_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGCN_Carmine_Death_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCN_Carmine_Death_C", "OnActive");

	Params::UGCN_Carmine_Death_C_OnActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
