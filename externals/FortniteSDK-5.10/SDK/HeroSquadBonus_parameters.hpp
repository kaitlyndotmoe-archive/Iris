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

// 0x30 (0x30 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
struct UHeroSquadBonus_C_Get_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue;              // 0x10(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
struct UHeroSquadBonus_C_SetBackgroundGlow_Params
{
public:
	bool                                         GlowBackground;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
struct UHeroSquadBonus_C_UpdateSquadBonusIconState_Params
{
public:
	struct FSlateColor                           Tint;                                              // 0x0(0x28)(Edit, BlueprintVisible)
	enum class EFortSupportBonusType             Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortSupportBonusType             Temp_byte_Variable4;                               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FD[0x3];                                     
	class UObject*                               Temp_object_Variable;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable1;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable2;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FE[0x7];                                     
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x50(0x28)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPerkEmpty_ReturnValue;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue;               // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FF[0x4];                                     
	class UObject*                               K2Node_Select1_Default;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x88(0x28)()
	struct FSlateColor                           K2Node_Select2_Default;                            // 0xB0(0x28)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xD8(0x88)()
};

// 0x258 (0x258 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
struct UHeroSquadBonus_C_UpdateBonusPerk_Params
{
public:
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue;              // 0x0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x68(0x18)()
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3200[0x3];                                     
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x84(0x10)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3201[0x4];                                     
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x98(0x88)()
	bool                                         CallFunc_IsPerkEmpty_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3202[0x7];                                     
	struct FSlateBrush                           CallFunc_GetIcon_Brush;                            // 0x128(0x88)()
	bool                                         CallFunc_GetIcon_ReturnValue;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3203[0x7];                                     
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0x1B8(0x88)()
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue1;             // 0x240(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
struct UHeroSquadBonus_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
struct UHeroSquadBonus_C_OnPerkUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.Construct
struct UHeroSquadBonus_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.OnCombinedTooltipDescriptionReady
struct UHeroSquadBonus_C_OnCombinedTooltipDescriptionReady_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
struct UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3204[0x3];                                     
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Description;                          // 0x18(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
