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


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "UserConstructionScript");

	Params::AB_CameraRainDrops_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::Alpha__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__FinishedFunc");

	Params::AB_CameraRainDrops_01_C_Alpha__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::Alpha__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__UpdateFunc");

	Params::AB_CameraRainDrops_01_C_Alpha__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");

	Params::AB_CameraRainDrops_01_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::AB_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
