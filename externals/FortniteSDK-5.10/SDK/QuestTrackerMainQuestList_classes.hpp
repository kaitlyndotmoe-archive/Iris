#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x248 - 0x248)
// WidgetBlueprintGeneratedClass QuestTrackerMainQuestList.QuestTrackerMainQuestList_C
class UQuestTrackerMainQuestList_C : public UFortQuestTrackerList
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTrackerMainQuestList_C");
		return Clss;
	}

	TArray<class UFortQuestItem*> GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsQuestPinned_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
