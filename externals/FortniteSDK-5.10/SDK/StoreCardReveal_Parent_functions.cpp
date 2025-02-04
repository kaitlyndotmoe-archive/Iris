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


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_Parent_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("StoreCardReveal_Parent_C", "UserConstructionScript");

	Params::AStoreCardReveal_Parent_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_Parent_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");

	Params::AStoreCardReveal_Parent_C_InitiatePinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::AStoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
