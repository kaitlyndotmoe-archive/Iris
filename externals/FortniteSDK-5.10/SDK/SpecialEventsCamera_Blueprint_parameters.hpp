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
// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.UserConstructionScript
struct ASpecialEventsCamera_Blueprint_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated
struct ASpecialEventsCamera_Blueprint_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
struct ASpecialEventsCamera_Blueprint_C_OnDeactivated_Params
{
public:
};

// 0x7D (0x7D - 0x0)
// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
struct ASpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable1;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5617[0x4];                                     
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors1;           // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_FortniteLobbyLightSwitcher_C*      CallFunc_Array_Get_Item1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5618[0x3];                                     
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors2;           // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_FortniteLobbyLightSwitcher_C*      CallFunc_Array_Get_Item2;                          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
