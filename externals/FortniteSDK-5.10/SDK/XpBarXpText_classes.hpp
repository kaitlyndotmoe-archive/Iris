#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x240 - 0x208)
// WidgetBlueprintGeneratedClass XpBarXpText.XpBarXpText_C
class UXpBarXpText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CurrentXP;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         FortItemIcon_51;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBar_C*                              XpBar;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      XPneeded;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      XpNeededEnd;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Xp_Bar_Material;                                   // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBarXpText_C");
		return Clss;
	}

	void Get_Skill_Points_For_Next_Level(int32* Next_Level_Skill_Points, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item);
	void Update_Xp_Text(const struct FFortPublicAccountInfo& Account_Info, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1);
	void Construct();
	void HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo);
	void ExecuteUbergraph_XpBarXpText(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
