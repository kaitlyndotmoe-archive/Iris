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

// 0x1C8 (0x1C8 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
struct UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class EFortQuestType                    Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5213[0x7];                                     
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x68(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x98(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xE0(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xF8(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x110(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x128(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x140(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x158(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x170(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x188(0x18)()
	class UFortQuestItemDefinition*              CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5214[0x7];                                     
	class FText                                  K2Node_Select_Default;                             // 0x1B0(0x18)()
};

// 0x16 (0x16 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
struct UJournalQuestDetails_C_Is_Streaming_Quest_Params
{
public:
	bool                                         bStreamingQuest;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5215[0x7];                                     
	class UFortQuestItemDefinition*              CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
struct UJournalQuestDetails_C_Get_Quest_Item_Def_Params
{
public:
	class UFortQuestItemDefinition*              AsFort_Quest_Item_Definition;                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              K2Node_DynamicCast_AsFort_Quest_Item_Definition;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
struct UJournalQuestDetails_C_Set_Quest_Display_Name_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  LocalQuestName;                                    // 0x18(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5216[0x7];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue; // 0x78(0x18)()
	bool                                         CallFunc_Is_Streaming_Quest_bStreamingQuest;       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5217[0x7];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x98(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x100(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
struct UJournalQuestDetails_C_IsQuestAudioPlaying_Params
{
public:
	bool                                         IsQuestAudioPlaying;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
struct UJournalQuestDetails_C_StartConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        QuestItem;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOutro_;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5218[0x6];                                     
	struct FFortClientAnnouncementData_Conversation K2Node_MakeStruct_FortClientAnnouncementData_Conversation; // 0x18(0x10)(NoDestructor)
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable1;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5219[0x7];                                     
	class FString                                K2Node_Select_Default;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
struct UJournalQuestDetails_C_StopConversation_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
struct UJournalQuestDetails_C_AbandonQuest_Params
{
public:
	class UFortQuestItem*                        QuestToAbandon;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuestAbandoned_;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521A[0x7];                                     
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestState                   CallFunc_GetQuestState_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521B[0x7];                                     
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521C[0x3];                                     
	int32                                        CallFunc_GetRemainingDailyQuestRerolls_ReturnValue; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x129 (0x129 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
struct UJournalQuestDetails_C_UpdatePanelInfo_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521D[0x7];                                     
	TArray<class UFortQuestObjectiveInfo*>       CallFunc_GetFutureObjectives_FutureObjectives;     // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521E[0x3];                                     
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521F[0x7];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x50(0x18)()
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x68(0x88)()
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xF8(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5220[0x7];                                     
	TArray<class UFortQuestObjectiveInfo*>       CallFunc_GetVisibleObjectives_VisibleObjectives;   // 0x118(0x10)(ZeroConstructor, ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
struct UJournalQuestDetails_C_UpdatePlayButtonState_Params
{
public:
	enum class EFortQuestState                   CallFunc_GetQuestState_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
struct UJournalQuestDetails_C_UpdateButtonStates_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
struct UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable1;                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5221[0x6];                                     
	class FString                                K2Node_Select_Default;                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
struct UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Subtitle;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Setup
struct UJournalQuestDetails_C_Setup_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.Construct
struct UJournalQuestDetails_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
struct UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
struct UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
