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


// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortnite_Base_Head_Export_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("Fortnite_Base_Head_Export_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	Params::UFortnite_Base_Head_Export_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_Base_Head_Export_Skeleton_AnimBP_C::ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Fortnite_Base_Head_Export_Skeleton_AnimBP_C", "ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP");

	Params::UFortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
