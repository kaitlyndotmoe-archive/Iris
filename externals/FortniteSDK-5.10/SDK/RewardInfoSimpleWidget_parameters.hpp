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

// 0xD38 (0xD38 - 0x0)
// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
struct URewardInfoSimpleWidget_C_GetDisplayName_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Parm, OutParm)
	class FText                                  OutName;                                           // 0x18(0x18)(Edit, BlueprintVisible)
	enum class EFortItemType                     Temp_byte_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A4F[0x7];                                     
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x68(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x98(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xE0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xF8(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x110(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x128(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x140(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x158(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x170(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x188(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x1B8(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x1D0(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x1E8(0x18)()
	class FText                                  Temp_text_Variable19;                              // 0x200(0x18)()
	class FText                                  Temp_text_Variable20;                              // 0x218(0x18)()
	class FText                                  Temp_text_Variable21;                              // 0x230(0x18)()
	class FText                                  Temp_text_Variable22;                              // 0x248(0x18)()
	class FText                                  Temp_text_Variable23;                              // 0x260(0x18)()
	class FText                                  Temp_text_Variable24;                              // 0x278(0x18)()
	class FText                                  Temp_text_Variable25;                              // 0x290(0x18)()
	class FText                                  Temp_text_Variable26;                              // 0x2A8(0x18)()
	class FText                                  Temp_text_Variable27;                              // 0x2C0(0x18)()
	class FText                                  Temp_text_Variable28;                              // 0x2D8(0x18)()
	class FText                                  Temp_text_Variable29;                              // 0x2F0(0x18)()
	class FText                                  Temp_text_Variable30;                              // 0x308(0x18)()
	class FText                                  Temp_text_Variable31;                              // 0x320(0x18)()
	class FText                                  Temp_text_Variable32;                              // 0x338(0x18)()
	class FText                                  Temp_text_Variable33;                              // 0x350(0x18)()
	class FText                                  Temp_text_Variable34;                              // 0x368(0x18)()
	class FText                                  Temp_text_Variable35;                              // 0x380(0x18)()
	class FText                                  Temp_text_Variable36;                              // 0x398(0x18)()
	class FText                                  Temp_text_Variable37;                              // 0x3B0(0x18)()
	class FText                                  Temp_text_Variable38;                              // 0x3C8(0x18)()
	class FText                                  Temp_text_Variable39;                              // 0x3E0(0x18)()
	class FText                                  Temp_text_Variable40;                              // 0x3F8(0x18)()
	class FText                                  Temp_text_Variable41;                              // 0x410(0x18)()
	class FText                                  Temp_text_Variable42;                              // 0x428(0x18)()
	class FText                                  Temp_text_Variable43;                              // 0x440(0x18)()
	class FText                                  Temp_text_Variable44;                              // 0x458(0x18)()
	class FText                                  Temp_text_Variable45;                              // 0x470(0x18)()
	class FText                                  Temp_text_Variable46;                              // 0x488(0x18)()
	class FText                                  Temp_text_Variable47;                              // 0x4A0(0x18)()
	class FText                                  Temp_text_Variable48;                              // 0x4B8(0x18)()
	class FText                                  Temp_text_Variable49;                              // 0x4D0(0x18)()
	class FText                                  Temp_text_Variable50;                              // 0x4E8(0x18)()
	class FText                                  Temp_text_Variable51;                              // 0x500(0x18)()
	class FText                                  Temp_text_Variable52;                              // 0x518(0x18)()
	class FText                                  Temp_text_Variable53;                              // 0x530(0x18)()
	class FText                                  Temp_text_Variable54;                              // 0x548(0x18)()
	class FText                                  Temp_text_Variable55;                              // 0x560(0x18)()
	class FText                                  Temp_text_Variable56;                              // 0x578(0x18)()
	class FText                                  Temp_text_Variable57;                              // 0x590(0x18)()
	class FText                                  Temp_text_Variable58;                              // 0x5A8(0x18)()
	class FText                                  Temp_text_Variable59;                              // 0x5C0(0x18)()
	class FText                                  Temp_text_Variable60;                              // 0x5D8(0x18)()
	class FText                                  Temp_text_Variable61;                              // 0x5F0(0x18)()
	class FText                                  Temp_text_Variable62;                              // 0x608(0x18)()
	class FText                                  Temp_text_Variable63;                              // 0x620(0x18)()
	class FText                                  Temp_text_Variable64;                              // 0x638(0x18)()
	class FText                                  Temp_text_Variable65;                              // 0x650(0x18)()
	class FText                                  Temp_text_Variable66;                              // 0x668(0x18)()
	class FText                                  Temp_text_Variable67;                              // 0x680(0x18)()
	class FText                                  Temp_text_Variable68;                              // 0x698(0x18)()
	class FText                                  Temp_text_Variable69;                              // 0x6B0(0x18)()
	class FText                                  Temp_text_Variable70;                              // 0x6C8(0x18)()
	class FText                                  Temp_text_Variable71;                              // 0x6E0(0x18)()
	class FText                                  Temp_text_Variable72;                              // 0x6F8(0x18)()
	class FText                                  Temp_text_Variable73;                              // 0x710(0x18)()
	class FText                                  Temp_text_Variable74;                              // 0x728(0x18)()
	class FText                                  Temp_text_Variable75;                              // 0x740(0x18)()
	class FText                                  Temp_text_Variable76;                              // 0x758(0x18)()
	class FText                                  Temp_text_Variable77;                              // 0x770(0x18)()
	class FText                                  Temp_text_Variable78;                              // 0x788(0x18)()
	class FText                                  Temp_text_Variable79;                              // 0x7A0(0x18)()
	class FText                                  Temp_text_Variable80;                              // 0x7B8(0x18)()
	class FText                                  Temp_text_Variable81;                              // 0x7D0(0x18)()
	class FText                                  Temp_text_Variable82;                              // 0x7E8(0x18)()
	class FText                                  Temp_text_Variable83;                              // 0x800(0x18)()
	class FText                                  Temp_text_Variable84;                              // 0x818(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x830(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x848(0x40)(HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue;              // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x890(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A50[0x7];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x8B0(0x40)(HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x8F0(0x80)()
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue1;             // 0x970(0x80)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x9F0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0xA30(0x40)(HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue2;             // 0xA70(0x80)()
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xAF0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB00(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0xB18(0x40)(HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue1;             // 0xB58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorker*                           K2Node_DynamicCast_AsFort_Worker;                  // 0xB60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortInventoryFilter              CallFunc_GetFilterCategory_ReturnValue;            // 0xB69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A51[0x6];                                     
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue2;             // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A52[0x7];                                     
	class FText                                  CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0xB80(0x18)()
	struct FSlateBrush                           CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0xB98(0x88)()
	bool                                         CallFunc_GetTertiaryCategory_ReturnValue;          // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A53[0x7];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData5;             // 0xC28(0x40)(HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue3;             // 0xC68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0xC70(0x10)(ZeroConstructor, ReferenceParm)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0xC80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A54[0x7];                                     
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0xC88(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xCA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A55[0x7];                                     
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue4;             // 0xCA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue1;                     // 0xCB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A56[0x7];                                     
	class FText                                  K2Node_Select_Default;                             // 0xCB8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData6;             // 0xCD0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0xD10(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0xD20(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP
struct URewardInfoSimpleWidget_C_HandleDifferentItemOrQuantitySetBP_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
struct URewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A57[0x4];                                     
	class UFortItem*                             CallFunc_GetItemInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue1;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A58[0x6];                                     
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x20(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A59[0x7];                                     
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A5A[0x3];                                     
	int32                                        CallFunc_GetQuantity_ReturnValue;                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x68(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
