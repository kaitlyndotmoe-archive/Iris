#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x238 - 0x228)
// WidgetBlueprintGeneratedClass CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C
class UCMS_ML_BattlePass_LeftImageWidget1_C : public UEpicCMSSimpleMessage
{
public:
	class UImage*                                SoftGlow;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SoftTextShadow;                                    // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CMS_ML_BattlePass_LeftImageWidget1_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
