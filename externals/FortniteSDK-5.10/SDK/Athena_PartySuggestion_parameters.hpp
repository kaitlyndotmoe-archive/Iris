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

// 0x3A (0x3A - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetupMIDReferences
struct UAthena_PartySuggestion_C_SetupMIDReferences_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50D8[0x7];                                     
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50D9[0x6];                                     
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue3; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue4; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetMainMIDs
struct UAthena_PartySuggestion_C_SetMainMIDs_Params
{
public:
	class UMaterialInstanceDynamic*              BorderMID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TailMID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SparklesMID;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_Cur_Border_L;                                   // 0x18(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_CurBorder_R;                                    // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurMIDScalar_ShapeChange;                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50DA[0x3];                                     
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue1;  // 0x50(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50DB[0x3];                                     
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitPhysAnim
struct UAthena_PartySuggestion_C_InitPhysAnim_Params
{
public:
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState;                // 0x0(0x8)(NoDestructor)
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState1;               // 0x8(0x8)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitMIDs
struct UAthena_PartySuggestion_C_InitMIDs_Params
{
public:
};

// 0xA0 (0xA0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitNewPartySuggestion
struct UAthena_PartySuggestion_C_InitNewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  NewPartySuggestion;                                // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x218 (0x218 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnMouseButtonDown_0
struct UAthena_PartySuggestion_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0xA0 (0xA0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.NewPartySuggestion
struct UAthena_PartySuggestion_C_NewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  Party_Suggestion_Struct;                           // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdateDisplay
struct UAthena_PartySuggestion_C_UpdateDisplay_Params
{
public:
};

// 0xA0 (0xA0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdatePartySuggestion
struct UAthena_PartySuggestion_C_UpdatePartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  PartySuggestionStruct;                             // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayOutro
struct UAthena_PartySuggestion_C_PlayOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.HidePartySuggestion
struct UAthena_PartySuggestion_C_HidePartySuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnUnhovered
struct UAthena_PartySuggestion_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnHovered
struct UAthena_PartySuggestion_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayIntro
struct UAthena_PartySuggestion_C_PlayIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.DismissSuggestion
struct UAthena_PartySuggestion_C_DismissSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ClobberSuggestion
struct UAthena_PartySuggestion_C_ClobberSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ForceAcceptSuggestion
struct UAthena_PartySuggestion_C_ForceAcceptSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Construct
struct UAthena_PartySuggestion_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Tick
struct UAthena_PartySuggestion_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PreConstruct
struct UAthena_PartySuggestion_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3EC (0x3EC - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ExecuteUbergraph_Athena_PartySuggestion
struct UAthena_PartySuggestion_C_ExecuteUbergraph_Athena_PartySuggestion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyInProgressEnabled_ReturnValue;     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50DC[0x3];                                     
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x68(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50DD[0x3];                                     
	int32                                        Temp_int_Variable;                                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50DE[0x3];                                     
	int32                                        Temp_int_Variable2;                                // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50DF[0x4];                                     
	TArray<class UFortSocialItem*>               CallFunc_Map_Values_Values;                        // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Variable2;                               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E0[0x7];                                     
	class UFortSocialItem*                       CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable3;                                // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E1[0x4];                                     
	class FString                                CallFunc_GetCurrentPlatform_ReturnValue;           // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xD0(0x18)()
	int32                                        Temp_int_Variable4;                                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E2[0x4];                                     
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E3[0x1];                                     
	float                                        Temp_float_Variable;                               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable6;                               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E4[0x3];                                     
	struct FLinearColor                          Temp_struct_Variable;                              // 0x104(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable1;                             // 0x114(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E5[0x4];                                     
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue1;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPartySuggestion                  K2Node_CustomEvent_Party_Suggestion_Struct;        // 0x138(0xA0)()
	class FText                                  CallFunc_GetPartySuggestionActionText_ActionText;  // 0x1D8(0x18)()
	bool                                         CallFunc_GetPartySuggestionActionText_ReturnValue; // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E6[0x7];                                     
	struct FFortPartySuggestion                  K2Node_CustomEvent_PartySuggestionStruct;          // 0x1F8(0xA0)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E7[0x3];                                     
	int32                                        K2Node_Select_Default;                             // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E8[0x4];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2A8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2B8(0x8)(NoDestructor)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E9[0x3];                                     
	int32                                        Temp_int_Variable5;                                // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_DateTimeMinValue_ReturnValue;             // 0x2C8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EA[0x2];                                     
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EB[0x3];                                     
	float                                        K2Node_Select1_Default;                            // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x2E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2E8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EC[0x3];                                     
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50ED[0x4];                                     
	class FText                                  K2Node_Select2_Default;                            // 0x330(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x348(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x388(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x398(0x18)()
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EE[0x3];                                     
	float                                        CallFunc_FloatSpringInterp_ReturnValue;            // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EF[0x3];                                     
	int32                                        K2Node_Select3_Default;                            // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select4_Default;                            // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_Select5_Default;                            // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_Select6_Default;                            // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select7_Default;                            // 0x3D8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue1;        // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnSuggestionMouseDown__DelegateSignature
struct UAthena_PartySuggestion_C_OnSuggestionMouseDown__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PartyFocused__DelegateSignature
struct UAthena_PartySuggestion_C_PartyFocused__DelegateSignature_Params
{
public:
	class UAthena_LFG_SuggestedPartyItem_C*      FocusedPartyItem;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
