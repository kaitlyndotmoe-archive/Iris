#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x900 - 0x900)
// BlueprintGeneratedClass GAB_MimicRadialMelee.GAB_MimicRadialMelee_C
class UGAB_MimicRadialMelee_C : public UGAB_HuskBaseRadialMelee_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_MimicRadialMelee_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
