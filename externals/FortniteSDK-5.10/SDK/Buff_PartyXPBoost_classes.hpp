#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x638 - 0x638)
// BlueprintGeneratedClass Buff_PartyXPBoost.Buff_PartyXPBoost_C
class UBuff_PartyXPBoost_C : public UGameplayEffect
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Buff_PartyXPBoost_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
