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

// 0x88 (0x88 - 0x0)
// Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected
struct UIconTabButton_C_SetChangeIconColorWhenSelected_Params
{
public:
	bool                                         ChangeColorWhenSelected;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B7[0x7];                                     
	struct FSlateColor                           SelectedColor;                                     // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           UnselectedColor;                                   // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B8[0x6];                                     
	struct FSlateColor                           K2Node_Select_Default;                             // 0x60(0x28)()
};

// 0x4 (0x4 - 0x0)
// Function IconTabButton.IconTabButton_C.Update Bang State
struct UIconTabButton_C_Update_Bang_State_Params
{
public:
	bool                                         bBangEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
struct UIconTabButton_C_SetTutorialBorderStyle_Params
{
public:
	class UClass*                                BorderStyle;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.ShowText
struct UIconTabButton_C_ShowText_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function IconTabButton.IconTabButton_C.Set Icon
struct UIconTabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function IconTabButton.IconTabButton_C.Set Text
struct UIconTabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B9[0x6];                                     
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BA[0x7];                                     
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTabButton.IconTabButton_C.PreConstruct
struct UIconTabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
struct UIconTabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnSelected
struct UIconTabButton_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnDeselected
struct UIconTabButton_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.Construct
struct UIconTabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnHovered
struct UIconTabButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnUnhovered
struct UIconTabButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnEnabled
struct UIconTabButton_C_BP_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.BP_OnDisabled
struct UIconTabButton_C_BP_OnDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
struct UIconTabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1E3 (0x1E3 - 0x0)
// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
struct UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BB[0x3];                                     
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BC[0x7];                                     
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xA0)(ConstParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue1;                 // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BD[0x5];                                     
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xC8(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x150(0x88)()
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
