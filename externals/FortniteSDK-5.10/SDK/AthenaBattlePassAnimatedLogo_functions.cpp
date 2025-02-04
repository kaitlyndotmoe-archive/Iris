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


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBattlePassAnimatedLogo_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "OnAnimationFinished");

	Params::UAthenaBattlePassAnimatedLogo_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaBattlePassAnimatedLogo_C::PlayIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "PlayIntroAnim");

	Params::UAthenaBattlePassAnimatedLogo_C_PlayIntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.ExecuteUbergraph_AthenaBattlePassAnimatedLogo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBattlePassAnimatedLogo_C::ExecuteUbergraph_AthenaBattlePassAnimatedLogo(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "ExecuteUbergraph_AthenaBattlePassAnimatedLogo");

	Params::UAthenaBattlePassAnimatedLogo_C_ExecuteUbergraph_AthenaBattlePassAnimatedLogo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
