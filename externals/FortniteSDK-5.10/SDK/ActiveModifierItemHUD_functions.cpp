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


// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InIconSlateBrush                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UActiveModifierItemHUD_C::AssignIcon(const struct FSlateBrush& InIconSlateBrush)
{
	static auto Func = Class->GetFunction("ActiveModifierItemHUD_C", "AssignIcon");

	Params::UActiveModifierItemHUD_C_AssignIcon_Params Parms;
	Parms.InIconSlateBrush = InIconSlateBrush;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
