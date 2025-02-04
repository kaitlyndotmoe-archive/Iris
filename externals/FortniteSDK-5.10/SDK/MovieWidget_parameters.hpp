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

// 0x28 (0x28 - 0x0)
// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
struct UMovieWidget_C_SetDelayedContentValues_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EStretch                          Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C85[0x5];                                     
	class UMediaPlayer*                          CallFunc_GetMediaPlayer_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetLooping_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C86[0x6];                                     
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                         CallFunc_GetMediaTexture_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MovieWidget.MovieWidget_C.Play
struct UMovieWidget_C_Play_Params
{
public:
	bool                                         ShouldRewind;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MovieWidget.MovieWidget_C.StopPlaying
struct UMovieWidget_C_StopPlaying_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function MovieWidget.MovieWidget_C.Init
struct UMovieWidget_C_Init_Params
{
public:
	class UMediaSource*                          InMediaSource;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               InMediaSoundWave;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMediaSource_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMediaSource_ReturnValue1;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasPlayerForSource_ReturnValue;           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C87[0x5];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MovieWidget.MovieWidget_C.Destruct
struct UMovieWidget_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
struct UMovieWidget_C_MediaDimensionsUpdated_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewHeight;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MovieWidget.MovieWidget_C.OnMediaLoaded
struct UMovieWidget_C_OnMediaLoaded_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
struct UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C88[0x4];                                     
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_NewWidth;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_NewHeight;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x28(0x88)()
};

// 0x0 (0x0 - 0x0)
// Function MovieWidget.MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
struct UMovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
struct UMovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
