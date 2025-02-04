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


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDBNO                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "DBNOStateChanged");

	Params::UAthenaTeamMemberIndicator_C_DBNOStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "TalkingStateChanged");

	Params::UAthenaTeamMemberIndicator_C_TalkingStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReviving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "BeingRevivedStateChanged");

	Params::UAthenaTeamMemberIndicator_C_BeingRevivedStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "PlayerNameChanged");

	Params::UAthenaTeamMemberIndicator_C_PlayerNameChanged_Params Parms;
	Parms.PS = PS;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class AFortPlayerStateAthena*      K2Node_Event_PS3                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDBNO                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS2                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS1                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReviving                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, class AFortPlayerStateAthena* K2Node_Event_PS, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS3, bool K2Node_Event_bDBNO, class AFortPlayerStateAthena* K2Node_Event_PS2, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS1, bool K2Node_Event_bReviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "ExecuteUbergraph_AthenaTeamMemberIndicator");

	Params::UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PS = K2Node_Event_PS;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_PS3 = K2Node_Event_PS3;
	Parms.K2Node_Event_bDBNO = K2Node_Event_bDBNO;
	Parms.K2Node_Event_PS2 = K2Node_Event_PS2;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_Event_PS1 = K2Node_Event_PS1;
	Parms.K2Node_Event_bReviving = K2Node_Event_bReviving;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
