#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
struct UCrashlyticsBlueprintLibrary_SetUserName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
struct UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
struct UCrashlyticsBlueprintLibrary_SetUserEmail_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
struct UCrashlyticsBlueprintLibrary_SetStringKey_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
struct UCrashlyticsBlueprintLibrary_SetIntegerKey_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0C[0x4];                                      
};

// 0x18 (0x18 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
struct UCrashlyticsBlueprintLibrary_SetFloatKey_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0D[0x4];                                      
};

// 0x18 (0x18 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
struct UCrashlyticsBlueprintLibrary_SetBooleanKey_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0E[0x7];                                      
};

// 0x10 (0x10 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
struct UCrashlyticsBlueprintLibrary_LogMessage_Params
{
public:
	class FString                                MESSAGE;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
struct UCrashlyticsBlueprintLibrary_LogException_Params
{
public:
	class FString                                MESSAGE;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
