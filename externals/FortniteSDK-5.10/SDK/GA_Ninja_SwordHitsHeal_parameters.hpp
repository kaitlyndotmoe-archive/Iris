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

// 0x8 (0x8 - 0x0)
// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility
struct UGA_Ninja_SwordHitsHeal_C_SetupAbility_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEA (0xEA - 0x0)
// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_SwordHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x40(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xE8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue; // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_SwordHitsHeal_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal
struct UGA_Ninja_SwordHitsHeal_C_ExecuteUbergraph_GA_Ninja_SwordHitsHeal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4171[0x4];                                     
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
