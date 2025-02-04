#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x248 - 0x238)
// WidgetBlueprintGeneratedClass AthenaServerAddress.AthenaServerAddress_C
class UAthenaServerAddress_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UTextBlock*                            Text;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaServerAddress_C");
		return Clss;
	}

	void UpdateServerAddress(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionConnectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AthenaServerAddress(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
