#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x928 - 0x928)
// BlueprintGeneratedClass GAB_HuskTurnTransition.GAB_HuskTurnTransition_C
class UGAB_HuskTurnTransition_C : public UGAB_NPCTurnTransition_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_HuskTurnTransition_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
