#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class CommonInput.CommonInputContext
class UCommonInputContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF8[0x18];                                     
	enum class ECommonInputType                  CurrentInputType;                                  // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonGamepadType                GamepadInputType;                                  // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CF9[0x18];                                     
	bool                                         bIsGamepadSimulatedClick;                          // 0x6A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CFA[0x5];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputContext");
		return Clss;
	}

	void SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType);
	enum class ECommonInputType GetCurrentInputType();
	enum class ECommonGamepadType GetCurrentGamepadType();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
