#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x208 - 0x208)
// WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C
class UArrowCursorWidget_C : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ArrowCursorWidget_C");
		return Clss;
	}

	struct FSlateBrush GetBackground_0();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
