#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x228 - 0x228)
// WidgetBlueprintGeneratedClass AthenaGadgetFuelGauge.AthenaGadgetFuelGauge_C
class UAthenaGadgetFuelGauge_C : public UAthenaGadgetFuelWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGadgetFuelGauge_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
