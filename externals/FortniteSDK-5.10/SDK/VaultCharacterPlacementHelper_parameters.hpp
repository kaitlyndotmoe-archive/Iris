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

// 0x119 (0x119 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
struct AVaultCharacterPlacementHelper_C_UpdatePosition_For_Camera_Params
{
public:
	enum class EFrontEndCamera                   FrontendCamera;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450B[0x2];                                     
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450C[0x3];                                     
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x28(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x34(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x40(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x4C(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_450D[0x8];                                     
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x90(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
struct AVaultCharacterPlacementHelper_C_UserConstructionScript_Params
{
public:
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x0(0x30)(IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
struct AVaultCharacterPlacementHelper_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_0
struct AVaultCharacterPlacementHelper_C_SubGameChanged_Event_0_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveTick
struct AVaultCharacterPlacementHelper_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
struct AVaultCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE2 (0xE2 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
struct AVaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450E[0x4];                                     
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450F[0x6];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   CallFunc_GetFrontEndCamera_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          K2Node_CustomEvent_SubGame;                        // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4510[0x6];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x50(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4511[0x3];                                     
	float                                        K2Node_Event_DeltaSeconds;                         // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_NewCamera;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_OldCamera;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
struct AVaultCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
