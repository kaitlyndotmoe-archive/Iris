#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x9B0 - 0x9B0)
// BlueprintGeneratedClass GA_DefaultPlayer_ApplyKnockback.GA_DefaultPlayer_ApplyKnockback_C
class UGA_DefaultPlayer_ApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_ApplyKnockback_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
