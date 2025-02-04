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
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Create Button Group
struct UHUDLayoutToolPropertyPanel_C_Create_Button_Group_Params
{
public:
	class UCommonButtonGroup*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.DialogResult_AF5C9445415C4E1B90396695176ABE9D
struct UHUDLayoutToolPropertyPanel_C_DialogResult_AF5C9445415C4E1B90396695176ABE9D_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F4B[0x7];                                     
	class FName                                  ResultName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.DialogResult_F2CDB04A4E10D4703C778A8755E63C4E
struct UHUDLayoutToolPropertyPanel_C_DialogResult_F2CDB04A4E10D4703C778A8755E63C4E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F4C[0x7];                                     
	class FName                                  ResultName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Construct
struct UHUDLayoutToolPropertyPanel_C_Construct_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolPropertyPanel_C_BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.On Open
struct UHUDLayoutToolPropertyPanel_C_On_Open_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.OnWidgetSelected
struct UHUDLayoutToolPropertyPanel_C_OnWidgetSelected_Params
{
public:
	class UHUDLayoutToolPlacementWidget*         NewlySelectedWidget;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1FA (0x1FA - 0x0)
// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.ExecuteUbergraph_HUDLayoutToolPropertyPanel
struct UHUDLayoutToolPropertyPanel_C_ExecuteUbergraph_HUDLayoutToolPropertyPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F4D[0x4];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLayoutDirty_ReturnValue;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4E[0x6];                                     
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x30(0x18)()
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue1;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSelectedWidget_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4F[0x6];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)()
	bool                                         CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F50[0x7];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue3;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F51[0x7];                                     
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x98(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F52[0x6];                                     
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue4;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F53[0x4];                                     
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected1;              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F54[0x7];                                     
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected;               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F55[0x7];                                     
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable3;                               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F56[0x5];                                     
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable1;                               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result1;                        // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F57[0x7];                                     
	class FName                                  K2Node_CustomEvent_ResultName1;                    // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F58[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x148(0x10)(ZeroConstructor, NoDestructor)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue5;                  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue6;                  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue7;                  // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSavedLayout_ReturnValue;               // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F59[0x7];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue8;                  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5A[0x7];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue9;                  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5B[0x6];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x198(0x10)(ZeroConstructor, NoDestructor)
	class UHUDLayoutToolPlacementWidget*         K2Node_Event_NewlySelectedWidget;                  // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select2_Default;                            // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue10;                 // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue11;                 // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPropertyMenuState_ReturnValue;         // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F5C[0x7];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue12;                 // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSelectedWidget_ReturnValue1;           // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable6;                               // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable7;                               // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5D[0x5];                                     
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue13;                 // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable4;                               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F5E[0x7];                                     
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select4_Default;                            // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
