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
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Intro
struct UHeroSquadManagementScreen_C_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Intro Initial Reset
struct UHeroSquadManagementScreen_C_Intro_Initial_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni
struct UHeroSquadManagementScreen_C_HandlePickerHideAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleHideSlotInfoAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni
struct UHeroSquadManagementScreen_C_HandlePickerShowAni_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleShowSlotInfoAni_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
struct UHeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526D[0x4];                                     
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x10(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x28(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x40(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x58(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x70(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0xA0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0xB8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue7;             // 0xD0(0x18)()
	class FText                                  K2Node_Select1_Default;                            // 0xE8(0x18)()
};

// 0x69 (0x69 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Highlight_State_Params
{
public:
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus;             // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526E[0x7];                                     
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus1;            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526F[0x7];                                     
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5270[0x7];                                     
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus2;            // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5271[0x6];                                     
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus3;            // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5272[0x7];                                     
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus4;            // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5273[0x7];                                     
	class UHeroSquadBonus_C*                     K2Node_DynamicCast_AsHero_Squad_Bonus5;            // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State_Params
{
public:
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkEmpty_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5274[0x5];                                     
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5275[0x7];                                     
	class USimpleSquadSlotButton_C*              K2Node_DynamicCast_AsSimple_Squad_Slot_Button;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5276[0x7];                                     
	class UWidget*                               CallFunc_GetChildAt_ReturnValue1;                  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*              K2Node_DynamicCast_AsSimple_Squad_Slot_Button1;    // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkEmpty_ReturnValue1;                 // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue1;              // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
struct UHeroSquadManagementScreen_C_HideSlotInfo_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
struct UHeroSquadManagementScreen_C_ShowSlotInfo_Params
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  LocalItemType;                                     // 0x30(0x18)(Edit, BlueprintVisible)
	class FText                                  LocalDisplayName;                                  // 0x48(0x18)(Edit, BlueprintVisible)
	class FText                                  LocalHeaderText;                                   // 0x60(0x18)(Edit, BlueprintVisible)
};

// 0x11 (0x11 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
struct UHeroSquadManagementScreen_C_HandleClosePicker_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5277[0x7];                                     
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
struct UHeroSquadManagementScreen_C_GetInZoneVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5278[0x4];                                     
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
struct UHeroSquadManagementScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
struct UHeroSquadManagementScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
struct UHeroSquadManagementScreen_C_SetDefaultScroll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
struct UHeroSquadManagementScreen_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerShown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerHidden_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
struct UHeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnBeginIntro
struct UHeroSquadManagementScreen_C_OnBeginIntro_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
struct UHeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5279[0x4];                                     
	class UHeroSquadSlotsView_C*                 K2Node_DynamicCast_AsHero_Squad_Slots_View;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527A[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget;           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527B[0x3];                                     
	int32                                        CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue;  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget1;          // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527C[0x6];                                     
	class USquadSlotDetailsPanel_C*              K2Node_DynamicCast_AsSquad_Slot_Details_Panel;     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527D[0x3];                                     
	int32                                        K2Node_ComponentBoundEvent_SquadSlotIndex;         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHeroSquadBonuses_C*                   K2Node_DynamicCast_AsHero_Squad_Bonuses;           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527E[0x7];                                     
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadStatsWidget_C*                   K2Node_DynamicCast_AsSquad_Stats_Widget2;          // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527F[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0xB0(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
