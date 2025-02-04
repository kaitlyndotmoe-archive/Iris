#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C
class UButton_Crouch_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Crouch_C");
		return Clss;
	}

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class FName Temp_name_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetVehicleChangeSeatActionName_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, class FName K2Node_Select_Default);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_Crouch(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
