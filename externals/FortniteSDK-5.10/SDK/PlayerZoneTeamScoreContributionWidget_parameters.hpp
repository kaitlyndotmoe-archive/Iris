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

// 0x90 (0x90 - 0x0)
// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Update Contribution LERP
struct UPlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP_Params
{
public:
	float                                        LERP_Factor;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)()
};

// 0xFA (0xFA - 0x0)
// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Initialize
struct UPlayerZoneTeamScoreContributionWidget_C_Initialize_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CF4[0x3];                                     
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CF5[0x3];                                     
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CF6[0x4];                                     
	TArray<class AFortPlayerState*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerState*                      CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0x40(0x28)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)()
	bool                                         CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CF7[0x7];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x88(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CF8[0x4];                                     
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Construct
struct UPlayerZoneTeamScoreContributionWidget_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget
struct UPlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
