#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA68 - 0xA60)
// BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C
class UGAB_SmasherDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherDeath_C");
		return Clss;
	}

	void ExecuteUbergraph_GAB_SmasherDeath(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
