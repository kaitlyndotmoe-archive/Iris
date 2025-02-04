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
// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
struct UPopupCenterMessageWidget_C_OnModalDisplayed_Params
{
public:
	enum class ECenterPopupMessageStateEnum      NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44B1[0x7];                                     
	class UCommonActivatablePanel*               ModalPopup;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
struct UPopupCenterMessageWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
struct UPopupCenterMessageWidget_C_UpdateStateEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
struct UPopupCenterMessageWidget_C_Destruct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
struct UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECenterPopupMessageStateEnum      K2Node_Event_NewState;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44B2[0x3];                                     
	class UCommonActivatablePanel*               K2Node_Event_ModalPopup;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupCenterMessageModalPanel_C*       K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44B3[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
