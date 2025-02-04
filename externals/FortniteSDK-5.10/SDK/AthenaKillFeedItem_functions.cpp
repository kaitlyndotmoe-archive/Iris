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


// Function AthenaKillFeedItem.AthenaKillFeedItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaKillFeedItem_C::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("AthenaKillFeedItem_C", "SetText");

	Params::UAthenaKillFeedItem_C_SetText_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
