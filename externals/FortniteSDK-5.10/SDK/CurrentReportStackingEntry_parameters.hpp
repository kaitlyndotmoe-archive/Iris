#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields
struct UCurrentReportStackingEntry_C_SetDisplayTextFields_Params
{
public:
	enum class EPlayerReportingStep              Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CD[0x7];                                     
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue1;                 // 0x38(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.Construct
struct UCurrentReportStackingEntry_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields
struct UCurrentReportStackingEntry_C_InitStackingEntryFields_Params
{
public:
	enum class EPlayerReportingStep              DisplayedReportingStep;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CE[0x7];                                     
	class FText                                  DisplayText;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry
struct UCurrentReportStackingEntry_C_ExecuteUbergraph_CurrentReportStackingEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerReportingStep              K2Node_CustomEvent_DisplayedReportingStep;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CF[0x3];                                     
	class FText                                  K2Node_CustomEvent_DisplayText;                    // 0x8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
