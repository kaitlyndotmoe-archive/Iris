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

// 0x0 (0x0 - 0x0)
// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.Show Notice
struct UEmergencyNoticeWidget_C_Show_Notice_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
struct UEmergencyNoticeWidget_C_ShowNotice_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice
struct UEmergencyNoticeWidget_C_HideNotice_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
struct UEmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCB[0x4];                                     
	class FText                                  K2Node_Event_Title;                                // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Body;                                 // 0x20(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
