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
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.UserConstructionScript
struct APlayerPawn_Generic_Parent_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
struct APlayerPawn_Generic_Parent_C_Entered_Water_Volume_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
struct APlayerPawn_Generic_Parent_C_Player_Creates_a_Splash_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
struct APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCC[0xC];                                     
	struct FTransform                            K2Node_CustomEvent_NewTransform;                   // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            Temp_struct_Variable;                              // 0x40(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DCD[0x7];                                     
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
