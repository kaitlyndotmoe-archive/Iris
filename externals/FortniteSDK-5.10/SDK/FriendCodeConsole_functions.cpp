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


// Function FriendCodeConsole.FriendCodeConsole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeConsole_C::Construct()
{
	static auto Func = Class->GetFunction("FriendCodeConsole_C", "Construct");

	Params::UFriendCodeConsole_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bMessageSent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendCodeConsole_C::OnSendFriendCodeMessageComplete(bool bMessageSent)
{
	static auto Func = Class->GetFunction("FriendCodeConsole_C", "OnSendFriendCodeMessageComplete");

	Params::UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params Parms;
	Parms.bMessageSent = bMessageSent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodeConsole.FriendCodeConsole_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeConsole_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("FriendCodeConsole_C", "BP_OnClicked");

	Params::UFriendCodeConsole_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeDescription_ReturnValue                    ()
// class FText                        CallFunc_GetFriendCodeDisplayName_ReturnValue                    ()
// bool                               K2Node_CustomEvent_bMessageSent                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendCodeConsole_C::ExecuteUbergraph_FriendCodeConsole(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class FText CallFunc_GetFriendCodeDescription_ReturnValue, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, bool K2Node_CustomEvent_bMessageSent)
{
	static auto Func = Class->GetFunction("FriendCodeConsole_C", "ExecuteUbergraph_FriendCodeConsole");

	Params::UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetFriendCodeDescription_ReturnValue = CallFunc_GetFriendCodeDescription_ReturnValue;
	Parms.CallFunc_GetFriendCodeDisplayName_ReturnValue = CallFunc_GetFriendCodeDisplayName_ReturnValue;
	Parms.K2Node_CustomEvent_bMessageSent = K2Node_CustomEvent_bMessageSent;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
