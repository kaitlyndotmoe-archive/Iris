#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                            FixedFrameRate;                                    // 0x28(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");
		return Clss;
	}

	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate);
	struct FTimecode GetTimecode();
	class FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime);
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate);
};

// 0x10 (0x38 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9C[0x3];                                      
	int32                                        NumberOfExtraBufferedFrame;                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeDelay;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9D[0x4];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizationSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
