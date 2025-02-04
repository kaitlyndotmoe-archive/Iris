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

// 0x1D (0x1D - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats
struct UItemCalledOutAttributesDetailWidget_C_Clear_Stats_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457C[0x4];                                     
	class UStatsListItemWIdget_C*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15D (0x15D - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
struct UItemCalledOutAttributesDetailWidget_C_UpdateStats_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457D[0x3];                                     
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1C(0x10)(IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable1;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatsListItemWIdget_C*                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetDisplayAttributesToCallOut_Attributes; // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class UStatsListItemWIdget_C*                CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_Array_Get_Item1;                          // 0x58(0x70)()
	class UWrapBoxSlot*                          CallFunc_AddChildWrapBox_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457E[0x4];                                     
	struct FFortDisplayAttribute                 CallFunc_Array_Get_Item2;                          // 0xD8(0x70)()
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457F[0x3];                                     
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4580[0x3];                                     
	int32                                        CallFunc_Array_Length_ReturnValue3;                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16A (0x16A - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
struct UItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut_Params
{
public:
	TArray<struct FFortDisplayAttribute>         Attributes;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FGameplayTag>                  Tokens;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortDisplayAttribute>         Results;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4581[0x3];                                     
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4582[0x4];                                     
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array1;                           // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array2;                           // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4583[0x7];                                     
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x88(0x28)(HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithNetID_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4584[0x3];                                     
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4585[0x7];                                     
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0xE0(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4586[0x7];                                     
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetSchematicResultType_ReturnValue;       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4587[0x1];                                     
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     K2Node_Select_Default;                             // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemCalledOutAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP
struct UItemCalledOutAttributesDetailWidget_C_HandleItemToDetailChangedBP_Params
{
public:
};

// 0x33 (0x33 - 0x0)
// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
struct UItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetSchematicResultType_ReturnValue;       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4588[0x6];                                     
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     K2Node_Select_Default;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4589[0x6];                                     
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array;                            // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Variable1;                               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
