#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x269 - 0x210)
// WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C
class ULobbyGadgetButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UPanelButton_C*                        Button;                                            // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EmptySlot;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                Item;                                              // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortWorldItemDefinition*>      DesignTestItemDefinitions;                         // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortWorldItem*                        GadgetItem;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnButtonClicked;                                   // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnButtonHovered;                                   // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bLocked;                                           // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyGadgetButton_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void GetLocked(bool* bLocked);
	void SetLocked(bool bLocked, bool CallFunc_Not_PreBool_ReturnValue);
	void GetGadgetItem(class UFortWorldItem** GadgetItem);
	void Refresh(class UFortWorldItem* WorldItem, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button1, int32 CallFunc_Array_Length_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_RandomInteger_ReturnValue, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
