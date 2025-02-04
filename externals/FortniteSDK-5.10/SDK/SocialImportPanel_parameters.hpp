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
// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
struct USocialImportPanel_C_OnLauncherImportOpened_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
struct USocialImportPanel_C_OnClaimViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
struct USocialImportPanel_C_OnImportViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
struct USocialImportPanel_C_OnWaitingViewRequested_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
struct USocialImportPanel_C_OnPanelTypeSet_Params
{
public:
	enum class ESocialImportPanelType            NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnActivated
struct USocialImportPanel_C_OnActivated_Params
{
public:
};

// 0x4C8 (0x4C8 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
struct USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelType            Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable1;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5F[0x2];                                     
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable1;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable2;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable3;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable4;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable2;                               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F60[0x7];                                     
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x68(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x98(0x18)()
	enum class ESocialImportPanelPlatform        Temp_byte_Variable3;                               // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F61[0x7];                                     
	class FText                                  Temp_text_Variable5;                               // 0xB8(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xD0(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xE8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0x100(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x118(0x18)()
	enum class ESocialImportPanelPlatform        Temp_byte_Variable4;                               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F62[0x7];                                     
	struct FSlateBrush                           Temp_struct_Variable;                              // 0x138(0x88)()
	struct FSlateBrush                           Temp_struct_Variable1;                             // 0x1C0(0x88)()
	struct FSlateBrush                           Temp_struct_Variable2;                             // 0x248(0x88)()
	enum class ESocialImportPanelType            K2Node_Event_NewType;                              // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F63[0x2];                                     
	int32                                        Temp_int_Variable;                                 // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        CallFunc_GetSocialPlatform_OutPlatform;            // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSocialPlatform_ReturnValue;            // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F64[0x6];                                     
	class UTexture2D*                            K2Node_Select_Default;                             // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select1_Default;                            // 0x2E8(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x300(0x18)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x318(0x88)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F65[0x7];                                     
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0x3B0(0x88)()
	struct FSlateBrush                           K2Node_Select3_Default;                            // 0x438(0x88)()
	int32                                        Temp_int_Variable1;                                // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select4_Default;                            // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
