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

// 0x50 (0x50 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UnbindAllButtons
struct UPartyFinderListItem_New_C_UnbindAllButtons_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
};

// 0x65 (0x65 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonChoices
struct UPartyFinderListItem_New_C_SetupButtonChoices_Params
{
public:
	bool                                         bIsInvite;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A5[0x5];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue4;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeInvited_FailReason;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInvited_ReturnValue;                 // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeJoined_ReturnValue;                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason1;                  // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeJoined_ReturnValue1;                 // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeInvited_FailReason1;                 // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInvited_ReturnValue1;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A6[0x7];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue5;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason2;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeJoined_ReturnValue2;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortPartyRestriction             CallFunc_CanBeInvited_FailReason2;                 // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInvited_ReturnValue2;                // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason3;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeJoined_ReturnValue3;                 // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A7[0x2];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue6;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeInvited_FailReason3;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInvited_ReturnValue3;                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonBindingsForPartyInvite
struct UPartyFinderListItem_New_C_SetupButtonBindingsForPartyInvite_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonBindingsForFriendItem
struct UPartyFinderListItem_New_C_SetupButtonBindingsForFriendItem_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UnbindSocialItemDelegates
struct UPartyFinderListItem_New_C_UnbindSocialItemDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UpdateStateText
struct UPartyFinderListItem_New_C_UpdateStateText_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x18(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x30(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x90(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xA8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xC0(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xD8(0x18)()
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             Temp_byte_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason;                   // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeJoined_ReturnValue;                  // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A8[0x4];                                     
	class FText                                  K2Node_Select_Default;                             // 0x100(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupExpansion
struct UPartyFinderListItem_New_C_SetupExpansion_Params
{
public:
	bool                                         Expanded;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A9[0x2];                                     
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable1;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.HandlePresenceUpdated
struct UPartyFinderListItem_New_C_HandlePresenceUpdated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BindSocialItemDelegates
struct UPartyFinderListItem_New_C_BindSocialItemDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.InitializeItem
struct UPartyFinderListItem_New_C_InitializeItem_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AA[0x7];                                     
	class FString                                CallFunc_GetCurrentPlatform_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AB[0x3];                                     
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x1C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AC[0x3];                                     
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x30(0x10)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetPartySize_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AD[0x4];                                     
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AE[0x6];                                     
	class FText                                  CallFunc_GetLocation_ReturnValue;                  // 0x58(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x70(0x18)()
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x88(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AF[0x7];                                     
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue;                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.Construct
struct UPartyFinderListItem_New_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.Destruct
struct UPartyFinderListItem_New_C_Destruct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.PreConstruct
struct UPartyFinderListItem_New_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnIgnoreInviteClicked
struct UPartyFinderListItem_New_C_OnIgnoreInviteClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnInviteToPartyClicked
struct UPartyFinderListItem_New_C_OnInviteToPartyClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnAcceptPartyInviteClicked
struct UPartyFinderListItem_New_C_OnAcceptPartyInviteClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ReEnableInviteButtonAfterDelay
struct UPartyFinderListItem_New_C_ReEnableInviteButtonAfterDelay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BP_OnItemSelectionChanged
struct UPartyFinderListItem_New_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BP_OnHovered
struct UPartyFinderListItem_New_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BP_OnUnhovered
struct UPartyFinderListItem_New_C_BP_OnUnhovered_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnJoinPartyClicked
struct UPartyFinderListItem_New_C_OnJoinPartyClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.STWInviteClicked
struct UPartyFinderListItem_New_C_STWInviteClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ReEnableSTWInvite
struct UPartyFinderListItem_New_C_ReEnableSTWInvite_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UPartyFinderListItem_New_C_BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BP_OnItemExpansionChanged
struct UPartyFinderListItem_New_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnListItemObjectSet
struct UPartyFinderListItem_New_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ExecuteUbergraph_PartyFinderListItem_New
struct UPartyFinderListItem_New_C_ExecuteUbergraph_PartyFinderListItem_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B0[0x1];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B1[0x7];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue1;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue4;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue1;         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B2[0x4];                                     
	class UWidgetAnimation*                      Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSocialItemType               Temp_byte_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B3[0x3];                                     
	struct FLinearColor                          Temp_struct_Variable;                              // 0x68(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Temp_struct_Variable1;                             // 0x7C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue5;         // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue3;                 // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue6;         // 0x8F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue4;                 // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue7;         // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue5;                 // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x97(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select1_Default;                            // 0xA0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button4;                        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button3;                        // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button2;                        // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue1;         // 0xD8(0x8)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue1;                // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue6;                 // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue7;                 // 0xE7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue5;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue6;                  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue8;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue8;         // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue8;                 // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue9;                 // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B4[0x4];                                     
	class UCommonButton*                         K2Node_CustomEvent_Button1;                        // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B5[0x7];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue7;                  // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue9;         // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue1;                  // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B6[0x6];                                     
	class UWidgetAnimation*                      Temp_object_Variable1;                             // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue10;        // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B7[0x4];                                     
	class UWidgetAnimation*                      K2Node_Select2_Default;                            // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select3_Default;                            // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Temp_object_Variable2;                             // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue9;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B8[0x7];                                     
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue2;                // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSocialItemType               Temp_byte_Variable1;                               // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B9[0x6];                                     
	class UWidgetAnimation*                      Temp_object_Variable3;                             // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select4_Default;                            // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select5_Default;                            // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsListItemExpanded_ReturnValue;           // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32BA[0x6];                                     
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.RequestClosePartyFinder__DelegateSignature
struct UPartyFinderListItem_New_C_RequestClosePartyFinder__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem_New.PartyFinderListItem_New_C.InviteJoinChanged__DelegateSignature
struct UPartyFinderListItem_New_C_InviteJoinChanged__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
