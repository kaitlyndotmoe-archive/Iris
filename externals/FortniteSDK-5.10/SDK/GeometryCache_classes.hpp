#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class GeometryCache.GeometryCache
class UGeometryCache : public UObject
{
public:
	uint8                                        Pad_16B2[0x8];                                     
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B3[0x8];                                     
	int32                                        StartFrame;                                        // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndFrame;                                          // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCache");
		return Clss;
	}

};

// 0x8 (0x330 - 0x328)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheActor");
		return Clss;
	}

	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecBase");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16B4[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecRaw");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_16B5[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecV1");
		return Clss;
	}

};

// 0x50 (0x5E0 - 0x590)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	//class UGeometryCache*                      GeometryCache;                                     // 0x588(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunning;                                          // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLooping;                                          // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16B8[0x2];                                     
	float                                        StartTimeOffset;                                   // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlaybackSpeed;                                     // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTracks;                                         // 0x59C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0x5A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16B9[0x30];                                    
	float                                        Duration;                                          // 0x5D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManualTick;                                       // 0x5D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16BA[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheComponent");
		return Clss;
	}

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int32 GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16BB[0x2C];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack");
		return Clss;
	}

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16BD[0x24];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_FlipbookAnimation");
		return Clss;
	}

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x130 (0x188 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BE[0x120];                                   
	float                                        StartSampleTime;                                   // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16BF[0x4];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrackStreamable");
		return Clss;
	}

};

// 0xA8 (0x100 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_16C0[0xA8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_TransformAnimation");
		return Clss;
	}

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

// 0xA8 (0x100 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_16C1[0xA8];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_TransformGroupAnimation");
		return Clss;
	}

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
