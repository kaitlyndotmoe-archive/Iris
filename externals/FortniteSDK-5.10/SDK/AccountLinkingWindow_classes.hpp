#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3F0 - 0x3F0)
// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
class UAccountLinkingWindow_C : public UFortAccountLinkingWindow
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AccountLinkingWindow_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
