#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x2D9 - 0x238)
// WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C
class UBP_FortExpeditionOverviewWidget_C : public UFortExpeditionOverviewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UBP_FortExpeditionDetailsWidget_C*     BP_FortExpeditionDetailsWidget;                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoExpeditionsText;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectedTabName;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnCollectCompletedExpedition;                      // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   BuildExpeditionAction;                             // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   AbandonExpeditionAction;                           // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CollectExpeditionAction;                           // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SortInputAction;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBP_FortExpeditionMasterWidget_C*      ParentWidget;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentTabId;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_FortExpeditionIconTabButton_C*> TabButtons;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bIgnoreBuildExpeditionAction;                      // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionOverviewWidget_C");
		return Clss;
	}

	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue);
	void Set_List_Sort_Type(enum class EFortExpeditionListSort InSortType);
	void Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable, const struct FGameplayTag& VehicleTag, class UFortExpeditionItem* LocalExpedition, int32 TotalAvailable, int32 AvailableAir, int32 AvailableSea, int32 AvailableLand, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable);
	void Try_to_Build_Expedition(class UFortExpeditionItem* Expedition, bool CallFunc_HandleBuildExpeditionAction_PassThrough, bool CallFunc_IsExpeditionInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition, bool CallFunc_HandleAbandonExpeditionAction_PassThrough, bool CallFunc_IsExpeditionInProgress_ReturnValue);
	void Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject, bool CallFunc_Should_Disable_Build_Expedition_Action_Disable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Update_Details_Visibility(class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_List_View_Area(class FName InTabId, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText Temp_text_Variable3, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable4, const struct FExpeditionTabInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable2, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetNumItems_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 K2Node_Select1_Default);
	void HandleCollectExpeditionAction(bool* Passthrough);
	void HandleAbandonExpeditionAction(bool* Passthrough);
	void HandleBuildExpeditionAction(bool* Passthrough, bool CallFunc_Not_PreBool_ReturnValue);
	void Determine_Active_Input_Action(class UFortExpeditionItem* InItem, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_AreAnyExpeditionsComplete_ReturnValue);
	void Hide_All_Input_Actions();
	void Set_Current_Tab_Name(class FName TabId, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetExpeditionListSortName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue, const struct FExpeditionTabInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void On_Widget_Activated(int32 CallFunc_BP_GetNumItemsSelected_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void FireCollectCompletedExpedition();
	void Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnExpeditionTabSelected(class FName& TabNameID);
	void HandleAbandonExpedition();
	void BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Destruct();
	void OnExpeditionOverviewRefresh();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature(class UFortExpeditionItem* Item);
	void HandleOnListViewRefreshed();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item, class FName K2Node_Event_TabNameID, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, int32 Temp_int_Array_Index_Variable2, class UBP_FortExpeditionIconTabButton_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UFortExpeditionItem* K2Node_ComponentBoundEvent_Item2, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item1, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item1, bool K2Node_DynamicCast_bSuccess2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, class UObject* K2Node_ComponentBoundEvent_Item);
	void OnCollectCompletedExpedition__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
