#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x390 - 0x328)
// WidgetBlueprintGeneratedClass RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
class URedeemFriendCodeWindow_C : public UFortRedeemCodeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EntryProgressSwitcher;                             // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EntryVbox;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorText;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         FriendCodeEntry;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ProgressSizeBox;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ProgressText;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ProgressVBox;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RedeemButton;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RedeemFriendCodeWindow_C");
		return Clss;
	}

	void HandleRedeemCodeComplete(bool Success, enum class ERedeemCodeFailureReason FailureReason, enum class ERedeemCodeFailureReason Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText K2Node_Select_Default);
	void Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnActivated();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason);
	void Construct();
	void BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_RedeemFriendCodeWindow(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bSuccess, enum class ERedeemCodeFailureReason K2Node_Event_FailureReason, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsVisible_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
