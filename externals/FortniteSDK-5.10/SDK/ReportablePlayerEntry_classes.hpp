#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8E0 - 0x8C8)
// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
class UReportablePlayerEntry_C : public UFeedbackReportablePlayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C8(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReportablePlayerEntry_C");
		return Clss;
	}

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
	void ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
