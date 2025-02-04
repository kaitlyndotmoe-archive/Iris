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

// 0xA (0xA - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
struct UBP_FortExpeditionListItem_C_Update_Bang_State_Params
{
public:
	class UFortAccountItem*                      Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
struct UBP_FortExpeditionListItem_C_Set_Success_Chance_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SquadId;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetExpeditionSquadId_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExpeditionInProgress_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4747[0x7];                                     
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4748[0x7];                                     
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4749[0x3];                                     
	float                                        CallFunc_CalculateTotalPower_ReturnValue;          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x381 (0x381 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
struct UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue; // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FFortTagUIData                        CallFunc_GetUIDataForTag_OutData;                  // 0x18(0x368)()
	bool                                         CallFunc_GetUIDataForTag_ReturnValue;              // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
struct UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params
{
public:
	class UFortExpeditionItem*                   InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
struct UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionInProgress_ReturnValue;       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_474A[0x2];                                     
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
struct UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
struct UBP_FortExpeditionListItem_C_Set_Rarity_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_474B[0x7];                                     
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x10(0x80)()
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
struct UBP_FortExpeditionListItem_C_Set_Rating_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTargetPowerLevel_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
struct UBP_FortExpeditionListItem_C_Set_Rewards_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_474C[0x4];                                     
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_Item_Def;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortCardPackItemDefinition*>   CallFunc_GetAllRewards_OutRewards;                 // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class UFortCardPackItemDefinition*           CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_474D[0x3];                                     
	struct FSlateBrush                           CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x38(0x88)()
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_474E[0x3];                                     
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_474F[0x4];                                     
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SimpleItemWidget_C*                CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
struct UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         Item_Def;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
struct UBP_FortExpeditionListItem_C_Set_Name_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
};

// 0xA0 (0xA0 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
struct UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_Item_Def;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4750[0x7];                                     
	struct FTimespan                             CallFunc_FromMinutes_ReturnValue;                  // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTimespanAsText_ReturnValue;            // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnListItemObjectSet
struct UBP_FortExpeditionListItem_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnSelected
struct UBP_FortExpeditionListItem_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
struct UBP_FortExpeditionListItem_C_OnItemChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnDeselected
struct UBP_FortExpeditionListItem_C_BP_OnDeselected_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
struct UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnHovered
struct UBP_FortExpeditionListItem_C_BP_OnHovered_Params
{
public:
};

// 0x37 (0x37 - 0x0)
// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
struct UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4751[0x3];                                     
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItem*                   K2Node_DynamicCast_AsFort_Expedition_Item;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4752[0x3];                                     
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4753[0x6];                                     
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
