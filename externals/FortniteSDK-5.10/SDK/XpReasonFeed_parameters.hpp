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

// 0x59 (0x59 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.ImmediatelyShowXpRewards
struct UXpReasonFeed_C_ImmediatelyShowXpRewards_Params
{
public:
	TArray<struct FAthenaMatchXpReward>          XpRewards;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E96[0x4];                                     
	struct FAthenaMatchXpReward                  CallFunc_Array_Get_Item;                           // 0x20(0x20)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E97[0x3];                                     
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_BP_CreateEntry_ReturnValue;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                   K2Node_DynamicCast_AsXp_Reason_Feed_Item;          // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward
struct UXpReasonFeed_C_IsReadyForNextXpReward_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward
struct UXpReasonFeed_C_Play_Xp_Reward_Params
{
public:
	struct FAthenaMatchXpReward                  Reward;                                            // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.Reset Feed
struct UXpReasonFeed_C_Reset_Feed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.Destruct
struct UXpReasonFeed_C_Destruct_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed
struct UXpReasonFeed_C_ExecuteUbergraph_XpReasonFeed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E98[0x4];                                     
	struct FAthenaMatchXpReward                  K2Node_CustomEvent_Reward;                         // 0x8(0x20)(ConstParm)
	class UUserWidget*                           CallFunc_BP_CreateEntry_ReturnValue;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                   K2Node_DynamicCast_AsXp_Reason_Feed_Item;          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
