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


// Function BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CameraLens_CrackExit_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_CameraLens_CrackExit_C", "UserConstructionScript");

	Params::ABP_CameraLens_CrackExit_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
