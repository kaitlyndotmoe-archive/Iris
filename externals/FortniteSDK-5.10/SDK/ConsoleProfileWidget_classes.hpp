#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x218 - 0x208)
// WidgetBlueprintGeneratedClass ConsoleProfileWidget.ConsoleProfileWidget_C
class UConsoleProfileWidget_C : public UUserWidget
{
public:
	class UCommonTextBlock*                      DisplayName;                                       // 0x208(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Prefix;                                            // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConsoleProfileWidget_C");
		return Clss;
	}

	void SetDisplayName(class FText DisplayName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
