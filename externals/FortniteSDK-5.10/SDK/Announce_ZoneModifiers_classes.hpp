#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B8 - 0x3B0)
// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
class AAnnounce_ZoneModifiers_C : public AFortClientAnnouncement_ZoneModifiers
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_ZoneModifiers_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
