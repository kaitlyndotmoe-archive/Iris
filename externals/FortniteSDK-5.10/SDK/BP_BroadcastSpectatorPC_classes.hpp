#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1F10 - 0x1F10)
// BlueprintGeneratedClass BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C
class ABP_BroadcastSpectatorPC_C : public AFortLiveBroadcastController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BroadcastSpectatorPC_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
