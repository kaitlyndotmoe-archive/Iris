#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0xA09 - 0x8B8)
// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(Transient, DuplicateTransient)
	class UImage*                                GlowOverlay;                                       // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               InternalSpacer;                                    // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionPulseEffect;                              // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SelectionGlowPercentage;                           // 0x8D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverGlowPercentage;                               // 0x8DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HoverGlowTimerHandle;                              // 0x8E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          SelectionGlowTimerHandle;                          // 0x8E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSkillTreePageColors                  PageColors;                                        // 0x8F0(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreePages                   Pages;                                             // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540B[0x3];                                     
	struct FSkillTreeGroupColors                 GroupColors;                                       // 0x9B4(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreeGroups                  Groups;                                            // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultSkillNode_C");
		return Clss;
	}

	void SetBackgroundColor(enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable1, enum class ESkillTreePages Temp_byte_Variable2, enum class ESkillTreeGroups Temp_byte_Variable3, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default);
	void UpdateFromButtonState(bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	void UpdateSelectionGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void UpdateHoverGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void StepSelectionGlowInterpolation(float TargetGlowPercentage, bool CallFunc_GetSelected_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void StepHoverGlowInterpolation(float TargetGlowPercentage, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UpdateFromNodeData(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FFortSkillTreeNodeDisplayData& CallFunc_TryGetNodeDisplayData_OutDisplayData, bool CallFunc_TryGetNodeDisplayData_ReturnValue, bool Temp_bool_Variable, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSkillTreeNodeSizeByMagnitude_Size, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateFromNodeState(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FHomebaseNodeState& CallFunc_TryGetSkillTreeNodeState_OutNodeState, bool CallFunc_TryGetSkillTreeNodeState_ReturnValue);
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
