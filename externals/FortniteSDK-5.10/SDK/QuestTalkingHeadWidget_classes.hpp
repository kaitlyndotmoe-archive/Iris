#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x253 - 0x218)
// WidgetBlueprintGeneratedClass QuestTalkingHeadWidget.QuestTalkingHeadWidget_C
class UQuestTalkingHeadWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TalkingHeadIcon;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextName;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextSeparator;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextSubtitles;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockTalkingHeadDisplay;                           // 0x251(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SubtitleIsPlaying;                                 // 0x252(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTalkingHeadWidget_C");
		return Clss;
	}

	void UpdateVisibility(enum class EFortAnnouncementDisplayPreference Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait);
	void HandleTalkingHeadEnd();
	void HandleTalkingHeadBegin(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void SetTalkingHeadSubtitle(class FText Subtitle);
	void SetTalkingHeadName(class FText Title, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void SetTalkingHeadImage(class UTexture2D* Icon);
	void Construct();
	void ExecuteUbergraph_QuestTalkingHeadWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
