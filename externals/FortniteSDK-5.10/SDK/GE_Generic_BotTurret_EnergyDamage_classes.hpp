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
// BlueprintGeneratedClass GE_Generic_BotTurret_EnergyDamage.GE_Generic_BotTurret_EnergyDamage_C
class UGE_Generic_BotTurret_EnergyDamage_C : public UGET_DirectEnergyDamage_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GE_Generic_BotTurret_EnergyDamage_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
