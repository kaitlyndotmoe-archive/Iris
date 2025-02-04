#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// WidgetBlueprintGeneratedClass MulchRefundItemQuantityList.MulchRefundItemQuantityList_C
class UMulchRefundItemQuantityList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          ContainerBox;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulchRefundItemQuantityList_C");
		return Clss;
	}

	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_MulchRefundItemQuantityList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
