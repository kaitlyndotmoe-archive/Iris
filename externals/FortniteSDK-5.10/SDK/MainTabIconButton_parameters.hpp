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

// 0x10 (0x10 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
struct UMainTabIconButton_C_StopTabCallout_Params
{
public:
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.TabAdded
struct UMainTabIconButton_C_TabAdded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed
struct UMainTabIconButton_C_TabDialogClosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
struct UMainTabIconButton_C_TabAnimateInFinished_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.SetTutorialNameID
struct UMainTabIconButton_C_SetTutorialNameID_Params
{
public:
	class FName                                  InTutorialNameID;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
struct UMainTabIconButton_C_Update_Bang_State_Params
{
public:
	bool                                         bBangEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIFeature                    UIFeature;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C8A[0x6];                                     
	class FText                                  UIFeatureRevealText;                               // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
struct UMainTabIconButton_C_SetTutorialBorderStyle_Params
{
public:
	class UClass*                                BorderStyle;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.ShowText
struct UMainTabIconButton_C_ShowText_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.Set Icon
struct UMainTabIconButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.Set Text
struct UMainTabIconButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8B[0x6];                                     
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8C[0x7];                                     
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
struct UMainTabIconButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
struct UMainTabIconButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.BP_OnSelected
struct UMainTabIconButton_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.BP_OnDeselected
struct UMainTabIconButton_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.Construct
struct UMainTabIconButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.BP_OnHovered
struct UMainTabIconButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.BP_OnUnhovered
struct UMainTabIconButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged
struct UMainTabIconButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded
struct UMainTabIconButton_C_HandleTabAdded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished
struct UMainTabIconButton_C_HandleTabAnimateInFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed
struct UMainTabIconButton_C_HandleTabDialogCLosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout
struct UMainTabIconButton_C_Handle_StopTabCallout_Params
{
public:
};

// 0x10A (0x10A - 0x0)
// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
struct UMainTabIconButton_C_ExecuteUbergraph_MainTabIconButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C8D[0x4];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8E[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8F[0x7];                                     
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x68(0xA0)(ConstParm)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue1;                 // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
